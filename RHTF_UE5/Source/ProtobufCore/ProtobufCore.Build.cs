using System.IO;
using UnrealBuildTool;

public class ProtobufCore : ModuleRules
{
    public ProtobufCore(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;

        PublicSystemIncludePaths.Add(Path.Combine(ModuleDirectory, "Include"));
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Include"));
        PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "Lib", "libprotobuf.lib"));

        PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "Lib", "abseil_dll.lib"));
        
        PublicDefinitions.Add("GOOGLE_PROTOBUF_NO_RTTI=1");
    }
}
