#pragma once

#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/Actor.h"
#include "TankGame/Components/HealthComponent.h"
#include "TankGame/Turret/Gun.h"
#include "Turret.generated.h"
class AGun;
UCLASS()
class TANKGAME_API ATurret : public AActor, public IDamageTaker
{
	GENERATED_BODY()
public:	
	ATurret();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void ProccesTargeting(float DeltaTime);
	void SetupGun(TSubclassOf<AGun>GunClass);
	void TurretRotationTo(float DeltaTime);
	void UpdateTarget();
	void TakeDamage(const FTakedDamageData& TakedDamageData) override;
	bool CanFireTo(AActor* InTarget) const;
	void ParticleDie();
private:
	void OnDie(UHealthComponent* InHealthComponent, const FTakedDamageData& InTakedDamageData);
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class USceneComponent* SceneComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UBoxComponent* BoxComponent;
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BodyMeshComponent;

	UPROPERTY(VisibleAnywhere)
	UArrowComponent* GunPoint;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UHealthComponent* HealthComponent;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AGun> DefaultGunClass;

	UPROPERTY(VisibleAnywhere)
	UAudioComponent* DamageAudioComponent;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* DamageParticleComponent;

	UPROPERTY(EditAnywhere)
	float RotationSpeed = 5.f;

	UPROPERTY(EditAnywhere)
	float FireAccuracy = 5.f;
	
	UPROPERTY(EditAnywhere)
	AActor* Target;

	UPROPERTY()
	ATurret* Turret;

	UPROPERTY(EditAnywhere)
	bool bDrawDebugCheckFire = false;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<ETraceTypeQuery> CheckFireTraceChannel;

	UPROPERTY(EditAnywhere)
	float TargetDetectRadius = 400.f;

	UPROPERTY()
	AGun* Gun;

	FTimerHandle FireTimerHandlerTurret;

	float ReloadTime = 1.f;

};


