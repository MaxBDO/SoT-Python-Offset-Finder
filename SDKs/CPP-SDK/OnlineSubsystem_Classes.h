// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class DefaultOnlineEnvironmentSettings: public Object
{
public:
	Struct FString                                               EnvironmentId;                                     // 0x28(0x10)
	Struct FString                                               ServiceConfigId;                                   // 0x40(0x10)
	Struct FString                                               ClientCertificateThumbprint;                       // 0x50(0x10)
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class NamedInterfaces: public Object
{
public:
	TArray<struct NamedInterfaces>                               NamedInterfaces;                                   // 0x28(0x10)
	TArray<struct NamedInterfaceDefs>                            NamedInterfaceDefs;                                // 0x38(0x10)
	char                                                         pad0x18_DLBIM[0x18];                               // 0x48(0x18)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TurnBasedMatchInterface: public Interface
{
public:
};


}