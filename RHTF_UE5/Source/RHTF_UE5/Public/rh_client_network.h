// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

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

	UFUNCTION(BlueprintCallable, Category="Socket")
		bool connect_to_server(FString addr);

private:

};
