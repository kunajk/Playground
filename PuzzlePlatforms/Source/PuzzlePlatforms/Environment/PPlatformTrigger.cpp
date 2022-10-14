// Fill out your copyright notice in the Description page of Project Settings.


#include "PPlatformTrigger.h"
#include "PMovingPlatform.h"
#include "Components/BoxComponent.h"

// Sets default values
APPlatformTrigger::APPlatformTrigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TriggerVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger Volume"));
	SetRootComponent(TriggerVolume);
	TriggerVolume->SetBoxExtent(FVector(50, 50, 100));
	TriggerVolume->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	TriggerVolume->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	TriggerVolume->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PressurePad"));
	MeshComp->SetupAttachment(TriggerVolume);
	MeshComp->SetRelativeLocation(FVector(0,0, -100));
	MeshComp->SetRelativeScale3D(FVector(1,1,0.2));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

// Called when the game starts or when spawned
void APPlatformTrigger::BeginPlay()
{
	Super::BeginPlay();
	
	TriggerVolume->OnComponentBeginOverlap.AddDynamic(this, &APPlatformTrigger::TriggerVolumeBeginOverlap);
	TriggerVolume->OnComponentEndOverlap.AddDynamic(this, &APPlatformTrigger::TriggerVolumeEndOverlap);

	TriggerVolumeBaseLoc = MeshComp->GetRelativeLocation();
}

void APPlatformTrigger::TriggerVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	MeshComp->SetRelativeLocation(TriggerVolumeBaseLoc - FVector(0,0, 9));

	for(APMovingPlatform* platform : PlatformsToTrigger)
	{
		platform->AddActiveTrigger();
	}
}

void APPlatformTrigger::TriggerVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	MeshComp->SetRelativeLocation(TriggerVolumeBaseLoc);

	for(APMovingPlatform* platform : PlatformsToTrigger)
	{
		platform->RemovActiveTrigger();
	}
}

// Called every frame
void APPlatformTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

