// Copyright Epic Games, Inc. All Rights Reserved.

#include "RNGWeaponGameMode.h"
#include "RNGWeaponCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARNGWeaponGameMode::ARNGWeaponGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
