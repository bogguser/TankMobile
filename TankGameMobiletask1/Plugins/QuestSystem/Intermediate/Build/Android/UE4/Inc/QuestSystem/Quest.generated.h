// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef QUESTSYSTEM_Quest_generated_h
#error "Quest.generated.h already included, missing '#pragma once' in Quest.h"
#endif
#define QUESTSYSTEM_Quest_generated_h

#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_SPARSE_DATA
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsCompleted); \
	DECLARE_FUNCTION(execTakeQuest);


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsCompleted); \
	DECLARE_FUNCTION(execTakeQuest);


#if WITH_EDITOR
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddCollectObjective); \
	DECLARE_FUNCTION(execAddInteractObjective); \
	DECLARE_FUNCTION(execAddLocationObjective); \
	DECLARE_FUNCTION(execUpdateLocation);


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCollectObjective); \
	DECLARE_FUNCTION(execAddInteractObjective); \
	DECLARE_FUNCTION(execAddLocationObjective); \
	DECLARE_FUNCTION(execUpdateLocation);


#else
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_EDITOR_ONLY_RPC_WRAPPERS
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuest(); \
	friend struct Z_Construct_UClass_AQuest_Statics; \
public: \
	DECLARE_CLASS(AQuest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(AQuest)


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAQuest(); \
	friend struct Z_Construct_UClass_AQuest_Statics; \
public: \
	DECLARE_CLASS(AQuest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(AQuest)


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuest(AQuest&&); \
	NO_API AQuest(const AQuest&); \
public:


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuest(AQuest&&); \
	NO_API AQuest(const AQuest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AQuest)


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_PRIVATE_PROPERTY_OFFSET
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_13_PROLOG
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_PRIVATE_PROPERTY_OFFSET \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_SPARSE_DATA \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_RPC_WRAPPERS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_EDITOR_ONLY_RPC_WRAPPERS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_INCLASS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_PRIVATE_PROPERTY_OFFSET \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_SPARSE_DATA \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_INCLASS_NO_PURE_DECLS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class AQuest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Quest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
