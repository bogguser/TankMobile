#include "TraceGun.h"
#include "DrawDebugHelpers.h"
#include "Components/ArrowComponent.h"
#include "Kismet/KismetSystemLibrary.h"


void ATraceGun::Fire()
{
	// if(LineShell == 0)
	// {
	// 	return;
	// }
	Super::Fire();
	FVector StartTrace = FireOriginPoint->GetComponentLocation();
	FVector EndTrace = StartTrace + GetActorForwardVector() * TraceDistance;

	const EDrawDebugTrace::Type DrawDebugTrace = bEnableDebug ? EDrawDebugTrace::ForOneFrame : EDrawDebugTrace::None;
	FHitResult HitResult;

	UKismetSystemLibrary::LineTraceSingle(GetWorld(), StartTrace, EndTrace, TraceChannel, false, {this}, DrawDebugTrace, HitResult,
		true, FColor::Red,FColor::Green, 10.f );
	OnBounce(HitResult,EndTrace); 
	//--LineShell;
}

void ATraceGun::OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity)
{
	if(auto damageTaker = Cast<IDamageTaker>(ImpactResult.GetActor()))
	{
		FTakedDamageData takeDamageData;
		takeDamageData.DamageData = DamageData;
		takeDamageData.Instigator = this;
	 	
		damageTaker->TakeDamage(takeDamageData);
	}
}