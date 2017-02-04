// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "Hero.generated.h"

UCLASS()
class SWITCH_API AHero : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHero();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Move o personagem no eixo Horizontal
	UFUNCTION(BlueprintCallable, Category = Input)
		void MoveHorizontally(float Value);

	// Faz o personagem pular
	UFUNCTION(BlueprintCallable, Category = Input)
		void JumpAction();

};
