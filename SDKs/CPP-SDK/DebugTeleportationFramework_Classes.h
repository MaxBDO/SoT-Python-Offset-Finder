// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class DebugTeleportationLookupInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class DebugTeleportationPresentationInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class DebugTeleportationRegistrationInterface: public Interface
{
public:
};


// Size 0x28 (Full Size[0x3f0] - InheritedSize[0x3c8]
class DebugTeleportationDestinationService: public Actor
{
public:
	char                                                         pad0x18_HVDP9[0x18];                               // 0x3c8(0x18)
	TArray<struct DebugTeleportDestinationEntry>                 DebugTeleportationRegistry;                        // 0x3e0(0x10)
};


}