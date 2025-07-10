// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppDamageableActor.generated.h"

UCLASS()
class PUZZLE_SOSE2025_API ACppDamageableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(EditAnywhere)
	float MaxHealth = 100;

protected:
	float CurrentHealth;

public:

	UFUNCTION(BlueprintCallable)
	float GetHealthPercentage();

	UFUNCTION(BlueprintCallable)
	void TakeDamage(float DamageAmount);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent)
	void OnDeath();

};
