// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
struct MusicZoneRemoteValues
{
public:
	TArray<struct Switches>                                      Switches;                                          // 0x0(0x10)
	TArray<struct RTPCs>                                         RTPCs;                                             // 0x10(0x10)
};


// Size 0xc
struct MusicZoneEmitterRTPC
{
public:
	struct FName                                                 RTPC;                                              // 0x0(0x8)
	float                                                        Value;                                             // 0x8(0x4)
};


// Size 0x10
struct MusicZoneEmitterSwitch
{
public:
	struct FName                                                 SwitchGroup;                                       // 0x0(0x8)
	struct FName                                                 Value;                                             // 0x8(0x8)
};


// Size 0x10
struct MusicZoneDestroyedEvent
{
public:
};


// Size 0x10
struct MusicZoneSpawnedEvent
{
public:
};


}