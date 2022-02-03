// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/QuestSystemCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestSystemCharacter() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuestSystemCharacter_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuestSystemCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestDialog_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UIInteractableObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AQuestSystemCharacter::execOnQuestDialogClosed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestDialogClosed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuestSystemCharacter::execbAllertActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->bAllertActive();
		P_NATIVE_END;
	}
	void AQuestSystemCharacter::StaticRegisterNativesAQuestSystemCharacter()
	{
		UClass* Class = AQuestSystemCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "bAllertActive", &AQuestSystemCharacter::execbAllertActive },
			{ "OnQuestDialogClosed", &AQuestSystemCharacter::execOnQuestDialogClosed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AQuestSystemCharacter_bAllertActive_Statics
	{
		struct QuestSystemCharacter_eventbAllertActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AQuestSystemCharacter_bAllertActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestSystemCharacter_eventbAllertActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AQuestSystemCharacter_bAllertActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestSystemCharacter_eventbAllertActive_Parms), &Z_Construct_UFunction_AQuestSystemCharacter_bAllertActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuestSystemCharacter_bAllertActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestSystemCharacter_bAllertActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestSystemCharacter_bAllertActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystemCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestSystemCharacter_bAllertActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestSystemCharacter, nullptr, "bAllertActive", nullptr, nullptr, sizeof(QuestSystemCharacter_eventbAllertActive_Parms), Z_Construct_UFunction_AQuestSystemCharacter_bAllertActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestSystemCharacter_bAllertActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestSystemCharacter_bAllertActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestSystemCharacter_bAllertActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestSystemCharacter_bAllertActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuestSystemCharacter_bAllertActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuestSystemCharacter_OnQuestDialogClosed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestSystemCharacter_OnQuestDialogClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystemCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestSystemCharacter_OnQuestDialogClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestSystemCharacter, nullptr, "OnQuestDialogClosed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestSystemCharacter_OnQuestDialogClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestSystemCharacter_OnQuestDialogClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestSystemCharacter_OnQuestDialogClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuestSystemCharacter_OnQuestDialogClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AQuestSystemCharacter_NoRegister()
	{
		return AQuestSystemCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AQuestSystemCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestDialogClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_QuestDialogClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractingActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractingActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQuestSystemCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AQuestSystemCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AQuestSystemCharacter_bAllertActive, "bAllertActive" }, // 2275665431
		{ &Z_Construct_UFunction_AQuestSystemCharacter_OnQuestDialogClosed, "OnQuestDialogClosed" }, // 4010970343
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestSystemCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "QuestSystemCharacter.h" },
		{ "ModuleRelativePath", "Public/QuestSystemCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestSystemCharacter_Statics::NewProp_QuestDialogClass_MetaData[] = {
		{ "Category", "QuestSystemCharacter" },
		{ "ModuleRelativePath", "Public/QuestSystemCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AQuestSystemCharacter_Statics::NewProp_QuestDialogClass = { "QuestDialogClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestSystemCharacter, QuestDialogClass), Z_Construct_UClass_UQuestDialog_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AQuestSystemCharacter_Statics::NewProp_QuestDialogClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestSystemCharacter_Statics::NewProp_QuestDialogClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestSystemCharacter_Statics::NewProp_InteractingActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestSystemCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuestSystemCharacter_Statics::NewProp_InteractingActor = { "InteractingActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestSystemCharacter, InteractingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AQuestSystemCharacter_Statics::NewProp_InteractingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestSystemCharacter_Statics::NewProp_InteractingActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQuestSystemCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestSystemCharacter_Statics::NewProp_QuestDialogClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestSystemCharacter_Statics::NewProp_InteractingActor,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AQuestSystemCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIInteractableObject_NoRegister, (int32)VTABLE_OFFSET(AQuestSystemCharacter, IIInteractableObject), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQuestSystemCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuestSystemCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AQuestSystemCharacter_Statics::ClassParams = {
		&AQuestSystemCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AQuestSystemCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AQuestSystemCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AQuestSystemCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestSystemCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQuestSystemCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AQuestSystemCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AQuestSystemCharacter, 3900051524);
	template<> QUESTSYSTEM_API UClass* StaticClass<AQuestSystemCharacter>()
	{
		return AQuestSystemCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AQuestSystemCharacter(Z_Construct_UClass_AQuestSystemCharacter, &AQuestSystemCharacter::StaticClass, TEXT("/Script/QuestSystem"), TEXT("AQuestSystemCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQuestSystemCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
