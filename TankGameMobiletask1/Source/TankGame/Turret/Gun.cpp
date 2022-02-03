// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"

#include "Components/ArrowComponent.h"
#include "Components/AudioComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Engine/Engine.h"
#include "Particles/ParticleSystemComponent.h"

AGun::AGun()
{
	SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
	SetRootComponent(SceneComponent);
	
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("MeshComponent");
	MeshComponent->SetupAttachment(GetRootComponent());

	FireOriginPoint = CreateDefaultSubobject<UArrowComponent>("ProjectileSpawnPoint");
	FireOriginPoint->SetupAttachment(GetRootComponent());

	FireAudioComponent = CreateDefaultSubobject<UAudioComponent>("FireAudioComponent");
	FireAudioComponent->SetupAttachment(FireOriginPoint);

	FireParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>("FireParticleComponent");
	FireParticleComponent->SetupAttachment(FireOriginPoint);
}
void AGun::Fire()
{
	FireAudioComponent->Play();
	FireParticleComponent->ActivateSystem();
}

//серия выстрелов
 void AGun::StartFire()
 {
 	GetWorldTimerManager().SetTimer(FireTimerHandler, this, &AGun::Fire ,ReloadTime, true, 0.f);
 }

void AGun::StartFireTurret()
{
	GetWorldTimerManager().SetTimer(FireTimerHandler, this, &AGun::FireImpl ,ReloadTime, true, 0.f);
}

 void AGun::StopFire()
 {
 	GetWorldTimerManager().ClearTimer(FireTimerHandler);
 }

 void AGun::FireImpl()
 {
 	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("AGun::FireImpl must implemented!"));
 }

bool AGun::IsFiring() const
{
	return GetWorldTimerManager().TimerExists(FireTimerHandler);
}

USceneComponent* AGun::GetFireOriginPoint() const
{
	return FireOriginPoint;
}




