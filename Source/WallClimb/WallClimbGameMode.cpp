// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "WallClimbGameMode.h"
#include "WallClimbHUD.h"
#include "WallClimbCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWallClimbGameMode::AWallClimbGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AWallClimbHUD::StaticClass();
}
