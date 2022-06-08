#include "ActorDatatable.h"
#include "Camera/CameraComponent.h"

// Sets default values
AActorDatatable::AActorDatatable()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Weapon"));
	Weapon->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AActorDatatable::BeginPlay()
{
	Super::BeginPlay();

	if(WhatWeapon == EWeapon::ObjectOne)
	{
		Weapon->SetSkeletalMesh(ObjectOne, true);
	}
	else if(WhatWeapon == EWeapon::ObjectTwo)
	{
		Weapon->SetSkeletalMesh(ObjectTwo, true);
	}

	UE_LOG(LogTemp, Warning, TEXT("MaxHealth: %d"), MaxHealth); // Prints to the "Output Log"
}

