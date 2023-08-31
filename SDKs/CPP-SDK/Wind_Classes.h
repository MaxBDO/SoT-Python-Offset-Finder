// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WindZoneInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WindInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class DebugWindInterface: public Interface
{
public:
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class MockWindService: public Object
{
public:
};


// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class TestWindInterface: public Object
{
public:
	char                                                         pad0x30_L5A3D[0x30];                               // 0x28(0x30)
	TArray<Interface WindZones>                                  WindZones;                                         // 0x58(0x10)
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class TestWindZone: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WindFunctions: public BlueprintFunctionLibrary
{
public:
};


// Size 0x138 (Full Size[0x500] - InheritedSize[0x3c8]
class WindService: public Actor
{
public:
	char                                                         pad0x10_DY24T[0x10];                               // 0x3c8(0x10)
	Class WindDirectionalSource*                                 GlobalWindSource;                                  // 0x3d8(0x8)
	char                                                         pad0x10_814OK[0x10];                               // 0x3e0(0x10)
	float                                                        CurrentWindAngle;                                  // 0x3f0(0x4)
	float                                                        CurrentWindMagnitude;                              // 0x3f4(0x4)
	char                                                         pad0xe8_0H1QD[0xe8];                               // 0x3f8(0xe8)
	TArray<Interface WindZones>                                  WindZones;                                         // 0x4e0(0x10)
	TArray<struct ExtraWind>                                     ExtraWind;                                         // 0x4f0(0x10)
};


// Size 0x10 (Full Size[0x510] - InheritedSize[0x500]
class DebugWindService: public WindService
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WindServiceParamsFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x90 (Full Size[0x370] - InheritedSize[0x2e0]
class WindZoneComponent: public SceneComponent
{
public:
	char                                                         pad0x8_DNJ8A[0x8];                                 // 0x2e0(0x8)
	Struct WindTurbulenceParameters                              TurbulenceParams;                                  // 0x2e8(0x70)
	Struct WindZoneParams                                        WindZoneParams;                                    // 0x358(0x10)
	char                                                         pad0x8_D97RT[0x8];                                 // 0x368(0x8)
};


// Size 0x0 (Full Size[0x370] - InheritedSize[0x370]
class TestWindZoneComponent: public WindZoneComponent
{
public:
};


}