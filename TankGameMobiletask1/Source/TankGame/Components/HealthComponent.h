#pragma once

#include "Components/ActorComponent.h"
#include "TankGame/Interface/DamageTaker.h"
#include "HealthComponent.generated.h"

class UHealthComponent;

DECLARE_MULTICAST_DELEGATE_TwoParams(FOnTakeDamageDelegate, UHealthComponent*, const FTakedDamageData& );

UCLASS()

class TANKGAME_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
	bool IsDeath() const;
	void TakeDamage(const FTakedDamageData& TakedDamageData);

public:
	FOnTakeDamageDelegate OnDamageDelegate;
	FOnTakeDamageDelegate OnDieDelegate;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly ,meta = (ClapMin = "0.1", UIMin = "0.1"));
	float MaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	float CurretHealth;

};

