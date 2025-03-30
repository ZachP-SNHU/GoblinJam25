// Copyright Epic Games, Inc. All Rights Reserved.

#include "GoblinJam25GameMode.h"
#include "GoblinJam25Character.h"
#include "UObject/ConstructorHelpers.h"

AGoblinJam25GameMode::AGoblinJam25GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
