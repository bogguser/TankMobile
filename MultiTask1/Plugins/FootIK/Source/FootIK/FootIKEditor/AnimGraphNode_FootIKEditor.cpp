// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimGraphNode_FootIKEditor.h"


FText UAnimGraphNode_FootIKEditor::GetTooltipText() const
{
	return {};   //LOCTEXT("FootText", "FootText");
}

FText UAnimGraphNode_FootIKEditor::GetNodeTitle(ENodeTitleType::Type TileType) const
{
	return {};   //LOCTEXT("FootText", "FootText");
}

FString UAnimGraphNode_FootIKEditor::GetNodeCategory() const
{
	return {};   //LOCTEXT("FootText", "FootText");
}

const FAnimNode_SkeletalControlBase* UAnimGraphNode_FootIKEditor::GetNode() const
{
	return &Node;
}