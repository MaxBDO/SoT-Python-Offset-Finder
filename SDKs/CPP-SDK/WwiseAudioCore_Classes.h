// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x238 (Full Size[0x260] - InheritedSize[0x28]
class WwiseAudioSettings: public Object
{
public:
	char                                                         pad0xc0_V22DF[0xc0];                               // 0x28(0xc0)
	Struct WwisePlatformMappings                                 PlatformMappings;                                  // 0xe8(0x20)
	Struct WwiseAudioReverbPresets                               ReverbPresetSettings;                              // 0x108(0x64)
	char                                                         pad0x4_7QQ1D[0x4];                                 // 0x16c(0x4)
	Struct StringAssetReference                                  WwiseCoreAssetsPath;                               // 0x170(0x10)
	Struct DirectoryPath                                         WwiseSoundbanksRoot;                               // 0x180(0x10)
	Struct DirectoryPath                                         WwiseStreamedFilesRoot;                            // 0x190(0x10)
	TArray<struct AsyncIOPriorityMappings>                       AsyncIOPriorityMappings;                           // 0x1a0(0x10)
	Struct DirectoryPath                                         TritonAcousticMapsDirectory;                       // 0x1b0(0x10)
	Struct FString                                               DefaultLanguage;                                   // 0x1c0(0x10)
	Struct FString                                               SinkSharesetName;                                  // 0x1d0(0x10)
	Struct WwiseNetworkRelationship                              NetworkRelationship;                               // 0x1e0(0x18)
	Class WwiseCoreAssets*                                       WwiseCoreAssets;                                   // 0x200(0x8)
	char                                                         pad0x58_NWWIR[0x58];                               // 0x208(0x58)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WwiseSubSystemInterface: public Interface
{
public:
};


}