// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/QuestListComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestListComponent() {}
// Cross Module References
	QUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnQuestAction__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuest_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestListComponent_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestListComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UCurrentObjectivesWidget_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_QuestSystem_OnQuestAction__DelegateSignature_Statics
	{
		struct _Script_QuestSystem_eventOnQuestAction_Parms
		{
			AQuest* Quest;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_QuestSystem_OnQuestAction__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_QuestSystem_eventOnQuestAction_Parms, Quest), Z_Construct_UClass_AQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestSystem_OnQuestAction__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestSystem_OnQuestAction__DelegateSignature_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestSystem_OnQuestAction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestListComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestSystem_OnQuestAction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestSystem, nullptr, "OnQuestAction__DelegateSignature", nullptr, nullptr, sizeof(_Script_QuestSystem_eventOnQuestAction_Parms), Z_Construct_UDelegateFunction_QuestSystem_OnQuestAction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestAction__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestSystem_OnQuestAction__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestAction__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnQuestAction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_QuestSystem_OnQuestAction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UQuestListComponent::execSetActiveQuest)
	{
		P_GET_OBJECT(AQuest,Z_Param_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveQuest(Z_Param_Quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestListComponent::execGetActiveQuest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AQuest**)Z_Param__Result=P_THIS->GetActiveQuest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestListComponent::execGetQuests)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AQuest*>*)Z_Param__Result=P_THIS->GetQuests();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestListComponent::execAddQuest)
	{
		P_GET_OBJECT(AQuest,Z_Param_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddQuest(Z_Param_Quest);
		P_NATIVE_END;
	}
	void UQuestListComponent::StaticRegisterNativesUQuestListComponent()
	{
		UClass* Class = UQuestListComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddQuest", &UQuestListComponent::execAddQuest },
			{ "GetActiveQuest", &UQuestListComponent::execGetActiveQuest },
			{ "GetQuests", &UQuestListComponent::execGetQuests },
			{ "SetActiveQuest", &UQuestListComponent::execSetActiveQuest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestListComponent_AddQuest_Statics
	{
		struct QuestListComponent_eventAddQuest_Parms
		{
			AQuest* Quest;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestListComponent_AddQuest_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestListComponent_eventAddQuest_Parms, Quest), Z_Construct_UClass_AQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestListComponent_AddQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestListComponent_AddQuest_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestListComponent_AddQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest System|Quest List" },
		{ "ModuleRelativePath", "Public/QuestListComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestListComponent_AddQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestListComponent, nullptr, "AddQuest", nullptr, nullptr, sizeof(QuestListComponent_eventAddQuest_Parms), Z_Construct_UFunction_UQuestListComponent_AddQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestListComponent_AddQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestListComponent_AddQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestListComponent_AddQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestListComponent_AddQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestListComponent_AddQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestListComponent_GetActiveQuest_Statics
	{
		struct QuestListComponent_eventGetActiveQuest_Parms
		{
			AQuest* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestListComponent_GetActiveQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestListComponent_eventGetActiveQuest_Parms, ReturnValue), Z_Construct_UClass_AQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestListComponent_GetActiveQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestListComponent_GetActiveQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestListComponent_GetActiveQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest System|Quest List" },
		{ "ModuleRelativePath", "Public/QuestListComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestListComponent_GetActiveQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestListComponent, nullptr, "GetActiveQuest", nullptr, nullptr, sizeof(QuestListComponent_eventGetActiveQuest_Parms), Z_Construct_UFunction_UQuestListComponent_GetActiveQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestListComponent_GetActiveQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestListComponent_GetActiveQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestListComponent_GetActiveQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestListComponent_GetActiveQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestListComponent_GetActiveQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestListComponent_GetQuests_Statics
	{
		struct QuestListComponent_eventGetQuests_Parms
		{
			TArray<AQuest*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestListComponent_GetQuests_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestListComponent_GetQuests_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestListComponent_GetQuests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestListComponent_eventGetQuests_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestListComponent_GetQuests_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestListComponent_GetQuests_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestListComponent_GetQuests_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestListComponent_GetQuests_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestListComponent_GetQuests_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestListComponent_GetQuests_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest System|Quest List" },
		{ "ModuleRelativePath", "Public/QuestListComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestListComponent_GetQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestListComponent, nullptr, "GetQuests", nullptr, nullptr, sizeof(QuestListComponent_eventGetQuests_Parms), Z_Construct_UFunction_UQuestListComponent_GetQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestListComponent_GetQuests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestListComponent_GetQuests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestListComponent_GetQuests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestListComponent_GetQuests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestListComponent_GetQuests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestListComponent_SetActiveQuest_Statics
	{
		struct QuestListComponent_eventSetActiveQuest_Parms
		{
			AQuest* Quest;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestListComponent_SetActiveQuest_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestListComponent_eventSetActiveQuest_Parms, Quest), Z_Construct_UClass_AQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestListComponent_SetActiveQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestListComponent_SetActiveQuest_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestListComponent_SetActiveQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest System|Quest List" },
		{ "ModuleRelativePath", "Public/QuestListComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestListComponent_SetActiveQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestListComponent, nullptr, "SetActiveQuest", nullptr, nullptr, sizeof(QuestListComponent_eventSetActiveQuest_Parms), Z_Construct_UFunction_UQuestListComponent_SetActiveQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestListComponent_SetActiveQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestListComponent_SetActiveQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestListComponent_SetActiveQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestListComponent_SetActiveQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestListComponent_SetActiveQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestListComponent_NoRegister()
	{
		return UQuestListComponent::StaticClass();
	}
	struct Z_Construct_UClass_UQuestListComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActiveQuestChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActiveQuestChanged;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AcceptedQuests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptedQuests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AcceptedQuests;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveQuest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentObjectivesWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CurrentObjectivesWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestListComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestListComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestListComponent_AddQuest, "AddQuest" }, // 2492611807
		{ &Z_Construct_UFunction_UQuestListComponent_GetActiveQuest, "GetActiveQuest" }, // 1063615385
		{ &Z_Construct_UFunction_UQuestListComponent_GetQuests, "GetQuests" }, // 2875547422
		{ &Z_Construct_UFunction_UQuestListComponent_SetActiveQuest, "SetActiveQuest" }, // 3055203785
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestListComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "QuestSystem" },
		{ "IncludePath", "QuestListComponent.h" },
		{ "ModuleRelativePath", "Public/QuestListComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestListComponent_Statics::NewProp_OnActiveQuestChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestListComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestListComponent_Statics::NewProp_OnActiveQuestChanged = { "OnActiveQuestChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestListComponent, OnActiveQuestChanged), Z_Construct_UDelegateFunction_QuestSystem_OnQuestAction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UQuestListComponent_Statics::NewProp_OnActiveQuestChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestListComponent_Statics::NewProp_OnActiveQuestChanged_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestListComponent_Statics::NewProp_AcceptedQuests_Inner = { "AcceptedQuests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestListComponent_Statics::NewProp_AcceptedQuests_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestListComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestListComponent_Statics::NewProp_AcceptedQuests = { "AcceptedQuests", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestListComponent, AcceptedQuests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestListComponent_Statics::NewProp_AcceptedQuests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestListComponent_Statics::NewProp_AcceptedQuests_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestListComponent_Statics::NewProp_ActiveQuest_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestListComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestListComponent_Statics::NewProp_ActiveQuest = { "ActiveQuest", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestListComponent, ActiveQuest), Z_Construct_UClass_AQuest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestListComponent_Statics::NewProp_ActiveQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestListComponent_Statics::NewProp_ActiveQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestListComponent_Statics::NewProp_CurrentObjectivesWidgetClass_MetaData[] = {
		{ "Category", "Quest System|Quest List" },
		{ "ModuleRelativePath", "Public/QuestListComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UQuestListComponent_Statics::NewProp_CurrentObjectivesWidgetClass = { "CurrentObjectivesWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestListComponent, CurrentObjectivesWidgetClass), Z_Construct_UClass_UCurrentObjectivesWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UQuestListComponent_Statics::NewProp_CurrentObjectivesWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestListComponent_Statics::NewProp_CurrentObjectivesWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestListComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestListComponent_Statics::NewProp_OnActiveQuestChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestListComponent_Statics::NewProp_AcceptedQuests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestListComponent_Statics::NewProp_AcceptedQuests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestListComponent_Statics::NewProp_ActiveQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestListComponent_Statics::NewProp_CurrentObjectivesWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestListComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestListComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestListComponent_Statics::ClassParams = {
		&UQuestListComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestListComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestListComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestListComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestListComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestListComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestListComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestListComponent, 1290484617);
	template<> QUESTSYSTEM_API UClass* StaticClass<UQuestListComponent>()
	{
		return UQuestListComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestListComponent(Z_Construct_UClass_UQuestListComponent, &UQuestListComponent::StaticClass, TEXT("/Script/QuestSystem"), TEXT("UQuestListComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestListComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
