// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstPlatformGameMode.h"
#include "FirstPlatformCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstPlatformGameMode::AFirstPlatformGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
