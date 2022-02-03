 #include "TankFactory.h"

#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

 ATankFactory::ATankFactory()
{
  BoxComponent = CreateDefaultSubobject<UBoxComponent>("BoxComponent");
 SetRootComponent(BoxComponent);

  MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>("MeshComponent");
 	MeshComponent->SetupAttachment(GetRootComponent());

 	DieMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>("DieMeshComponent");
 	DieMeshComponent->SetupAttachment(GetRootComponent());
 	
  TankSpawnPoint = CreateDefaultSubobject<UArrowComponent>("TankSpawnPoint");
 	TankSpawnPoint->SetupAttachment(MeshComponent);

 	HealthComponent = CreateDefaultSubobject<UHealthComponent>("HealthComponent");
 	HealthComponent->OnDieDelegate.AddUObject(this, &ATankFactory::OnDie);

  DieParticle = CreateDefaultSubobject<UParticleSystemComponent>("DieParticle");
 	DieParticle->SetupAttachment(DieMeshComponent);

 	FireDieParticle = CreateDefaultSubobject<UParticleSystemComponent>("FireDieParticle");
 	FireDieParticle->SetupAttachment(DieMeshComponent);
 	
 	NewTankParticle = CreateDefaultSubobject<UParticleSystemComponent>("NewTankParticle");
 	NewTankParticle->SetupAttachment(MeshComponent);
}

 void ATankFactory::BeginPlay()
 {
 	Super::BeginPlay();

 	DieMeshComponent->SetHiddenInGame(true);

 	GetWorldTimerManager().SetTimer(TimerHandle, this, &ATankFactory::SpawnTank, TankSpawnRate, true, 0.f);
 }

 void ATankFactory::TakeDamage(const FTakedDamageData& TakedDamageData)
 {
 	HealthComponent->TakeDamage(TakedDamageData);
 }

 void ATankFactory::SpawnTank()
 {
 	if(TankSpawnClass == nullptr)
 	{
 		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("ATankFactory::SpawnTank: TankSpawnClass != nullptr) !"));
 		return;
 	}
 	
 	const FTransform SpawnTransform(TankSpawnPoint->GetComponentRotation(),TankSpawnPoint->GetComponentLocation());
 	auto NewTank = Cast<AEnemyTank>(UGameplayStatics::BeginDeferredActorSpawnFromClass(GetWorld(), TankSpawnClass,SpawnTransform,
 		ESpawnActorCollisionHandlingMethod::AlwaysSpawn, this));
 	
 	NewTank->PatrolPoints = PatrolPoints;
	NewTankParticle->ActivateSystem();
 	UGameplayStatics::FinishSpawningActor(NewTank, SpawnTransform);
 		
 }

 void ATankFactory::OnDie(UHealthComponent* InHealthComponent, const FTakedDamageData& InTakedDamageData)
 {
 	GetWorldTimerManager().ClearTimer(TimerHandle);
 	MeshComponent->SetHiddenInGame(true);
 	NewTankParticle->DeactivateSystem();
 	DieMeshComponent->SetHiddenInGame(false);
 	FireDieParticle->ActivateSystem();
	DieParticle->ActivateSystem();
 	if(MapLoader != nullptr)
 	{
 		MapLoader->SetActiveLoader(true);
 	}
 	else
 	{
 		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("ATankFactory::OnDie: MapLoader = nullptr !"));
 	}
 }
