// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Objective.h"
#include "UObject/NoExportTypes.h"
#include "InteractionObjective.generated.h"

/**
 * 
 */
UCLASS()
class QUESTSYSTEM_API UInteractionObjective : public UObjective
{
	GENERATED_BODY()

public:
	UInteractionObjective();

	virtual void ActivateObjective(AActor* Character) override;
	virtual AActor* GetActor() override;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, meta = (AllowedClasses = "IInteractableObject"), Category= "Quest System|Interaction Objective")
	AActor* Target;
};
