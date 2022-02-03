#pragma once

#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStaticsTypes.h"
#include "TankGame/Interface/DamageTaker.h"

#include "Projectile.generated.h"

UCLASS()
class TANKGAME_API AProjectile : public AActor
{
	GENERATED_BODY()
public:	
	AProjectile();
private:
	UFUNCTION()
	virtual void OnBounce (const FHitResult& ImpactResult, const FVector& ImpactVelocity);

	void ProcessBounce(const FHitResult& ImpactResult);
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UCapsuleComponent* CapsuleComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UProjectileMovementComponent* ProjectileMovementComponent;

	UPROPERTY(EditAnywhere)
	FDamageData DamageData;

	UPROPERTY(EditAnywhere)
	float ImpulseForce = 2000.f;

	UPROPERTY(EditAnywhere)
	bool bExlopedProjectile = false;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<ETraceTypeQuery> TraceChannel;

	UPROPERTY(EditAnywhere)
	bool bDrawExplodeDebug = false;
	
	UPROPERTY(EditAnywhere)
	float ExplosionRadius = 200.f;
};
