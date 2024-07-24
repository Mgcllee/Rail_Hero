#pragma once

#include <thread>

#include "Network.h"
#include "Client.h"

void worker_thread(HANDLE h_iocp);
void process_packet(int c_id, char* packet);