// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "CoreUObject.h"

#include "Objective.generated.h"

UENUM()
enum class EObjectiveType: uint8
{
	Location,
	Interact,
	Collect,
	Kill
};

DECLARE_MULTICAST_DELEGATE_OneParam(FOnObjectiveCompleted, UObjective* /*Objective*/);
/**
 * 
 */
UCLASS(Abstract)
class QUESTSYSTEM_API UObjective : public UObject
{
	GENERATED_BODY()
public:
	virtual void ActivateObjective(AActor* Character){}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Quest System|Objective")
	FText Description;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Quest System|Objective")
	EObjectiveType Type;

	virtual AActor* GetActor(void);

	FOnObjectiveCompleted OnObjectiveCompleted ;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Quest System|Objective")
	bool bIsCompleted;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Quest System|Objective")
	bool bCanBeCompleted;
};
