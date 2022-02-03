// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/IInteractableObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIInteractableObject() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UIInteractableObject_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UIInteractableObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IIInteractableObject::execNotifyInteractionFinished)
	{
		P_GET_OBJECT(AActor,Z_Param_InteractableObject);
		P_GET_OBJECT(AActor,Z_Param_ActorInteractionWithObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyInteractionFinished(Z_Param_InteractableObject,Z_Param_ActorInteractionWithObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IIInteractableObject::execInteract_Implementation)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorInteractionWithObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact_Implementation(Z_Param_ActorInteractionWithObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IIInteractableObject::execInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorInteractionWithObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact_Implementation(Z_Param_ActorInteractionWithObject);
		P_NATIVE_END;
	}
	void IIInteractableObject::Interact(AActor* ActorInteractionWithObject)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
	}
	void UIInteractableObject::StaticRegisterNativesUIInteractableObject()
	{
		UClass* Class = UIInteractableObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interact", &IIInteractableObject::execInteract },
			{ "Interact_Implementation", &IIInteractableObject::execInteract_Implementation },
			{ "NotifyInteractionFinished", &IIInteractableObject::execNotifyInteractionFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIInteractableObject_Interact_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorInteractionWithObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIInteractableObject_Interact_Statics::NewProp_ActorInteractionWithObject = { "ActorInteractionWithObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IInteractableObject_eventInteract_Parms, ActorInteractionWithObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIInteractableObject_Interact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIInteractableObject_Interact_Statics::NewProp_ActorInteractionWithObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIInteractableObject_Interact_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest System" },
		{ "ModuleRelativePath", "Public/IInteractableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIInteractableObject_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIInteractableObject, nullptr, "Interact", nullptr, nullptr, sizeof(IInteractableObject_eventInteract_Parms), Z_Construct_UFunction_UIInteractableObject_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIInteractableObject_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIInteractableObject_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIInteractableObject_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIInteractableObject_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIInteractableObject_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIInteractableObject_Interact_Implementation_Statics
	{
		struct IInteractableObject_eventInteract_Implementation_Parms
		{
			AActor* ActorInteractionWithObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorInteractionWithObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIInteractableObject_Interact_Implementation_Statics::NewProp_ActorInteractionWithObject = { "ActorInteractionWithObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IInteractableObject_eventInteract_Implementation_Parms, ActorInteractionWithObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIInteractableObject_Interact_Implementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIInteractableObject_Interact_Implementation_Statics::NewProp_ActorInteractionWithObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIInteractableObject_Interact_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IInteractableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIInteractableObject_Interact_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIInteractableObject, nullptr, "Interact_Implementation", nullptr, nullptr, sizeof(IInteractableObject_eventInteract_Implementation_Parms), Z_Construct_UFunction_UIInteractableObject_Interact_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIInteractableObject_Interact_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIInteractableObject_Interact_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIInteractableObject_Interact_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIInteractableObject_Interact_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIInteractableObject_Interact_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIInteractableObject_NotifyInteractionFinished_Statics
	{
		struct IInteractableObject_eventNotifyInteractionFinished_Parms
		{
			AActor* InteractableObject;
			AActor* ActorInteractionWithObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorInteractionWithObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIInteractableObject_NotifyInteractionFinished_Statics::NewProp_InteractableObject = { "InteractableObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IInteractableObject_eventNotifyInteractionFinished_Parms, InteractableObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIInteractableObject_NotifyInteractionFinished_Statics::NewProp_ActorInteractionWithObject = { "ActorInteractionWithObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IInteractableObject_eventNotifyInteractionFinished_Parms, ActorInteractionWithObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIInteractableObject_NotifyInteractionFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIInteractableObject_NotifyInteractionFinished_Statics::NewProp_InteractableObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIInteractableObject_NotifyInteractionFinished_Statics::NewProp_ActorInteractionWithObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIInteractableObject_NotifyInteractionFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IInteractableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIInteractableObject_NotifyInteractionFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIInteractableObject, nullptr, "NotifyInteractionFinished", nullptr, nullptr, sizeof(IInteractableObject_eventNotifyInteractionFinished_Parms), Z_Construct_UFunction_UIInteractableObject_NotifyInteractionFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIInteractableObject_NotifyInteractionFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIInteractableObject_NotifyInteractionFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIInteractableObject_NotifyInteractionFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIInteractableObject_NotifyInteractionFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIInteractableObject_NotifyInteractionFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIInteractableObject_NoRegister()
	{
		return UIInteractableObject::StaticClass();
	}
	struct Z_Construct_UClass_UIInteractableObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIInteractableObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIInteractableObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIInteractableObject_Interact, "Interact" }, // 498132011
		{ &Z_Construct_UFunction_UIInteractableObject_Interact_Implementation, "Interact_Implementation" }, // 320373328
		{ &Z_Construct_UFunction_UIInteractableObject_NotifyInteractionFinished, "NotifyInteractionFinished" }, // 3107977473
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIInteractableObject_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IInteractableObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIInteractableObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIInteractableObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIInteractableObject_Statics::ClassParams = {
		&UIInteractableObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIInteractableObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIInteractableObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIInteractableObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIInteractableObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIInteractableObject, 1388993530);
	template<> QUESTSYSTEM_API UClass* StaticClass<UIInteractableObject>()
	{
		return UIInteractableObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIInteractableObject(Z_Construct_UClass_UIInteractableObject, &UIInteractableObject::StaticClass, TEXT("/Script/QuestSystem"), TEXT("UIInteractableObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIInteractableObject);
	static FName NAME_UIInteractableObject_Interact = FName(TEXT("Interact"));
	void IIInteractableObject::Execute_Interact(UObject* O, AActor* ActorInteractionWithObject)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UIInteractableObject::StaticClass()));
		IInteractableObject_eventInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UIInteractableObject_Interact);
		if (Func)
		{
			Parms.ActorInteractionWithObject=ActorInteractionWithObject;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IIInteractableObject*)(O->GetNativeInterfaceAddress(UIInteractableObject::StaticClass())))
		{
			I->Interact_Implementation(ActorInteractionWithObject);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
