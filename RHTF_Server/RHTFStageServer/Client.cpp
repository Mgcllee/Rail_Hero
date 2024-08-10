#include "Client.h"

Client::Client(SESSION _new_session)
	: _session(_new_session)
{
	
}

bool Client::Disconnect()
{
	_session._disconnect();
	
	return false;
}
