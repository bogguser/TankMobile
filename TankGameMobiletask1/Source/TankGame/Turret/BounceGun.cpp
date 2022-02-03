#include "BounceGun.h"
#include "Components/ArrowComponent.h"

void ABounceGun::Fire()
{
	if(ProjectileClass != nullptr)
	{
		// if(BounceShell == 0)
		// {
		// 	return;
		// }
		FActorSpawnParameters ActorSpawnParameters;
		ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		GetWorld()->SpawnActor<AProjectile>(ProjectileClass, FireOriginPoint->GetComponentLocation(), FireOriginPoint->GetComponentRotation(), ActorSpawnParameters);
		// --BounceShell;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Projectile is null!"));
	}
}

void ABounceGun::FireImpl()
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