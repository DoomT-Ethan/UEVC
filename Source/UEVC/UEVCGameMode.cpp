// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEVCGameMode.h"
#include "UEVCCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUEVCGameMode::AUEVCGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
