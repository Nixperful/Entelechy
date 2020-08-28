// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "EntelechyHUD.generated.h"

UCLASS()
class AEntelechyHUD : public AHUD
{
	GENERATED_BODY()

public:
	AEntelechyHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

