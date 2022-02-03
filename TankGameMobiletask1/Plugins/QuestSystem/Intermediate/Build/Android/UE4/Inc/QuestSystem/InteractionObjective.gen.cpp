// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/InteractionObjective.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionObjective() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UInteractionObjective_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UInteractionObjective();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UObjective();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UInteractionObjective::StaticRegisterNativesUInteractionObjective()
	{
	}
	UClass* Z_Construct_UClass_UInteractionObjective_NoRegister()
	{
		return UInteractionObjective::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionObjective_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionObjective_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObjective,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionObjective_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InteractionObjective.h" },
		{ "ModuleRelativePath", "Public/InteractionObjective.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionObjective_Statics::NewProp_Target_MetaData[] = {
		{ "AllowedClasses", "IInteractableObject" },
		{ "Category", "Quest System|Interaction Objective" },
		{ "ModuleRelativePath", "Public/InteractionObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionObjective_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionObjective, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractionObjective_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionObjective_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionObjective_Statics::NewProp_Target,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionObjective_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionObjective>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionObjective_Statics::ClassParams = {
		&UInteractionObjective::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractionObjective_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionObjective_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionObjective_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionObjective_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionObjective()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionObjective_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionObjective, 4052739857);
	template<> QUESTSYSTEM_API UClass* StaticClass<UInteractionObjective>()
	{
		return UInteractionObjective::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionObjective(Z_Construct_UClass_UInteractionObjective, &UInteractionObjective::StaticClass, TEXT("/Script/QuestSystem"), TEXT("UInteractionObjective"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionObjective);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
