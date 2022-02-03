#include "MapLoader.h"

#include "Kismet/GameplayStatics.h"

AMapLoader::AMapLoader()
{
	BoxComponent = CreateDefaultSubobject<UBoxComponent>("BoxComponent");
	SetRootComponent(BoxComponent);
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AMapLoader::OnBeginOverlap);
	
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("MeshComponent");
	MeshComponent->SetupAttachment(GetRootComponent());

	ActivatedLight = CreateDefaultSubobject<UPointLightComponent>("ActivatedLight");
	ActivatedLight->SetupAttachment(MeshComponent);

	DeactivatedLight = CreateDefaultSubobject<UPointLightComponent>("DeactivatedLight");
	DeactivatedLight->SetupAttachment(MeshComponent);
}

void AMapLoader::BeginPlay()
{
	Super::BeginPlay();
	SetActiveLoader(false);
}

void AMapLoader::SetActiveLoader(bool bIsNewActive)
{
	bIsActive = bIsNewActive;

	ActivatedLight->SetHiddenInGame(!bIsNewActive);
	DeactivatedLight->SetHiddenInGame(bIsNewActive);
}


void AMapLoader::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	auto newWorldRawPtr = NewWorld.LoadSynchronous();
	if(bIsActive && newWorldRawPtr != nullptr)
	{
		if(auto pawn = Cast<APawn>(OtherActor))
		{
			auto controller = pawn->GetController();
			if(controller != nullptr && controller->IsLocalPlayerController())
			{
				UGameplayStatics::OpenLevel(GetWorld(), *newWorldRawPtr->GetMapName());
			}
		}
	}

}
