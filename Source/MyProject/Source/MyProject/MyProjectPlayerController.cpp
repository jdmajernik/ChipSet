// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MyProjectPlayerController.h"

AMyProjectPlayerController::AMyProjectPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
