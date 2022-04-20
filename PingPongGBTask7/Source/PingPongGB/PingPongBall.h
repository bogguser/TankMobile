// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Engine/StreamableManager.h"

#include "PingPongBall.generated.h"

UCLASS()
class PINGPONGGB_API APingPongBall : public AActor
{
	GENERATED_BODY()
	
protected: 
    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components") 
    USphereComponent* BodyCollision; 
    
    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components") 
    UStaticMeshComponent* BodyMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category ="Ball params") 
	float MoveSpeed =1000; 
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category ="Ball params") 
	UParticleSystem* HitEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category ="Ball params") 
	TSoftObjectPtr<UMaterial> BallMaterial;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category ="Ball params") 
	TSoftObjectPtr<UParticleSystem> BallMeshRef;
	
	TSharedPtr<FStreamableHandle> AssetHandle;
	
	UPROPERTY(Replicated) 
	bool IsMoving =true;
public:	
	// Sets default values for this actor's properties
	APingPongBall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UFUNCTION(Server, Reliable, WithValidation) 
	void Server_Move(float DeltaTime); 
	UFUNCTION(Server, Reliable, WithValidation) 
	void Server_StartMove(); 
	UFUNCTION(Server, Reliable, WithValidation) 
	void Server_StopMove(); 
	UFUNCTION(NetMulticast, Unreliable) 
	void Multicast_HitEffect();

	UMaterial* LoadMaterialBall();
	UParticleSystem* LoadParticle();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable) 
	void StartMove(); 
	UFUNCTION(BlueprintCallable) 
	void StopMove(); 
	virtual void GetLifetimeReplicatedProps(TArray< class FLifetimeProperty > & OutLifetimeProps)const;

	void LoadBodyMesh();
	void OnBodyMeshLoaded();

};
