// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "PlatformSwitcher.h"
#include "PlatformSwitcherGameMode.h"
#include "PlatformSwitcherCharacter.h"

APlatformSwitcherGameMode::APlatformSwitcherGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
