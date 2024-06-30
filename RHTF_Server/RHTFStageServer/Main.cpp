#pragma once

#include "stdafx.h"

#include "../LogicPacket.pb.h"


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

	int n;
	std::cin >> n;
	// Continue;
	while (false)
	{

	}

	return 0;
}