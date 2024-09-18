// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Test_Tomo_Esteban : ModuleRules
{
	public Test_Tomo_Esteban(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
