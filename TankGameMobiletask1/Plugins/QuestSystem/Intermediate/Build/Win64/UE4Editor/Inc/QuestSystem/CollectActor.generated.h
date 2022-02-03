// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef QUESTSYSTEM_CollectActor_generated_h
#error "CollectActor.generated.h already included, missing '#pragma once' in CollectActor.h"
#endif
#define QUESTSYSTEM_CollectActor_generated_h

#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_14_SPARSE_DATA
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCollectFinished);


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCollectFinished);


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectActor(); \
	friend struct Z_Construct_UClass_ACollectActor_Statics; \
public: \
	DECLARE_CLASS(ACollectActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(ACollectActor) \
	virtual UObject* _getUObject() const override { return const_cast<ACollectActor*>(this); }


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACollectActor(); \
	friend struct Z_Construct_UClass_ACollectActor_Statics; \
public: \
	DECLARE_CLASS(ACollectActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(ACollectActor) \
	virtual UObject* _getUObject() const override { return const_cast<ACollectActor*>(this); }


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACollectActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollectActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectActor(ACollectActor&&); \
	NO_API ACollectActor(const ACollectActor&); \
public:


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACollectActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectActor(ACollectActor&&); \
	NO_API ACollectActor(const ACollectActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollectActor)


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_14_PRIVATE_PROPERTY_OFFSET
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_11_PROLOG
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_14_PRIVATE_PROPERTY_OFFSET \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_14_SPARSE_DATA \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_14_RPC_WRAPPERS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_14_INCLASS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_14_PRIVATE_PROPERTY_OFFSET \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_14_SPARSE_DATA \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_14_INCLASS_NO_PURE_DECLS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class ACollectActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_CollectActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
