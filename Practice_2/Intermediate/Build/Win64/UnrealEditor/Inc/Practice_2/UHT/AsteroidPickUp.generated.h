// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PickUp/AsteroidPickUp.h"

#ifdef PRACTICE_2_AsteroidPickUp_generated_h
#error "AsteroidPickUp.generated.h already included, missing '#pragma once' in AsteroidPickUp.h"
#endif
#define PRACTICE_2_AsteroidPickUp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAsteroidPickUp **********************************************************
struct Z_Construct_UClass_AAsteroidPickUp_Statics;
PRACTICE_2_API UClass* Z_Construct_UClass_AAsteroidPickUp_NoRegister();

#define FID_Practice_2_Source_Practice_2_Public_PickUp_AsteroidPickUp_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAsteroidPickUp(); \
	friend struct ::Z_Construct_UClass_AAsteroidPickUp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PRACTICE_2_API UClass* ::Z_Construct_UClass_AAsteroidPickUp_NoRegister(); \
public: \
	DECLARE_CLASS2(AAsteroidPickUp, APickUpBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Practice_2"), Z_Construct_UClass_AAsteroidPickUp_NoRegister) \
	DECLARE_SERIALIZER(AAsteroidPickUp)


#define FID_Practice_2_Source_Practice_2_Public_PickUp_AsteroidPickUp_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAsteroidPickUp(AAsteroidPickUp&&) = delete; \
	AAsteroidPickUp(const AAsteroidPickUp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsteroidPickUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsteroidPickUp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAsteroidPickUp) \
	NO_API virtual ~AAsteroidPickUp();


#define FID_Practice_2_Source_Practice_2_Public_PickUp_AsteroidPickUp_h_10_PROLOG
#define FID_Practice_2_Source_Practice_2_Public_PickUp_AsteroidPickUp_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Practice_2_Source_Practice_2_Public_PickUp_AsteroidPickUp_h_13_INCLASS_NO_PURE_DECLS \
	FID_Practice_2_Source_Practice_2_Public_PickUp_AsteroidPickUp_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAsteroidPickUp;

// ********** End Class AAsteroidPickUp ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Practice_2_Source_Practice_2_Public_PickUp_AsteroidPickUp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
