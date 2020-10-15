// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tencent_Course : ModuleRules
{
	public Tencent_Course(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
