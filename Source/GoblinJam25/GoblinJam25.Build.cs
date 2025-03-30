// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GoblinJam25 : ModuleRules
{
	public GoblinJam25(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
