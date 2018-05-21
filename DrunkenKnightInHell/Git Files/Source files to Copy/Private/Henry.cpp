// Fill out your copyright notice in the Description page of Project Settings.

#include "Henry.h"
#include "Engine/World.h"


// Sets default values
AHenry::AHenry()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHenry::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHenry::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHenry::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AHenry::TurnCharacterTowardsMouse(FVector MouseLocation)
{
	FRotator NewCharacterRotation;


	// Calculate Relative Rotation based on the MouseLocation
	

	// Set new Rotation based on Calculater Relative Rotation


	UE_LOG(LogTemp, Warning, TEXT("Current Mouse Location: %s"), *MouseLocation.ToString())

	SetActorRotation(NewCharacterRotation, ETeleportType::TeleportPhysics);
}

