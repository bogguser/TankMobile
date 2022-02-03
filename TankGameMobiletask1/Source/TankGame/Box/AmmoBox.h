
#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "AmmoBox.generated.h"

class AGun;

UCLASS()
class TANKGAME_API AAmmoBox : public AActor
{
	GENERATED_BODY()
public:	
	AAmmoBox();
	virtual void BeginPlay() override;
	private:
	UFUNCTION()
	void OnBeginOverlap (UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
private:
	UPROPERTY(VisibleAnywhere)
	USceneComponent* SceneComponent;
	
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* BoxComponent;
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AGun> GunClass;
public:	
	int AmmoProjectileShell = 10;
	int AmmoLineShell = 5;
	int AmmoBounceShell = 3;

};
