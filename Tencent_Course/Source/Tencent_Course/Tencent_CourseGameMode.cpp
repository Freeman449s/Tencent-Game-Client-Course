// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tencent_CourseGameMode.h"
#include "Tencent_CourseCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATencent_CourseGameMode::ATencent_CourseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
