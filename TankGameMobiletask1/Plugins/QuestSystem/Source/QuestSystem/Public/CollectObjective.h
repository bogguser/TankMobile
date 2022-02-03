// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Objective.h"
#include "CollectObjective.generated.h"

/**
 * 
 */
UCLASS()
class QUESTSYSTEM_API UCollectObjective : public UObjective
{
	GENERATED_BODY()
public:
	UCollectObjective();

	virtual void ActivateObjective(AActor* Character) override;
	virtual AActor* GetActor() override;

	UPROPERTY(EditAnywhere, meta = (AllowedClasses = "CollectItem"), Category = "Quest System|CollectItem")
	AActor* Item;
	
};
