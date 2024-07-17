// Copyright Epic Games, Inc. All Rights Reserved.
using System.IO;
using UnrealBuildTool;

public class RHTF_UE5 : ModuleRules
{
	public RHTF_UE5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        // Public 폴더에 있는 .h 파일에서 선언용.
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Sockets", "Networking" });
            
        // Private 폴더에 있는 .cpp 파일에서만 사용한다.
		PrivateDependencyModuleNames.AddRange(new string[] { "ProtobufCore" });
    }
}
