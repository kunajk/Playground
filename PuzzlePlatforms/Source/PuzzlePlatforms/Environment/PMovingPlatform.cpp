// Fill out your copyright notice in the Description page of Project Settings.


#include "PMovingPlatform.h"

APMovingPlatform::APMovingPlatform()
{
	PrimaryActorTick.bCanEverTick = true;
	SetMobility(EComponentMobility::Movable);

	if(HasAuthority())
	{
		bReplicates = true;
		///AActor::SetReplicateMovement(true);
	}
}

void APMovingPlatform::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if(HasAuthority() && ActiveTriggers > 0)
	{
		FVector location = GetActorLocation();
		FVector movingVector = (GlobalTargetLocation-GlobalStartLocation).GetSafeNormal();
		location += movingVector * CubeSpeed * DeltaSeconds;
		SetActorLocation(location);

		float movedDistance = (location-GlobalStartLocation).Length();
		if(movedDistance >= DistanceToMove)
		{
			Swap(GlobalStartLocation, GlobalTargetLocation);
		}
	}
}

void APMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	GlobalStartLocation = GetActorLocation();
	GlobalTargetLocation = GetTransform().TransformPosition(TargetLocation);

	DistanceToMove = (GlobalTargetLocation-GlobalStartLocation).Length();
}

void APMovingPlatform::AddActiveTrigger()
{
	ActiveTriggers++;
}

void APMovingPlatform::RemovActiveTrigger()
{
	if(ActiveTriggers > 0)
	{
		ActiveTriggers--;
	}
}
