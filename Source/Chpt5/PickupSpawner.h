// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickUp.h"
#include "PickupSpawner.generated.h"

UCLASS()
class CHPT5_API APickupSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickupSpawner();

	UPROPERTY()
	USceneComponent* SpawnLocation;
	UFUNCTION()
	void PickupCollected();
	UFUNCTION()
	void SpawnPickup();
	UPROPERTY()
	APickUp* CurrentPickup;
	FTimerHandle MyTimer;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
