// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "PingPongBall.h"
#include "PingPongPawn.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "PingPonGoal.generated.h"

UCLASS()
class PINGPONGGB_API APingPonGoal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APingPonGoal();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components") 
	UBoxComponent* BodyCollision; 
    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components") 
	UStaticMeshComponent* BodyMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	int Goal;

	UPROPERTY(EditAnywhere, Replicated)
	TSubclassOf<APingPongBall> BallSub;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(Server, Reliable, WithValidation) 
	void Server_Goal(); 
	UFUNCTION(NetMulticast, Reliable, WithValidation) 
	void Multicast_Goal();

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	virtual void GetLifetimeReplicatedProps(TArray< class FLifetimeProperty > & OutLifetimeProps)const;
};

