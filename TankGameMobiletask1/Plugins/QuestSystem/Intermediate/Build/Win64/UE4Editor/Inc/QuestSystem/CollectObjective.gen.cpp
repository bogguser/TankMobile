// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/CollectObjective.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectObjective() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UCollectObjective_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UCollectObjective();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UObjective();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UCollectObjective::StaticRegisterNativesUCollectObjective()
	{
	}
	UClass* Z_Construct_UClass_UCollectObjective_NoRegister()
	{
		return UCollectObjective::StaticClass();
	}
	struct Z_Construct_UClass_UCollectObjective_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCollectObjective_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObjective,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollectObjective_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CollectObjective.h" },
		{ "ModuleRelativePath", "Public/CollectObjective.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollectObjective_Statics::NewProp_Item_MetaData[] = {
		{ "AllowedClasses", "CollectItem" },
		{ "Category", "Quest System|CollectItem" },
		{ "ModuleRelativePath", "Public/CollectObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollectObjective_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollectObjective, Item), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCollectObjective_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollectObjective_Statics::NewProp_Item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollectObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollectObjective_Statics::NewProp_Item,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollectObjective_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollectObjective>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCollectObjective_Statics::ClassParams = {
		&UCollectObjective::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCollectObjective_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCollectObjective_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCollectObjective_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCollectObjective_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCollectObjective()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCollectObjective_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCollectObjective, 448362440);
	template<> QUESTSYSTEM_API UClass* StaticClass<UCollectObjective>()
	{
		return UCollectObjective::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCollectObjective(Z_Construct_UClass_UCollectObjective, &UCollectObjective::StaticClass, TEXT("/Script/QuestSystem"), TEXT("UCollectObjective"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollectObjective);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
