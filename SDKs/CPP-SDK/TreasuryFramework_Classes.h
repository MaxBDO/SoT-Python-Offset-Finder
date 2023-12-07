// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xa8 (Full Size[0x470] - InheritedSize[0x3c8]
class ShimmerActor: public Actor
{
public:
	char                                                         pad0xa8_85BKD[0xa8];                               // 0x3c8(0xa8)
};


// Size 0x8 (Full Size[0x440] - InheritedSize[0x438]
class SunkenKingdomTreasuryDeepSeaRegion: public DeepSeaRegion
{
public:
	char                                                         pad0x8_2OMMK[0x8];                                 // 0x438(0x8)
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


// Size 0x1a0 (Full Size[0x568] - InheritedSize[0x3c8]
class TreasuryRoom: public Actor
{
public:
	char                                                         pad0x10_UCGPI[0x10];                               // 0x3c8(0x10)
	class BoxComponent*                                          RoomAreaComponent;                                 // 0x3d8(0x8)
	float                                                        TreasuryInactiveDurationMinSeconds;                // 0x3e0(0x4)
	float                                                        TreasuryInactiveDurationMaxSeconds;                // 0x3e4(0x4)
	float                                                        RoomFailureDurationSeconds;                        // 0x3e8(0x4)
	float                                                        WaveDelaySeconds;                                  // 0x3ec(0x4)
	float                                                        EncounterDelaySeconds;                             // 0x3f0(0x4)
	float                                                        VaultDoorAnimDurationSeconds;                      // 0x3f4(0x4)
	float                                                        VaultDoorOpenDurationSeconds;                      // 0x3f8(0x4)
	int                                                          MinWavesInEncounter;                               // 0x3fc(0x4)
	int                                                          MaxWavesInEncounter;                               // 0x400(0x4)
	int                                                          MaxEncounters;                                     // 0x404(0x4)
	TArray<struct TreasuryWaveEncounter>                         WaveEncounters;                                    // 0x408(0x10)
	struct FText                                                 OnTreasuryRoomCompleteEmergentBannerText;          // 0x418(0x38)
	struct StringAssetReference                                  SunkenTreasuryAvailabilityParamsAssetFileLocation; // 0x450(0x10)
	class Actor*                                                 FloodMechanismActor;                               // 0x460(0x8)
	class Actor*                                                 FloodTriggerActor;                                 // 0x468(0x8)
	class Actor*                                                 DrainMechanismActor;                               // 0x470(0x8)
	class Actor*                                                 DrainTriggerActor;                                 // 0x478(0x8)
	class Actor*                                                 VaultMechanismActor;                               // 0x480(0x8)
	class Actor*                                                 VaultTriggerActor;                                 // 0x488(0x8)
	class UClass*                                                VaultLootSpawner;                                  // 0x490(0x8)
	class Actor*                                                 VaultLootSpawnLocationActor;                       // 0x498(0x8)
	class Actor*                                                 EntranceSirenWindowActor;                          // 0x4a0(0x8)
	class GameEventOnDemandAvailabilityHandler*                  GameEventOnDemandAvailabilityHandler;              // 0x4c8(0x8)
	TArray<class Actor*>                                         OverlappingActors;                                 // 0x4d0(0x10)
	TArray<Weakclass CachedParticipantControllers>               CachedParticipantControllers;                      // 0x4e0(0x10)
	class Actor*                                                 VaultLootSpawnerActor;                             // 0x4f0(0x8)
	struct PlayerStat                                            VaultOpenStat;                                     // 0x4f8(0x4)
	char                                                         pad0x4_IFQ26[0x4];                                 // 0x4fc(0x4)
	class MechanismActionComponent*                              FloodMechanismComponent;                           // 0x500(0x8)
	class MechanismActionComponent*                              DrainMechanismComponent;                           // 0x508(0x8)
	class MechanismActionComponent*                              VaultMechanismComponent;                           // 0x510(0x8)
	class GameEventOnDemandAnnouncementComponent*                GameEventOnDemandAnnouncementComponent;            // 0x548(0x8)
	char                                                         pad0x18_DY2FH[0x18];                               // 0x550(0x18)
};


// Size 0x0 (Full Size[0x438] - InheritedSize[0x438]
class SunkenKingdomShrineDeepSeaRegion: public DeepSeaRegion
{
public:
};


// Size 0x90 (Full Size[0x590] - InheritedSize[0x500]
class SunkenKingdomShrineEventRoom: public EventRoom
{
public:
	char                                                         pad0x8_ZWZF8[0x8];                                 // 0x500(0x8)
	class GameEventOnDemandAvailabilityHandler*                  GameEventOnDemandAvailabilityHandler;              // 0x508(0x8)
	struct StringAssetReference                                  AvailabilityParamsAssetFileLocation;               // 0x510(0x10)
	class GameEventOnDemandAnnouncementComponent*                GameEventOnDemandAnnouncementComp;                 // 0x520(0x8)
	class ObjectProximityResetComponent*                         PuzzleResetComponent;                              // 0x528(0x8)
	char                                                         pad0x60_HEATS[0x60];                               // 0x530(0x60)
};


}