// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AQuest;
class UQuestListComponent;
#ifdef QUESTSYSTEM_QuestLogWidget_generated_h
#error "QuestLogWidget.generated.h already included, missing '#pragma once' in QuestLogWidget.h"
#endif
#define QUESTSYSTEM_QuestLogWidget_generated_h

#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_15_SPARSE_DATA
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActiveQuestChanged); \
	DECLARE_FUNCTION(execInit);


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActiveQuestChanged); \
	DECLARE_FUNCTION(execInit);


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestLogWidget(); \
	friend struct Z_Construct_UClass_UQuestLogWidget_Statics; \
public: \
	DECLARE_CLASS(UQuestLogWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(UQuestLogWidget)


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUQuestLogWidget(); \
	friend struct Z_Construct_UClass_UQuestLogWidget_Statics; \
public: \
	DECLARE_CLASS(UQuestLogWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(UQuestLogWidget)


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestLogWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestLogWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestLogWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestLogWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestLogWidget(UQuestLogWidget&&); \
	NO_API UQuestLogWidget(const UQuestLogWidget&); \
public:


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestLogWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestLogWidget(UQuestLogWidget&&); \
	NO_API UQuestLogWidget(const UQuestLogWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestLogWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestLogWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestLogWidget)


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StoryQuestList() { return STRUCT_OFFSET(UQuestLogWidget, StoryQuestList); } \
	FORCEINLINE static uint32 __PPO__SideQuestList() { return STRUCT_OFFSET(UQuestLogWidget, SideQuestList); } \
	FORCEINLINE static uint32 __PPO__ActiveQuestDescription() { return STRUCT_OFFSET(UQuestLogWidget, ActiveQuestDescription); } \
	FORCEINLINE static uint32 __PPO__QuestEntryClass() { return STRUCT_OFFSET(UQuestLogWidget, QuestEntryClass); } \
	FORCEINLINE static uint32 __PPO__QuestEntries() { return STRUCT_OFFSET(UQuestLogWidget, QuestEntries); }


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_12_PROLOG
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_15_SPARSE_DATA \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_15_RPC_WRAPPERS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_15_INCLASS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_15_SPARSE_DATA \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_15_INCLASS_NO_PURE_DECLS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class UQuestLogWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestLogWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
