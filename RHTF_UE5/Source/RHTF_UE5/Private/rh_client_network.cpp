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

	// 접속
    return isConnetcted;
}

bool Urh_client_network::send_client_info(FString name)
{
    User::PacketType packet;
    User::C2SPCLoginUserReq* login_info = packet.mutable_c2sloginuserreq();
    login_info->set_userid(9785);
   
    std::string buffer_str;
    packet.SerializeToString(&buffer_str);

    const uint8* buffer = reinterpret_cast<const uint8*>(&buffer_str);

    int32 bytesent = 0;
    bool send_ret = socket->Send((uint8*)buffer_str.c_str(), buffer_str.length(), bytesent);

    return send_ret;
}

int Urh_client_network::recv_stage_info()
{
    unsigned char* buffer = new unsigned char[sizeof(User::S2CPCLoginUserRes)];
    int32 bytesent = 0;
    bool recv_ret = socket->Recv(buffer, sizeof(User::S2CPCLoginUserRes), bytesent);
    std::string str = reinterpret_cast<char*>(buffer);
    
    User::PacketType recv_packet;
    recv_packet.ParseFromString(str);

    if (recv_ret == true)
        return recv_packet.s2cloginuserres().userlevel();
    else
        return 0;
}
