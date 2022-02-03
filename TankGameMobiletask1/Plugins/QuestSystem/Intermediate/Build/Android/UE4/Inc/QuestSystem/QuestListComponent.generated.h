// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AQuest;
#ifdef QUESTSYSTEM_QuestListComponent_generated_h
#error "QuestListComponent.generated.h already included, missing '#pragma once' in QuestListComponent.h"
#endif
#define QUESTSYSTEM_QuestListComponent_generated_h

#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_10_DELEGATE \
struct _Script_QuestSystem_eventOnQuestAction_Parms \
{ \
	AQuest* Quest; \
}; \
static inline void FOnQuestAction_DelegateWrapper(const FMulticastScriptDelegate& OnQuestAction, AQuest* Quest) \
{ \
	_Script_QuestSystem_eventOnQuestAction_Parms Parms; \
	Parms.Quest=Quest; \
	OnQuestAction.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_15_SPARSE_DATA
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetActiveQuest); \
	DECLARE_FUNCTION(execGetActiveQuest); \
	DECLARE_FUNCTION(execGetQuests); \
	DECLARE_FUNCTION(execAddQuest);


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetActiveQuest); \
	DECLARE_FUNCTION(execGetActiveQuest); \
	DECLARE_FUNCTION(execGetQuests); \
	DECLARE_FUNCTION(execAddQuest);


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestListComponent(); \
	friend struct Z_Construct_UClass_UQuestListComponent_Statics; \
public: \
	DECLARE_CLASS(UQuestListComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(UQuestListComponent)


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUQuestListComponent(); \
	friend struct Z_Construct_UClass_UQuestListComponent_Statics; \
public: \
	DECLARE_CLASS(UQuestListComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(UQuestListComponent)


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestListComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestListComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestListComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestListComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestListComponent(UQuestListComponent&&); \
	NO_API UQuestListComponent(const UQuestListComponent&); \
public:


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestListComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestListComponent(UQuestListComponent&&); \
	NO_API UQuestListComponent(const UQuestListComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestListComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestListComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestListComponent)


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AcceptedQuests() { return STRUCT_OFFSET(UQuestListComponent, AcceptedQuests); } \
	FORCEINLINE static uint32 __PPO__ActiveQuest() { return STRUCT_OFFSET(UQuestListComponent, ActiveQuest); } \
	FORCEINLINE static uint32 __PPO__CurrentObjectivesWidgetClass() { return STRUCT_OFFSET(UQuestListComponent, CurrentObjectivesWidgetClass); }


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_12_PROLOG
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_15_SPARSE_DATA \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_15_RPC_WRAPPERS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_15_INCLASS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_15_SPARSE_DATA \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_15_INCLASS_NO_PURE_DECLS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class UQuestListComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestListComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
