// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNode_FootIK.h"
#include <Runtime/Engine/Classes/Animation/AnimNodeBase.h>


void FAnimNode_FootIK::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	Super::Initialize_AnyThread(Context);

	LeftFoot.EffectorTarget.Initialize(Context.AnimInstanceProxy);
	LeftFoot.JoinTarget.Initialize(Context.AnimInstanceProxy);

	RightFoot.EffectorTarget.Initialize(Context.AnimInstanceProxy);
	RightFoot.JoinTarget.Initialize(Context.AnimInstanceProxy);
}

void FAnimNode_FootIK::InitializeBoneReferences(const FBoneContainer& RequiredBones)
{
	Super::InitializeBoneReferences(RequiredBones);

	Pelvis.BoneReference.Initialize(RequiredBones);

	LeftFoot.EffectorTarget.InitializeBoneReferences(RequiredBones);
	LeftFoot.JoinTarget.InitializeBoneReferences(RequiredBones);

	RightFoot.EffectorTarget.InitializeBoneReferences(RequiredBones);
	RightFoot.JoinTarget.InitializeBoneReferences(RequiredBones);

}

