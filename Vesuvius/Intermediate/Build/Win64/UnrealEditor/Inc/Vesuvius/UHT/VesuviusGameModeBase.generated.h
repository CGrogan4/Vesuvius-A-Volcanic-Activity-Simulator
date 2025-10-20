// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VesuviusGameModeBase.h"

#ifdef VESUVIUS_VesuviusGameModeBase_generated_h
#error "VesuviusGameModeBase.generated.h already included, missing '#pragma once' in VesuviusGameModeBase.h"
#endif
#define VESUVIUS_VesuviusGameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVesuviusGameModeBase ****************************************************
VESUVIUS_API UClass* Z_Construct_UClass_AVesuviusGameModeBase_NoRegister();

#define FID_Users_write_Documents_Unreal_Projects_Vesuvius_Source_Vesuvius_VesuviusGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVesuviusGameModeBase(); \
	friend struct Z_Construct_UClass_AVesuviusGameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VESUVIUS_API UClass* Z_Construct_UClass_AVesuviusGameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AVesuviusGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Vesuvius"), Z_Construct_UClass_AVesuviusGameModeBase_NoRegister) \
	DECLARE_SERIALIZER(AVesuviusGameModeBase)


#define FID_Users_write_Documents_Unreal_Projects_Vesuvius_Source_Vesuvius_VesuviusGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVesuviusGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVesuviusGameModeBase(AVesuviusGameModeBase&&) = delete; \
	AVesuviusGameModeBase(const AVesuviusGameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVesuviusGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVesuviusGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVesuviusGameModeBase) \
	NO_API virtual ~AVesuviusGameModeBase();


#define FID_Users_write_Documents_Unreal_Projects_Vesuvius_Source_Vesuvius_VesuviusGameModeBase_h_12_PROLOG
#define FID_Users_write_Documents_Unreal_Projects_Vesuvius_Source_Vesuvius_VesuviusGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_write_Documents_Unreal_Projects_Vesuvius_Source_Vesuvius_VesuviusGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_write_Documents_Unreal_Projects_Vesuvius_Source_Vesuvius_VesuviusGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVesuviusGameModeBase;

// ********** End Class AVesuviusGameModeBase ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_write_Documents_Unreal_Projects_Vesuvius_Source_Vesuvius_VesuviusGameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
