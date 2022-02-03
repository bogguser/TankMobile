
#include "HealthComponent.h"

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	CurretHealth = MaxHealth;
}

bool UHealthComponent::IsDeath() const
{
	return CurretHealth <=0.f;
}

void UHealthComponent::TakeDamage(const FTakedDamageData& TakedDamageData)
{
	if(IsDeath())
	{
		return;
	}
	
	CurretHealth -= TakedDamageData.DamageData.Damage;
	if(CurretHealth <= 0.f)
	{
		CurretHealth = 0.f;
	}

	OnDamageDelegate.Broadcast(this, TakedDamageData);

	if (FMath::IsNearlyZero(CurretHealth))
	{
		OnDieDelegate.Broadcast(this, TakedDamageData);
	}

	if(IsDeath())
	{
		OnDieDelegate.Broadcast(this, TakedDamageData);
	}
}
