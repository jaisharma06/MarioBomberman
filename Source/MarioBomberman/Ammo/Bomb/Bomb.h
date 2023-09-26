// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bomb.generated.h"

UCLASS()
class MARIOBOMBERMAN_API ABomb : public AActor
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Members
	UPROPERTY(EditAnywhere, Category = "Collision")
		class USphereComponent* SphereCollider;

	UPROPERTY(EditAnywhere, Category = "Mesh")
		class UStaticMeshComponent* Mesh;

	//Methods

public:	
	//Constructor
	// Sets default values for this actor's properties
	ABomb();

	//BuiltIns
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Methods

	//Members
};
