// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGeometryActor.h"

// Sets default values
ABaseGeometryActor::ABaseGeometryActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseGeometryActor::BeginPlay()
{
	Super::BeginPlay();
	//printTypes

	printTypes();

}
// Called every frame
void ABaseGeometryActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseGeometryActor::printTypes()
{

	int WeaponsNum = 4;
	int KillsNum = 7;
	float Health = 34.444;
	bool IsDead = false;
	bool HasWeapons = true;

	UE_LOG(LogTemp, Display, TEXT("Weapons num: %d, kills num: %i"), WeaponsNum, KillsNum);
	UE_LOG(LogTemp, Display, TEXT("Healths: %f.2"), Health);
	UE_LOG(LogTemp, Display, TEXT("IsDead: %d, HasWeapons: "), IsDead, static_cast<int>(HasWeapons));
}

