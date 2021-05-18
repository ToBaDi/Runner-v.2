// Copyright Epic Games, Inc. All Rights Reserved.

#include "runnerv2GameMode.h"
#include "runnerv2Character.h"
#include "UObject/ConstructorHelpers.h"

Arunnerv2GameMode::Arunnerv2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
