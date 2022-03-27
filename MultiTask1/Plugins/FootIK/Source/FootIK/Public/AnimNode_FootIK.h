// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "AnimNode_FootIK.generated.h"

USTRUCT(BlueprintType)
struct FPelvis
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	FBoneReference BoneReference;

	UPROPERTY(EditAnywhere)
	float Offset;
	UPROPERTY(EditAnywhere)
	FVector Translation;
};

USTRUCT(BlueprintType)
struct FFoot
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FBoneSocketTarget EffectorTarget;
	UPROPERTY(EditAnywhere)
	FVector EffectorLocation;

	UPROPERTY(EditAnywhere)
	FName SocketName;
	
	UPROPERTY(EditAnywhere)
	FBoneSocketTarget JoinTarget;
	UPROPERTY(EditAnywhere)
	FVector JoinTargetLocation;

	UPROPERTY(EditAnywhere)
	FVector Location;
	
	UPROPERTY(EditAnywhere)
	FRotator Rotation;
	
	UPROPERTY(EditAnywhere)
	bool Hit;

	UPROPERTY(EditAnywhere)
	float Offset;
	
	UPROPERTY(EditAnywhere)
	FVector HitNormal;

	UPROPERTY(EditAnywhere)
	float HitNormalMax;

};


USTRUCT(BlueprintInternalUseOnly)
struct FOOTIK_API FAnimNode_FootIK : public FAnimNode_SkeletalControlBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FPelvis Pelvis;
	UPROPERTY(EditAnywhere)
	FFoot LeftFoot;
	UPROPERTY(EditAnywhere)
	FFoot RightFoot;

	UPROPERTY(EditAnywhere)
	float OffsetRotation;
	UPROPERTY(EditAnywhere)
	float OffsetAlpha;

public:
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	// virtual void EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms) override;
	// virtual bool IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones) override;
	virtual  void InitializeBoneReferences(const FBoneContainer& RequiredBones) override;
};
