// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test_Tomo_EstebanGameMode.h"
#include "Test_Tomo_EstebanCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATest_Tomo_EstebanGameMode::ATest_Tomo_EstebanGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
