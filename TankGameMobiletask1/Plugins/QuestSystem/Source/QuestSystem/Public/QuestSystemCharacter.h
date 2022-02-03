// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "IInteractableObject.h"
#include "GameFramework/Character.h"
#include "QuestSystemCharacter.generated.h"

UCLASS()
class QUESTSYSTEM_API AQuestSystemCharacter : public ACharacter, public IIInteractableObject
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AQuestSystemCharacter();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UQuestDialog> QuestDialogClass;

public:
	virtual void Interact_Implementation(AActor* ActorInteractionWithObject) override;

	UFUNCTION(BlueprintCallable)
	bool bAllertActive();
	bool bQuestIsTaken;

private:
	
	UFUNCTION()
	void OnQuestDialogClosed();

	UPROPERTY()
	AActor* InteractingActor;

};
