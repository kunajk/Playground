// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PPlatformTrigger.h"
#include "Engine/StaticMeshActor.h"
#include "PMovingPlatform.generated.h"


UCLASS()
class PUZZLEPLATFORMS_API APMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	APMovingPlatform();

	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION()
	void AddActiveTrigger();

	UFUNCTION()
	void RemovActiveTrigger();
	
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, Category="Puzzle|Config", meta=(ForceUnits="cm/s"))
	float CubeSpeed{100.0f};

	UPROPERTY(EditAnywhere, Category="Puzzle|Config", meta=(MakeEditWidget))
	FVector TargetLocation;

private:
	UPROPERTY(EditAnywhere, Category="Puzzle|Config");
	int32 ActiveTriggers{1};
	
	FVector GlobalTargetLocation;
	FVector	GlobalStartLocation;
	float DistanceToMove;
};
