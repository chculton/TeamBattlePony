// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HenryController.generated.h"

class AHenry;

/**
 * 
 */
UCLASS()
class DRUNKENKNIGHT_API AHenryController : public APlayerController
{
	GENERATED_BODY()
	
public:

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void TurnCharacterTowardsMouse();

private:

	FVector MouseLocation;

	void ShowMouse();
	void UpdateMouseLocation();
	AHenry * GetControlledCharacter() const;
	
	
};
