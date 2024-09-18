// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test_Tomo_Esteban/Test_Tomo_EstebanGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTest_Tomo_EstebanGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TEST_TOMO_ESTEBAN_API UClass* Z_Construct_UClass_ATest_Tomo_EstebanGameMode();
TEST_TOMO_ESTEBAN_API UClass* Z_Construct_UClass_ATest_Tomo_EstebanGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Test_Tomo_Esteban();
// End Cross Module References

// Begin Class ATest_Tomo_EstebanGameMode
void ATest_Tomo_EstebanGameMode::StaticRegisterNativesATest_Tomo_EstebanGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATest_Tomo_EstebanGameMode);
UClass* Z_Construct_UClass_ATest_Tomo_EstebanGameMode_NoRegister()
{
	return ATest_Tomo_EstebanGameMode::StaticClass();
}
struct Z_Construct_UClass_ATest_Tomo_EstebanGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Test_Tomo_EstebanGameMode.h" },
		{ "ModuleRelativePath", "Test_Tomo_EstebanGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATest_Tomo_EstebanGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATest_Tomo_EstebanGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Test_Tomo_Esteban,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATest_Tomo_EstebanGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATest_Tomo_EstebanGameMode_Statics::ClassParams = {
	&ATest_Tomo_EstebanGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATest_Tomo_EstebanGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATest_Tomo_EstebanGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATest_Tomo_EstebanGameMode()
{
	if (!Z_Registration_Info_UClass_ATest_Tomo_EstebanGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATest_Tomo_EstebanGameMode.OuterSingleton, Z_Construct_UClass_ATest_Tomo_EstebanGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATest_Tomo_EstebanGameMode.OuterSingleton;
}
template<> TEST_TOMO_ESTEBAN_API UClass* StaticClass<ATest_Tomo_EstebanGameMode>()
{
	return ATest_Tomo_EstebanGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATest_Tomo_EstebanGameMode);
ATest_Tomo_EstebanGameMode::~ATest_Tomo_EstebanGameMode() {}
// End Class ATest_Tomo_EstebanGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_esteban_lafargue_Documents_Unreal_Projects_Test_Tomo_Esteban_Source_Test_Tomo_Esteban_Test_Tomo_EstebanGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATest_Tomo_EstebanGameMode, ATest_Tomo_EstebanGameMode::StaticClass, TEXT("ATest_Tomo_EstebanGameMode"), &Z_Registration_Info_UClass_ATest_Tomo_EstebanGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATest_Tomo_EstebanGameMode), 1850336630U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_esteban_lafargue_Documents_Unreal_Projects_Test_Tomo_Esteban_Source_Test_Tomo_Esteban_Test_Tomo_EstebanGameMode_h_2893147824(TEXT("/Script/Test_Tomo_Esteban"),
	Z_CompiledInDeferFile_FID_Users_esteban_lafargue_Documents_Unreal_Projects_Test_Tomo_Esteban_Source_Test_Tomo_Esteban_Test_Tomo_EstebanGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_esteban_lafargue_Documents_Unreal_Projects_Test_Tomo_Esteban_Source_Test_Tomo_Esteban_Test_Tomo_EstebanGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
