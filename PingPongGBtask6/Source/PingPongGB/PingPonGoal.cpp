// Fill out your copyright notice in the Description page of Project Settings.


#include "PingPonGoal.h"

#include "PingPongBall.h"
#include "PingPongPlatform.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"

// Sets default values
APingPonGoal::APingPonGoal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BodyCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BallBody Collider"));
	BodyCollision->OnComponentBeginOverlap.AddDynamic(this, &APingPonGoal::OnOverlapBegin);
	SetRootComponent(BodyCollision); 
	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BallBody Mesh")); 
	BodyMesh->SetupAttachment(RootComponent); 
	BodyMesh->SetIsReplicated(true); 
	SetReplicates(true); 
	SetReplicateMovement(true);
}

// Called when the game starts or when spawned
void APingPonGoal::BeginPlay()
{
	Super::BeginPlay();
	
}

void APingPonGoal::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	auto Ball = Cast<APingPongBall>(OtherActor);
	if(Ball != nullptr)
	{
		Ball->Destroy();
		Goal += 1;

		TSubclassOf<APingPongPlatform> ClassToFind;
		TArray<AActor*> FoundActors;
		auto PlatBall = UGameplayStatics::GetActorOfClass(GetWorld(), APingPongPlatform::StaticClass());
			auto PlatBallCast = Cast<APingPongPlatform>(PlatBall);
			if(PlatBallCast)
			{
				FVector curloc = PlatBallCast->GetActorLocation() / 2;
				FRotator myrot = PlatBallCast->GetActorRotation() * 2;
				GetWorld()->SpawnActor<APingPongBall>(BallSub, curloc, myrot);
			}
		
		
	}
}

void APingPonGoal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps); 
    
	DOREPLIFETIME(APingPonGoal, Goal); 
}


// Called every frame
void APingPonGoal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool APingPonGoal::Multicast_Goal_Validate()
{
	return true;
}

void APingPonGoal::Multicast_Goal_Implementation()
{
}

void APingPonGoal::Server_Goal_Implementation()
{
	Multicast_Goal();

	
}

bool APingPonGoal::Server_Goal_Validate()
{
	return true;
}


