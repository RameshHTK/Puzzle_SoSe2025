// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCppActor.h"

// Sets default values
AMyCppActor::AMyCppActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("MyBoxComp"));
	SetRootComponent(MyBoxComponent);
}


void AMyCppActor::PrintSomeRubbish()
{
	int someInt = 3;
	float someFloat = 1.1f;


	UE_LOG(LogTemp, Log, TEXT("Some Rubbish: %d %f"), someInt, someFloat);
}

void AMyCppActor::PrintWarning(FString Warning)
{
	UE_LOG(LogTemp, Warning, TEXT("Warning: %s"), *Warning);
}

void AMyCppActor::PrintError(FString Error)
{
	UE_LOG(LogTemp, Error, TEXT("Error: %s"), *Error);
}

FVector AMyCppActor::SuperComplexVectorMath(FVector A, float MatrixScaleYYX)
{
	return A * MatrixScaleYYX;
}

float AMyCppActor::BluepriuntPure()
{
	return 0.0f;
}

void AMyCppActor::BlueprintNativeEvent_Implementation()
{
}



// Called when the game starts or when spawned
void AMyCppActor::BeginPlay()
{
	Super::BeginPlay();
	
	FString MyString = GetStringToPrintOnBeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("String to log on Begin Play: %s"), *MyString);
}

// Called every frame
void AMyCppActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

