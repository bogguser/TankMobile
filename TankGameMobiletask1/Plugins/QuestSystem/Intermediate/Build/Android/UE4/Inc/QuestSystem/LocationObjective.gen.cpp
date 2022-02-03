// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/LocationObjective.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocationObjective() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_ULocationObjective_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_ULocationObjective();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UObjective();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ULocationObjective::StaticRegisterNativesULocationObjective()
	{
	}
	UClass* Z_Construct_UClass_ULocationObjective_NoRegister()
	{
		return ULocationObjective::StaticClass();
	}
	struct Z_Construct_UClass_ULocationObjective_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Marker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Marker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocationObjective_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObjective,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocationObjective_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LocationObjective.h" },
		{ "ModuleRelativePath", "Public/LocationObjective.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocationObjective_Statics::NewProp_Marker_MetaData[] = {
		{ "AllowedClasses", "LocationMarker" },
		{ "Category", "Quest System|Location Objective" },
		{ "ModuleRelativePath", "Public/LocationObjective.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULocationObjective_Statics::NewProp_Marker = { "Marker", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocationObjective, Marker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULocationObjective_Statics::NewProp_Marker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocationObjective_Statics::NewProp_Marker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocationObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocationObjective_Statics::NewProp_Marker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocationObjective_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocationObjective>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocationObjective_Statics::ClassParams = {
		&ULocationObjective::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULocationObjective_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULocationObjective_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULocationObjective_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocationObjective_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocationObjective()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocationObjective_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocationObjective, 1494727393);
	template<> QUESTSYSTEM_API UClass* StaticClass<ULocationObjective>()
	{
		return ULocationObjective::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocationObjective(Z_Construct_UClass_ULocationObjective, &ULocationObjective::StaticClass, TEXT("/Script/QuestSystem"), TEXT("ULocationObjective"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocationObjective);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
