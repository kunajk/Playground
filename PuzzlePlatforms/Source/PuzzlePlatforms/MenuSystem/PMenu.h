// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PMenuInterface.h"
#include "Blueprint/UserWidget.h"
#include "PMenu.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API UPMenu : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category="Menu|Interface")
	void SetMenuInterface(TScriptInterface<IPMenuInterface> _MenuInterface);

	void Setup();
	void Close();
	
protected:
	UFUNCTION()
	void Teardown();

	UFUNCTION()
	virtual void BindToInput();
	
	UPROPERTY()
	TScriptInterface<IPMenuInterface> MenuInterface;

private:
	
};
