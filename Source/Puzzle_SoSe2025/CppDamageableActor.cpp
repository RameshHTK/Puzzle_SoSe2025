#include "CppDamageableActor.h"
// Fill out your copyright notice in the Description page of Project Settings.


// Called when the game starts or when spawned
void ACppDamageableActor::BeginPlay()
{
	Super::BeginPlay();
	
	CurrentHealth = MaxHealth;
}


float ACppDamageableActor::GetHealthPercentage()
{
	return CurrentHealth / MaxHealth;
}

void ACppDamageableActor::TakeDamage(float DamageAmount)
{
	CurrentHealth = CurrentHealth - DamageAmount;

	if (CurrentHealth <= 0.0f)
	{
		OnDeath();
	}
}
