// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickUpBase.h"
#include "GameFramework/Actor.h"
#include "AsteroidPickUp.generated.h"

UCLASS()
class PRACTICE_2_API AAsteroidPickUp : public APickUpBase
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAsteroidPickUp();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MoveSpeed = 2000.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	FVector MoveDirection = FVector(-1.f, 0.f, 0.f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation")
	FRotator RotationSpeed = FRotator(30.f, 30.f, 30.f);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
