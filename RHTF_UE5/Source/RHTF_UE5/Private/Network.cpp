// Fill out your copyright notice in the Description page of Project Settings.


#include "Network.h"


Network::Network()
{

}

Network::~Network()
{

}

bool Network::connect_to_server(std::string addr)
{
	int nRet = WSAStartup(MAKEWORD(2, 2), &wsaData);	// Winsock 초기화
	if (nRet != 0) return false;

	// 소켓 생성
	Socket = WSASocket(AF_INET, SOCK_STREAM, 0, NULL, 0, WSA_FLAG_OVERLAPPED);
	if (Socket == INVALID_SOCKET) return false;

	// IP, Port 정보 입력
	SOCKADDR_IN stServerAddr;
	stServerAddr.sin_family = AF_INET;
	stServerAddr.sin_port = htons(6000);
	stServerAddr.sin_addr.s_addr = inet_addr(addr.c_str());

	// 접속
	nRet = connect(Socket, (sockaddr*)&stServerAddr, sizeof(sockaddr));
	
	if (nRet == SOCKET_ERROR) 
		return false;
	else 
		return true;
}
