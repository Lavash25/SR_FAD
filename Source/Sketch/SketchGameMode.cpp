// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SketchGameMode.h"
#include "SketchPawn.h"
#include "SketchHud.h"

ASketchGameMode::ASketchGameMode()
{
	DefaultPawnClass = ASketchPawn::StaticClass();
	HUDClass = ASketchHud::StaticClass();
}
