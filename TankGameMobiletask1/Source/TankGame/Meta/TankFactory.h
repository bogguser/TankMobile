#pragma once

#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystemComponent.h"
#include "TankGame/MapLoader.h"
#include "TankGame/Characters/EnemyTank.h"
#include "TankGame/Components/HealthComponent.h"

#include "TankFactory.generated.h"

UCLASS()
class ATankFactory : public AActor, public IDamageTaker
{
	GENERATED_BODY()
public:
	ATankFactory();
	virtual void BeginPlay() override;
	virtual void TakeDamage(const FTakedDamageData& TakedDamageData) override;

protected:
	void SpawnTank();
	void OnDie(UHealthComponent* InHealthComponent, const FTakedDamageData& InTakedDamageData);

protected:
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* BoxComponent;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* DieMeshComponent;
	
	UPROPERTY(VisibleAnywhere)
	UArrowComponent* TankSpawnPoint;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UHealthComponent* HealthComponent;
	
	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* DieParticle;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* FireDieParticle;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* NewTankParticle;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AEnemyTank> TankSpawnClass;
	
	UPROPERTY(EditDefaultsOnly)
	float TankSpawnRate = 10.f;
	
	
	UPROPERTY(EditInstanceOnly)
	TArray<AActor*> PatrolPoints;
	UPROPERTY(EditInstanceOnly)
	AMapLoader* MapLoader;

	FTimerHandle TimerHandle;
	
};


