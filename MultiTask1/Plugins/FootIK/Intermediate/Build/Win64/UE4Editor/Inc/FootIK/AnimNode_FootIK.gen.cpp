// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FootIK/Public/AnimNode_FootIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_FootIK() {}
// Cross Module References
	FOOTIK_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_FootIK();
	UPackage* Z_Construct_UPackage__Script_FootIK();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	FOOTIK_API UScriptStruct* Z_Construct_UScriptStruct_FPelvis();
	FOOTIK_API UScriptStruct* Z_Construct_UScriptStruct_FFoot();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_FootIK>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_FootIK cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FAnimNode_FootIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FOOTIK_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_FootIK_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_FootIK, Z_Construct_UPackage__Script_FootIK(), TEXT("AnimNode_FootIK"), sizeof(FAnimNode_FootIK), Get_Z_Construct_UScriptStruct_FAnimNode_FootIK_Hash());
	}
	return Singleton;
}
template<> FOOTIK_API UScriptStruct* StaticStruct<FAnimNode_FootIK>()
{
	return FAnimNode_FootIK::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_FootIK(FAnimNode_FootIK::StaticStruct, TEXT("/Script/FootIK"), TEXT("AnimNode_FootIK"), false, nullptr, nullptr);
static struct FScriptStruct_FootIK_StaticRegisterNativesFAnimNode_FootIK
{
	FScriptStruct_FootIK_StaticRegisterNativesFAnimNode_FootIK()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_FootIK>(FName(TEXT("AnimNode_FootIK")));
	}
} ScriptStruct_FootIK_StaticRegisterNativesFAnimNode_FootIK;
	struct Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pelvis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pelvis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetAlpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_FootIK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Pelvis_MetaData[] = {
		{ "Category", "AnimNode_FootIK" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, Pelvis), Z_Construct_UScriptStruct_FPelvis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Pelvis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Pelvis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_LeftFoot_MetaData[] = {
		{ "Category", "AnimNode_FootIK" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_LeftFoot = { "LeftFoot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, LeftFoot), Z_Construct_UScriptStruct_FFoot, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_LeftFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_LeftFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_RightFoot_MetaData[] = {
		{ "Category", "AnimNode_FootIK" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_RightFoot = { "RightFoot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, RightFoot), Z_Construct_UScriptStruct_FFoot, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_RightFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_RightFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_OffsetRotation_MetaData[] = {
		{ "Category", "AnimNode_FootIK" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, OffsetRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_OffsetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_OffsetRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_OffsetAlpha_MetaData[] = {
		{ "Category", "AnimNode_FootIK" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_OffsetAlpha = { "OffsetAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, OffsetAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_OffsetAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_OffsetAlpha_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Pelvis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_LeftFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_RightFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_OffsetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_OffsetAlpha,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FootIK,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_FootIK",
		sizeof(FAnimNode_FootIK),
		alignof(FAnimNode_FootIK),
		Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_FootIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_FootIK_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FootIK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_FootIK"), sizeof(FAnimNode_FootIK), Get_Z_Construct_UScriptStruct_FAnimNode_FootIK_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_FootIK_Hash() { return 373857401U; }
class UScriptStruct* FFoot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FOOTIK_API uint32 Get_Z_Construct_UScriptStruct_FFoot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFoot, Z_Construct_UPackage__Script_FootIK(), TEXT("Foot"), sizeof(FFoot), Get_Z_Construct_UScriptStruct_FFoot_Hash());
	}
	return Singleton;
}
template<> FOOTIK_API UScriptStruct* StaticStruct<FFoot>()
{
	return FFoot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFoot(FFoot::StaticStruct, TEXT("/Script/FootIK"), TEXT("Foot"), false, nullptr, nullptr);
static struct FScriptStruct_FootIK_StaticRegisterNativesFFoot
{
	FScriptStruct_FootIK_StaticRegisterNativesFFoot()
	{
		UScriptStruct::DeferCppStructOps<FFoot>(FName(TEXT("Foot")));
	}
} ScriptStruct_FootIK_StaticRegisterNativesFFoot;
	struct Z_Construct_UScriptStruct_FFoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectorTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JoinTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinTargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JoinTargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static void NewProp_Hit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Hit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitNormalMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitNormalMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFoot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFoot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoot_Statics::NewProp_EffectorTarget_MetaData[] = {
		{ "Category", "Foot" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFoot_Statics::NewProp_EffectorTarget = { "EffectorTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoot, EffectorTarget), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_EffectorTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_EffectorTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoot_Statics::NewProp_EffectorLocation_MetaData[] = {
		{ "Category", "Foot" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFoot_Statics::NewProp_EffectorLocation = { "EffectorLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoot, EffectorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_EffectorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_EffectorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoot_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "Foot" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFoot_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoot, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoot_Statics::NewProp_JoinTarget_MetaData[] = {
		{ "Category", "Foot" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFoot_Statics::NewProp_JoinTarget = { "JoinTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoot, JoinTarget), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_JoinTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_JoinTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoot_Statics::NewProp_JoinTargetLocation_MetaData[] = {
		{ "Category", "Foot" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFoot_Statics::NewProp_JoinTargetLocation = { "JoinTargetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoot, JoinTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_JoinTargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_JoinTargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Foot" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoot, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Foot" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoot, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Hit_MetaData[] = {
		{ "Category", "Foot" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Hit_SetBit(void* Obj)
	{
		((FFoot*)Obj)->Hit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFoot), &Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Hit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Hit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Foot" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoot, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoot_Statics::NewProp_HitNormal_MetaData[] = {
		{ "Category", "Foot" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFoot_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoot, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_HitNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_HitNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoot_Statics::NewProp_HitNormalMax_MetaData[] = {
		{ "Category", "Foot" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFoot_Statics::NewProp_HitNormalMax = { "HitNormalMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoot, HitNormalMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_HitNormalMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoot_Statics::NewProp_HitNormalMax_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoot_Statics::NewProp_EffectorTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoot_Statics::NewProp_EffectorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoot_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoot_Statics::NewProp_JoinTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoot_Statics::NewProp_JoinTargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoot_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoot_Statics::NewProp_HitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoot_Statics::NewProp_HitNormalMax,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFoot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FootIK,
		nullptr,
		&NewStructOps,
		"Foot",
		sizeof(FFoot),
		alignof(FFoot),
		Z_Construct_UScriptStruct_FFoot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFoot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFoot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFoot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FootIK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Foot"), sizeof(FFoot), Get_Z_Construct_UScriptStruct_FFoot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFoot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFoot_Hash() { return 800497064U; }
class UScriptStruct* FPelvis::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FOOTIK_API uint32 Get_Z_Construct_UScriptStruct_FPelvis_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPelvis, Z_Construct_UPackage__Script_FootIK(), TEXT("Pelvis"), sizeof(FPelvis), Get_Z_Construct_UScriptStruct_FPelvis_Hash());
	}
	return Singleton;
}
template<> FOOTIK_API UScriptStruct* StaticStruct<FPelvis>()
{
	return FPelvis::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPelvis(FPelvis::StaticStruct, TEXT("/Script/FootIK"), TEXT("Pelvis"), false, nullptr, nullptr);
static struct FScriptStruct_FootIK_StaticRegisterNativesFPelvis
{
	FScriptStruct_FootIK_StaticRegisterNativesFPelvis()
	{
		UScriptStruct::DeferCppStructOps<FPelvis>(FName(TEXT("Pelvis")));
	}
} ScriptStruct_FootIK_StaticRegisterNativesFPelvis;
	struct Z_Construct_UScriptStruct_FPelvis_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPelvis_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPelvis_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPelvis>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_BoneReference_MetaData[] = {
		{ "Category", "Pelvis" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_BoneReference = { "BoneReference", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPelvis, BoneReference), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_BoneReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_BoneReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Pelvis" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPelvis, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Pelvis" },
		{ "ModuleRelativePath", "Public/AnimNode_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPelvis, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_Translation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPelvis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_BoneReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPelvis_Statics::NewProp_Translation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPelvis_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FootIK,
		nullptr,
		&NewStructOps,
		"Pelvis",
		sizeof(FPelvis),
		alignof(FPelvis),
		Z_Construct_UScriptStruct_FPelvis_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPelvis_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPelvis_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPelvis_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPelvis()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPelvis_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FootIK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Pelvis"), sizeof(FPelvis), Get_Z_Construct_UScriptStruct_FPelvis_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPelvis_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPelvis_Hash() { return 1008605897U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
