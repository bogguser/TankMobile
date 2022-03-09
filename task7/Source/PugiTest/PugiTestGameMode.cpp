// Copyright Epic Games, Inc. All Rights Reserved.

#include "PugiTestGameMode.h"
#include "PugiTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

APugiTestGameMode::APugiTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
