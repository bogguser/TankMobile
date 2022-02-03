// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef QUESTSYSTEM_IInteractableObject_generated_h
#error "IInteractableObject.generated.h already included, missing '#pragma once' in IInteractableObject.h"
#endif
#define QUESTSYSTEM_IInteractableObject_generated_h

#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_SPARSE_DATA
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_RPC_WRAPPERS \
	virtual void Interact_Implementation(AActor* ActorInteractionWithObject) {}; \
 \
	DECLARE_FUNCTION(execNotifyInteractionFinished); \
	DECLARE_FUNCTION(execInteract_Implementation); \
	DECLARE_FUNCTION(execInteract);


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotifyInteractionFinished); \
	DECLARE_FUNCTION(execInteract_Implementation); \
	DECLARE_FUNCTION(execInteract);


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_EVENT_PARMS \
	struct IInteractableObject_eventInteract_Parms \
	{ \
		AActor* ActorInteractionWithObject; \
	};


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_CALLBACK_WRAPPERS
#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QUESTSYSTEM_API UIInteractableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIInteractableObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QUESTSYSTEM_API, UIInteractableObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIInteractableObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	QUESTSYSTEM_API UIInteractableObject(UIInteractableObject&&); \
	QUESTSYSTEM_API UIInteractableObject(const UIInteractableObject&); \
public:


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QUESTSYSTEM_API UIInteractableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	QUESTSYSTEM_API UIInteractableObject(UIInteractableObject&&); \
	QUESTSYSTEM_API UIInteractableObject(const UIInteractableObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QUESTSYSTEM_API, UIInteractableObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIInteractableObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIInteractableObject)


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIInteractableObject(); \
	friend struct Z_Construct_UClass_UIInteractableObject_Statics; \
public: \
	DECLARE_CLASS(UIInteractableObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/QuestSystem"), QUESTSYSTEM_API) \
	DECLARE_SERIALIZER(UIInteractableObject)


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_GENERATED_UINTERFACE_BODY() \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_GENERATED_UINTERFACE_BODY() \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIInteractableObject() {} \
public: \
	typedef UIInteractableObject UClassType; \
	typedef IIInteractableObject ThisClass; \
	static void Execute_Interact(UObject* O, AActor* ActorInteractionWithObject); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIInteractableObject() {} \
public: \
	typedef UIInteractableObject UClassType; \
	typedef IIInteractableObject ThisClass; \
	static void Execute_Interact(UObject* O, AActor* ActorInteractionWithObject); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_10_PROLOG \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_EVENT_PARMS


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_SPARSE_DATA \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_RPC_WRAPPERS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_CALLBACK_WRAPPERS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_SPARSE_DATA \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_CALLBACK_WRAPPERS \
	TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class UIInteractableObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankGameMobile_Plugins_QuestSystem_Source_QuestSystem_Public_IInteractableObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
