// Fill out your copyright notice in the Description page of Project Settings.

#include "Switch.h"
#include "Hero.h"


// Sets default values
AHero::AHero()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHero::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHero::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AHero::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	/// Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Seta os inputs de controle do personagem
	PlayerInputComponent->BindAxis("Movement", this, &AHero::MoveHorizontally);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AHero::JumpAction);

}

void AHero::MoveHorizontally(float Value)
{
	AddMovementInput(GetActorRightVector(), Value);
}

void AHero::JumpAction()
{
	Jump();
}

