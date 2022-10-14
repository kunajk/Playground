// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PMenu.h"
#include "Blueprint/UserWidget.h"
#include "PMainMenu.generated.h"

class UButton;
class UWidgetSwitcher;
class UEditableTextBox;

enum EMenu : uint8
{
	MAIN=0,
	JOIN
};

UCLASS()
class PUZZLEPLATFORMS_API UPMainMenu : public UPMenu
{
	GENERATED_BODY()
	
public:

protected:
	virtual void OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld) override;

	UFUNCTION()
	void HostClicked();

	UFUNCTION()
	void JoinClicked();

	UFUNCTION()
	void PlayClicked();

	UFUNCTION()
	void BackClicked();
	
	virtual void NativeOnInitialized() override;
	
	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UButton* HostButton;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UButton* JoinButton;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UButton* BackButton;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UButton* PlayButton;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UEditableTextBox* IPAddressTextBox;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UWidgetSwitcher* MenuSwitcher;


private:
	void OpenJoinMenu();
};
