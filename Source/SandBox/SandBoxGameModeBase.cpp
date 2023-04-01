// Copyright Epic Games, Inc. All Rights Reserved.


#include "SandBoxGameModeBase.h"
#include "SandBoxPawn.h"

ASandBoxGameModeBase::ASandBoxGameModeBase()
{
	DefaultPawnClass = ASandBoxPawn::StaticClass();
}
