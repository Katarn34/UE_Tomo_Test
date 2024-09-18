// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test_Tomo_Esteban/BP_MainCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_MainCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TEST_TOMO_ESTEBAN_API UClass* Z_Construct_UClass_ABP_MainCharacter();
TEST_TOMO_ESTEBAN_API UClass* Z_Construct_UClass_ABP_MainCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Test_Tomo_Esteban();
// End Cross Module References

// Begin Class ABP_MainCharacter
void ABP_MainCharacter::StaticRegisterNativesABP_MainCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABP_MainCharacter);
UClass* Z_Construct_UClass_ABP_MainCharacter_NoRegister()
{
	return ABP_MainCharacter::StaticClass();
}
struct Z_Construct_UClass_ABP_MainCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BP_MainCharacter.h" },
		{ "ModuleRelativePath", "BP_MainCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_MainCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABP_MainCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Test_Tomo_Esteban,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MainCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABP_MainCharacter_Statics::ClassParams = {
	&ABP_MainCharacter::StaticClass,
	"Game",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MainCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABP_MainCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABP_MainCharacter()
{
	if (!Z_Registration_Info_UClass_ABP_MainCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABP_MainCharacter.OuterSingleton, Z_Construct_UClass_ABP_MainCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABP_MainCharacter.OuterSingleton;
}
template<> TEST_TOMO_ESTEBAN_API UClass* StaticClass<ABP_MainCharacter>()
{
	return ABP_MainCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_MainCharacter);
ABP_MainCharacter::~ABP_MainCharacter() {}
// End Class ABP_MainCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_esteban_lafargue_Documents_Unreal_Projects_Test_Tomo_Esteban_Source_Test_Tomo_Esteban_BP_MainCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABP_MainCharacter, ABP_MainCharacter::StaticClass, TEXT("ABP_MainCharacter"), &Z_Registration_Info_UClass_ABP_MainCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABP_MainCharacter), 1800998561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_esteban_lafargue_Documents_Unreal_Projects_Test_Tomo_Esteban_Source_Test_Tomo_Esteban_BP_MainCharacter_h_2032564803(TEXT("/Script/Test_Tomo_Esteban"),
	Z_CompiledInDeferFile_FID_Users_esteban_lafargue_Documents_Unreal_Projects_Test_Tomo_Esteban_Source_Test_Tomo_Esteban_BP_MainCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_esteban_lafargue_Documents_Unreal_Projects_Test_Tomo_Esteban_Source_Test_Tomo_Esteban_BP_MainCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
