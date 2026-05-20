// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PickUp/AsteroidPickUp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAsteroidPickUp() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PRACTICE_2_API UClass* Z_Construct_UClass_AAsteroidPickUp();
PRACTICE_2_API UClass* Z_Construct_UClass_AAsteroidPickUp_NoRegister();
PRACTICE_2_API UClass* Z_Construct_UClass_APickUpBase();
UPackage* Z_Construct_UPackage__Script_Practice_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAsteroidPickUp **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AAsteroidPickUp;
UClass* AAsteroidPickUp::GetPrivateStaticClass()
{
	using TClass = AAsteroidPickUp;
	if (!Z_Registration_Info_UClass_AAsteroidPickUp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AsteroidPickUp"),
			Z_Registration_Info_UClass_AAsteroidPickUp.InnerSingleton,
			StaticRegisterNativesAAsteroidPickUp,
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
	return Z_Registration_Info_UClass_AAsteroidPickUp.InnerSingleton;
}
UClass* Z_Construct_UClass_AAsteroidPickUp_NoRegister()
{
	return AAsteroidPickUp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAsteroidPickUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PickUp/AsteroidPickUp.h" },
		{ "ModuleRelativePath", "Public/PickUp/AsteroidPickUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/PickUp/AsteroidPickUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDirection_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/PickUp/AsteroidPickUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/PickUp/AsteroidPickUp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAsteroidPickUp constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAsteroidPickUp constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsteroidPickUp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAsteroidPickUp_Statics

// ********** Begin Class AAsteroidPickUp Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsteroidPickUp_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsteroidPickUp, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAsteroidPickUp_Statics::NewProp_MoveDirection = { "MoveDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsteroidPickUp, MoveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDirection_MetaData), NewProp_MoveDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAsteroidPickUp_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsteroidPickUp, RotationSpeed), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAsteroidPickUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroidPickUp_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroidPickUp_Statics::NewProp_MoveDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroidPickUp_Statics::NewProp_RotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroidPickUp_Statics::PropPointers) < 2048);
// ********** End Class AAsteroidPickUp Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_AAsteroidPickUp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APickUpBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Practice_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroidPickUp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAsteroidPickUp_Statics::ClassParams = {
	&AAsteroidPickUp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAsteroidPickUp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroidPickUp_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroidPickUp_Statics::Class_MetaDataParams), Z_Construct_UClass_AAsteroidPickUp_Statics::Class_MetaDataParams)
};
void AAsteroidPickUp::StaticRegisterNativesAAsteroidPickUp()
{
}
UClass* Z_Construct_UClass_AAsteroidPickUp()
{
	if (!Z_Registration_Info_UClass_AAsteroidPickUp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAsteroidPickUp.OuterSingleton, Z_Construct_UClass_AAsteroidPickUp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAsteroidPickUp.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAsteroidPickUp);
AAsteroidPickUp::~AAsteroidPickUp() {}
// ********** End Class AAsteroidPickUp ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Practice_2_Source_Practice_2_Public_PickUp_AsteroidPickUp_h__Script_Practice_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAsteroidPickUp, AAsteroidPickUp::StaticClass, TEXT("AAsteroidPickUp"), &Z_Registration_Info_UClass_AAsteroidPickUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAsteroidPickUp), 3040573524U) },
	};
}; // Z_CompiledInDeferFile_FID_Practice_2_Source_Practice_2_Public_PickUp_AsteroidPickUp_h__Script_Practice_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Practice_2_Source_Practice_2_Public_PickUp_AsteroidPickUp_h__Script_Practice_2_3610344242{
	TEXT("/Script/Practice_2"),
	Z_CompiledInDeferFile_FID_Practice_2_Source_Practice_2_Public_PickUp_AsteroidPickUp_h__Script_Practice_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Practice_2_Source_Practice_2_Public_PickUp_AsteroidPickUp_h__Script_Practice_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
