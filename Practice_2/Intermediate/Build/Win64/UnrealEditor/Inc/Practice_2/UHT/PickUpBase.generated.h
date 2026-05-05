// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PickUp/PickUpBase.h"

#ifdef PRACTICE_2_PickUpBase_generated_h
#error "PickUpBase.generated.h already included, missing '#pragma once' in PickUpBase.h"
#endif
#define PRACTICE_2_PickUpBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APickUpBase **************************************************************
#define FID_Practice_2_Source_Practice_2_Public_PickUp_PickUpBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPickUpActive); \
	DECLARE_FUNCTION(execIsPickUpActive);


struct Z_Construct_UClass_APickUpBase_Statics;
PRACTICE_2_API UClass* Z_Construct_UClass_APickUpBase_NoRegister();

#define FID_Practice_2_Source_Practice_2_Public_PickUp_PickUpBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickUpBase(); \
	friend struct ::Z_Construct_UClass_APickUpBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PRACTICE_2_API UClass* ::Z_Construct_UClass_APickUpBase_NoRegister(); \
public: \
	DECLARE_CLASS2(APickUpBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Practice_2"), Z_Construct_UClass_APickUpBase_NoRegister) \
	DECLARE_SERIALIZER(APickUpBase)


#define FID_Practice_2_Source_Practice_2_Public_PickUp_PickUpBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APickUpBase(APickUpBase&&) = delete; \
	APickUpBase(const APickUpBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUpBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUpBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickUpBase) \
	NO_API virtual ~APickUpBase();


#define FID_Practice_2_Source_Practice_2_Public_PickUp_PickUpBase_h_9_PROLOG
#define FID_Practice_2_Source_Practice_2_Public_PickUp_PickUpBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Practice_2_Source_Practice_2_Public_PickUp_PickUpBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Practice_2_Source_Practice_2_Public_PickUp_PickUpBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Practice_2_Source_Practice_2_Public_PickUp_PickUpBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APickUpBase;

// ********** End Class APickUpBase ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Practice_2_Source_Practice_2_Public_PickUp_PickUpBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
