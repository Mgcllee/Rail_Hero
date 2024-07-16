// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "rh_client_network.h"

#include "RHTF_UE5/LogicPacket.pb.h"
class User::C2SPCLoginUserReq;


Urh_client_network::Urh_client_network()
{
}

Urh_client_network::~Urh_client_network()
{
}

bool Urh_client_network::connect_to_server(FString addr)
{
    User::C2SPCLoginUserReq packet;

    std::string user_id = "9785";
    packet.set_userid(user_id);


	// Á¢¼Ó
    return true;
}
