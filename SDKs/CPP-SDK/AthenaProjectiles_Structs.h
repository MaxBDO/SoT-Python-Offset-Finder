#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x18
struct ThrottledProjectileTickPool
{
public:
	int                                                          MaxNumberToTickPerFrame;                           // 0x0(0x4)
	char                                                         pad0x4_14V92[0x4];                                 // 0x4(0x4)
	TArray<class Class*>                                         Projectiles;                                       // 0x8(0x10)
};


// Size 0x10
struct GlobalProjectileSettings
{
public:
	char                                                         SettingsFor;                                       // 0x0(0x1)
	char                                                         pad0x3_50YKK[0x3];                                 // 0x1(0x3)
	float                                                        ProjectileDestroyDepth;                            // 0x4(0x4)
	float                                                        ProjectileOceanFloorDestroyDepth;                  // 0x8(0x4)
	float                                                        ProjectileMinimumFallDistance;                     // 0xc(0x4)
};


