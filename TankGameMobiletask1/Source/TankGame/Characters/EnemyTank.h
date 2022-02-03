#pragma once

#include "Tank.h"

#include "EnemyTank.generated.h"

UCLASS()

class AEnemyTank : public ATank
{
	GENERATED_BODY()
public:
	
public:
	UPROPERTY(EditAnywhere)
	TArray<AActor*> PatrolPoints;
	
};