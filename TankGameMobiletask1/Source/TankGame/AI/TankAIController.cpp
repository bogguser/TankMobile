#include "TankAIController.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "TankGame/Characters/EnemyTank.h"

ATankAIController::ATankAIController()
{
	PrimaryActorTick.bStartWithTickEnabled = true;

	PrimaryActorTick.bCanEverTick = true;
}

void ATankAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	Tank = GetPawn<AEnemyTank>();
}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}


void ATankAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if(Tank != nullptr)
	{
		ProccesTargeting(DeltaSeconds);
	}
	
}

bool ATankAIController::CanFireTo(AActor* InTarget) const
{
	if(InTarget != nullptr)
	{
		FRotator ToTargetRotation = UKismetMathLibrary::FindLookAtRotation(Tank->GetTurretPoint()->GetComponentLocation(), Target->GetActorLocation());

		FHitResult HitResult;
		EDrawDebugTrace::Type DrawDebugTrace = bDrawDebugCheckFire ? EDrawDebugTrace::ForOneFrame : EDrawDebugTrace::None;
		UKismetSystemLibrary::LineTraceSingle(GetWorld(), Tank->GetActorLocation(), InTarget->GetActorLocation(),
			CheckFireTraceChannel, false, {Tank, Target}, DrawDebugTrace, HitResult, false);
		
		return FMath::Abs(Tank->GetTurretPoint()->GetComponentRotation().Yaw - ToTargetRotation.Yaw) < FireAccuracy &&
			FVector::DistSquared2D(Tank->GetActorLocation(),Target->GetActorLocation()) < TargetDetectRadius * TargetDetectRadius &&
				!HitResult.bBlockingHit;
	}
	return false;
}

void ATankAIController::UpdateTarget()
{
	Target = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	
}

void ATankAIController::ProccesTargeting(float DeltaTime)
{
	UpdateTarget();

	if(Target != nullptr)
	{
		Tank->TurretRotationTo(Target->GetActorLocation(), DeltaTime);


		if(CanFireTo(Target))
		{
			if(!Tank->IsFiring())
			{
				Tank->StartFire();
			}
		}
		else
		{
			Tank->StopFire();
			ProccessMovement(DeltaTime);
			
		}
	}
	
}

void ATankAIController::ProccessMovement(float DeltaTime)
{
	if(Tank->PatrolPoints.Num() == 0)
	{
		return;
	}

	auto PatrolPoint = Tank->PatrolPoints[CurrentPatrolPointIndex];

	auto TargetRotation = UKismetMathLibrary::FindLookAtRotation(Tank->GetActorLocation(), PatrolPoint->GetActorLocation());
	Tank->ProccesRotation(DeltaTime, TargetRotation);

	if(FMath::IsNearlyEqual(Tank->GetActorRotation().Yaw,TargetRotation.Yaw, 2.f))
	{
		Tank->ProccesMovement(DeltaTime);

		if(FVector::DistSquared2D(Tank->GetActorLocation(), PatrolPoint->GetActorLocation()) <= MovementAcceptRaidus * MovementAcceptRaidus)
		{
			CurrentPatrolPointIndex++;
			if(!Tank->PatrolPoints.IsValidIndex(CurrentPatrolPointIndex))
			{
				CurrentPatrolPointIndex = 0;
			}
		}
	}
}
