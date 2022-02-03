#pragma once

#include "Components/BoxComponent.h"
#include "Components/PointLightComponent.h"
#include "GameFramework/Actor.h"

#include "MapLoader.generated.h"

UCLASS()
class AMapLoader : public AActor
{
	GENERATED_BODY()
public:
	AMapLoader();
	
	virtual void BeginPlay() override;
	void SetActiveLoader(bool bIsNewActive);

protected:
	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

protected:
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* BoxComponent;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere)
	UPointLightComponent* ActivatedLight;

	UPROPERTY(VisibleAnywhere)
	UPointLightComponent* DeactivatedLight;
	
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UWorld> NewWorld;


	bool bIsActive = false;
};


