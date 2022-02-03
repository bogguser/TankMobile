#pragma once
#include "CoreMinimal.h"
#include "Gun.h"
#include "TankGame/Interface/DamageTaker.h"

#include "TraceGun.generated.h"

UCLASS()
class TANKGAME_API ATraceGun : public AGun
{
	GENERATED_BODY()
public:
	virtual void Fire() override;
	virtual void OnBounce (const FHitResult& ImpactResult, const FVector& ImpactVelocity);
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float TraceDistance = 1000.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<ETraceTypeQuery> TraceChannel;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bEnableDebug = true;

	UPROPERTY(EditAnywhere)
	FDamageData DamageData;
};
