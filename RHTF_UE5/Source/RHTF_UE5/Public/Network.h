// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/prewindowsapi.h"

#pragma comment(lib, "ws2_32.lib")
#include <WinSock2.h>

#include "Windows/PostWindowsApi.h"
#include "Windows/HideWindowsPlatformTypes.h"

class RHTF_UE5_API Network
{
public:
	Network();
	virtual ~Network();

	// UFUNCTION(BlueprintCallable, Category="Socket")
	bool connect_to_server(std::string addr);

private:
	SOCKET Socket;
	WSADATA wsaData;

};
