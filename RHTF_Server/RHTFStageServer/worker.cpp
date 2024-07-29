#pragma once

#include "worker.h"

#pragma warning( disable : 4251 )
#pragma warning( disable : 4244 )

#include "../LogicPacket.pb.h"

#pragma warning( default : 4251 )
#pragma warning( default : 4244 )

std::atomic<int> next_client_id;
 
void worker_thread(HANDLE h_iocp)
{
    while (true)
    {
        DWORD num_bytes = 0;
        ULONG_PTR key = 0;
		WSAOVERLAPPED* over = nullptr;

		BOOL ret = GetQueuedCompletionStatus(h_iocp, &num_bytes, &key, &over, INFINITE);
		
		OVER_EXT* ex_over = reinterpret_cast<OVER_EXT*>(over);
        
        if (FALSE == ret) 
        {
            if (ex_over->curr_type == TYPE::ACCEPT)
            {
                printf("[Accept error]\n");
                std::cout << GetLastError() << '\n';
                closesocket(g_c_socket);
            }
            else continue;
        }
        if ((0 == num_bytes) && (ex_over->curr_type == TYPE::RECV)) 
        {
            continue;
        }

        switch (ex_over->curr_type)
        {
        case ACCEPT:
        {
            // 새로운 클라이언트의 고유 ID 발급 필요!
            // 병목 현상을 최대한 해결해줄 발급기가 필요
            int new_c_id = (++next_client_id);

            if (-1 != new_c_id)
            {
                printf("Accept New Client!\n");
                // [[클라이언트 객체 초기화]]
                Client new_c_info(g_c_socket); // g_~ 객체 atomic 필요

                // Clients.insert(std::make_pair(new_c_id, new_c_info));
                Clients[new_c_id] = new_c_info;

                CreateIoCompletionPort(reinterpret_cast<HANDLE>(g_c_socket), h_iocp, new_c_id, 0);
                Clients[new_c_id].get_session().do_recv();
                
                // Global Client Socket 다시 원상복귀 초기화 (다음 새로운 클라이언트 준비)
                g_c_socket = WSASocket(AF_INET, SOCK_STREAM, 0, NULL, 0, WSA_FLAG_OVERLAPPED);
            }
            else
            {
                printf("Accept Error!\n");
            }

            ZeroMemory(&g_over._over, sizeof(g_over._over));
            int addr_size = sizeof(SOCKADDR_IN);
            AcceptEx(g_s_socket, g_c_socket, g_over._send_buf, 0, addr_size + 16, addr_size + 16, 0, &g_over._over);
        }
        break;
        case RECV:
        {
            unsigned int c_id = static_cast<int>(key);
            int amount_packet = num_bytes + (Clients[c_id].get_session().get_prev_rest_packet());

            // 읽어온 WSAOVERLAPPED 구조체 변환.
            char* recv_packet = ex_over->_send_buf;
            
            while (amount_packet > 0)
            {
                int packet_size = recv_packet[0];

                if (packet_size <= amount_packet)
                {
                    process_packet(c_id, recv_packet);

                    // 패킷 크기만큼 읽어오기.
                    recv_packet += packet_size;

                    // 현재 남아있는 패킷 줄이기.
                    amount_packet -= packet_size;
                }
                else
                {
                    break;
                }

                // 남아버린 버퍼 크기를 다음을 위해 저장해두기
                Clients[c_id].get_session().set_prev_rest_packet(amount_packet);

                if (amount_packet > 0)
                {
                    memcpy(ex_over->_send_buf, recv_packet, amount_packet);
                }

                // do_recv() 호출이 필수인가?
                Clients[c_id].get_session().do_recv();
            }
        }
        break;
        case SEND:
        {

        }
        break;
        }
    }
}

void process_packet(int c_id, char* packet)
{
    User::PacketType packet_type;
    packet_type.ParseFromString(packet);
    User::PacketType::TypeCase type = packet_type.Type_case();

    switch (type)
    {
    case User::PacketType::kC2SLoginUserReq:
    {
        printf("[Recv User Info]\nID: %d\n", packet_type.c2sloginuserreq().userid());

        User::S2CPCLoginUserRes* c2slogin = new User::S2CPCLoginUserRes();
        c2slogin->set_userid(4);
        c2slogin->set_userlevel(4);
        c2slogin->set_username("Mgcllee");

        User::PacketType packet;
        packet.set_allocated_s2cloginuserres(c2slogin);

        std::string serialized_data;
        packet.SerializeToString(&serialized_data);
        Clients[c_id].get_session().do_send(&serialized_data);
    }
    break;
    case User::PacketType::kS2CLoginUserRes:
    {
        User::S2CPCLoginUserRes c2slogin;
        
        c2slogin.set_userid(9785);
        c2slogin.set_userlevel(7);
        c2slogin.set_username("Mgcllee");

        std::string serialized_data;
        c2slogin.SerializeToString(&serialized_data);
        Clients[c_id].get_session().do_send(&serialized_data);
    }
    break;
    default:
    {
        printf("Invalid packet!\n");
    }
    break;
    }
}
