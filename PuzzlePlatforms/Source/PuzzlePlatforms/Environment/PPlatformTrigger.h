// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PPlatformTrigger.generated.h"

class UBoxComponent;
class UStaticMeshComponent;

UCLASS()
class PUZZLEPLATFORMS_API APPlatformTrigger : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APPlatformTrigger();
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void TriggerVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void TriggerVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	UPROPERTY(EditDefaultsOnly, Category="Puzzle|Components")
	UBoxComponent* TriggerVolume;

	UPROPERTY(EditDefaultsOnly, Category="Puzzle|Components")
	UStaticMeshComponent* MeshComp;

private:
	UPROPERTY(EditInstanceOnly, Category="Puzzle|Config")
	TArray<class APMovingPlatform*> PlatformsToTrigger;
	
	UPROPERTY()
	FVector TriggerVolumeBaseLoc;
};


