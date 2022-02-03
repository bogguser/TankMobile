// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/InteractableActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableActor() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AInteractableActor_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AInteractableActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UIInteractableObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AInteractableActor::execOnInteractionFinished)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorInteractedWithObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractionFinished(Z_Param_ActorInteractedWithObject);
		P_NATIVE_END;
	}
	void AInteractableActor::StaticRegisterNativesAInteractableActor()
	{
		UClass* Class = AInteractableActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInteractionFinished", &AInteractableActor::execOnInteractionFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInteractableActor_OnInteractionFinished_Statics
	{
		struct InteractableActor_eventOnInteractionFinished_Parms
		{
			AActor* ActorInteractedWithObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorInteractedWithObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableActor_OnInteractionFinished_Statics::NewProp_ActorInteractedWithObject = { "ActorInteractedWithObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableActor_eventOnInteractionFinished_Parms, ActorInteractedWithObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableActor_OnInteractionFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableActor_OnInteractionFinished_Statics::NewProp_ActorInteractedWithObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractableActor_OnInteractionFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest System" },
		{ "ModuleRelativePath", "Public/InteractableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableActor_OnInteractionFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableActor, nullptr, "OnInteractionFinished", nullptr, nullptr, sizeof(InteractableActor_eventOnInteractionFinished_Parms), Z_Construct_UFunction_AInteractableActor_OnInteractionFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableActor_OnInteractionFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractableActor_OnInteractionFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableActor_OnInteractionFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractableActor_OnInteractionFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractableActor_OnInteractionFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInteractableActor_NoRegister()
	{
		return AInteractableActor::StaticClass();
	}
	struct Z_Construct_UClass_AInteractableActor_Statics
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
	UObject* (*const Z_Construct_UClass_AInteractableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractableActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractableActor_OnInteractionFinished, "OnInteractionFinished" }, // 3205427509
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableActor.h" },
		{ "ModuleRelativePath", "Public/InteractableActor.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractableActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIInteractableObject_NoRegister, (int32)VTABLE_OFFSET(AInteractableActor, IIInteractableObject), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractableActor_Statics::ClassParams = {
		&AInteractableActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AInteractableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractableActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractableActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractableActor, 2025917376);
	template<> QUESTSYSTEM_API UClass* StaticClass<AInteractableActor>()
	{
		return AInteractableActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractableActor(Z_Construct_UClass_AInteractableActor, &AInteractableActor::StaticClass, TEXT("/Script/QuestSystem"), TEXT("AInteractableActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
