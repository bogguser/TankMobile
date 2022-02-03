// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "InteractionComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup="QuestSystem", meta=(DisplayName = "Interaction Collision", BlueprintSpawnableComponent))
class QUESTSYSTEM_API UInteractionComponent : public UBoxComponent
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void Interact();

protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> InteractMessageClass;

	UPROPERTY()
	UUserWidget* InteractMessage;

	UPROPERTY()
	AActor* ActorToInteract;

	UFUNCTION()
	void OnInteractionCompBeginOverlap(UPrimitiveComponent* OverLappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
										bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnInteractionCompEndOverlap(UPrimitiveComponent* OverLappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
};
