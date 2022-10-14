// Fill out your copyright notice in the Description page of Project Settings.


#include "PMenu.h"

void UPMenu::SetMenuInterface(TScriptInterface<IPMenuInterface> _MenuInterface)
{
	this->MenuInterface = _MenuInterface;
}

void UPMenu::Setup()
{
	UWorld* world = GetWorld();
	
	if(!ensure(world))
		return;

	this->AddToViewport();
	
	APlayerController* PlayerController = world->GetFirstPlayerController();
	FInputModeUIOnly options;
	options.SetWidgetToFocus(TakeWidget());
	options.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	PlayerController->SetInputMode(options);
	PlayerController->bShowMouseCursor = true;

	ensure(!InputComponent);
	InputComponent = NewObject<UInputComponent>(this);
	RegisterInputComponent();
	BindToInput();
}

void UPMenu::Close()
{
	Teardown();
}

void UPMenu::Teardown()
{
	UWorld* world = GetWorld();
	
	if(!ensure(world))
		return;
	
	APlayerController* PlayerController = world->GetFirstPlayerController();
	FInputModeGameOnly options;
	options.SetConsumeCaptureMouseDown(false);
	PlayerController->SetInputMode(options);
	PlayerController->bShowMouseCursor = false;

	this->RemoveFromViewport();

	if(MenuInterface)
		MenuInterface->OnMenuClosed();

	UnregisterInputComponent();
}

void UPMenu::BindToInput()
{
}
