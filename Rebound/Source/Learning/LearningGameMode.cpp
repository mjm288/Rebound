// Copyright Epic Games, Inc. All Rights Reserved.

#include "LearningGameMode.h"
#include "LearningCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALearningGameMode::ALearningGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
