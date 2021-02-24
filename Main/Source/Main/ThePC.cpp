// Fill out your copyright notice in the Description page of Project Settings.


#include "ThePC.h"

AThePC::AThePC()
{
	PrimaryActorTick.bCanEverTick = true;

	bPauseMenuDisplayed = false;
	bPlayerListDisplayed = false;
}

void AThePC::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("PauseMenu", EInputEvent::IE_Pressed, this, &AThePC::TogglePauseMenu);
	InputComponent->BindAction("ShowPlayerScreen", EInputEvent::IE_Pressed, this, &AThePC::ShowPlayerList);
	InputComponent->BindAction("ShowPlayerScreen", EInputEvent::IE_Released, this, &AThePC::HidePlayerList);
}

void AThePC::Tick(float DeltaTime)
{
	//check to ensure this is the locally owned controller
	if (IsLocalController()) {
		//get the current game instance
		UGI *GameInstance = Cast<UGI>(GetWorld()->GetGameInstance());

		//check for success
		if (GameInstance) {
			//if we're currently in game, create the HUD
			if (GameInstance->GetCurrentGameState() == EGameState::EMultiplayerInGame) {
				//check if HUD already exists
				if (HUD == nullptr) {
					//if not, create the HUD
					if (cHUD) {
						HUD = CreateWidget<UUserWidget>(this, cHUD);
						HUD->AddToViewport();
					}
				}
			}
			else if (HUD != nullptr) { //if we're not in game and a HUD exists, destroy it
				HUD->RemoveFromViewport();
				HUD = nullptr;
			}
		}
	}
}

void AThePC::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (HUD) {
		HUD->RemoveFromViewport();
		HUD = nullptr;
	}
}

void AThePC::TogglePauseMenu()
{
	bPauseMenuDisplayed = !bPauseMenuDisplayed;
		
	//get the current game instance
	UGI *GameInstance = Cast<UGI>(GetWorld()->GetGameInstance());

	if (GameInstance) {
		if (bPauseMenuDisplayed) {

			if (bPlayerListDisplayed) {
				bPlayerListDisplayed = false;
			}
			//retain the old input mode
			modeBeforePause = GameInstance->CurrentInputMode;
			bShowCursorBeforePause = GameInstance->bIsShowingMouseCursor;

			//set input mode to UI and Game
			GameInstance->SetInputMode(EInputMode::EUIAndGame, true);
		}
		else {
			//restore old input mode
			GameInstance->SetInputMode(modeBeforePause, bShowCursorBeforePause);
		}
	}
}

void AThePC::ShowPlayerList()
{
	//we dont want to allow the player screen to be displayed if the pause menu is displayed
	if (!bPauseMenuDisplayed) {
		bPlayerListDisplayed = true;

		//Set input to UI and Game to allow scrolling through players on a populated server
		UGI *GameInstance = Cast<UGI>(GetWorld()->GetGameInstance());

		if (GameInstance) {
			GameInstance->SetInputMode(EInputMode::EUIAndGame, true);
		}
	}
}

void AThePC::HidePlayerList()
{
	if (bPlayerListDisplayed) {
		bPlayerListDisplayed = false;

		//set it back to game only and hide cursor
		UGI *GameInstance = Cast<UGI>(GetWorld()->GetGameInstance());

		if (GameInstance) {
			GameInstance->SetInputMode(EInputMode::EGameOnly, false);
		}
	}
}

void AThePC::HideAllMenus()
{
	HidePlayerList();

	if (bPauseMenuDisplayed) {
		TogglePauseMenu();
	}
}
