#pragma once

#include "stdafx.h"
#include <fstream>

#include <WS2tcpip.h>
// #include <WinSock2.h>

#pragma comment(lib, "ws2_32");

#include "../LogicPacket.pb.h"

#define SERVER_ADDR "127.0.0.1"

void wait_func()
{
    int N;
    std::cin >> N;
}

int main(int argc, char* argv[])
{
	printf("This is C++ base StageServer Program\n");
	
	// argv[0]은 실행 경로이다.
	for (int i = 1; i < argc; ++i)
	{
		printf("%s", argv[i]);
	}
	printf("\n");

    C2SPCLoginUserReq c2slogin;

    std::string UID = "9785";
	c2slogin.set_userid(UID);

	std::string serialized_data;
	c2slogin.SerializeToString(&serialized_data);

    wait_func();

    WSADATA wsaData;
    WSAStartup(MAKEWORD(2, 2), &wsaData);

    // Open a socket
    SOCKET Sock;
    Sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (Sock < 0) {
        std::cerr << "Error opening socket" << std::endl;
        return 1;
    }

    // Connect to a server
    SOCKADDR_IN server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(7777); // Port number
    inet_pton(AF_INET, "127.0.0.1", &server_addr.sin_addr);

    if (connect(Sock, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
        std::cerr << "Error connecting to server" << std::endl;
        return 1;
    }

    // Send the serialized data over the socket
    send(Sock, serialized_data.c_str(), serialized_data.size(), 0);

    std::cout << "send protobuf";

    wait_func();

    WSACleanup();
	return 0;
}