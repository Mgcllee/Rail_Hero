#pragma once

#include "stdafx.h"
#include "worker.h"

HANDLE IOCP::h_iocp;
SOCKET IOCP::g_s_socket;
SOCKET IOCP::g_c_socket;
IOCP::OVER_EXT IOCP::g_over;
std::unordered_map<int, Client> Clients;

int main(int argc, char* argv[])
{
    WSADATA WSAData;
    int err = WSAStartup(MAKEWORD(2, 2), &WSAData);

    // Global Server Socket (Listen, Bind, ... etc Socket)
    // g_s_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    // -> 기존 생성자와 다름 : 연구 필요
    IOCP::g_s_socket = WSASocket(AF_INET, SOCK_STREAM, 0, NULL, 0, WSA_FLAG_OVERLAPPED);

    SOCKADDR_IN server_addr;
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT_NUM);
    server_addr.sin_addr.S_un.S_addr = INADDR_ANY;

    bind(IOCP::g_s_socket, (sockaddr*)(&server_addr), sizeof(server_addr));
    listen(IOCP::g_s_socket, SOMAXCONN);

    IOCP::h_iocp = CreateIoCompletionPort(INVALID_HANDLE_VALUE, 0, 0, 0);
    CreateIoCompletionPort(reinterpret_cast<HANDLE>(IOCP::g_s_socket), IOCP::h_iocp, 0, 0);

    IOCP::g_c_socket = WSASocket(AF_INET, SOCK_STREAM, 0, NULL, 0, WSA_FLAG_OVERLAPPED);
    IOCP::g_over.curr_type = IOCP::TYPE::ACCEPT;

    SOCKADDR_IN cl_addr;
    int addr_size = sizeof(cl_addr);
    // WS2tcpip.h 에 있는 accept 함수와 차이 연구 필요
    err = AcceptEx(IOCP::g_s_socket, IOCP::g_c_socket, IOCP::g_over._send_buf, 0, addr_size + 16, addr_size + 16, 0, &IOCP::g_over._over);

    std::vector<std::jthread> worker_threads;
    int thread_cnt = std::jthread::hardware_concurrency();

    for (int i = 0; i < thread_cnt; ++i)
    {
        worker_threads.emplace_back(worker_thread, IOCP::h_iocp);
    }

    closesocket(IOCP::g_s_socket);
    WSACleanup();
	return 0;
}