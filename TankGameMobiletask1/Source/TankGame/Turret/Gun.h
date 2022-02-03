#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

class UArrowComponent;
class UStaticMeshComponent;
class USceneComponent;

UCLASS()
class TANKGAME_API AGun : public AActor
{
	GENERATED_BODY()
public:	
	AGun();
	virtual void Fire();
	virtual void StartFire();
	virtual void StartFireTurret();
	virtual void StopFire();
	virtual void FireImpl();
	bool IsFiring() const;

	USceneComponent* GetFireOriginPoint() const;
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float ReloadTime = 1.f;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* SceneComponent;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere)
	UAudioComponent* FireAudioComponent;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* FireParticleComponent;
	
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UArrowComponent* FireOriginPoint;
public:
	FTimerHandle FireTimerHandler;
	int  ProjectileShell = 10;
	int LineShell = 5;
	int BounceShell = 3;
};
