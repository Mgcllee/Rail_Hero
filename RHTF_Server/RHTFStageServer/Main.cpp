#pragma once

#include "stdafx.h"
#include <fstream>

#include <WS2tcpip.h>
#include <WinSock2.h>

#pragma comment(lib, "ws2_32")

#include "../LogicPacket.pb.h"

void Server(int PORT_NUM)
{
    WSADATA WSAData;
    int err = WSAStartup(MAKEWORD(2, 2), &WSAData);

    SOCKET Listen_Sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    SOCKADDR_IN server_addr;
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT_NUM);
    server_addr.sin_addr.S_un.S_addr = INADDR_ANY;

    printf("Listen...\n");
    bind(Listen_Sock, (sockaddr*)(&server_addr), sizeof(server_addr));
    listen(Listen_Sock, SOMAXCONN);

    SOCKADDR_IN cl_addr;
    int addr_size = sizeof(cl_addr);

    printf("Accept...\n");
    SOCKET new_client = accept(Listen_Sock, (struct sockaddr*)&server_addr, (socklen_t*)&server_addr);

    User::C2SPCLoginUserReq loginf_pack;
    char* buffer = new char[sizeof(User::C2SPCLoginUserReq)];
    int ret = recv(new_client, buffer, sizeof(User::C2SPCLoginUserReq), 0);

    if (ret > 0)
    {
        loginf_pack.ParseFromString(buffer);

        std::cout << "userID: " << loginf_pack.userid() << '\n';
    }
    else
    {
        std::cout << "\nrecv fail!\n";
    }

    int n;
    std::cin >> n;
}

int main(int argc, char* argv[])
{
    Server(7777);
    return 0;




    WSADATA wsaData;
    WSAStartup(MAKEWORD(2, 2), &wsaData);

    // Open socket
    SOCKET Sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (Sock < 0) {
        std::cerr << "Error opening socket" << std::endl;
        return 1;
    }

    // Connect to a server
    SOCKADDR_IN server_addr;
    server_addr.sin_family = AF_INET;
    // server_addr.sin_port = htons(std::stoi(std::string(argv[2]))); // Port number
    // inet_pton(AF_INET, argv[1], &server_addr.sin_addr);
    server_addr.sin_port = htons(7777); // Port number
    inet_pton(AF_INET, "127.0.0.1", &server_addr.sin_addr);

    

    if (connect(Sock, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
        std::cerr << "Error connecting to server" << std::endl;
        std::cout << std::stoi(std::string(argv[2])) << ", " << typeid(std::stoi(std::string(argv[2]))).name() << '\n';
        std::cout << argv[1] << ", " << typeid(argv[1]).name() << '\n';
        return 1;
    }

    std::string UID;
    std::cin >> UID;

    User::C2SPCLoginUserReq c2slogin;
    c2slogin.set_userid(UID);

    std::string serialized_data;
    c2slogin.SerializeToString(&serialized_data);

    // Send the serialized data over the socket
    send(Sock, serialized_data.c_str(), serialized_data.size(), 0);

    std::cout << "[send protobuf]\n";
    Sleep(2'000);

    User::S2CPCLoginUserRes loginf_pack;
    char* buffer = new char[sizeof(User::S2CPCLoginUserRes)];
    int ret = recv(Sock, buffer, sizeof(User::S2CPCLoginUserRes), 0);
    
    if (ret > 0)
    {
        // loginf_pack.ParseFromArray(&buffer, sizeof(S2CPCLoginUserRes));
        loginf_pack.ParseFromString(buffer);
         
        std::cout << "[User Info]\n";
        std::cout << "ID: " << loginf_pack.userid() << '\n';
        std::cout << "Name: " << loginf_pack.username() << '\n';
        std::cout << "Level: " << loginf_pack.userlevel() << '\n';

        std::cout << "[End C++ Program]\n";
        Sleep(2'000);

    }
    else
    {
        std::cout << "\nrecv fail!\n";
    }

    Sleep(2'000);


    // server 역할일 때,
    


    WSACleanup();
	return 0;
}