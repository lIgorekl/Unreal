// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PickUp/PickUpBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePickUpBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PRACTICE_2_API UClass* Z_Construct_UClass_APickUpBase();
PRACTICE_2_API UClass* Z_Construct_UClass_APickUpBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Practice_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APickUpBase Function IsPickUpActive **************************************
struct Z_Construct_UFunction_APickUpBase_IsPickUpActive_Statics
{
	struct PickUpBase_eventIsPickUpActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PickUp" },
		{ "ModuleRelativePath", "Public/PickUp/PickUpBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPickUpActive constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPickUpActive constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPickUpActive Property Definitions ***********************************
void Z_Construct_UFunction_APickUpBase_IsPickUpActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PickUpBase_eventIsPickUpActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickUpBase_IsPickUpActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PickUpBase_eventIsPickUpActive_Parms), &Z_Construct_UFunction_APickUpBase_IsPickUpActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickUpBase_IsPickUpActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickUpBase_IsPickUpActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpBase_IsPickUpActive_Statics::PropPointers) < 2048);
// ********** End Function IsPickUpActive Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUpBase_IsPickUpActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APickUpBase, nullptr, "IsPickUpActive", 	Z_Construct_UFunction_APickUpBase_IsPickUpActive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpBase_IsPickUpActive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APickUpBase_IsPickUpActive_Statics::PickUpBase_eventIsPickUpActive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpBase_IsPickUpActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickUpBase_IsPickUpActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APickUpBase_IsPickUpActive_Statics::PickUpBase_eventIsPickUpActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APickUpBase_IsPickUpActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickUpBase_IsPickUpActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APickUpBase::execIsPickUpActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPickUpActive();
	P_NATIVE_END;
}
// ********** End Class APickUpBase Function IsPickUpActive ****************************************

// ********** Begin Class APickUpBase Function SetPickUpActive *************************************
struct Z_Construct_UFunction_APickUpBase_SetPickUpActive_Statics
{
	struct PickUpBase_eventSetPickUpActive_Parms
	{
		bool state;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PickUp" },
		{ "ModuleRelativePath", "Public/PickUp/PickUpBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPickUpActive constinit property declarations ***********************
	static void NewProp_state_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_state;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPickUpActive constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPickUpActive Property Definitions **********************************
void Z_Construct_UFunction_APickUpBase_SetPickUpActive_Statics::NewProp_state_SetBit(void* Obj)
{
	((PickUpBase_eventSetPickUpActive_Parms*)Obj)->state = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickUpBase_SetPickUpActive_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PickUpBase_eventSetPickUpActive_Parms), &Z_Construct_UFunction_APickUpBase_SetPickUpActive_Statics::NewProp_state_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickUpBase_SetPickUpActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickUpBase_SetPickUpActive_Statics::NewProp_state,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpBase_SetPickUpActive_Statics::PropPointers) < 2048);
// ********** End Function SetPickUpActive Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUpBase_SetPickUpActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APickUpBase, nullptr, "SetPickUpActive", 	Z_Construct_UFunction_APickUpBase_SetPickUpActive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpBase_SetPickUpActive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APickUpBase_SetPickUpActive_Statics::PickUpBase_eventSetPickUpActive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpBase_SetPickUpActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickUpBase_SetPickUpActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APickUpBase_SetPickUpActive_Statics::PickUpBase_eventSetPickUpActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APickUpBase_SetPickUpActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickUpBase_SetPickUpActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APickUpBase::execSetPickUpActive)
{
	P_GET_UBOOL(Z_Param_state);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPickUpActive(Z_Param_state);
	P_NATIVE_END;
}
// ********** End Class APickUpBase Function SetPickUpActive ***************************************

// ********** Begin Class APickUpBase **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APickUpBase;
UClass* APickUpBase::GetPrivateStaticClass()
{
	using TClass = APickUpBase;
	if (!Z_Registration_Info_UClass_APickUpBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PickUpBase"),
			Z_Registration_Info_UClass_APickUpBase.InnerSingleton,
			StaticRegisterNativesAPickUpBase,
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
	return Z_Registration_Info_UClass_APickUpBase.InnerSingleton;
}
UClass* Z_Construct_UClass_APickUpBase_NoRegister()
{
	return APickUpBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APickUpBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PickUp/PickUpBase.h" },
		{ "ModuleRelativePath", "Public/PickUp/PickUpBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickUpMeshComponent_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickUp/PickUpBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APickUpBase constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickUpMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APickUpBase constinit property declarations ********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("IsPickUpActive"), .Pointer = &APickUpBase::execIsPickUpActive },
		{ .NameUTF8 = UTF8TEXT("SetPickUpActive"), .Pointer = &APickUpBase::execSetPickUpActive },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APickUpBase_IsPickUpActive, "IsPickUpActive" }, // 3011147368
		{ &Z_Construct_UFunction_APickUpBase_SetPickUpActive, "SetPickUpActive" }, // 3190223745
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickUpBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APickUpBase_Statics

// ********** Begin Class APickUpBase Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUpBase_Statics::NewProp_PickUpMeshComponent = { "PickUpMeshComponent", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUpBase, PickUpMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickUpMeshComponent_MetaData), NewProp_PickUpMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickUpBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpBase_Statics::NewProp_PickUpMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickUpBase_Statics::PropPointers) < 2048);
// ********** End Class APickUpBase Property Definitions *******************************************
UObject* (*const Z_Construct_UClass_APickUpBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Practice_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickUpBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APickUpBase_Statics::ClassParams = {
	&APickUpBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APickUpBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APickUpBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickUpBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APickUpBase_Statics::Class_MetaDataParams)
};
void APickUpBase::StaticRegisterNativesAPickUpBase()
{
	UClass* Class = APickUpBase::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_APickUpBase_Statics::Funcs));
}
UClass* Z_Construct_UClass_APickUpBase()
{
	if (!Z_Registration_Info_UClass_APickUpBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickUpBase.OuterSingleton, Z_Construct_UClass_APickUpBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APickUpBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APickUpBase);
APickUpBase::~APickUpBase() {}
// ********** End Class APickUpBase ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Practice_2_Source_Practice_2_Public_PickUp_PickUpBase_h__Script_Practice_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APickUpBase, APickUpBase::StaticClass, TEXT("APickUpBase"), &Z_Registration_Info_UClass_APickUpBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickUpBase), 1303267625U) },
	};
}; // Z_CompiledInDeferFile_FID_Practice_2_Source_Practice_2_Public_PickUp_PickUpBase_h__Script_Practice_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Practice_2_Source_Practice_2_Public_PickUp_PickUpBase_h__Script_Practice_2_3671375697{
	TEXT("/Script/Practice_2"),
	Z_CompiledInDeferFile_FID_Practice_2_Source_Practice_2_Public_PickUp_PickUpBase_h__Script_Practice_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Practice_2_Source_Practice_2_Public_PickUp_PickUpBase_h__Script_Practice_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
