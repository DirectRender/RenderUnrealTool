// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorDatatable.generated.h"



UENUM()
enum EWeapon
{
	ObjectOne, ObjectTwo // Two Objects as example
};


USTRUCT(BlueprintType)
struct FAmmo
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DATA", meta = (AllowPrivateAccess = "true"))
	int32 MaxHealth = 69; // Health as example
	
};

UCLASS()
class RENDERTOOLSUE5_API AActorDatatable : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AActorDatatable();
	
	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DATA", meta = (AllowPrivateAccess = "true"))
	class USkeletalMeshComponent* Weapon;


	// Weapon Meshes
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DATA", meta = (AllowPrivateAccess = "true"))
	class USkeletalMesh* ObjectOne;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DATA", meta = (AllowPrivateAccess = "true"))
	class USkeletalMesh* ObjectTwo;
	
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

	// Data tables (Cast>)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DATA", meta = (AllowPrivateAccess = "true"))
	TEnumAsByte<EWeapon> WhatWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DATA", meta = (AllowPrivateAccess = "true", ClampMin = "0", ClampMax = "100", PasswordField = "true"))
	int32 MaxHealth = FAmmo().MaxHealth;
};