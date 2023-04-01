// Copyright Epic Games, Inc. All Rights Reserved.


#include "SandBoxGameModeBase.h"
#include "SandBoxPawn.h"
#include "SandboxPlayerController.h"

ASandBoxGameModeBase::ASandBoxGameModeBase()
{
	DefaultPawnClass = ASandBoxPawn::StaticClass();
	PlayerControllerClass = ASandboxPlayerController::StaticClass();
}
