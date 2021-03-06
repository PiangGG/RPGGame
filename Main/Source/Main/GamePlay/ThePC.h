// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Blueprint/UserWidget.h"
#include "Main/GI.h"

#include "ThePC.generated.h"

/**
 * 
 */
UCLASS()
class MAIN_API AThePC : public APlayerController
{
	GENERATED_BODY()

	public:
	AThePC();

	//To hold a reference to our UMG HUD widget
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "PC")
	TSubclassOf<class UUserWidget> cHUD;

	//HUD instance
	UUserWidget *HUD;

	/*UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "PC")
	TSubclassOf<class UUserWidget> TSubTextUserWidget;

	//HUD instance
	UUserWidget *TextUserWidget;*/
	
	//to hide or show pause menu
	UPROPERTY(BlueprintReadOnly, Category = "PC")
	bool bPauseMenuDisplayed;

	EInputMode modeBeforePause;
	bool bShowCursorBeforePause;

	//to hide or show the player list
	UPROPERTY(BlueprintReadOnly, Category = "PC")
	bool bPlayerListDisplayed;


	//To setup the input component
	virtual void SetupInputComponent() override;

	//tick
	virtual void Tick(float DeltaTime) override;

	//endplay
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;
	
	void TogglePauseMenu();

	void ShowPlayerList();
	void HidePlayerList();

	UFUNCTION(BlueprintCallable, Category = "PC")
    void HideAllMenus();
};
