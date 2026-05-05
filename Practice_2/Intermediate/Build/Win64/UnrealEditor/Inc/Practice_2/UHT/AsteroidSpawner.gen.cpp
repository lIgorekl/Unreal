// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Spawner/AsteroidSpawner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAsteroidSpawner() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
PRACTICE_2_API UClass* Z_Construct_UClass_AAsteroidSpawner();
PRACTICE_2_API UClass* Z_Construct_UClass_AAsteroidSpawner_NoRegister();
PRACTICE_2_API UClass* Z_Construct_UClass_APickUpBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Practice_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAsteroidSpawner Function GetRandomSpawnPoint ****************************
struct Z_Construct_UFunction_AAsteroidSpawner_GetRandomSpawnPoint_Statics
{
	struct AsteroidSpawner_eventGetRandomSpawnPoint_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Public/Spawner/AsteroidSpawner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRandomSpawnPoint constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRandomSpawnPoint constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRandomSpawnPoint Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAsteroidSpawner_GetRandomSpawnPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsteroidSpawner_eventGetRandomSpawnPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAsteroidSpawner_GetRandomSpawnPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsteroidSpawner_GetRandomSpawnPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAsteroidSpawner_GetRandomSpawnPoint_Statics::PropPointers) < 2048);
// ********** End Function GetRandomSpawnPoint Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsteroidSpawner_GetRandomSpawnPoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAsteroidSpawner, nullptr, "GetRandomSpawnPoint", 	Z_Construct_UFunction_AAsteroidSpawner_GetRandomSpawnPoint_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AAsteroidSpawner_GetRandomSpawnPoint_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AAsteroidSpawner_GetRandomSpawnPoint_Statics::AsteroidSpawner_eventGetRandomSpawnPoint_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAsteroidSpawner_GetRandomSpawnPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAsteroidSpawner_GetRandomSpawnPoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAsteroidSpawner_GetRandomSpawnPoint_Statics::AsteroidSpawner_eventGetRandomSpawnPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAsteroidSpawner_GetRandomSpawnPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAsteroidSpawner_GetRandomSpawnPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAsteroidSpawner::execGetRandomSpawnPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetRandomSpawnPoint();
	P_NATIVE_END;
}
// ********** End Class AAsteroidSpawner Function GetRandomSpawnPoint ******************************

// ********** Begin Class AAsteroidSpawner *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AAsteroidSpawner;
UClass* AAsteroidSpawner::GetPrivateStaticClass()
{
	using TClass = AAsteroidSpawner;
	if (!Z_Registration_Info_UClass_AAsteroidSpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AsteroidSpawner"),
			Z_Registration_Info_UClass_AAsteroidSpawner.InnerSingleton,
			StaticRegisterNativesAAsteroidSpawner,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AAsteroidSpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_AAsteroidSpawner_NoRegister()
{
	return AAsteroidSpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAsteroidSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Spawner/AsteroidSpawner.h" },
		{ "ModuleRelativePath", "Public/Spawner/AsteroidSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnArea_MetaData[] = {
		{ "Category", "Spawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Spawner/AsteroidSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Public/Spawner/AsteroidSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpawnDelay_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Public/Spawner/AsteroidSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnDelay_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Public/Spawner/AsteroidSpawner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAsteroidSpawner constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnArea;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpawnDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpawnDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAsteroidSpawner constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetRandomSpawnPoint"), .Pointer = &AAsteroidSpawner::execGetRandomSpawnPoint },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAsteroidSpawner_GetRandomSpawnPoint, "GetRandomSpawnPoint" }, // 930273987
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsteroidSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAsteroidSpawner_Statics

// ********** Begin Class AAsteroidSpawner Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_SpawnArea = { "SpawnArea", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsteroidSpawner, SpawnArea), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnArea_MetaData), NewProp_SpawnArea_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsteroidSpawner, ActorToSpawn), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_APickUpBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorToSpawn_MetaData), NewProp_ActorToSpawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_MinSpawnDelay = { "MinSpawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsteroidSpawner, MinSpawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpawnDelay_MetaData), NewProp_MinSpawnDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_MaxSpawnDelay = { "MaxSpawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsteroidSpawner, MaxSpawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpawnDelay_MetaData), NewProp_MaxSpawnDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAsteroidSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_SpawnArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_ActorToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_MinSpawnDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroidSpawner_Statics::NewProp_MaxSpawnDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroidSpawner_Statics::PropPointers) < 2048);
// ********** End Class AAsteroidSpawner Property Definitions **************************************
UObject* (*const Z_Construct_UClass_AAsteroidSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Practice_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroidSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAsteroidSpawner_Statics::ClassParams = {
	&AAsteroidSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAsteroidSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroidSpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroidSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_AAsteroidSpawner_Statics::Class_MetaDataParams)
};
void AAsteroidSpawner::StaticRegisterNativesAAsteroidSpawner()
{
	UClass* Class = AAsteroidSpawner::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AAsteroidSpawner_Statics::Funcs));
}
UClass* Z_Construct_UClass_AAsteroidSpawner()
{
	if (!Z_Registration_Info_UClass_AAsteroidSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAsteroidSpawner.OuterSingleton, Z_Construct_UClass_AAsteroidSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAsteroidSpawner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAsteroidSpawner);
AAsteroidSpawner::~AAsteroidSpawner() {}
// ********** End Class AAsteroidSpawner ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Practice_2_Source_Practice_2_Public_Spawner_AsteroidSpawner_h__Script_Practice_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAsteroidSpawner, AAsteroidSpawner::StaticClass, TEXT("AAsteroidSpawner"), &Z_Registration_Info_UClass_AAsteroidSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAsteroidSpawner), 1020213585U) },
	};
}; // Z_CompiledInDeferFile_FID_Practice_2_Source_Practice_2_Public_Spawner_AsteroidSpawner_h__Script_Practice_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Practice_2_Source_Practice_2_Public_Spawner_AsteroidSpawner_h__Script_Practice_2_887397737{
	TEXT("/Script/Practice_2"),
	Z_CompiledInDeferFile_FID_Practice_2_Source_Practice_2_Public_Spawner_AsteroidSpawner_h__Script_Practice_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Practice_2_Source_Practice_2_Public_Spawner_AsteroidSpawner_h__Script_Practice_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
