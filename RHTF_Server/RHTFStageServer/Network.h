#pragma once

#include "stdafx.h"

/*
WSA는 Windows Socket API 의 약자로
인터넷 네트워크 및 소켓 관련 함수를 제공 해주는 API
Winsock은 version 1과 2가 있으며, 1 에서 기능이 추가된 것이 2 이다.

위와 같은 맥락으로
OVERLAPPED 구조체에 WSA 접두어를 붙인 것이
WSAOVERLAPPED 구조체이다. 정의를 찾아보면 같다.

WS2tcpip.h 헤더는 Winsock2.h에서 업데이트된 헤더.
*/
#include <WS2tcpip.h>
#include <MSWSock.h>
#include <atomic>

#pragma comment(lib, "ws2_32")
#pragma comment(lib, "MSWSock.lib")

#define PORT_NUM 7777
#define BUF_SIZE 256

enum TYPE { ACCEPT, RECV, SEND };

// WSAOVERLAPPED extension class
class OVER_EXT {
public:
	WSAOVERLAPPED _over;			// : WSAOVERLAPPED, OVERLAPPED 확인 필요
	WSABUF _wsabuf;					// : WSABUF 확인 필요
	char _send_buf[BUF_SIZE];		// 패킷 크기
	TYPE curr_type = TYPE::RECV;	// 패킷 타입

	// 패킷 없이 생성
	OVER_EXT()
	{
		_wsabuf.len = BUF_SIZE;
		_wsabuf.buf = _send_buf;
		curr_type = TYPE::RECV;
		ZeroMemory(&_over, sizeof(_over));
	}

	// 패킷 받으며 생성
	OVER_EXT(char* packet)
	{
		_wsabuf.len = packet[0];
		_wsabuf.buf = _send_buf;
		ZeroMemory(&_over, sizeof(_over));
		curr_type = TYPE::SEND;
		memcpy(_send_buf, packet, packet[0]);
	}
};

class SESSION
{
public:
	SESSION(SOCKET _sock)
		: _socket(_sock)
	{

	}

	// WSARecv 반환값은 int형으로 여러 오류 값을 반환할 수 있지만
	// 외부에서 이 것을 확인할 필요는 없으므로 bool 값으로 성공 여부 전달
	bool do_recv()
	{
		DWORD recv_flag = 0;
		// std::fill은 iterator를 사용해야 하므로 부적절.
		// Zeromem
		// [기존] memset(&_recv_over._over, 0, sizeof(_recv_over._over)); 
		ZeroMemory(&_recv_over._over, sizeof(_recv_over._over));

		_recv_over._wsabuf.len = BUF_SIZE - _prev_rest_packet;
		_recv_over._wsabuf.buf = _recv_over._send_buf + _prev_rest_packet;

		int ret = WSARecv
		(
			_socket,				// [1] Client Socket
			&_recv_over._wsabuf,
			1,
			0,
			&recv_flag,
			&_recv_over._over,
			0
		);

		return (ret == WSA_IO_PENDING ? true : false);
	}

	bool do_send(void* sending_packet)
	{
		OVER_EXT* packet = new OVER_EXT(reinterpret_cast<char*>(sending_packet));

		int ret = WSASend
		(
			_socket,
			&packet->_wsabuf,
			1,
			0,
			0,
			&packet->_over,
			0
		);

		return (ret == ERROR_IO_PENDING ? true : false);
	}

	bool _disconnect()
	{
		int ret;
		// WSASendDisconnect(_socket,	)
		ret = closesocket(_socket);

		// +@) Memory Leak 방지책 필요.

		return (ret == 0 ? true : false);
	}

	void set_prev_rest_packet(int _in)
	{
		_prev_rest_packet = _in;
	}
	int get_prev_rest_packet()
	{
		return _prev_rest_packet;
	}

public:
	int _prev_rest_packet;

private:
	SOCKET _socket;
	OVER_EXT _recv_over;

};


extern HANDLE h_iocp;
extern SOCKET g_s_socket;
extern SOCKET g_c_socket;
extern OVER_EXT g_over;
