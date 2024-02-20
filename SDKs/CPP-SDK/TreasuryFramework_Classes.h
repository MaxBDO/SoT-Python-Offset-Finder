#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "TreasuryFramework_Structs.h"


// Size 0xa8 (Full Size[0x470] - InheritedSize[0x3c8]
class ShimmerActor: public Actor
{
public:
	char                                                         pad0xa8_YKCVM[0xa8];                               // 0x3c8(0xa8)
};


// Size 0x1a0 (Full Size[0x568] - InheritedSize[0x3c8]
class TreasuryRoom: public Actor
{
public:
	char                                                         pad0x18_7TXTQ[0x18];                               // 0x3c8(0x18)
	class BoxComponent*                                          RoomAreaComponent;                                 // 0x3e0(0x8)
	float                                                        TreasuryInactiveDurationMinSeconds;                // 0x3e8(0x4)
	float                                                        TreasuryInactiveDurationMaxSeconds;                // 0x3ec(0x4)
	float                                                        RoomFailureDurationSeconds;                        // 0x3f0(0x4)
	float                                                        WaveDelaySeconds;                                  // 0x3f4(0x4)
	float                                                        EncounterDelaySeconds;                             // 0x3f8(0x4)
	float                                                        VaultDoorAnimDurationSeconds;                      // 0x3fc(0x4)
	float                                                        VaultDoorOpenDurationSeconds;                      // 0x400(0x4)
	int                                                          MinWavesInEncounter;                               // 0x404(0x4)
	int                                                          MaxWavesInEncounter;                               // 0x408(0x4)
	int                                                          MaxEncounters;                                     // 0x40c(0x4)
	TArray<struct TreasuryWaveEncounter>                         WaveEncounters;                                    // 0x410(0x10)
	struct FText                                                 OnTreasuryRoomCompleteEmergentBannerText;          // 0x420(0x38)
	struct StringAssetReference                                  SunkenTreasuryAvailabilityParamsAssetFileLocation; // 0x458(0x10)
	class Actor*                                                 FloodMechanismActor;                               // 0x468(0x8)
	class Actor*                                                 FloodTriggerActor;                                 // 0x470(0x8)
	class Actor*                                                 DrainMechanismActor;                               // 0x478(0x8)
	class Actor*                                                 DrainTriggerActor;                                 // 0x480(0x8)
	class Actor*                                                 VaultMechanismActor;                               // 0x488(0x8)
	class Actor*                                                 VaultTriggerActor;                                 // 0x490(0x8)
	class UClass*                                                VaultLootSpawner;                                  // 0x498(0x8)
	class Actor*                                                 VaultLootSpawnLocationActor;                       // 0x4a0(0x8)
	class Actor*                                                 EntranceSirenWindowActor;                          // 0x4a8(0x8)
	class GameEventOnDemandAvailabilityHandler*                  GameEventOnDemandAvailabilityHandler;              // 0x4d0(0x8)
	TArray<class Actor*>                                         OverlappingActors;                                 // 0x4d8(0x10)
	TArray<uintptr_t>                                            CachedParticipantControllers;                      // 0x4e8(0x10)
	class Actor*                                                 VaultLootSpawnerActor;                             // 0x4f8(0x8)
	struct PlayerStat                                            VaultOpenStat;                                     // 0x500(0x4)
	char                                                         pad0x4_AUYEY[0x4];                                 // 0x504(0x4)
	class MechanismActionComponent*                              FloodMechanismComponent;                           // 0x508(0x8)
	class MechanismActionComponent*                              DrainMechanismComponent;                           // 0x510(0x8)
	class MechanismActionComponent*                              VaultMechanismComponent;                           // 0x518(0x8)
	char                                                         pad0x48_D2FVS[0x48];                               // 0x520(0x48)
};


// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class TreasuryWaveDataAsset: public DataAsset
{
public:
	TArray<class AIProgressiveWavesSpawner*>                     Waves1Player;                                      // 0x28(0x10)
	TArray<class AIProgressiveWavesSpawner*>                     Waves2Player;                                      // 0x38(0x10)
	TArray<class AIProgressiveWavesSpawner*>                     Waves3Player;                                      // 0x48(0x10)
	TArray<class AIProgressiveWavesSpawner*>                     Waves4Player;                                      // 0x58(0x10)
};


// Size 0x8 (Full Size[0x440] - InheritedSize[0x438]
class SunkenKingdomShrineDeepSeaRegion: public DeepSeaRegion
{
public:
	char                                                         pad0x8_U2EXT[0x8];                                 // 0x438(0x8)
};


// Size 0x30 (Full Size[0x4a0] - InheritedSize[0x470]
class SunkenKingdomShrineFinalRewardSpawnComponent: public ItemSpawnComponent
{
public:
	char                                                         pad0x30_PER67[0x30];                               // 0x470(0x30)
};


// Size 0x8 (Full Size[0x440] - InheritedSize[0x438]
class SunkenKingdomTreasuryDeepSeaRegion: public DeepSeaRegion
{
public:
	char                                                         pad0x8_1J43Q[0x8];                                 // 0x438(0x8)
};


// Size 0xb0 (Full Size[0x5b0] - InheritedSize[0x500]
class SunkenKingdomShrineEventRoom: public EventRoom
{
public:
	char                                                         pad0x10_GZP2H[0x10];                               // 0x500(0x10)
	class Actor*                                                 EntranceActor;                                     // 0x510(0x8)
	class GameEventOnDemandAvailabilityHandler*                  GameEventOnDemandAvailabilityHandler;              // 0x518(0x8)
	struct StringAssetReference                                  AvailabilityParamsAssetFileLocation;               // 0x520(0x10)
	class ObjectProximityResetComponent*                         PuzzleResetComponent;                              // 0x530(0x8)
	class GameEventItemSpawnSelectorComponent*                   ItemSpawnSelectorComponent;                        // 0x538(0x8)
	char                                                         pad0x70_4GACM[0x70];                               // 0x540(0x70)
};


