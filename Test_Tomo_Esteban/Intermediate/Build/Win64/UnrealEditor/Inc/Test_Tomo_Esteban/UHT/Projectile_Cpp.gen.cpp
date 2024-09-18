// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test_Tomo_Esteban/Projectile_Cpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectile_Cpp() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TEST_TOMO_ESTEBAN_API UClass* Z_Construct_UClass_AProjectile_Cpp();
TEST_TOMO_ESTEBAN_API UClass* Z_Construct_UClass_AProjectile_Cpp_NoRegister();
UPackage* Z_Construct_UPackage__Script_Test_Tomo_Esteban();
// End Cross Module References

// Begin Class AProjectile_Cpp
void AProjectile_Cpp::StaticRegisterNativesAProjectile_Cpp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectile_Cpp);
UClass* Z_Construct_UClass_AProjectile_Cpp_NoRegister()
{
	return AProjectile_Cpp::StaticClass();
}
struct Z_Construct_UClass_AProjectile_Cpp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Projectile_Cpp.h" },
		{ "ModuleRelativePath", "Projectile_Cpp.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectile_Cpp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProjectile_Cpp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Test_Tomo_Esteban,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Cpp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectile_Cpp_Statics::ClassParams = {
	&AProjectile_Cpp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Cpp_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectile_Cpp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectile_Cpp()
{
	if (!Z_Registration_Info_UClass_AProjectile_Cpp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectile_Cpp.OuterSingleton, Z_Construct_UClass_AProjectile_Cpp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectile_Cpp.OuterSingleton;
}
template<> TEST_TOMO_ESTEBAN_API UClass* StaticClass<AProjectile_Cpp>()
{
	return AProjectile_Cpp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectile_Cpp);
AProjectile_Cpp::~AProjectile_Cpp() {}
// End Class AProjectile_Cpp

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_esteban_lafargue_Desktop_UE_Tomo_Test_Test_Tomo_Esteban_Source_Test_Tomo_Esteban_Projectile_Cpp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectile_Cpp, AProjectile_Cpp::StaticClass, TEXT("AProjectile_Cpp"), &Z_Registration_Info_UClass_AProjectile_Cpp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectile_Cpp), 1419641910U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_esteban_lafargue_Desktop_UE_Tomo_Test_Test_Tomo_Esteban_Source_Test_Tomo_Esteban_Projectile_Cpp_h_3911734881(TEXT("/Script/Test_Tomo_Esteban"),
	Z_CompiledInDeferFile_FID_Users_esteban_lafargue_Desktop_UE_Tomo_Test_Test_Tomo_Esteban_Source_Test_Tomo_Esteban_Projectile_Cpp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_esteban_lafargue_Desktop_UE_Tomo_Test_Test_Tomo_Esteban_Source_Test_Tomo_Esteban_Projectile_Cpp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
