#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "TankGame/Components/HealthComponent.h"
#include "TankGame/Interface/DamageTaker.h"
#include "TankGame/Turret/Gun.h"

#include "Tank.generated.h"

UCLASS()
class TANKGAME_API ATank : public APawn, public IDamageTaker
{
	GENERATED_BODY()
public:
	ATank();

	virtual void BeginPlay() override;

	void SetupGun(TSubclassOf<AGun> GunClass);
	AGun* GetGun() const;
	bool CanStartFire() const;
	void Fire();
	bool IsFiring();
	void StartFire();
	void StopFire();
	virtual void TakeDamage(const FTakedDamageData& TakedDamageData) override;
	void TurretRotationTo(const FVector& Location,float DeltaTime);

	void ProccesMovement(float DeltaTime ,float MovementScale = 1.f);
	void ProccesRotation(float DeltaTime ,const FRotator& TargetRotation);
	
	USceneComponent* GetTurretPoint() const;
	void OnDie(UHealthComponent* InHealthComponent, const FTakedDamageData& InTakedDamageData);
	void ParticleDie();

	float GetCurrentHealth();
	float GetMaxHealth();
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UBoxComponent* BoxComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UBoxComponent* BoxComponent2;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UStaticMeshComponent* BodyMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UArrowComponent* GunPoint;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UHealthComponent* HealthComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<AGun> DefaultGunClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<AGun> TwoGunClass;

	UPROPERTY(VisibleAnywhere)
	UAudioComponent* DamageAudioComponent;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* DamageParticleComponent;
	
	UPROPERTY(BlueprintReadOnly)
	AGun* Gun;

	//Скорость танка
	UPROPERTY(EditAnywhere)
	float MoveSpeed = 200.f;

	//Скорость Поворота танка
	UPROPERTY(EditAnywhere)
	float RotationSpeed = 100.f;


	//Скорость поворота башни танка
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float TurretRotationSpeed = 100.f;


	FTimerHandle FireTimerHandlerGunDie;
};


