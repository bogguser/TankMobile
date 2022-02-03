// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DamageTaker.generated.h"

USTRUCT(BlueprintType)
struct FDamageData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	float Damage = 1.f;
};

USTRUCT(BlueprintType)
struct FTakedDamageData
{
	GENERATED_BODY()
public:
	FDamageData DamageData;

	UPROPERTY(VisibleAnywhere)
	AActor* Instigator = nullptr;
};

UINTERFACE(MinimalAPI)
class UDamageTaker : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TANKGAME_API IDamageTaker
{
	GENERATED_BODY()
public:
	virtual void TakeDamage(const FTakedDamageData& TakedDamageData) = 0;
};
