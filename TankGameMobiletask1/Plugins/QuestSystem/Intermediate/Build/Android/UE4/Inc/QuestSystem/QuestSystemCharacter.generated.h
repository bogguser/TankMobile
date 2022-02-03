// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUESTSYSTEM_QuestSystemCharacter_generated_h
#error "QuestSystemCharacter.generated.h already included, missing '#pragma once' in QuestSystemCharacter.h"
#endif
#define QUESTSYSTEM_QuestSystemCharacter_generated_h

#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_14_SPARSE_DATA
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnQuestDialogClosed); \
	DECLARE_FUNCTION(execbAllertActive);


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnQuestDialogClosed); \
	DECLARE_FUNCTION(execbAllertActive);


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuestSystemCharacter(); \
	friend struct Z_Construct_UClass_AQuestSystemCharacter_Statics; \
public: \
	DECLARE_CLASS(AQuestSystemCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(AQuestSystemCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AQuestSystemCharacter*>(this); }


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAQuestSystemCharacter(); \
	friend struct Z_Construct_UClass_AQuestSystemCharacter_Statics; \
public: \
	DECLARE_CLASS(AQuestSystemCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(AQuestSystemCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AQuestSystemCharacter*>(this); }


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuestSystemCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuestSystemCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuestSystemCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuestSystemCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuestSystemCharacter(AQuestSystemCharacter&&); \
	NO_API AQuestSystemCharacter(const AQuestSystemCharacter&); \
public:


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuestSystemCharacter(AQuestSystemCharacter&&); \
	NO_API AQuestSystemCharacter(const AQuestSystemCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuestSystemCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuestSystemCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AQuestSystemCharacter)


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__QuestDialogClass() { return STRUCT_OFFSET(AQuestSystemCharacter, QuestDialogClass); } \
	FORCEINLINE static uint32 __PPO__InteractingActor() { return STRUCT_OFFSET(AQuestSystemCharacter, InteractingActor); }


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_11_PROLOG
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_14_SPARSE_DATA \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_14_RPC_WRAPPERS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_14_INCLASS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_14_SPARSE_DATA \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_14_INCLASS_NO_PURE_DECLS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class AQuestSystemCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_QuestSystemCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
