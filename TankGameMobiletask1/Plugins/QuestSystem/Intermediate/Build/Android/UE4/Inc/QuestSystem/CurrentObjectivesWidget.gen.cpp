// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/CurrentObjectivesWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurrentObjectivesWidget() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UCurrentObjectivesWidget_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UCurrentObjectivesWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuest_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UObjectiveWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCurrentObjectivesWidget::execSetCurrentObjectives)
	{
		P_GET_OBJECT(AQuest,Z_Param_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentObjectives(Z_Param_Quest);
		P_NATIVE_END;
	}
	void UCurrentObjectivesWidget::StaticRegisterNativesUCurrentObjectivesWidget()
	{
		UClass* Class = UCurrentObjectivesWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCurrentObjectives", &UCurrentObjectivesWidget::execSetCurrentObjectives },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCurrentObjectivesWidget_SetCurrentObjectives_Statics
	{
		struct CurrentObjectivesWidget_eventSetCurrentObjectives_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCurrentObjectivesWidget_SetCurrentObjectives_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurrentObjectivesWidget_eventSetCurrentObjectives_Parms, Quest), Z_Construct_UClass_AQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurrentObjectivesWidget_SetCurrentObjectives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrentObjectivesWidget_SetCurrentObjectives_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurrentObjectivesWidget_SetCurrentObjectives_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CurrentObjectivesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurrentObjectivesWidget_SetCurrentObjectives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurrentObjectivesWidget, nullptr, "SetCurrentObjectives", nullptr, nullptr, sizeof(CurrentObjectivesWidget_eventSetCurrentObjectives_Parms), Z_Construct_UFunction_UCurrentObjectivesWidget_SetCurrentObjectives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrentObjectivesWidget_SetCurrentObjectives_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurrentObjectivesWidget_SetCurrentObjectives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrentObjectivesWidget_SetCurrentObjectives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurrentObjectivesWidget_SetCurrentObjectives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCurrentObjectivesWidget_SetCurrentObjectives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCurrentObjectivesWidget_NoRegister()
	{
		return UCurrentObjectivesWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCurrentObjectivesWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectiveWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectivesList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectivesList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurrentObjectivesWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCurrentObjectivesWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurrentObjectivesWidget_SetCurrentObjectives, "SetCurrentObjectives" }, // 832226010
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrentObjectivesWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CurrentObjectivesWidget.h" },
		{ "ModuleRelativePath", "Public/CurrentObjectivesWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrentObjectivesWidget_Statics::NewProp_ObjectiveWidgetClass_MetaData[] = {
		{ "Category", "CurrentObjectivesWidget" },
		{ "ModuleRelativePath", "Public/CurrentObjectivesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCurrentObjectivesWidget_Statics::NewProp_ObjectiveWidgetClass = { "ObjectiveWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrentObjectivesWidget, ObjectiveWidgetClass), Z_Construct_UClass_UObjectiveWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCurrentObjectivesWidget_Statics::NewProp_ObjectiveWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrentObjectivesWidget_Statics::NewProp_ObjectiveWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurrentObjectivesWidget_Statics::NewProp_ObjectivesList_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CurrentObjectivesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurrentObjectivesWidget_Statics::NewProp_ObjectivesList = { "ObjectivesList", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurrentObjectivesWidget, ObjectivesList), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurrentObjectivesWidget_Statics::NewProp_ObjectivesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrentObjectivesWidget_Statics::NewProp_ObjectivesList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurrentObjectivesWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrentObjectivesWidget_Statics::NewProp_ObjectiveWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrentObjectivesWidget_Statics::NewProp_ObjectivesList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurrentObjectivesWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurrentObjectivesWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurrentObjectivesWidget_Statics::ClassParams = {
		&UCurrentObjectivesWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCurrentObjectivesWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurrentObjectivesWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurrentObjectivesWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurrentObjectivesWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurrentObjectivesWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurrentObjectivesWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurrentObjectivesWidget, 492175601);
	template<> QUESTSYSTEM_API UClass* StaticClass<UCurrentObjectivesWidget>()
	{
		return UCurrentObjectivesWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurrentObjectivesWidget(Z_Construct_UClass_UCurrentObjectivesWidget, &UCurrentObjectivesWidget::StaticClass, TEXT("/Script/QuestSystem"), TEXT("UCurrentObjectivesWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurrentObjectivesWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
