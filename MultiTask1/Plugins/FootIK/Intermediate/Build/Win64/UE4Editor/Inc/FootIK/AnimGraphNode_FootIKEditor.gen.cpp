// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FootIK/FootIKEditor/AnimGraphNode_FootIKEditor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_FootIKEditor() {}
// Cross Module References
	FOOTIK_API UClass* Z_Construct_UClass_UAnimGraphNode_FootIKEditor_NoRegister();
	FOOTIK_API UClass* Z_Construct_UClass_UAnimGraphNode_FootIKEditor();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_FootIK();
// End Cross Module References
	void UAnimGraphNode_FootIKEditor::StaticRegisterNativesUAnimGraphNode_FootIKEditor()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_FootIKEditor_NoRegister()
	{
		return UAnimGraphNode_FootIKEditor::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_FootIKEditor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_FootIKEditor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FootIK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_FootIKEditor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n *///struct FAnimNode_FootIK;\n" },
		{ "IncludePath", "FootIKEditor/AnimGraphNode_FootIKEditor.h" },
		{ "ModuleRelativePath", "FootIKEditor/AnimGraphNode_FootIKEditor.h" },
		{ "ToolTip", "//struct FAnimNode_FootIK;" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_FootIKEditor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_FootIKEditor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_FootIKEditor_Statics::ClassParams = {
		&UAnimGraphNode_FootIKEditor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_FootIKEditor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_FootIKEditor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_FootIKEditor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_FootIKEditor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_FootIKEditor, 1120649217);
	template<> FOOTIK_API UClass* StaticClass<UAnimGraphNode_FootIKEditor>()
	{
		return UAnimGraphNode_FootIKEditor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_FootIKEditor(Z_Construct_UClass_UAnimGraphNode_FootIKEditor, &UAnimGraphNode_FootIKEditor::StaticClass, TEXT("/Script/FootIK"), TEXT("UAnimGraphNode_FootIKEditor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_FootIKEditor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
