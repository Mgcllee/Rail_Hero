#pragma once

#include "stdafx.h"
#include "worker.h"

HANDLE h_iocp;
SOCKET g_s_socket;
SOCKET g_c_socket;
OVER_EXT g_over;
std::unordered_map<int, Client> Clients;

int main(int argc, char* argv[])
{
	test_client();
	return 0;

	WSADATA WSAData;
	int err = WSAStartup(MAKEWORD(2, 2), &WSAData);

	g_s_socket = WSASocket(AF_INET, SOCK_STREAM, 0, NULL, 0, WSA_FLAG_OVERLAPPED);

	SOCKADDR_IN server_addr;
	memset(&server_addr, 0, sizeof(server_addr));
	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(PORT_NUM);
	server_addr.sin_addr.S_un.S_addr = INADDR_ANY;

	bind(g_s_socket, reinterpret_cast<sockaddr*>(&server_addr), sizeof(server_addr));
	listen(g_s_socket, SOMAXCONN);

	SOCKADDR_IN cl_addr;
	int addr_size = sizeof(cl_addr);

	h_iocp = CreateIoCompletionPort(INVALID_HANDLE_VALUE, 0, 0, 0);
	CreateIoCompletionPort(reinterpret_cast<HANDLE>(g_s_socket), h_iocp, 9999, 0);

	g_c_socket = WSASocket(AF_INET, SOCK_STREAM, 0, NULL, 0, WSA_FLAG_OVERLAPPED);
	g_over.curr_type = TYPE::ACCEPT;

	err = AcceptEx(g_s_socket, g_c_socket, g_over._send_buf, 0, addr_size + 16, addr_size + 16, 0, &g_over._over);


	/*
	jthread를 사용하해서 GetLastError 함수로
	995 번 오류가 발생하였음.
	I/O 가 닫히는 문제가 있다.
	*/

    std::vector<std::thread> worker_threads;
    int thread_cnt = std::thread::hardware_concurrency();

    for (int i = 0; i < thread_cnt; ++i)
    {
        worker_threads.emplace_back(worker_thread, h_iocp);
    }

	for (auto& th : worker_threads)
	{
		th.join();
	}

    closesocket(g_s_socket);
    WSACleanup();
	return 0;
}