#pragma once

#include "worker.h"

void worker_thread(HANDLE h_iocp)
{
    while (true)
    {
        DWORD num_bytes;
		ULONG_PTR key;
		WSAOVERLAPPED* over = nullptr;

		// IOCP의 I/O Completion Queue에서 데이터가 입력될 때까지 [[무한 대기]] 합니다.
		BOOL ret
			= GetQueuedCompletionStatus(
				h_iocp,		// 대기중인 iocp 객체
				&num_bytes,	// 송/수신된 Byte 수
				&key,		// 
				&over,		// OVERLAPPED 객체 (WSAOVERLAPPED 구조체와 같다.)
				INFINITE	// 무한 대기
			);
		
		/*
		- GetQueuedCompletionStatus function() -
		1. [CompletionPort] : 대기를 수행할 IOCP 핸들
		2. [lpNumberOfBytesTransferred] : 송/수신된 Byte 수
		3. [lpCompletionKey] : 비동기 I/O 요청이 발생한 디바이스의 CompletionKey
		4. [lpOverlapped] : 비동기 호출시 전달한 Overlapped 구조체 주소
		5. [dwMilliseconds] : 대기를 수행할 시간(ms)
		
		반환 값이 true이면 성공, false이면 실패
		*/
		
        // WSAOVERLAPPED 구조체 읽어오기.
		IOCP::OVER_EXT* ex_over = reinterpret_cast<IOCP::OVER_EXT*>(over);
        
        // 오류 검출기
        if ((0 == num_bytes) && (ex_over->curr_type == IOCP::RECV)) continue;
        else if (FALSE == ret) {
            // Queue에 작업이 있으나, 유효하게 꺼내오지 못 하였다.
            // (작업이 없으면 GetQueuedCompletionStatus 함수 자체에서 대기함.
            // 즉, 작업이 있었기에 ret 변수로 값이 반환된 것.)

            if (ex_over->curr_type == IOCP::ACCEPT) std::cout << "Accept Error";
            else continue;
        }
        
        switch (ex_over->curr_type)
        {
        case IOCP::ACCEPT:
        {
            // 새로운 클라이언트의 고유 ID 발급 필요!
            int new_c_id = -1;

            if (-1 != new_c_id)
            {
                // 클라이언트 객체 초기화.

                CreateIoCompletionPort(reinterpret_cast<HANDLE>(IOCP::g_c_socket), h_iocp, new_c_id, 0);
                // clients[new_c_id].do_recv();
                
                // Global Client Socket 다시 원상복귀 초기화 (다음 새로운 클라이언트 준비)
                IOCP::g_c_socket = WSASocket(AF_INET, SOCK_STREAM, 0, NULL, 0, WSA_FLAG_OVERLAPPED);
                
                // Accept new client!
            }
            else
            {
                // Accept Error!
            }

            ZeroMemory(&IOCP::g_over._over, sizeof(IOCP::g_over._over));
            int addr_size = sizeof(SOCKADDR_IN);
            AcceptEx(IOCP::g_s_socket, IOCP::g_c_socket, IOCP::g_over._send_buf, 0, addr_size + 16, addr_size + 16, 0, &IOCP::g_over._over);
        }
            break;
        case IOCP::RECV:

            break;
        case IOCP::SEND:

            break;
        }
    }
}

void process_packet(int c_id, char* packet)
{
    switch (packet[1])
    {
    // case C2S...: (C2S만 존재)
    
    // 참고용 임시 주석
    default:
    {
        /*
 // send protobuf C++ version
 User::C2SPCLoginUserReq c2slogin;
 c2slogin.set_userid(UID);
 std::string serialized_data;
 c2slogin.SerializeToString(&serialized_data);
 send(Sock, serialized_data.c_str(), serialized_data.size(), 0);
 */

 /*
 // recv protobuf C++ version
 User::S2CPCLoginUserRes loginf_pack;
 char* buffer = new char[sizeof(User::S2CPCLoginUserRes)];
 int ret = recv(Sock, buffer, sizeof(User::S2CPCLoginUserRes), 0);
 if (ret > 0)
 {
     loginf_pack.ParseFromString(buffer);

     std::cout << "[User Info]\n";
     std::cout << "ID: " << loginf_pack.userid() << '\n';
     std::cout << "Name: " << loginf_pack.username() << '\n';
     std::cout << "Level: " << loginf_pack.userlevel() << '\n';
 }
 else
 {
     std::cout << "\nrecv fail!\n";
 }
 */
    }
    break;
    }
}
