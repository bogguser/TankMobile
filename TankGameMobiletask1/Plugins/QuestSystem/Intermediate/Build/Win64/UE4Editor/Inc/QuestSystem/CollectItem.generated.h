// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUESTSYSTEM_CollectItem_generated_h
#error "CollectItem.generated.h already included, missing '#pragma once' in CollectItem.h"
#endif
#define QUESTSYSTEM_CollectItem_generated_h

#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_13_SPARSE_DATA
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_13_RPC_WRAPPERS
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QUESTSYSTEM_API UCollectItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollectItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QUESTSYSTEM_API, UCollectItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollectItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	QUESTSYSTEM_API UCollectItem(UCollectItem&&); \
	QUESTSYSTEM_API UCollectItem(const UCollectItem&); \
public:


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QUESTSYSTEM_API UCollectItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	QUESTSYSTEM_API UCollectItem(UCollectItem&&); \
	QUESTSYSTEM_API UCollectItem(const UCollectItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QUESTSYSTEM_API, UCollectItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollectItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollectItem)


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCollectItem(); \
	friend struct Z_Construct_UClass_UCollectItem_Statics; \
public: \
	DECLARE_CLASS(UCollectItem, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/QuestSystem"), QUESTSYSTEM_API) \
	DECLARE_SERIALIZER(UCollectItem)


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_13_GENERATED_UINTERFACE_BODY() \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_13_GENERATED_UINTERFACE_BODY() \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICollectItem() {} \
public: \
	typedef UCollectItem UClassType; \
	typedef ICollectItem ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ICollectItem() {} \
public: \
	typedef UCollectItem UClassType; \
	typedef ICollectItem ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_10_PROLOG
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_13_SPARSE_DATA \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_13_RPC_WRAPPERS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_13_SPARSE_DATA \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class UCollectItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
