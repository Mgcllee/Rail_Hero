#pragma once

#include <thread>
#include <mutex>
#include <unordered_set>
#include <concurrent_priority_queue.h>

#include "Network.h"
#include "Client.h"

void test_client();

void worker_thread(HANDLE h_iocp);
void process_packet(int c_id, char* packet);