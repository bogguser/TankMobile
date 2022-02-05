// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PugiTest : ModuleRules
{
	public PugiTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });

		if(Target.Platform == UnrealTargetPlatform.Android)
        {
			PublicAdditionalLibraries.AddRange(new string[] { System.IO.Path.Combine(ModuleDirectory, "PGTest", "pugi", "pugixml.lib") });
        }
	}
}
