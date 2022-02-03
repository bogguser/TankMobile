#pragma once

#include "QuestListComponent.h"
#include "Tank.h"
#include "UMediaPlayer.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/FloatingPawnMovement.h"

#include "PlayerTank.generated.h"

UCLASS()

class TANKGAME_API APlayerTank : public ATank
{
	GENERATED_BODY()
public:
	APlayerTank();
	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void OpenWidget();
	void ChangeGun();
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void ProccesTurretRotation(float DeltaTime);
public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USpringArmComponent* SpringArmComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UCameraComponent* CameraComponent;
	
	UPROPERTY(VisibleAnywhere)
    UFloatingPawnMovement* MovementComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUMediaPlayer> MediaPlayerSub;

	UPROPERTY()
	UUMediaPlayer * MediaPlayerWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UQuestListComponent* QuestListComponent;

	float CurrentTurretRotationSpeed = 0.f;
	float CurrentRotationSpeed = 0.f;
	
	float MoveForwardInput = 0.f;
	float MoveRightInput = 0.f;

};


