// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "MyCppActor.generated.h"

UCLASS()
class PUZZLE_SOSE2025_API AMyCppActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyCppActor();

	UPROPERTY(VisibleAnywhere)
	UBoxComponent* MyBoxComponent;
	
	UPROPERTY(EditAnywhere)
	int myInt = 0;

	UPROPERTY(EditAnywhere, meta = (EditCondition = "myInt > 0"))
	FString Message = "hello";



public:

	UFUNCTION(BlueprintCallable)
	void PrintSomeRubbish();

	UFUNCTION(BlueprintCallable)
	void PrintWarning(FString Warning);

	UFUNCTION(BlueprintCallable)
	void PrintError(FString Error);

	UFUNCTION(BlueprintPure)
	FVector SuperComplexVectorMath(FVector A, float MatrixScaleYYX);


	UFUNCTION(BlueprintImplementableEvent)
	FString GetStringToPrintOnBeginPlay();


	UFUNCTION(BlueprintPure)
	float BluepriuntPure();


	UFUNCTION(BlueprintNativeEvent)
	void BlueprintNativeEvent();

private:

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
