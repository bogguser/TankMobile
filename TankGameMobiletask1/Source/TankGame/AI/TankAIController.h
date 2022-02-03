#pragma once

#include "AIController.h"

#include "TankAIController.generated.h"

class AEnemyTank;

UCLASS()

class ATankAIController : public AAIController
{
	GENERATED_BODY()
public:
	ATankAIController();
	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;
	virtual void Tick(float DeltaSeconds) override;
	bool CanFireTo(AActor* InTarget) const;
	void UpdateTarget();

protected:
	void ProccesTargeting(float DeltaTime);
	void ProccessMovement(float DeltaTime);
protected:
	UPROPERTY(EditAnywhere)
	float FireAccuracy = 7.f;

	UPROPERTY(EditAnywhere)
	float TargetDetectRadius = 400.f;


	UPROPERTY(EditAnywhere)
	float MovementAcceptRaidus = 15.f;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<ETraceTypeQuery> CheckFireTraceChannel;

	UPROPERTY(EditAnywhere)
	bool bDrawDebugCheckFire = false;
	
	UPROPERTY()
	AEnemyTank* Tank;

	UPROPERTY()
	AActor* Target;

	int32 CurrentPatrolPointIndex = 0;
};

