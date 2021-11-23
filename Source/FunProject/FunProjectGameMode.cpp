// Copyright Epic Games, Inc. All Rights Reserved.

#include "FunProjectGameMode.h"
#include "FunProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFunProjectGameMode::AFunProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
