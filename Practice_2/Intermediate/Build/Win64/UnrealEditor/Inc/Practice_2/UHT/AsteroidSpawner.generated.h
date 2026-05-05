// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Spawner/AsteroidSpawner.h"

#ifdef PRACTICE_2_AsteroidSpawner_generated_h
#error "AsteroidSpawner.generated.h already included, missing '#pragma once' in AsteroidSpawner.h"
#endif
#define PRACTICE_2_AsteroidSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAsteroidSpawner *********************************************************
#define FID_Practice_2_Source_Practice_2_Public_Spawner_AsteroidSpawner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRandomSpawnPoint);


struct Z_Construct_UClass_AAsteroidSpawner_Statics;
PRACTICE_2_API UClass* Z_Construct_UClass_AAsteroidSpawner_NoRegister();

#define FID_Practice_2_Source_Practice_2_Public_Spawner_AsteroidSpawner_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAsteroidSpawner(); \
	friend struct ::Z_Construct_UClass_AAsteroidSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PRACTICE_2_API UClass* ::Z_Construct_UClass_AAsteroidSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(AAsteroidSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Practice_2"), Z_Construct_UClass_AAsteroidSpawner_NoRegister) \
	DECLARE_SERIALIZER(AAsteroidSpawner)


#define FID_Practice_2_Source_Practice_2_Public_Spawner_AsteroidSpawner_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAsteroidSpawner(AAsteroidSpawner&&) = delete; \
	AAsteroidSpawner(const AAsteroidSpawner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsteroidSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsteroidSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAsteroidSpawner) \
	NO_API virtual ~AAsteroidSpawner();


#define FID_Practice_2_Source_Practice_2_Public_Spawner_AsteroidSpawner_h_11_PROLOG
#define FID_Practice_2_Source_Practice_2_Public_Spawner_AsteroidSpawner_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Practice_2_Source_Practice_2_Public_Spawner_AsteroidSpawner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Practice_2_Source_Practice_2_Public_Spawner_AsteroidSpawner_h_14_INCLASS_NO_PURE_DECLS \
	FID_Practice_2_Source_Practice_2_Public_Spawner_AsteroidSpawner_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAsteroidSpawner;

// ********** End Class AAsteroidSpawner ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Practice_2_Source_Practice_2_Public_Spawner_AsteroidSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
