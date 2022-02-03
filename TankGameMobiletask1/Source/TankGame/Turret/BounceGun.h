#pragma once

#include "CoreMinimal.h"
#include "Gun.h"
#include "TankGame/Projectile/Projectile.h"

#include "BounceGun.generated.h"

UCLASS()
class TANKGAME_API ABounceGun : public AGun
{
	GENERATED_BODY()
public:
	virtual void Fire() override;
	void FireImpl();
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<AProjectile> ProjectileClass;
};
