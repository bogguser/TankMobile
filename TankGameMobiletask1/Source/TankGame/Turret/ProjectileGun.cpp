#include "ProjectileGun.h"
#include "Gun.h"
#include "Engine/Engine.h"
#include "Components/ArrowComponent.h"
#include "Kismet/GameplayStatics.h"

AProjectileGun::AProjectileGun()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AProjectileGun::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if(PredictProjectilePathParams.DrawDebugType != EDrawDebugTrace::None && ProjectileClass != nullptr)
	{
		auto projectileDefault = ProjectileClass.GetDefaultObject();
		
		PredictProjectilePathParams.StartLocation = FireOriginPoint->GetComponentLocation();
		PredictProjectilePathParams.LaunchVelocity = FireOriginPoint->GetForwardVector() * projectileDefault->ProjectileMovementComponent->InitialSpeed;
		PredictProjectilePathParams.ProjectileRadius =  projectileDefault->CapsuleComponent->GetScaledCapsuleRadius();

		FPredictProjectilePathResult PredictProjectilePathResult;
		UGameplayStatics::PredictProjectilePath(GetWorld(), PredictProjectilePathParams,PredictProjectilePathResult );
	}
}


void AProjectileGun::FireImpl()
{
	if(ProjectileClass != nullptr)
	{
		// if (StartShell == 0)
		// {
		// 	StopFire();
		// 	StartShell = 5;
		// 	return;
		// }

		Super::Fire();
		FActorSpawnParameters ActorSpawnParameters;
		ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		GetWorld()->SpawnActor<AProjectile>(ProjectileClass, FireOriginPoint->GetComponentLocation(), FireOriginPoint->GetComponentRotation(), ActorSpawnParameters);
		//StartShell -= 1;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Projectile is null!"));
	}
}

void AProjectileGun::Fire()
{
	if(ProjectileClass != nullptr)
	{
		// if(ProjectileShell == 0)
		// {
		// 	return;
		// }
		Super::Fire();
		FActorSpawnParameters ActorSpawnParameters;
		ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		GetWorld()->SpawnActor<AProjectile>(ProjectileClass, FireOriginPoint->GetComponentLocation(), FireOriginPoint->GetComponentRotation(), ActorSpawnParameters);
		//--ProjectileShell;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Projectile is null!"));
	}
}

