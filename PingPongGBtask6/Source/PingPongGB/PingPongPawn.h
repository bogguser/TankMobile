// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PingPongPawn.generated.h"

UCLASS()
class PINGPONGGB_API APingPongPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APingPongPawn();

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category ="Components")
	class USpringArmComponent*SpringArm;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category ="Components")
	class UCameraComponent* Camera;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category ="Goal")
	int Goal;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetGoal(int goal);

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
