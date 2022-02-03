#include "Turret.h"

#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/Engine.h"
#include "Particles/ParticleSystemComponent.h"
#include "TankGame/Turret/Gun.h"

// Sets default values
ATurret::ATurret()
{
	HealthComponent = CreateDefaultSubobject<UHealthComponent>("HealthComponent");
	HealthComponent->OnDieDelegate.AddUObject(this, &ATurret::OnDie);

	SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
	SetRootComponent(SceneComponent);
	
	BoxComponent = CreateDefaultSubobject<UBoxComponent>("BoxComponent");
	BoxComponent->SetupAttachment(GetRootComponent());

	BodyMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("BodyMeshComponent");
	BodyMeshComponent->SetupAttachment(GetRootComponent());

	GunPoint = CreateDefaultSubobject<UArrowComponent>("GunPoint");
	GunPoint->SetupAttachment(BodyMeshComponent);
	PrimaryActorTick.bCanEverTick = true;

	DamageAudioComponent = CreateDefaultSubobject<UAudioComponent>("FireAudioComponent");
	DamageAudioComponent->SetupAttachment(GetRootComponent());
	
	DamageParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>("FireParticleComponent");
	DamageParticleComponent->SetupAttachment(GetRootComponent());
}


void ATurret::BeginPlay()
{
	Super::BeginPlay();
	SetupGun(DefaultGunClass);
}

void ATurret::SetupGun(TSubclassOf<AGun> GunClass)
{
	if(GunClass != nullptr)
	{
		FActorSpawnParameters ActorSpawnParameters ;
		ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		Gun = GetWorld()->SpawnActor<AGun>(GunClass, GunPoint->GetComponentLocation(), GunPoint->GetComponentRotation(),ActorSpawnParameters);
		Gun->AttachToComponent(GunPoint, FAttachmentTransformRules::KeepWorldTransform);
	}
}

void ATurret::UpdateTarget()
{
	Target = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	
}

bool ATurret::CanFireTo(AActor* InTarget) const
{
	
	if(InTarget != nullptr)
	{
		FRotator ToTargetRotation = UKismetMathLibrary::FindLookAtRotation(Gun->GetActorLocation(), Target->GetActorLocation());

		FHitResult HitResult;
		EDrawDebugTrace::Type DrawDebugTrace = bDrawDebugCheckFire ? EDrawDebugTrace::ForOneFrame : EDrawDebugTrace::None;
		UKismetSystemLibrary::LineTraceSingle(GetWorld(), Gun->GetActorLocation(), InTarget->GetActorLocation(),
			CheckFireTraceChannel, false, {}, DrawDebugTrace, HitResult, true);
		
		return FMath::Abs(Gun->GetActorRotation().Yaw - ToTargetRotation.Yaw) < FireAccuracy &&
			FVector::DistSquared2D(Gun->GetActorLocation(),Target->GetActorLocation()) < TargetDetectRadius * TargetDetectRadius &&
				!HitResult.bBlockingHit;
	}
	return false;
}

void ATurret::ParticleDie()
{
	DamageParticleComponent->ActivateSystem();
}

void ATurret::ProccesTargeting(float DeltaTime)
{
	UpdateTarget();
	if(Target != nullptr)
	{
		FRotator ToTargetRotation = UKismetMathLibrary::FindLookAtRotation(GunPoint->GetComponentLocation(), Target->GetActorLocation());
		ToTargetRotation.Pitch = GunPoint->GetComponentRotation().Pitch;
		ToTargetRotation.Roll = GunPoint->GetComponentRotation().Roll;
		FRotator NewRotation = FMath::RInterpConstantTo(GunPoint->GetComponentRotation(), ToTargetRotation, DeltaTime, RotationSpeed);
		GunPoint->SetWorldRotation(NewRotation);

		
		if (Gun != nullptr)
		{
			if(CanFireTo(Target))
			{
				if(!Gun->IsFiring())
				{
					Gun->StartFireTurret();
				}
			}
			else
			{
				Gun->StopFire();
			}
		}		
	}
}

void ATurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ProccesTargeting(DeltaTime);
}

void ATurret::OnDie(UHealthComponent* InHealthComponent, const FTakedDamageData& InTakedDamageData)
{
	Super::Destroyed();
	if (Gun != nullptr)
	{
		Gun->Destroy();
		Gun = nullptr;
	}
	GetWorldTimerManager().SetTimer(FireTimerHandlerTurret, this, &ATurret::ParticleDie, 5.f, false, 0.f);
}

void ATurret::TakeDamage(const FTakedDamageData& TakedDamageData)
{
	HealthComponent->TakeDamage(TakedDamageData);
	DamageAudioComponent->Play();
}

