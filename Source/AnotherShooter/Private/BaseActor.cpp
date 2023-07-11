// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseActor.h"
#include "Engine/Engine.h"

DEFINE_LOG_CATEGORY_STATIC(LogBaseThings, All, All)

// Sets default values
ABaseActor::ABaseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseActor::BeginPlay()
{
	Super::BeginPlay();



	//printTypes()

	
}

// Called every frame
void ABaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseActor::printTypes()
{
	UE_LOG(LogTemp, Display, TEXT("HEELO NIGGA!"));
	UE_LOG(LogTemp, Warning, TEXT("HEELO NIGGA!"));
	UE_LOG(LogTemp, Error, TEXT("HWWWWW NIGGA!"));

	int WeaponNum = 4;

	UE_LOG(LogTemp, Error, TEXT("HE we num: %d"), WeaponNum);
}

void ABaseActor::printStringTypes()
{


	FString Name = "John DOe";

	UE_LOG(LogBaseThings, Display, TEXT("NAME: %s"), *Name);

	int WeaponNum = 4;
	float Health = 34.123123123f;
	bool IsDead = false;

	FString WeaponsNumStr = "WeaponsNum = " + FString::FromInt(WeaponNum);
	FString HealthStr = "Heals = " + FString::SanitizeFloat(Health);
	FString IsDeadStr = "Is dead = " + FString(IsDead ? "true" : "false");


	FString Stat = FString::Printf(TEXT("ALL Stat %s %s %s"), *WeaponsNumStr, *HealthStr, *IsDeadStr);

	UE_LOG(LogBaseThings, Display, TEXT("Stat: %s"), *Stat);

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, Name);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, Stat, true, FVector2D(1.5f, 1.5f));
}


