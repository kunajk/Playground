// Fill out your copyright notice in the Description page of Project Settings.


#include "PInGameMenu.h"

#include "Components/Button.h"

void UPInGameMenu::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	{
		if(!ensure(ContinueButton))
			return;

		ContinueButton->OnClicked.AddDynamic(this, &UPInGameMenu::Teardown);
	}

	{
		if(!ensure(ExitButton))
			return;

		ExitButton->OnClicked.AddDynamic(this, &UPInGameMenu::OnExitClicked);
	}
}

void UPInGameMenu::BindToInput()
{
	if(!ensure(InputComponent))
		return;

	InputComponent->BindAction("Toggle_InGameMenu", IE_Pressed, this, &UPInGameMenu::Teardown);
}

void UPInGameMenu::OnExitClicked()
{
	if(ensure(MenuInterface))
	{
		Teardown();
		MenuInterface->TransitToMainMenu();
	}
}

