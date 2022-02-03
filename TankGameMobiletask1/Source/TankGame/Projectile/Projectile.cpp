#include "Projectile.h"

#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "TankGame/Interface/DamageTaker.h"

AProjectile::AProjectile()
{
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovementComponent");
	ProjectileMovementComponent->MaxSpeed = 1000.f;
	ProjectileMovementComponent->InitialSpeed = 1000.f;
	ProjectileMovementComponent->ProjectileGravityScale = 0.f;
	ProjectileMovementComponent->bShouldBounce = true;
	
	ProjectileMovementComponent->OnProjectileBounce.AddDynamic(this, &AProjectile::OnBounce);
	
	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>("CapsuleComponent");
	SetRootComponent(CapsuleComponent);

}

void AProjectile::ProcessBounce(const FHitResult& ImpactResult)
{
	if(auto damageTaker = Cast<IDamageTaker>(ImpactResult.GetActor()))
	{
		FTakedDamageData takeDamageData;
		takeDamageData.DamageData = DamageData;
		takeDamageData.Instigator = this;
	 	
		damageTaker->TakeDamage(takeDamageData);
	}

	if(auto impactComponent = ImpactResult.GetComponent())
	{
		if(impactComponent->IsSimulatingPhysics())
		{
			FVector ImpulseDirection = (impactComponent->GetComponentLocation() - GetActorLocation()).GetSafeNormal();
			impactComponent->AddImpulse(ImpulseDirection * ImpulseForce);
		}
	}
	// if(auto impactComponent = ImpactResult.GetComponent())
	// {
	// 	if(impactComponent->IsSimulatingPhysics())
	// 	{
	// 		FVector ImpulseDirection = (impactComponent->GetComponentLocation() - GetActorLocation()).GetSafeNormal();
	// 		impactComponent->AddForce(ImpulseDirection * ImpulseForce);
	// 	}
	// }
}

void AProjectile::OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity)
{
	if(bExlopedProjectile)
	{
		FVector StartTrace = ImpactResult.ImpactPoint;
		FVector EndTrace = StartTrace + 0.1f;
		TArray<FHitResult> Results;
		EDrawDebugTrace::Type DrawDebug = bDrawExplodeDebug ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None;
		UKismetSystemLibrary::SphereTraceMulti(GetWorld(), StartTrace, EndTrace, ExplosionRadius, TraceChannel, false,
			{}, DrawDebug ,Results, true);

		for(auto& HitResults : Results)
		{
			ProcessBounce(HitResults);
		}
	}
	else
	{
		ProcessBounce(ImpactResult);
	}
	
	Destroy();

}




