// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CapstoneGameMode.h"
#include "CapstoneCharacter.h"

ACapstoneGameMode::ACapstoneGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ACapstoneCharacter::StaticClass();	
}
