// Fill out your copyright notice in the Description page of Project Settings.


#include "PGameInstance.h"

#include "Blueprint/UserWidget.h"
#include "Environment/PMovingPlatform.h"
#include "MenuSystem/PInGameMenu.h"
#include "MenuSystem/PMainMenu.h"

UPGameInstance::UPGameInstance()
{
	static ConstructorHelpers::FClassFinder<APMovingPlatform> MovingPlatformBPClass(TEXT("/Game/Blueprints/Environment/BP_MovingPlatform"));
	if(ensure(MovingPlatformBPClass.Class))
	{
		UE_LOG(LogTemp, Warning, TEXT("Found class in cpp: %s"),*MovingPlatformBPClass.Class->GetName());
	}

	static ConstructorHelpers::FClassFinder<UUserWidget> MainMenuBPClass(TEXT("/Game/MenuSystem/WBP_MainMenu"));
	MenuClass = MainMenuBPClass.Class;
	if(ensure(MainMenuBPClass.Class))
	{
		UE_LOG(LogTemp, Warning, TEXT("Found class in cpp: %s"),*MainMenuBPClass.Class->GetName());
	}

	static ConstructorHelpers::FClassFinder<UUserWidget> InGameMenuBPClass(TEXT("/Game/MenuSystem/WBP_InGameMenu"));
	InGameMenuClass = InGameMenuBPClass.Class;
	if(ensure(InGameMenuBPClass.Class))
	{
		UE_LOG(LogTemp, Warning, TEXT("Found class in cpp: %s"),*InGameMenuBPClass.Class->GetName());
	}
}

void UPGameInstance::Init()
{
	Super::Init();
}

void UPGameInstance::LoadMenu()
{
	if(!IsValid(MenuClass))
		return;

	CurrentMenu = CreateWidget<UPMainMenu>(this, MenuClass);
	CurrentMenu->Setup();
	CurrentMenu->SetMenuInterface(this);
}

void UPGameInstance::ToggleInGameMenu()
{
	if(!IsValid(InGameMenuClass))
		return;

	if(CurrentMenu)
	{
		CurrentMenu->Close();
	}
	else
	{
		CurrentMenu = CreateWidget<UPInGameMenu>(this, InGameMenuClass);
		CurrentMenu->Setup();
		CurrentMenu->SetMenuInterface(this);
	}
}

void UPGameInstance::Host()
{
	UE_LOG(LogTemp, Log, TEXT("Host"));
	GetEngine()->AddOnScreenDebugMessage(0,2,FColor::Green, TEXT("Hosting 2"));
	
	UWorld* World = GetWorld();
	World->ServerTravel("/Game/ThirdPerson/Maps/ThirdPersonMap?listen");
}

void UPGameInstance::Join(FString& IPAddres)
{
	UE_LOG(LogTemp, Log, TEXT("Join"));
	GetEngine()->AddOnScreenDebugMessage(0,2,FColor::Green, *FString::Printf(TEXT("Joining ip: %s"), *IPAddres));

	APlayerController* PlayerController = GetFirstLocalPlayerController();
	PlayerController->ClientTravel(IPAddres, ETravelType::TRAVEL_Absolute);
}

void UPGameInstance::TransitToMainMenu()
{
	UWorld* World = GetWorld();
	World->ServerTravel("/Game/Maps/MainMenu");
}


void UPGameInstance::HostGame()
{
	Host();
}

void UPGameInstance::JoinGame(FString& IPAddres)
{
	Join(IPAddres);
}

void UPGameInstance::OnMenuClosed()
{
	CurrentMenu = nullptr;
}
