// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/CollectActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectActor() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_ACollectActor_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_ACollectActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UCollectItem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACollectActor::execOnCollectFinished)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorCollectWithObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCollectFinished(Z_Param_ActorCollectWithObject);
		P_NATIVE_END;
	}
	void ACollectActor::StaticRegisterNativesACollectActor()
	{
		UClass* Class = ACollectActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCollectFinished", &ACollectActor::execOnCollectFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACollectActor_OnCollectFinished_Statics
	{
		struct CollectActor_eventOnCollectFinished_Parms
		{
			AActor* ActorCollectWithObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorCollectWithObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollectActor_OnCollectFinished_Statics::NewProp_ActorCollectWithObject = { "ActorCollectWithObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CollectActor_eventOnCollectFinished_Parms, ActorCollectWithObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollectActor_OnCollectFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollectActor_OnCollectFinished_Statics::NewProp_ActorCollectWithObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollectActor_OnCollectFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest System" },
		{ "ModuleRelativePath", "Public/CollectActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollectActor_OnCollectFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollectActor, nullptr, "OnCollectFinished", nullptr, nullptr, sizeof(CollectActor_eventOnCollectFinished_Parms), Z_Construct_UFunction_ACollectActor_OnCollectFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectActor_OnCollectFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollectActor_OnCollectFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollectActor_OnCollectFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollectActor_OnCollectFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollectActor_OnCollectFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACollectActor_NoRegister()
	{
		return ACollectActor::StaticClass();
	}
	struct Z_Construct_UClass_ACollectActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACollectActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACollectActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACollectActor_OnCollectFinished, "OnCollectFinished" }, // 1621886112
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CollectActor.h" },
		{ "ModuleRelativePath", "Public/CollectActor.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACollectActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCollectItem_NoRegister, (int32)VTABLE_OFFSET(ACollectActor, ICollectItem), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACollectActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollectActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACollectActor_Statics::ClassParams = {
		&ACollectActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACollectActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACollectActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACollectActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACollectActor, 2267395886);
	template<> QUESTSYSTEM_API UClass* StaticClass<ACollectActor>()
	{
		return ACollectActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACollectActor(Z_Construct_UClass_ACollectActor, &ACollectActor::StaticClass, TEXT("/Script/QuestSystem"), TEXT("ACollectActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollectActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
