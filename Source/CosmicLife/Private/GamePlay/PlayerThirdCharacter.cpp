// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerThirdCharacter.h"

// Sets default values
APlayerThirdCharacter::APlayerThirdCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->GetCharacterMovement();

}

// Called when the game starts or when spawned
void APlayerThirdCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerThirdCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerThirdCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

