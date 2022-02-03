// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/QuestLogWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestLogWidget() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestLogWidget_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestLogWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestListComponent_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuest_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestDescriptionWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestListEntry_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQuestLogWidget::execOnActiveQuestChanged)
	{
		P_GET_OBJECT(AQuest,Z_Param_ActiveQuest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActiveQuestChanged(Z_Param_ActiveQuest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestLogWidget::execInit)
	{
		P_GET_OBJECT(UQuestListComponent,Z_Param_QuestList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_QuestList);
		P_NATIVE_END;
	}
	void UQuestLogWidget::StaticRegisterNativesUQuestLogWidget()
	{
		UClass* Class = UQuestLogWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UQuestLogWidget::execInit },
			{ "OnActiveQuestChanged", &UQuestLogWidget::execOnActiveQuestChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestLogWidget_Init_Statics
	{
		struct QuestLogWidget_eventInit_Parms
		{
			UQuestListComponent* QuestList;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestLogWidget_Init_Statics::NewProp_QuestList_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestLogWidget_Init_Statics::NewProp_QuestList = { "QuestList", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestLogWidget_eventInit_Parms, QuestList), Z_Construct_UClass_UQuestListComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestLogWidget_Init_Statics::NewProp_QuestList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestLogWidget_Init_Statics::NewProp_QuestList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestLogWidget_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestLogWidget_Init_Statics::NewProp_QuestList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestLogWidget_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest System|Quest Log Widget" },
		{ "ModuleRelativePath", "Public/QuestLogWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestLogWidget_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestLogWidget, nullptr, "Init", nullptr, nullptr, sizeof(QuestLogWidget_eventInit_Parms), Z_Construct_UFunction_UQuestLogWidget_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestLogWidget_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestLogWidget_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestLogWidget_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestLogWidget_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestLogWidget_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestLogWidget_OnActiveQuestChanged_Statics
	{
		struct QuestLogWidget_eventOnActiveQuestChanged_Parms
		{
			AQuest* ActiveQuest;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveQuest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestLogWidget_OnActiveQuestChanged_Statics::NewProp_ActiveQuest = { "ActiveQuest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestLogWidget_eventOnActiveQuestChanged_Parms, ActiveQuest), Z_Construct_UClass_AQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestLogWidget_OnActiveQuestChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestLogWidget_OnActiveQuestChanged_Statics::NewProp_ActiveQuest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestLogWidget_OnActiveQuestChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestLogWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestLogWidget_OnActiveQuestChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestLogWidget, nullptr, "OnActiveQuestChanged", nullptr, nullptr, sizeof(QuestLogWidget_eventOnActiveQuestChanged_Parms), Z_Construct_UFunction_UQuestLogWidget_OnActiveQuestChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestLogWidget_OnActiveQuestChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestLogWidget_OnActiveQuestChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestLogWidget_OnActiveQuestChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestLogWidget_OnActiveQuestChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestLogWidget_OnActiveQuestChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestLogWidget_NoRegister()
	{
		return UQuestLogWidget::StaticClass();
	}
	struct Z_Construct_UClass_UQuestLogWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoryQuestList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoryQuestList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideQuestList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideQuestList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveQuestDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveQuestDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestEntryClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_QuestEntryClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestEntries_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestEntries_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_QuestEntries;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestLogWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestLogWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestLogWidget_Init, "Init" }, // 1658932491
		{ &Z_Construct_UFunction_UQuestLogWidget_OnActiveQuestChanged, "OnActiveQuestChanged" }, // 812691039
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestLogWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestLogWidget.h" },
		{ "ModuleRelativePath", "Public/QuestLogWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_StoryQuestList_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestLogWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_StoryQuestList = { "StoryQuestList", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestLogWidget, StoryQuestList), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_StoryQuestList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_StoryQuestList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_SideQuestList_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestLogWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_SideQuestList = { "SideQuestList", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestLogWidget, SideQuestList), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_SideQuestList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_SideQuestList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_ActiveQuestDescription_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestLogWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_ActiveQuestDescription = { "ActiveQuestDescription", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestLogWidget, ActiveQuestDescription), Z_Construct_UClass_UQuestDescriptionWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_ActiveQuestDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_ActiveQuestDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_QuestEntryClass_MetaData[] = {
		{ "Category", "QuestLogWidget" },
		{ "ModuleRelativePath", "Public/QuestLogWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_QuestEntryClass = { "QuestEntryClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestLogWidget, QuestEntryClass), Z_Construct_UClass_UQuestListEntry_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_QuestEntryClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_QuestEntryClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_QuestEntries_ValueProp = { "QuestEntries", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UQuestListEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_QuestEntries_Key_KeyProp = { "QuestEntries_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_QuestEntries_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestLogWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_QuestEntries = { "QuestEntries", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestLogWidget, QuestEntries), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_QuestEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_QuestEntries_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestLogWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_StoryQuestList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_SideQuestList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_ActiveQuestDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_QuestEntryClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_QuestEntries_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_QuestEntries_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestLogWidget_Statics::NewProp_QuestEntries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestLogWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestLogWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestLogWidget_Statics::ClassParams = {
		&UQuestLogWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestLogWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestLogWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestLogWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestLogWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestLogWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestLogWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestLogWidget, 2861033046);
	template<> QUESTSYSTEM_API UClass* StaticClass<UQuestLogWidget>()
	{
		return UQuestLogWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestLogWidget(Z_Construct_UClass_UQuestLogWidget, &UQuestLogWidget::StaticClass, TEXT("/Script/QuestSystem"), TEXT("UQuestLogWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestLogWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
