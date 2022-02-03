#pragma once

#include "CoreMinimal.h"
#include "Gun.h"
#include "TankGame/Projectile/Projectile.h"

#include "ProjectileGun.generated.h"



UCLASS()
class TANKGAME_API AProjectileGun : public AGun
{
	GENERATED_BODY()
public:
	AProjectileGun();
	virtual void Tick(float DeltaSeconds) override;
	virtual void Fire() override;
	virtual void FireImpl() override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<AProjectile>ProjectileClass;

	UPROPERTY(EditAnywhere)
	FPredictProjectilePathParams PredictProjectilePathParams;
};
