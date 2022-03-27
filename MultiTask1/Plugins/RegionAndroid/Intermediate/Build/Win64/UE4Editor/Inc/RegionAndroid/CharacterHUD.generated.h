// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef REGIONANDROID_CharacterHUD_generated_h
#error "CharacterHUD.generated.h already included, missing '#pragma once' in CharacterHUD.h"
#endif
#define REGIONANDROID_CharacterHUD_generated_h

#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_SPARSE_DATA
#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenGallery);


#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenGallery);


#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_EVENT_PARMS \
	struct CharacterHUD_eventBP_OnPhotoSelected_Parms \
	{ \
		UTexture2D* SelectedPhoto; \
	};


#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_CALLBACK_WRAPPERS
#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterHUD(); \
	friend struct Z_Construct_UClass_ACharacterHUD_Statics; \
public: \
	DECLARE_CLASS(ACharacterHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RegionAndroid"), NO_API) \
	DECLARE_SERIALIZER(ACharacterHUD)


#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACharacterHUD(); \
	friend struct Z_Construct_UClass_ACharacterHUD_Statics; \
public: \
	DECLARE_CLASS(ACharacterHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RegionAndroid"), NO_API) \
	DECLARE_SERIALIZER(ACharacterHUD)


#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterHUD(ACharacterHUD&&); \
	NO_API ACharacterHUD(const ACharacterHUD&); \
public:


#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterHUD(ACharacterHUD&&); \
	NO_API ACharacterHUD(const ACharacterHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterHUD)


#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_PRIVATE_PROPERTY_OFFSET
#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_12_PROLOG \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_EVENT_PARMS


#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_SPARSE_DATA \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_RPC_WRAPPERS \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_CALLBACK_WRAPPERS \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_INCLASS \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_SPARSE_DATA \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_CALLBACK_WRAPPERS \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_INCLASS_NO_PURE_DECLS \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REGIONANDROID_API UClass* StaticClass<class ACharacterHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_CharacterHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
