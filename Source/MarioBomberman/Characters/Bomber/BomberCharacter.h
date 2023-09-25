// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BomberCharacter.generated.h"

UCLASS()
class MARIOBOMBERMAN_API ABomberCharacter : public ACharacter
{
	GENERATED_BODY()	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	ABomberCharacter(); // Constructor
	
	//Builtin Methods
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Methods
	UPROPERTY(EditAnywhere, Category = "Camera")
	class USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere, Category = "Camera")
	class UCameraComponent* Camera;

	//Members
};
