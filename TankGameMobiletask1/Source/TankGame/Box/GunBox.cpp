#include "GunBox.h"

#include "TankGame/Characters/Tank.h"

AGunBox::AGunBox()
{
	SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
	SetRootComponent(SceneComponent);

	BoxComponent = CreateDefaultSubobject<UBoxComponent>("BoxComponent");
	BoxComponent->SetupAttachment(GetRootComponent());
	
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("MeshComponent");
	MeshComponent->SetupAttachment(BoxComponent);

	MeshComponent->OnComponentBeginOverlap.AddDynamic(this, &AGunBox::OnBeginOverlap);
}

void AGunBox::BeginPlay()
{
	Super::BeginPlay();
}

void AGunBox::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
	const FHitResult& SweepResult)
{
	if(auto Tank = Cast<ATank>(OtherActor))
	{
		if (GunClass != nullptr)
		{
			if(Tank->DefaultGunClass != GunClass)
			{
				Tank->DefaultGunClass = GunClass;
				Tank->SetupGun(GunClass);
			}
			Destroy();
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("AGunBox has null gun class!"));
		}
	}
}

