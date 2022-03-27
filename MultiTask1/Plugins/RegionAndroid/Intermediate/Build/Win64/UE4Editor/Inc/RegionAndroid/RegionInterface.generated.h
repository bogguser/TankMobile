// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REGIONANDROID_RegionInterface_generated_h
#error "RegionInterface.generated.h already included, missing '#pragma once' in RegionInterface.h"
#endif
#define REGIONANDROID_RegionInterface_generated_h

#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_13_SPARSE_DATA
#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_13_RPC_WRAPPERS
#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	REGIONANDROID_API URegionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URegionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REGIONANDROID_API, URegionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URegionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	REGIONANDROID_API URegionInterface(URegionInterface&&); \
	REGIONANDROID_API URegionInterface(const URegionInterface&); \
public:


#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	REGIONANDROID_API URegionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	REGIONANDROID_API URegionInterface(URegionInterface&&); \
	REGIONANDROID_API URegionInterface(const URegionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REGIONANDROID_API, URegionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URegionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URegionInterface)


#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURegionInterface(); \
	friend struct Z_Construct_UClass_URegionInterface_Statics; \
public: \
	DECLARE_CLASS(URegionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RegionAndroid"), REGIONANDROID_API) \
	DECLARE_SERIALIZER(URegionInterface)


#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRegionInterface() {} \
public: \
	typedef URegionInterface UClassType; \
	typedef IRegionInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IRegionInterface() {} \
public: \
	typedef URegionInterface UClassType; \
	typedef IRegionInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_10_PROLOG
#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_13_SPARSE_DATA \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_13_RPC_WRAPPERS \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_13_SPARSE_DATA \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REGIONANDROID_API UClass* StaticClass<class URegionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PugiTest_Plugins_RegionAndroid_Source_RegionAndroid_Public_RegionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
