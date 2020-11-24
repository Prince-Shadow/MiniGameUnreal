// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyExerciceUnreal : ModuleRules
{
	public MyExerciceUnreal(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
