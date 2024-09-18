// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test_Tomo_Esteban/MyDefaultCameraShakeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyDefaultCameraShakeBase() {}

// Begin Cross Module References
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDefaultCameraShakeBase();
TEST_TOMO_ESTEBAN_API UClass* Z_Construct_UClass_UMyDefaultCameraShakeBase();
TEST_TOMO_ESTEBAN_API UClass* Z_Construct_UClass_UMyDefaultCameraShakeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Test_Tomo_Esteban();
// End Cross Module References

// Begin Class UMyDefaultCameraShakeBase
void UMyDefaultCameraShakeBase::StaticRegisterNativesUMyDefaultCameraShakeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyDefaultCameraShakeBase);
UClass* Z_Construct_UClass_UMyDefaultCameraShakeBase_NoRegister()
{
	return UMyDefaultCameraShakeBase::StaticClass();
}
struct Z_Construct_UClass_UMyDefaultCameraShakeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyDefaultCameraShakeBase.h" },
		{ "ModuleRelativePath", "MyDefaultCameraShakeBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyDefaultCameraShakeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyDefaultCameraShakeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDefaultCameraShakeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Test_Tomo_Esteban,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyDefaultCameraShakeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyDefaultCameraShakeBase_Statics::ClassParams = {
	&UMyDefaultCameraShakeBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyDefaultCameraShakeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyDefaultCameraShakeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyDefaultCameraShakeBase()
{
	if (!Z_Registration_Info_UClass_UMyDefaultCameraShakeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyDefaultCameraShakeBase.OuterSingleton, Z_Construct_UClass_UMyDefaultCameraShakeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyDefaultCameraShakeBase.OuterSingleton;
}
template<> TEST_TOMO_ESTEBAN_API UClass* StaticClass<UMyDefaultCameraShakeBase>()
{
	return UMyDefaultCameraShakeBase::StaticClass();
}
UMyDefaultCameraShakeBase::UMyDefaultCameraShakeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyDefaultCameraShakeBase);
UMyDefaultCameraShakeBase::~UMyDefaultCameraShakeBase() {}
// End Class UMyDefaultCameraShakeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_esteban_lafargue_Desktop_UE_Tomo_Test_Test_Tomo_Esteban_Source_Test_Tomo_Esteban_MyDefaultCameraShakeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyDefaultCameraShakeBase, UMyDefaultCameraShakeBase::StaticClass, TEXT("UMyDefaultCameraShakeBase"), &Z_Registration_Info_UClass_UMyDefaultCameraShakeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyDefaultCameraShakeBase), 3473883874U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_esteban_lafargue_Desktop_UE_Tomo_Test_Test_Tomo_Esteban_Source_Test_Tomo_Esteban_MyDefaultCameraShakeBase_h_1340632316(TEXT("/Script/Test_Tomo_Esteban"),
	Z_CompiledInDeferFile_FID_Users_esteban_lafargue_Desktop_UE_Tomo_Test_Test_Tomo_Esteban_Source_Test_Tomo_Esteban_MyDefaultCameraShakeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_esteban_lafargue_Desktop_UE_Tomo_Test_Test_Tomo_Esteban_Source_Test_Tomo_Esteban_MyDefaultCameraShakeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
