// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/CollectItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectItem() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UCollectItem_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UCollectItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
// End Cross Module References
	void UCollectItem::StaticRegisterNativesUCollectItem()
	{
	}
	UClass* Z_Construct_UClass_UCollectItem_NoRegister()
	{
		return UCollectItem::StaticClass();
	}
	struct Z_Construct_UClass_UCollectItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCollectItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollectItem_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CollectItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollectItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICollectItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCollectItem_Statics::ClassParams = {
		&UCollectItem::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCollectItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCollectItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCollectItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCollectItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCollectItem, 986669286);
	template<> QUESTSYSTEM_API UClass* StaticClass<UCollectItem>()
	{
		return UCollectItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCollectItem(Z_Construct_UClass_UCollectItem, &UCollectItem::StaticClass, TEXT("/Script/QuestSystem"), TEXT("UCollectItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollectItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
