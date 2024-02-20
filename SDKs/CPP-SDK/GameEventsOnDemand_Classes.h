#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "GameEventsOnDemand_Structs.h"


// Size 0xf0 (Full Size[0x118] - InheritedSize[0x28]
class GameEventsOnDemandAvailabilityService: public Object
{
public:
	char                                                         pad0xd0_C73HJ[0xd0];                               // 0x28(0xd0)
	class World*                                                 World;                                             // 0xf8(0x8)
	char                                                         pad0x18_FD24F[0x18];                               // 0x100(0x18)
};


// Size 0x140 (Full Size[0x508] - InheritedSize[0x3c8]
class GameEventsOnDemandLoserTunnelService: public Actor
{
public:
	char                                                         pad0x8_JBI17[0x8];                                 // 0x3c8(0x8)
	class World*                                                 World;                                             // 0x3d0(0x8)
	char                                                         pad0x58_0ZVO5[0x58];                               // 0x3d8(0x58)
	class VoyageDescDataAsset*                                   LoserTunnelVoyageDescDataAsset;                    // 0x430(0x8)
	char                                                         pad0x50_EQLVP[0x50];                               // 0x438(0x50)
	TArray<struct GameEventsOnDemandLoserTunnelCrewData>         TrackedCrews;                                      // 0x488(0x10)
	struct FName                                                 TemporaryBannerTag;                                // 0x498(0x8)
	char                                                         pad0x68_AQ9L3[0x68];                               // 0x4a0(0x68)
};


// Size 0x0 (Full Size[0x58] - InheritedSize[0x58]
class EnvQueryGenerator_SeaBasedGameEventOnDemandLocations: public EnvQueryGenerator
{
public:
};


