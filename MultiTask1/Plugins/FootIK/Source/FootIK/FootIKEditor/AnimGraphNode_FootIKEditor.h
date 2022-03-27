// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "AnimGraphNode_SkeletalControlBase.h"
#include "AnimNode_FootIK.h"

#include "AnimGraphNode_FootIKEditor.generated.h"

/**
 * 
 */

//struct FAnimNode_FootIK;
UCLASS()
class FOOTIK_API UAnimGraphNode_FootIKEditor : public UAnimGraphNode_SkeletalControlBase
{
	GENERATED_BODY()

public:
	virtual FText GetTooltipText() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TileType) const override;
	virtual FString GetNodeCategory() const override;
	virtual const FAnimNode_SkeletalControlBase* GetNode() const override;

public:
	FAnimNode_FootIK Node;
};
