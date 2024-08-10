#pragma once

#include "worker.h"

#pragma warning( disable : 4251 )
#pragma warning( disable : 4244 )

#include "../LogicPacket.pb.h"
#include "../LogicPacket.grpc.pb.h"

#pragma warning( default : 4251 )
#pragma warning( default : 4244 )

std::atomic<int> next_client_id;
 
#pragma warning( disable : 4996 )
#define SERVER_IP "127.0.0.1"

void test_client()
{
    WSADATA wsaData;
    WSAStartup(MAKEWORD(2, 2), &wsaData);

    SOCKET hSocket;
    hSocket = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);

    SOCKADDR_IN tAddr = {};
    tAddr.sin_family = AF_INET;
    tAddr.sin_port = htons(PORT_NUM);
    tAddr.sin_addr.S_un.S_addr = inet_addr(SERVER_IP);

    connect(hSocket, (SOCKADDR*)&tAddr, sizeof(tAddr));

    User::PacketType packet;
    User::C2SPCLoginUserReq* login_info = packet.mutable_c2sloginuserreq();
    login_info->set_userid(9785);
    
    std::string buffer;
    packet.SerializeToString(&buffer);

    send(hSocket, buffer.c_str(), buffer.length(), 0);
    

    User::C2STestInfoReq message;
    message.set_reqnum(4045);

    User::ReqInfo::Service req;
    // req.GetInfo();

    closesocket(hSocket);
    WSACleanup();
}

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
            int new_c_id = (++next_client_id);

            if (-1 != new_c_id)
            {
                printf("Accept New Client!\n");
                Client new_c_info(g_c_socket);

                Clients[new_c_id] = new_c_info;

                CreateIoCompletionPort(reinterpret_cast<HANDLE>(g_c_socket), h_iocp, new_c_id, 0);
                Clients[new_c_id].get_session().do_recv();
                
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

            char* recv_packet = ex_over->_send_buf;
            
            while (amount_packet > 0)
            {
                int packet_size = recv_packet[0];

                if (packet_size <= amount_packet)
                {
                    process_packet(c_id, recv_packet);
                    recv_packet += packet_size;
                    amount_packet -= packet_size;
                }
                else
                {
                    break;
                }

                Clients[c_id].get_session().set_prev_rest_packet(amount_packet);

                if (amount_packet > 0)
                {
                    memcpy(ex_over->_send_buf, recv_packet, amount_packet);
                }

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
    User::PacketType::TypeOneofCase type = packet_type.Type_oneof_case();

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
