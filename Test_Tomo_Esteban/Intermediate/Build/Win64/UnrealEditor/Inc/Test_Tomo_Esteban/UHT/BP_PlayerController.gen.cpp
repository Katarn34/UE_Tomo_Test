// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test_Tomo_Esteban/BP_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_PlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
TEST_TOMO_ESTEBAN_API UClass* Z_Construct_UClass_ABP_PlayerController();
TEST_TOMO_ESTEBAN_API UClass* Z_Construct_UClass_ABP_PlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Test_Tomo_Esteban();
// End Cross Module References

// Begin Class ABP_PlayerController
void ABP_PlayerController::StaticRegisterNativesABP_PlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABP_PlayerController);
UClass* Z_Construct_UClass_ABP_PlayerController_NoRegister()
{
	return ABP_PlayerController::StaticClass();
}
struct Z_Construct_UClass_ABP_PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BP_PlayerController.h" },
		{ "ModuleRelativePath", "BP_PlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABP_PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Test_Tomo_Esteban,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABP_PlayerController_Statics::ClassParams = {
	&ABP_PlayerController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABP_PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABP_PlayerController()
{
	if (!Z_Registration_Info_UClass_ABP_PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABP_PlayerController.OuterSingleton, Z_Construct_UClass_ABP_PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABP_PlayerController.OuterSingleton;
}
template<> TEST_TOMO_ESTEBAN_API UClass* StaticClass<ABP_PlayerController>()
{
	return ABP_PlayerController::StaticClass();
}
ABP_PlayerController::ABP_PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_PlayerController);
ABP_PlayerController::~ABP_PlayerController() {}
// End Class ABP_PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_esteban_lafargue_Desktop_UE_Tomo_Test_Test_Tomo_Esteban_Source_Test_Tomo_Esteban_BP_PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABP_PlayerController, ABP_PlayerController::StaticClass, TEXT("ABP_PlayerController"), &Z_Registration_Info_UClass_ABP_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABP_PlayerController), 3440600758U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_esteban_lafargue_Desktop_UE_Tomo_Test_Test_Tomo_Esteban_Source_Test_Tomo_Esteban_BP_PlayerController_h_1269476803(TEXT("/Script/Test_Tomo_Esteban"),
	Z_CompiledInDeferFile_FID_Users_esteban_lafargue_Desktop_UE_Tomo_Test_Test_Tomo_Esteban_Source_Test_Tomo_Esteban_BP_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_esteban_lafargue_Desktop_UE_Tomo_Test_Test_Tomo_Esteban_Source_Test_Tomo_Esteban_BP_PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
