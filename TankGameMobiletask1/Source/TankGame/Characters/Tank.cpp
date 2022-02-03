#include "Tank.h"
#include "DrawDebugHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Math/Rotator.h"
#include "Components/ArrowComponent.h"
#include "Components/AudioComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Kismet/KismetMathLibrary.h"
#include "Particles/ParticleSystemComponent.h"

ATank::ATank()
{
	PrimaryActorTick.bCanEverTick = true;

	

	HealthComponent = CreateDefaultSubobject<UHealthComponent>("HealthComponent");
	HealthComponent->OnDieDelegate.AddUObject(this, &ATank::OnDie);

	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>("BodyMesh");
	SetRootComponent(BodyMesh);
	
	BoxComponent = CreateDefaultSubobject<UBoxComponent>("BoxComponent");
	BoxComponent->SetupAttachment(GetRootComponent());

	BoxComponent2 = CreateDefaultSubobject<UBoxComponent>("BoxComponent2");
	BoxComponent2->SetupAttachment(GetRootComponent());

	GunPoint = CreateDefaultSubobject<UArrowComponent>("GunPoint");
	GunPoint->SetupAttachment(BodyMesh);

	DamageAudioComponent = CreateDefaultSubobject<UAudioComponent>("FireAudioComponent");
	DamageAudioComponent->SetupAttachment(BoxComponent);

	DamageParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>("FireParticleComponent");
	DamageParticleComponent->SetupAttachment(BoxComponent);

}

void ATank::BeginPlay()
{
	Super::BeginPlay();
	SetupGun(DefaultGunClass);
}

void ATank::SetupGun(TSubclassOf<AGun> GunClass)
{
	if(GunClass != nullptr)
	{
		if(Gun != nullptr)
		{
			Gun->Destroy();
		}
		FActorSpawnParameters ActorSpawnParameters ;
		ActorSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		Gun = GetWorld()->SpawnActor<AGun>(GunClass, GunPoint->GetComponentLocation(), GunPoint->GetComponentRotation(),ActorSpawnParameters);
		Gun->AttachToComponent(GunPoint, FAttachmentTransformRules::KeepWorldTransform);
	}
}

AGun* ATank::GetGun() const
{
	return Gun;
}

bool ATank::CanStartFire() const
{
	return Gun != nullptr;
}

void ATank::Fire()
{
	if (Gun != nullptr)
	{
		Gun->Fire();
	}
}

bool ATank::IsFiring()
{
	return Gun != nullptr && Gun->IsFiring();
}

void ATank::StartFire()
{
	if (Gun != nullptr)
	{
		Gun->StartFire();
	}
}
void ATank::StopFire()
{
	if (Gun != nullptr)
	{
		Gun->StopFire();
	}
}

void ATank::TakeDamage(const FTakedDamageData& TakedDamageData)
{
	HealthComponent->TakeDamage(TakedDamageData);
	DamageAudioComponent->Play();
}


void ATank::TurretRotationTo(const FVector& Location,float DeltaTime)
{
	FRotator TargetRotation = UKismetMathLibrary::FindLookAtRotation(GunPoint->GetComponentLocation(), Location);
	TargetRotation.Pitch = GunPoint->GetComponentRotation().Pitch;
	TargetRotation.Roll = GunPoint->GetComponentRotation().Roll;
	
	FRotator NewTurretRotation = FMath::RInterpConstantTo(GunPoint->GetComponentRotation(), TargetRotation, DeltaTime, TurretRotationSpeed);
	NewTurretRotation.Pitch = GunPoint->GetComponentRotation().Pitch;
	NewTurretRotation.Roll = GunPoint->GetComponentRotation().Roll;

	GunPoint->SetWorldRotation(NewTurretRotation);
}

void ATank::ProccesMovement(float DeltaTime ,float MovementScale)
{
	FVector CurrentLocationForward = GetActorLocation();
	FVector ForwardVectorForward = GetActorForwardVector();
	FVector NewLocationForward = CurrentLocationForward + ForwardVectorForward * MoveSpeed * MovementScale * DeltaTime;
	SetActorLocation(NewLocationForward);
}

void ATank::ProccesRotation(float DeltaTime ,const FRotator& TargetRotation)
{
	FRotator NewRotation = FMath::RInterpConstantTo(GetActorRotation(), TargetRotation,DeltaTime, RotationSpeed);
	NewRotation.Pitch = GetActorRotation().Pitch;
	NewRotation.Roll = GetActorRotation().Roll;
	SetActorRotation(NewRotation);
}

USceneComponent* ATank::GetTurretPoint() const
{
	return GunPoint;
}

void ATank::ParticleDie()
{
	DamageParticleComponent->ActivateSystem();
}

float ATank::GetCurrentHealth()
{
	return HealthComponent->CurretHealth;
}

float  ATank::GetMaxHealth()
{
	return HealthComponent->MaxHealth;
}


void ATank::OnDie(UHealthComponent* InHealthComponent, const FTakedDamageData& InTakedDamageData)
{
	DamageAudioComponent->Play();
	Super::Destroyed();
	if (Gun != nullptr)
	{
		Gun->Destroy();
		Gun = nullptr;
	}
	GetWorldTimerManager().SetTimer(FireTimerHandlerGunDie, this, &ATank::ParticleDie, 5.f, false, 0.f);
}





 

