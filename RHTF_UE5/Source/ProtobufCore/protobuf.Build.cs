using System;
using System.IO;
using UnrealBuildTool;

public class protobuf : ModuleRules
{
    public protobuf(ReadOnlyTargetRules Target)
        : base(Target)
    {
        Type = ModuleType.External;

        PublicSystemIncludePaths.Add(Path.Combine(ModuleDirectory, "ProtobufCore"));
        PublicSystemIncludePaths.Add(Path.Combine(ModuleDirectory, "Include"));
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "ProtobufCore"));
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Include"));
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "NetProtocol"));
        PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "Lib", "Win64", "libprotobuf.lib"));

        PublicDefinitions.Add("GOOGLE_PROTOBUF_NO_RTTI=1");
    }
}
