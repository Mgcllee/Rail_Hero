/*
[Homogeneous Thread queue]
Coroutine || jthread..
*/

#pragma once

#include "stdafx.h"
#include <fstream>

// Winsock2에서 업데이트된 헤더
#include <WS2tcpip.h>

/*
WSA는 Windows Socket API 의 약자로
인터넷 네트워크 및 소켓 관련 함수를 제공 해주는 API
Winsock은 version 1과 2가 있으며, 1 에서 기능이 추가된 것이 2 이다.

위와 같은 맥락으로
OVERLAPPED 구조체에 WSA 접두어를 붙인 것이
WSAOVERLAPPED 구조체이다. 정의를 찾아보면 같다.
*/
#include <WS2tcpip.h>

#pragma comment(lib, "ws2_32")

HANDLE h_iocp;

#include <vector>

#include "../LogicPacket.pb.h"

#define PORT_NUM 7777

std::vector<SOCKET> client(2);  // 임시 객체(Unity 1 + UE5 1)

int main(int argc, char* argv[])
{
    WSADATA WSAData;
    WSAStartup(MAKEWORD(2, 2), &WSAData);

    SOCKET Listen_Sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    SOCKADDR_IN server_addr;
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT_NUM);
    server_addr.sin_addr.S_un.S_addr = INADDR_ANY;

    // h_iocp = CreateIoCompletionPort(INVALID_HANDLE_VALUE, 0, 0, 0);
    // CreateIoCompletionPort(reinterpret_cast<HANDLE>(Listen_Sock), h_iocp, 0, 0);

    int ticket = 0;

    while (true)
    {
        /*DWORD cnt_byte;
        ULONG_PTR key;
        WSAOVERLAPPED* over = nullptr;

        GetQueuedCompletionStatus(h_iocp, &cnt_byte, &key, &over, INFINITE);
        reinterpret_cast<*>(over);*/

        printf("[Server] wait for new client...\n");

        bind(Listen_Sock, (sockaddr*)(&server_addr), sizeof(server_addr));
        listen(Listen_Sock, SOMAXCONN);

        SOCKADDR_IN inClientAddr{};
        int size_inClientAddr = sizeof(inClientAddr);

        client[ticket] = accept(Listen_Sock, (struct sockaddr*)&server_addr, &size_inClientAddr);
        
        User::C2SPCLoginUserReq loginf_pack;
        char* buffer = new char[sizeof(User::C2SPCLoginUserReq)];
        int ret = recv(client[ticket], buffer, sizeof(User::C2SPCLoginUserReq), 0);

        if (ret > 0)
        {
            loginf_pack.ParseFromString(buffer);
            std::string buf = loginf_pack.userid();
            printf("[New Client] userID : %s\n", buf.c_str());
            ++ticket;
        }
        else
        {
            printf("\nrecv fail!\n");
        }
    }
    
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

    WSACleanup();
	return 0;
}