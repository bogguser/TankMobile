// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/Quest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuest() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuest_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UObjective_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AQuest::execIsCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuest::execTakeQuest)
	{
		P_GET_OBJECT(AActor,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeQuest(Z_Param_Character);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(AQuest::execAddCollectObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCollectObjective();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuest::execAddInteractObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddInteractObjective();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuest::execAddLocationObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddLocationObjective();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuest::execUpdateLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLocation();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void AQuest::StaticRegisterNativesAQuest()
	{
		UClass* Class = AQuest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
			{ "AddCollectObjective", &AQuest::execAddCollectObjective },
			{ "AddInteractObjective", &AQuest::execAddInteractObjective },
			{ "AddLocationObjective", &AQuest::execAddLocationObjective },
#endif // WITH_EDITOR
			{ "IsCompleted", &AQuest::execIsCompleted },
			{ "TakeQuest", &AQuest::execTakeQuest },
#if WITH_EDITOR
			{ "UpdateLocation", &AQuest::execUpdateLocation },
#endif // WITH_EDITOR
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_AQuest_AddCollectObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuest_AddCollectObjective_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Quest System|Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuest_AddCollectObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuest, nullptr, "AddCollectObjective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuest_AddCollectObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_AddCollectObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuest_AddCollectObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuest_AddCollectObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_AQuest_AddInteractObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuest_AddInteractObjective_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Quest System|Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuest_AddInteractObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuest, nullptr, "AddInteractObjective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuest_AddInteractObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_AddInteractObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuest_AddInteractObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuest_AddInteractObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_AQuest_AddLocationObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuest_AddLocationObjective_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Quest System|Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuest_AddLocationObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuest, nullptr, "AddLocationObjective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuest_AddLocationObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_AddLocationObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuest_AddLocationObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuest_AddLocationObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_AQuest_IsCompleted_Statics
	{
		struct Quest_eventIsCompleted_Parms
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
	void Z_Construct_UFunction_AQuest_IsCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Quest_eventIsCompleted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AQuest_IsCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Quest_eventIsCompleted_Parms), &Z_Construct_UFunction_AQuest_IsCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuest_IsCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuest_IsCompleted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuest_IsCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest System|Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuest_IsCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuest, nullptr, "IsCompleted", nullptr, nullptr, sizeof(Quest_eventIsCompleted_Parms), Z_Construct_UFunction_AQuest_IsCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_IsCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuest_IsCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_IsCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuest_IsCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuest_IsCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuest_TakeQuest_Statics
	{
		struct Quest_eventTakeQuest_Parms
		{
			AActor* Character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AQuest_TakeQuest_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventTakeQuest_Parms, Character), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuest_TakeQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuest_TakeQuest_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuest_TakeQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest System|Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuest_TakeQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuest, nullptr, "TakeQuest", nullptr, nullptr, sizeof(Quest_eventTakeQuest_Parms), Z_Construct_UFunction_AQuest_TakeQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_TakeQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuest_TakeQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_TakeQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuest_TakeQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuest_TakeQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_AQuest_UpdateLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuest_UpdateLocation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Quest System|Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuest_UpdateLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuest, nullptr, "UpdateLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuest_UpdateLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuest_UpdateLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuest_UpdateLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuest_UpdateLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	UClass* Z_Construct_UClass_AQuest_NoRegister()
	{
		return AQuest::StaticClass();
	}
	struct Z_Construct_UClass_AQuest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objectives_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objectives_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objectives_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Objectives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStoryQuest_MetaData[];
#endif
		static void NewProp_bIsStoryQuest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStoryQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeepObjectivesOrder_MetaData[];
#endif
		static void NewProp_bKeepObjectivesOrder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepObjectivesOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrerquisedQuest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrerquisedQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTaken_MetaData[];
#endif
		static void NewProp_bIsTaken_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTaken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQuest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AQuest_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AQuest_AddCollectObjective, "AddCollectObjective" }, // 1034500675
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AQuest_AddInteractObjective, "AddInteractObjective" }, // 3123428119
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AQuest_AddLocationObjective, "AddLocationObjective" }, // 240935001
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_AQuest_IsCompleted, "IsCompleted" }, // 1421930533
		{ &Z_Construct_UFunction_AQuest_TakeQuest, "TakeQuest" }, // 3213399941
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AQuest_UpdateLocation, "UpdateLocation" }, // 3346498362
#endif //WITH_EDITOR
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Quest.h" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuest_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Quest System|Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AQuest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuest, Name), METADATA_PARAMS(Z_Construct_UClass_AQuest_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuest_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Quest System|Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AQuest_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuest, Description), METADATA_PARAMS(Z_Construct_UClass_AQuest_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuest_Statics::NewProp_Objectives_Inner_MetaData[] = {
		{ "Category", "Quest System|Quest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuest_Statics::NewProp_Objectives_Inner = { "Objectives", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AQuest_Statics::NewProp_Objectives_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::NewProp_Objectives_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuest_Statics::NewProp_Objectives_MetaData[] = {
		{ "Category", "Quest System|Quest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AQuest_Statics::NewProp_Objectives = { "Objectives", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuest, Objectives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AQuest_Statics::NewProp_Objectives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::NewProp_Objectives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuest_Statics::NewProp_bIsStoryQuest_MetaData[] = {
		{ "Category", "Quest System|Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	void Z_Construct_UClass_AQuest_Statics::NewProp_bIsStoryQuest_SetBit(void* Obj)
	{
		((AQuest*)Obj)->bIsStoryQuest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuest_Statics::NewProp_bIsStoryQuest = { "bIsStoryQuest", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AQuest), &Z_Construct_UClass_AQuest_Statics::NewProp_bIsStoryQuest_SetBit, METADATA_PARAMS(Z_Construct_UClass_AQuest_Statics::NewProp_bIsStoryQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::NewProp_bIsStoryQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuest_Statics::NewProp_bKeepObjectivesOrder_MetaData[] = {
		{ "Category", "Quest System|Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	void Z_Construct_UClass_AQuest_Statics::NewProp_bKeepObjectivesOrder_SetBit(void* Obj)
	{
		((AQuest*)Obj)->bKeepObjectivesOrder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuest_Statics::NewProp_bKeepObjectivesOrder = { "bKeepObjectivesOrder", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AQuest), &Z_Construct_UClass_AQuest_Statics::NewProp_bKeepObjectivesOrder_SetBit, METADATA_PARAMS(Z_Construct_UClass_AQuest_Statics::NewProp_bKeepObjectivesOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::NewProp_bKeepObjectivesOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuest_Statics::NewProp_PrerquisedQuest_MetaData[] = {
		{ "Category", "Quest System|Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuest_Statics::NewProp_PrerquisedQuest = { "PrerquisedQuest", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuest, PrerquisedQuest), Z_Construct_UClass_AQuest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AQuest_Statics::NewProp_PrerquisedQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::NewProp_PrerquisedQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuest_Statics::NewProp_bIsTaken_MetaData[] = {
		{ "Category", "Quest System|Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif
	void Z_Construct_UClass_AQuest_Statics::NewProp_bIsTaken_SetBit(void* Obj)
	{
		((AQuest*)Obj)->bIsTaken = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuest_Statics::NewProp_bIsTaken = { "bIsTaken", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AQuest), &Z_Construct_UClass_AQuest_Statics::NewProp_bIsTaken_SetBit, METADATA_PARAMS(Z_Construct_UClass_AQuest_Statics::NewProp_bIsTaken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::NewProp_bIsTaken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuest_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuest_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuest_Statics::NewProp_Objectives_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuest_Statics::NewProp_Objectives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuest_Statics::NewProp_bIsStoryQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuest_Statics::NewProp_bKeepObjectivesOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuest_Statics::NewProp_PrerquisedQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuest_Statics::NewProp_bIsTaken,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQuest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AQuest_Statics::ClassParams = {
		&AQuest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AQuest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AQuest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQuest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQuest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AQuest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AQuest, 426779806);
	template<> QUESTSYSTEM_API UClass* StaticClass<AQuest>()
	{
		return AQuest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AQuest(Z_Construct_UClass_AQuest, &AQuest::StaticClass, TEXT("/Script/QuestSystem"), TEXT("AQuest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQuest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
