// Fill out your copyright notice in the Description page of Project Settings.


#include "PMainMenu.h"
#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "Components/EditableTextBox.h"
#include "PuzzlePlatforms/PGameInstance.h"


void UPMainMenu::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if(!ensure(HostButton))
		return;

	HostButton->OnClicked.AddDynamic(this, &UPMainMenu::HostClicked);

	if(!ensure(JoinButton))
		return;

	JoinButton->OnClicked.AddDynamic(this, &UPMainMenu::JoinClicked);

	if(!ensure(BackButton))
		return;

	BackButton->OnClicked.AddDynamic(this, &UPMainMenu::BackClicked);

	if(!ensure(PlayButton))
		return;

	PlayButton->OnClicked.AddDynamic(this, &UPMainMenu::PlayClicked);
}

void UPMainMenu::HostClicked()
{
	if(MenuInterface)
	{
		MenuInterface->HostGame();
	}
}

void UPMainMenu::JoinClicked()
{
	OpenJoinMenu();
}

void UPMainMenu::PlayClicked()
{
	if(!ensure(IPAddressTextBox))
		return;
	
	if(MenuInterface)
	{
		FString address = IPAddressTextBox->GetText().ToString();
		MenuInterface->JoinGame(address);
	}
}

void UPMainMenu::BackClicked()
{
	if(ensure(MenuSwitcher))
	{
		MenuSwitcher->SetActiveWidgetIndex(EMenu::MAIN);
	}
}

void UPMainMenu::OpenJoinMenu()
{
	if(ensure(MenuSwitcher))
	{
		MenuSwitcher->SetActiveWidgetIndex(EMenu::JOIN);
	}
}

void UPMainMenu::OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld)
{
	Super::OnLevelRemovedFromWorld(InLevel, InWorld);
	Teardown();
}
