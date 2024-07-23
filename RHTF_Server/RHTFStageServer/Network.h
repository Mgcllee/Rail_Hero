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

#pragma comment(lib, "ws2_32")
#pragma comment(lib, "MSWSock.lib")

#pragma warning( disable : 4251 )
#pragma warning( disable : 4244 )
#include "../LogicPacket.pb.h"
#pragma warning( default : 4251 )
#pragma warning( default : 4244 )

#define PORT_NUM 7777
#define BUF_SIZE 256

namespace IOCP
{
	enum TYPE { ACCEPT, RECV, SEND };
	
	class OVER_EXT;
	extern HANDLE h_iocp;
	extern SOCKET g_s_socket;
	extern SOCKET g_c_socket;
	extern OVER_EXT g_over;

	// WSAOVERLAPPED extension class
	class OVER_EXT {
	public:
		WSAOVERLAPPED _over;		// : WSAOVERLAPPED, OVERLAPPED 확인 필요
		WSABUF _wsabuf;				// : WSABUF 확인 필요

		char _send_buf[BUF_SIZE];	// 패킷 크기
		TYPE curr_type = TYPE::RECV;	// 패킷 타입

		int _ai_target_obj;

		// 패킷 없이 생성
		OVER_EXT()
		{
			_wsabuf.len = BUF_SIZE;
			_wsabuf.buf = _send_buf;
			curr_type = RECV;
			ZeroMemory(&_over, sizeof(_over));
		}

		// 패킷 받으며 생성
		OVER_EXT(char* packet)
		{
			_wsabuf.len = packet[0];
			_wsabuf.buf = _send_buf;
			ZeroMemory(&_over, sizeof(_over));
			curr_type = SEND;
			memcpy(_send_buf, packet, packet[0]);
		}
	};
};
