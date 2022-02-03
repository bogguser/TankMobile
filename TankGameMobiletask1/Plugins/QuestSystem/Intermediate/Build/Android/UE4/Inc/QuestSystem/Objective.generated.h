// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUESTSYSTEM_Objective_generated_h
#error "Objective.generated.h already included, missing '#pragma once' in Objective.h"
#endif
#define QUESTSYSTEM_Objective_generated_h

#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_27_SPARSE_DATA
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_27_RPC_WRAPPERS
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjective(); \
	friend struct Z_Construct_UClass_UObjective_Statics; \
public: \
	DECLARE_CLASS(UObjective, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(UObjective)


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUObjective(); \
	friend struct Z_Construct_UClass_UObjective_Statics; \
public: \
	DECLARE_CLASS(UObjective, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(UObjective)


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjective(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjective) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjective); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjective); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjective(UObjective&&); \
	NO_API UObjective(const UObjective&); \
public:


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjective(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjective(UObjective&&); \
	NO_API UObjective(const UObjective&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjective); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjective); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjective)


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_27_PRIVATE_PROPERTY_OFFSET
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_24_PROLOG
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_27_PRIVATE_PROPERTY_OFFSET \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_27_SPARSE_DATA \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_27_RPC_WRAPPERS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_27_INCLASS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_27_PRIVATE_PROPERTY_OFFSET \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_27_SPARSE_DATA \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_27_INCLASS_NO_PURE_DECLS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class UObjective>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_Objective_h


#define FOREACH_ENUM_EOBJECTIVETYPE(op) \
	op(EObjectiveType::Location) \
	op(EObjectiveType::Interact) \
	op(EObjectiveType::Collect) \
	op(EObjectiveType::Kill) 

enum class EObjectiveType : uint8;
template<> QUESTSYSTEM_API UEnum* StaticEnum<EObjectiveType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
