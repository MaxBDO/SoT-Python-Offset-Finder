// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class ServiceHttpSettings: public Object
{
public:
	Struct FString                                               DiscoveryServiceUrl;                               // 0x28(0x10)
	byte                                                         ServerMetricsLevel;                                // 0x38(0x1)
	byte                                                         ClientMetricsLevel;                                // 0x39(0x1)
	char                                                         pad0x6_65IW2[0x6];                                 // 0x3a(0x6)
	Struct FString                                               SubStringToFindInUrlForXBLiveTokenRequest;         // 0x40(0x10)
	Struct FString                                               UrlReplacementStringForXBLiveTokenRequest;         // 0x50(0x10)
	Struct FString                                               CustomBuildVersionTag;                             // 0x60(0x10)
};


// Size 0x50 (Full Size[0x78] - InheritedSize[0x28]
class DevelopmentAuthenticationSettings: public Object
{
public:
	Struct FString                                               SandboxId;                                         // 0x28(0x10)
	Struct FString                                               TokenServiceUrl;                                   // 0x38(0x10)
	Struct FString                                               ClientId;                                          // 0x48(0x10)
	Struct FString                                               ClientSecret;                                      // 0x58(0x10)
	Struct FString                                               LivePrivileges;                                    // 0x68(0x10)
};


}