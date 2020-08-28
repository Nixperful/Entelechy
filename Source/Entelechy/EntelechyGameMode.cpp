// Copyright Epic Games, Inc. All Rights Reserved.

#include "EntelechyGameMode.h"
#include "EntelechyHUD.h"
#include "EntelechyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEntelechyGameMode::AEntelechyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AEntelechyHUD::StaticClass();
}
