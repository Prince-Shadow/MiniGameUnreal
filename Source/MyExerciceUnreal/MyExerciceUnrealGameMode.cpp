// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyExerciceUnrealGameMode.h"
#include "MyExerciceUnrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyExerciceUnrealGameMode::AMyExerciceUnrealGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
