#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x10
struct MusicZoneEmitterSwitch
{
public:
	struct FName                                                 SwitchGroup;                                       // 0x0(0x8)
	struct FName                                                 Value;                                             // 0x8(0x8)
};


// Size 0x10
struct MusicZoneSpawnedEvent
{
public:
	char                                                         pad0x10_E7OGH[0x10];                               // 0x0(0x10)
};


// Size 0x10
struct MusicZoneDestroyedEvent
{
public:
	char                                                         pad0x10_QKWNI[0x10];                               // 0x0(0x10)
};


// Size 0xc
struct MusicZoneEmitterRTPC
{
public:
	struct FName                                                 RTPC;                                              // 0x0(0x8)
	float                                                        Value;                                             // 0x8(0x4)
};


// Size 0x20
struct MusicZoneRemoteValues
{
public:
	TArray<struct MusicZoneEmitterSwitch>                        Switches;                                          // 0x0(0x10)
	TArray<struct MusicZoneEmitterRTPC>                          RTPCs;                                             // 0x10(0x10)
};


