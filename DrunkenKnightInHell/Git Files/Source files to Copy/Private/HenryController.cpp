// Fill out your copyright notice in the Description page of Project Settings.

#include "HenryController.h"
#include "Henry.h"

void AHenryController::BeginPlay()
{
	Super::BeginPlay();

	ShowMouse();
}

void AHenryController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TurnCharacterTowardsMouse();
}

void AHenryController::ShowMouse()
{
	this->bShowMouseCursor = true;
	this->bEnableClickEvents = true;
	this->bEnableMouseOverEvents = true;
}

void AHenryController::UpdateMouseLocation()
{
	FHitResult HitUnderMouse;

	GetHitResultUnderCursorByChannel(UEngineTypes::ConvertToTraceType(ECC_Visibility), false, HitUnderMouse);

	MouseLocation = HitUnderMouse.Location;
}

AHenry * AHenryController::GetControlledCharacter() const
{
	return Cast<AHenry>(GetCharacter());
}

void AHenryController::TurnCharacterTowardsMouse()
{
	if (GetControlledCharacter() == nullptr) { return; }

	UpdateMouseLocation();

	GetControlledCharacter()->TurnCharacterTowardsMouse(MouseLocation);
}

