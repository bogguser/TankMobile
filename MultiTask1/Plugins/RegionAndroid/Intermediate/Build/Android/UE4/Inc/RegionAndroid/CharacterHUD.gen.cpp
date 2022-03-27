// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RegionAndroid/Public/CharacterHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterHUD() {}
// Cross Module References
	REGIONANDROID_API UClass* Z_Construct_UClass_ACharacterHUD_NoRegister();
	REGIONANDROID_API UClass* Z_Construct_UClass_ACharacterHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_RegionAndroid();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACharacterHUD::execOpenGallery)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenGallery();
		P_NATIVE_END;
	}
	static FName NAME_ACharacterHUD_BP_OnPhotoSelected = FName(TEXT("BP_OnPhotoSelected"));
	void ACharacterHUD::BP_OnPhotoSelected(UTexture2D* SelectedPhoto)
	{
		CharacterHUD_eventBP_OnPhotoSelected_Parms Parms;
		Parms.SelectedPhoto=SelectedPhoto;
		ProcessEvent(FindFunctionChecked(NAME_ACharacterHUD_BP_OnPhotoSelected),&Parms);
	}
	void ACharacterHUD::StaticRegisterNativesACharacterHUD()
	{
		UClass* Class = ACharacterHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenGallery", &ACharacterHUD::execOpenGallery },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacterHUD_BP_OnPhotoSelected_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedPhoto;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterHUD_BP_OnPhotoSelected_Statics::NewProp_SelectedPhoto = { "SelectedPhoto", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterHUD_eventBP_OnPhotoSelected_Parms, SelectedPhoto), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterHUD_BP_OnPhotoSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterHUD_BP_OnPhotoSelected_Statics::NewProp_SelectedPhoto,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterHUD_BP_OnPhotoSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterHUD_BP_OnPhotoSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterHUD, nullptr, "BP_OnPhotoSelected", nullptr, nullptr, sizeof(CharacterHUD_eventBP_OnPhotoSelected_Parms), Z_Construct_UFunction_ACharacterHUD_BP_OnPhotoSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterHUD_BP_OnPhotoSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterHUD_BP_OnPhotoSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterHUD_BP_OnPhotoSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterHUD_BP_OnPhotoSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterHUD_BP_OnPhotoSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterHUD_OpenGallery_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterHUD_OpenGallery_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterHUD_OpenGallery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterHUD, nullptr, "OpenGallery", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterHUD_OpenGallery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterHUD_OpenGallery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterHUD_OpenGallery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterHUD_OpenGallery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACharacterHUD_NoRegister()
	{
		return ACharacterHUD::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_RegionAndroid,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharacterHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacterHUD_BP_OnPhotoSelected, "BP_OnPhotoSelected" }, // 2279439979
		{ &Z_Construct_UFunction_ACharacterHUD_OpenGallery, "OpenGallery" }, // 1751396943
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "CharacterHUD.h" },
		{ "ModuleRelativePath", "Public/CharacterHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacterHUD_Statics::ClassParams = {
		&ACharacterHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacterHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacterHUD, 3357452124);
	template<> REGIONANDROID_API UClass* StaticClass<ACharacterHUD>()
	{
		return ACharacterHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacterHUD(Z_Construct_UClass_ACharacterHUD, &ACharacterHUD::StaticClass, TEXT("/Script/RegionAndroid"), TEXT("ACharacterHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
