#pragma once

#include <unordered_map>

#include "Network.h"

class Client 
{
public:
	Client(IOCP::SESSION _session);

	bool Disconnect();
	IOCP::SESSION& get_session()
	{
		return _session;
	}

private:
	IOCP::SESSION _session;
	// Client Class에서 
	// 반드시 _uid 객체를 갖고 있어야하는가.


public:


private:


};

// 정렬이 
std::unordered_map<int, Client> Clients;
