// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "Sockets.h"
#include "SocketSubsystem.h"
#include "Interfaces/IPv4/IPv4Address.h"

#include "rh_client_network.generated.h"


/**
 * 
 */
UCLASS(Blueprintable)
class RHTF_UE5_API Urh_client_network : public UObject
{
	GENERATED_BODY()
	
public:
	Urh_client_network();
	virtual ~Urh_client_network();

	UFUNCTION(BlueprintCallable, Category="Server")
		bool connect_to_server(FString server_addr);

    UFUNCTION(BlueprintCallable, Category = "Server")
        bool send_client_info(FString name);

    UFUNCTION(BlueprintCallable, Category = "Server")
        int recv_stage_info();

private:
    FSocket* socket;
};
