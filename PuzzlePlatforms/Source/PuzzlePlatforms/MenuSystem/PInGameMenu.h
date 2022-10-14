// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PMenu.h"
#include "PInGameMenu.generated.h"

class UButton;

UCLASS()
class PUZZLEPLATFORMS_API UPInGameMenu : public UPMenu
{
	GENERATED_BODY()
	
public:

protected:
	UFUNCTION()
	void OnExitClicked();
	
	virtual void NativeOnInitialized() override;
	virtual void BindToInput() override;
	
	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UButton* ContinueButton;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UButton* ExitButton;

private:
};
