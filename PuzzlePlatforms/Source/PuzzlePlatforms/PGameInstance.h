// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MenuSystem/PMenuInterface.h"
#include "PGameInstance.generated.h"

class UPMenu;

UCLASS()
class PUZZLEPLATFORMS_API UPGameInstance : public UGameInstance, public IPMenuInterface
{
	GENERATED_BODY()
public:

	UPGameInstance();
	
	virtual void Init() override;

	UFUNCTION(Exec, BlueprintCallable, Category="Puzzle|State")
	void LoadMenu();

	UFUNCTION(Exec, BlueprintCallable, Category="Puzzle")
	void ToggleInGameMenu();
	
	UFUNCTION(Exec)
	void Host();

	UFUNCTION(Exec)
	void Join(FString& IPAddres);

	UFUNCTION(Exec)
	void TransitToMainMenu();
	
	virtual void HostGame() override;
	virtual void JoinGame(FString& IPAddres) override;
	virtual void OnMenuClosed() override;
private:
	UPROPERTY()
	UPMenu* CurrentMenu;
	
	UPROPERTY()
	TSubclassOf<class UUserWidget> MenuClass;

	UPROPERTY()
	TSubclassOf<class UUserWidget> InGameMenuClass;
};
