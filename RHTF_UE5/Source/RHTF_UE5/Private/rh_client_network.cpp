// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "rh_client_network.h"

#include "RHTF_UE5/LogicPacket.pb.h"



Urh_client_network::Urh_client_network()
{
}

Urh_client_network::~Urh_client_network()
{
}

bool Urh_client_network::connect_to_server(FString server_addr)
{
    // 소켓을 생성
    socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(TEXT("Stream"), TEXT("Client Socket"));

    // IP를 FString으로 입력받아 저장
    FIPv4Address ip;
    FIPv4Address::Parse(server_addr, ip);

    int32 port = 7777;	// 포트는 7777번

    // 포트와 소켓을 담는 클래스
    TSharedRef<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
    addr->SetIp(ip.Value);
    addr->SetPort(port);

    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Trying to connect.")));

    // 연결시도, 결과를 받아옴
    bool isConnetcted = socket->Connect(*addr);

    User::C2SPCLoginUserReq packet;

    std::string user_id = "9785";
    packet.set_userid(user_id);

	// 접속
    return isConnetcted;
}
