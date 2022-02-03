#include "AmmoBox.h"
#include "TankGame/Characters/Tank.h"

class AGun;

AAmmoBox::AAmmoBox()
{
	SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
	SetRootComponent(SceneComponent);

	BoxComponent = CreateDefaultSubobject<UBoxComponent>("BoxComponent");
	BoxComponent->SetupAttachment(GetRootComponent());
	
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("MeshComponent");
	MeshComponent->SetupAttachment(BoxComponent);

	MeshComponent->OnComponentBeginOverlap.AddDynamic(this, &AAmmoBox::OnBeginOverlap);
	
}

void AAmmoBox::BeginPlay()
{
	Super::BeginPlay();
}

void AAmmoBox::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
	const FHitResult& SweepResult)
{
	if(auto Tank = Cast<ATank>(OtherActor))
	{
		Tank->Gun->ProjectileShell += AmmoProjectileShell;
		Tank->Gun->LineShell += AmmoLineShell;
		Tank->Gun->BounceShell += AmmoBounceShell;
		Destroy();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("Ammo: AGunBox has null gun class!"));
	}
}


