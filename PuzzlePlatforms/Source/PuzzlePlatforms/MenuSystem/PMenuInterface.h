// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PMenuInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPMenuInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PUZZLEPLATFORMS_API IPMenuInterface
{
	GENERATED_BODY()

public:
	virtual void HostGame() = 0;
	virtual void JoinGame(FString& IPAddres) = 0;
	virtual void TransitToMainMenu() = 0;
	virtual void OnMenuClosed() = 0;
};
