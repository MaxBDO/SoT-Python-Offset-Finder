// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class AssetExclusionCanaryAsset: public DataAsset
{
public:
	Struct FText                                                 TextMustNotBeEmpty;                                // 0x28(0x38)
	int                                                          ValueMustBeSetTo10;                                // 0x60(0x4)
	char                                                         pad0x4_KENYG[0x4];                                 // 0x64(0x4)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class AssetExclusionCanaryContainerList: public DataAsset
{
public:
	TArray<class AssetExclusionCanaryAsset*>                     CanaryAssets;                                      // 0x28(0x10)
};


}