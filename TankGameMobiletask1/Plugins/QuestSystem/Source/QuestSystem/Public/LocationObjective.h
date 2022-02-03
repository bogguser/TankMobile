// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Objective.h"
#include "UObject/NoExportTypes.h"
#include "LocationObjective.generated.h"

/**
 * 
 */
UCLASS()
class QUESTSYSTEM_API ULocationObjective : public UObjective
{
	GENERATED_BODY()

public:

	ULocationObjective();

	void ActivateObjective(AActor* Character) override;
	virtual AActor* GetActor() override;

	UPROPERTY(EditAnywhere, meta = (AllowedClasses = "LocationMarker"), Category = "Quest System|Location Objective")
	AActor* Marker;
};
