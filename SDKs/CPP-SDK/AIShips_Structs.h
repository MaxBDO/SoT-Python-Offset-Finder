// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x50
struct AIShipBattleParams
{
public:
	Struct FText                                                 Name;                                              // 0x0(0x38)
	class                                                        SeaId;                                             // 0x38(0x8)
	Struct Vector2D                                              Location;                                          // 0x40(0x8)
	float                                                        Radius;                                            // 0x48(0x4)
};


// Size 0x38
struct ShipMovementParams
{
public:
	float                                                        MinTargetDistanceForMovement;                      // 0x0(0x4)
	float                                                        MaxTurnAngle;                                      // 0x4(0x4)
	float                                                        MaxTurnAngleForObstacleAvoidance;                  // 0x8(0x4)
	float                                                        MaxTurnAngleForPlayerShipObstacleAvoidance;        // 0xc(0x4)
	float                                                        MinTurnSpeedScaler;                                // 0x10(0x4)
	float                                                        MaxSpeed;                                          // 0x14(0x4)
	float                                                        MinSpeed;                                          // 0x18(0x4)
	float                                                        TimeToAccelerateFromZeroToMaxSpeed;                // 0x1c(0x4)
	float                                                        TimeToAccelerateFromZeroToMaxTurnSpeed;            // 0x20(0x4)
	float                                                        MoveBackwardsAngleThreshold;                       // 0x24(0x4)
	float                                                        MoveBackwardsDistanceThreshold;                    // 0x28(0x4)
	float                                                        MoveBackwardsShipSpeedThreshold;                   // 0x2c(0x4)
	float                                                        MaxObstacleAvoidanceOverrideDistance;              // 0x30(0x4)
	float                                                        ShipHalfLength;                                    // 0x34(0x4)
};


// Size 0x18
struct TrackingNoiseGenerator
{
public:
	Class CurveFloat*                                            ParallelOffsetCurve;                               // 0x0(0x8)
	float                                                        OscillationTime;                                   // 0x8(0x4)
};


// Size 0x20
struct WeightedAIShipCrewAmmoType
{
public:
	int                                                          Weight;                                            // 0x0(0x4)
	char                                                         pad0x4_SQXQJ[0x4];                                 // 0x4(0x4)
	Struct AIShipCrewAmmoType                                    Params;                                            // 0x8(0x18)
};


// Size 0x18
struct AIShipCrewAmmoType
{
public:
	byte                                                         IconType;                                          // 0x0(0x1)
	Struct StringAssetReference                                  AmmoType;                                          // 0x8(0x10)
};


// Size 0x28
struct WeightedAIShipCrewFormType
{
public:
	int                                                          Weight;                                            // 0x0(0x4)
	char                                                         pad0x4_66QSY[0x4];                                 // 0x4(0x4)
	Struct AIShipCrewFormType                                    Params;                                            // 0x8(0x20)
};


// Size 0x20
struct AIShipCrewFormType
{
public:
	byte                                                         IconType;                                          // 0x0(0x1)
	char                                                         pad0x3_DLVHF[0x3];                                 // 0x1(0x3)
	Struct Color                                                 IconColour;                                        // 0x4(0x4)
	Struct StringAssetReference                                  Form;                                              // 0x10(0x10)
};


// Size 0x14
struct AIShipContextDescDamageParams
{
public:
	float                                                        OverrideRainFillRate;                              // 0x0(0x4)
	bool                                                         OverrideRepairTime;                                // 0x4(0x1)
	char                                                         pad0x3_SLKM0[0x3];                                 // 0x5(0x3)
	float                                                        RepairTimeMultiplier;                              // 0x8(0x4)
	bool                                                         OverrideLeakAmounts;                               // 0xc(0x1)
	char                                                         pad0x3_T6UDI[0x3];                                 // 0xd(0x3)
	float                                                        LeakAmountMultiplier;                              // 0x10(0x4)
};


// Size 0x10
struct AIShipSailData
{
public:
	Struct Color                                                 SailRGB;                                           // 0x0(0x4)
	Struct Color                                                 IconRGB;                                           // 0x4(0x4)
	int                                                          CrewIndex;                                         // 0x8(0x4)
	int                                                          CursedCannonballIndex;                             // 0xc(0x4)
};


// Size 0x20
struct AIShipEncounterParamsSpawnerData
{
public:
	Class AISpawner*                                             Spawner;                                           // 0x0(0x8)
	struct FName                                                 SpawnLocationType;                                 // 0x8(0x8)
	byte                                                         ShipPlayerTrackerType;                             // 0x10(0x1)
	char                                                         pad0x3_Q6M6G[0x3];                                 // 0x11(0x3)
	struct FName                                                 CaptainName;                                       // 0x14(0x8)
	bool                                                         CanRepairDamage;                                   // 0x1c(0x1)
	bool                                                         CanUseCannons;                                     // 0x1d(0x1)
	bool                                                         IsCaptain;                                         // 0x1e(0x1)
	bool                                                         BelowDeck;                                         // 0x1f(0x1)
};


// Size 0x80
struct AIShipContextDescGenerationParams
{
public:
	Struct AIShipContextDescGenerationSharedParams               SharedParams;                                      // 0x0(0x60)
	TArray<struct EncounterSpecificParams>                       EncounterSpecificParams;                           // 0x60(0x10)
	TArray<struct ShipSpecificParams>                            ShipSpecificParams;                                // 0x70(0x10)
};


// Size 0x30
struct AIShipContextDescGenerationShipSpecificParams
{
public:
	class                                                        ShipSize;                                          // 0x0(0x8)
	Class ShipDescAsset*                                         ShipDesc;                                          // 0x8(0x8)
	TArray<struct ShipGenerationParams>                          ShipGenerationParams;                              // 0x10(0x10)
	TArray<struct SpawnerTemplates>                              SpawnerTemplates;                                  // 0x20(0x10)
};


// Size 0x48
struct AIShipGenerationParams
{
public:
	byte                                                         EncounterType;                                     // 0x0(0x1)
	byte                                                         ShipType;                                          // 0x1(0x1)
	char                                                         pad0x6_KAKSA[0x6];                                 // 0x2(0x6)
	Class AthenaAIShipControllerParamsDataAsset*                 ShipControllerParams;                              // 0x8(0x8)
	TArray<struct SkillsetOverrides>                             SkillsetOverrides;                                 // 0x10(0x10)
	TArray<struct SkeletonAmmoTypeOverrides>                     SkeletonAmmoTypeOverrides;                         // 0x20(0x10)
	Struct AIShipContextDescDamageParams                         DamageParams;                                      // 0x30(0x14)
};


// Size 0x18
struct AIShipSkeletonSkillsetOverride
{
public:
	struct FName                                                 SpawnLocationType;                                 // 0x0(0x8)
	Struct StringAssetReference                                  Skillset;                                          // 0x8(0x10)
};


// Size 0x60
struct AIShipContextDescGenerationSharedParams
{
public:
	TArray<Byte EncounterTypes>                                  EncounterTypes;                                    // 0x0(0x10)
	TArray<struct SkeletonForms>                                 SkeletonForms;                                     // 0x10(0x10)
	TArray<struct SkeletonAmmoTypes>                             SkeletonAmmoTypes;                                 // 0x20(0x10)
	TArray<struct SailColours>                                   SailColours;                                       // 0x30(0x10)
	TArray<struct Captains>                                      Captains;                                          // 0x40(0x10)
	TArray<class Class*>                                         CaptainGenders;                                    // 0x50(0x10)
};


// Size 0x10
struct AIShipCaptainParams
{
public:
	class                                                        AIClassId;                                         // 0x0(0x8)
	struct FName                                                 Name;                                              // 0x8(0x8)
};


// Size 0x18
struct AIShipSizeDynamicContexts
{
public:
	class                                                        ShipSize;                                          // 0x0(0x8)
	TArray<class AIShipContextDescDataAsset*>                    AIShipsInPool;                                     // 0x8(0x10)
};


// Size 0x10
struct AIShipSingleWaveEncounterDescGenerationParams
{
public:
	TArray<struct ShipClassWeightedSizes>                        ShipClassWeightedSizes;                            // 0x0(0x10)
};


// Size 0x18
struct AIShipClassWeightedSizes
{
public:
	class                                                        TargetShipSize;                                    // 0x0(0x8)
	TArray<struct ShipSizes>                                     ShipSizes;                                         // 0x8(0x10)
};


// Size 0x18
struct AIShipWeightedSize
{
public:
	struct FName                                                 Feature;                                           // 0x0(0x8)
	int                                                          Weight;                                            // 0x8(0x4)
	char                                                         pad0x4_S88US[0x4];                                 // 0xc(0x4)
	class                                                        ShipSize;                                          // 0x10(0x8)
};


// Size 0x80
struct AIShipBattleEncounterDescGenerationParams
{
public:
	bool                                                         EnableHardShip;                                    // 0x0(0x1)
	char                                                         pad0x7_UEKF2[0x7];                                 // 0x1(0x7)
	TArray<struct BattleGenerationParams>                        BattleGenerationParams;                            // 0x8(0x10)
	TArray<struct BattleDescs>                                   BattleDescs;                                       // 0x18(0x10)
	Struct AIShipEncounterDynamicBalancingDesc                   DynamicBalancingDesc;                              // 0x28(0x58)
};


// Size 0x58
struct AIShipEncounterDynamicBalancingDesc
{
public:
	bool                                                         UseDynamicBalancing;                               // 0x0(0x1)
	char                                                         pad0x3_IJ3T9[0x3];                                 // 0x1(0x3)
	float                                                        InitialWaveGenEncounterRadiusMultiplier;           // 0x4(0x4)
	class                                                        HardShipType;                                      // 0x8(0x8)
	TArray<struct PlayerShipSizeValues>                          PlayerShipSizeValues;                              // 0x10(0x10)
	int                                                          PlayerValue;                                       // 0x20(0x4)
	char                                                         pad0x4_DLCHJ[0x4];                                 // 0x24(0x4)
	TArray<struct DynamicWaveCostConfigurations>                 DynamicWaveCostConfigurations;                     // 0x28(0x10)
	TArray<struct PlayerCrewStrengthTargetWaveMapping>           PlayerCrewStrengthTargetWaveMapping;               // 0x38(0x10)
	TArray<struct DynamicShipSizePools>                          DynamicShipSizePools;                              // 0x48(0x10)
};


// Size 0x10
struct AIShipEncounterDynamicBalancingPoolSizeDesc
{
public:
	class                                                        ShipSize;                                          // 0x0(0x8)
	int                                                          PoolSize;                                          // 0x8(0x4)
};


// Size 0x10
struct AIShipEncounterDynamicBalancingCrewStrengthToTargetWaveDesc
{
public:
	int                                                          MinCrewStrength;                                   // 0x0(0x4)
	int                                                          MinWaveStrength;                                   // 0x4(0x4)
	int                                                          MaxWaveStrength;                                   // 0x8(0x4)
	int                                                          WaveCountIncrement;                                // 0xc(0x4)
};


// Size 0x18
struct AIShipEncounterDynamicBalancingWaveConfigCostDesc
{
public:
	TArray<class Class*>                                         ShipSizes;                                         // 0x0(0x10)
	int                                                          WaveCost;                                          // 0x10(0x4)
};


// Size 0x10
struct AIShipEncounterDynamicBalancingPlayerShipValueDesc
{
public:
	class                                                        ShipSize;                                          // 0x0(0x8)
	int                                                          ShipValue;                                         // 0x8(0x4)
};


// Size 0x10
struct AIShipEncounterBattleDesc
{
public:
	TArray<struct WaveDescs>                                     WaveDescs;                                         // 0x0(0x10)
};


// Size 0x10
struct AIShipEncounterWaveDesc
{
public:
	TArray<class Class*>                                         ShipSizes;                                         // 0x0(0x10)
};


// Size 0x78
struct FeatureLockedAIShipEncounterBattleGenerationParams
{
public:
	struct FName                                                 Feature;                                           // 0x0(0x8)
	Struct AIShipEncounterBattleGenerationParams                 Params;                                            // 0x8(0x60)
};


// Size 0x60
struct AIShipEncounterBattleGenerationParams
{
public:
	class                                                        HardShipType;                                      // 0x0(0x8)
	Struct WeightedProbabilityRange                              NumberOfWaves;                                     // 0x8(0x20)
	Struct Int32Range                                            MinMaxNumberOfShips;                               // 0x28(0x10)
	int                                                          MinNumberOfShipsInFinalWave;                       // 0x38(0x4)
	char                                                         pad0x4_GDXJM[0x4];                                 // 0x3c(0x4)
	TArray<struct ShipSizeLimits>                                ShipSizeLimits;                                    // 0x40(0x10)
	TArray<struct WaveConfigurations>                            WaveConfigurations;                                // 0x50(0x10)
};


// Size 0x10
struct AIShipSizeLimit
{
public:
	class                                                        ShipSize;                                          // 0x0(0x8)
	int                                                          MaxInstances;                                      // 0x8(0x4)
};


// Size 0xa0
struct RelativeSpawnLocationGeneratorParams
{
public:
	TArray<struct SpawnDirections>                               SpawnDirections;                                   // 0x0(0x10)
};


// Size 0xb0
struct WeightedSpawnDirection
{
public:
	float                                                        DirectionAngle;                                    // 0x0(0x4)
	float                                                        DirectionWidth;                                    // 0x4(0x4)
	float                                                        Weight;                                            // 0x8(0x4)
	char                                                         pad0x4_QKX6F[0x4];                                 // 0xc(0x4)
	TArray<struct SpawnOffsets>                                  SpawnOffsets;                                      // 0x10(0x10)
};


// Size 0x40
struct WeightedSpawnOffset
{
public:
	float                                                        MinSpawnDistance;                                  // 0x0(0x4)
	float                                                        MaxSpawnDistance;                                  // 0x4(0x4)
	float                                                        Weight;                                            // 0x8(0x4)
	char                                                         pad0x4_R9E1A[0x4];                                 // 0xc(0x4)
	Struct WeightedProbabilityRangeOfRanges                      SpawnRotations;                                    // 0x10(0x30)
};


// Size 0x18
struct AIShipEncounterParams
{
public:
	float                                                        MinEngagedDistanceFromPlayers;                     // 0x0(0x4)
	char                                                         pad0x4_5FXGB[0x4];                                 // 0x4(0x4)
	TArray<struct ShipTypeParams>                                ShipTypeParams;                                    // 0x8(0x10)
};


// Size 0x10
struct ShipTypeAIShipEncounterParams
{
public:
	class                                                        ShipSize;                                          // 0x0(0x8)
	Class AIShipEncounterParamsDataAsset*                        Params;                                            // 0x8(0x8)
};


// Size 0x10
struct AIShipEncounterWave
{
public:
	TArray<class AIShipContextDescDataAsset*>                    AIShipsInWave;                                     // 0x0(0x10)
};


// Size 0x80
struct CursedSailsBattleParams
{
public:
	Struct FText                                                 Name;                                              // 0x0(0x38)
	Struct FText                                                 SkellyCrewName;                                    // 0x38(0x38)
	byte                                                         CannonBallType;                                    // 0x70(0x1)
	byte                                                         SkellyType;                                        // 0x71(0x1)
	char                                                         pad0x6_1RD4C[0x6];                                 // 0x72(0x6)
	Class AIShipEncounterDesc*                                   EncounterDescription;                              // 0x78(0x8)
};


// Size 0x20
struct AIShipEncounterDynamicWaveNetworkEvent
{
public:
};


// Size 0x10
struct AIShipDespawnedEvent
{
public:
	Class Actor*                                                 Ship;                                              // 0x0(0x8)
	byte                                                         ShipDestructionReason;                             // 0x8(0x1)
};


// Size 0x40
struct AIShipSpawnedEvent
{
public:
	Class Ship*                                                  Ship;                                              // 0x0(0x8)
	Struct Guid                                                  SpawningCrew;                                      // 0x8(0x10)
	Struct Guid                                                  SpawningEventId;                                   // 0x18(0x10)
	Struct Guid                                                  SpawnConfigId;                                     // 0x28(0x10)
	int                                                          Wave;                                              // 0x38(0x4)
};


// Size 0x10
struct AIShipSinkNetworkEvent
{
public:
};


// Size 0x10
struct AIShipSpawnedNetworkEvent
{
public:
};


// Size 0x18
struct AIShipEncounterCompleteNetEvent
{
public:
	int                                                          BattleIdx;                                         // 0x10(0x4)
	byte                                                         CannonballIconType;                                // 0x14(0x1)
	byte                                                         SkellyFormIconType;                                // 0x15(0x1)
};


// Size 0x20
struct AIShipEncounterRevealNetEvent
{
public:
	int                                                          BattleIdx;                                         // 0x10(0x4)
	int                                                          SkellyCrewIdx;                                     // 0x14(0x4)
	byte                                                         CannonballIconType;                                // 0x18(0x1)
	byte                                                         SkellyFormIconType;                                // 0x19(0x1)
};


// Size 0x80
struct AIShipEncounterNotification
{
public:
	Struct FText                                                 BattleName;                                        // 0x0(0x38)
	struct FName                                                 SeaName;                                           // 0x38(0x8)
	Struct FText                                                 SkellyCrewName;                                    // 0x40(0x38)
	byte                                                         CannonBallType;                                    // 0x78(0x1)
	byte                                                         SkellyType;                                        // 0x79(0x1)
};


// Size 0x10
struct AIShipEncounterZoneExitedNetworkEvent
{
public:
};


// Size 0x20
struct AIShipEncounterZoneEnteredNetworkEvent
{
public:
	int                                                          RemainingAIShips;                                  // 0x10(0x4)
	int                                                          TotalAIShips;                                      // 0x14(0x4)
	int                                                          TotalAIShipsInFinalWave;                           // 0x18(0x4)
	int                                                          CurrentSpawnedAIShips;                             // 0x1c(0x4)
};


// Size 0x18
struct AIShipWorldSettings
{
public:
	TArray<struct FeatureToggledBattlesData>                     FeatureToggledBattlesData;                         // 0x0(0x10)
	Class AIShipBattlesDataAsset*                                DefaultBattlesData;                                // 0x10(0x8)
};


// Size 0x18
struct FeatureLockedAIShipBattles
{
public:
	Struct FeatureFlag                                           Feature;                                           // 0x0(0xc)
	char                                                         pad0x4_THAEZ[0x4];                                 // 0xc(0x4)
	Class AIShipBattlesDataAsset*                                BattlesData;                                       // 0x10(0x8)
};


// Size 0x18
struct AIShipEncounterDynamicWaveShipSpawnedTelemetryEvent
{
public:
	Struct Guid                                                  EncounterId;                                       // 0x0(0x10)
	int                                                          WaveIndex;                                         // 0x10(0x4)
	float                                                        TimeToSpawn;                                       // 0x14(0x4)
};


// Size 0x1c
struct AIShipEncounterDynamicWaveTelemetryEvent
{
public:
	Struct Guid                                                  EncounterId;                                       // 0x0(0x10)
	int                                                          WaveIndex;                                         // 0x10(0x4)
	int                                                          CrewStrength;                                      // 0x14(0x4)
	int                                                          WaveCost;                                          // 0x18(0x4)
};


// Size 0x48
struct AIShipDamagedTelemetryEvent
{
public:
	Struct FString                                               DamageType;                                        // 0x0(0x10)
	Struct Vector                                                DamageLocation;                                    // 0x10(0xc)
	char                                                         pad0x4_9U743[0x4];                                 // 0x1c(0x4)
	Struct FString                                               DamagedShipPart;                                   // 0x20(0x10)
	int                                                          DamageLevel;                                       // 0x30(0x4)
	Struct Guid                                                  AttackId;                                          // 0x34(0x10)
};


// Size 0x18
struct AIShipDespawnTelemetryEvent
{
public:
	Struct FString                                               AIShipId;                                          // 0x0(0x10)
	byte                                                         AIShipDestructionReason;                           // 0x10(0x1)
};


// Size 0x70
struct AIShipSpawnTelemetryEvent
{
public:
	Struct FString                                               AIShipId;                                          // 0x0(0x10)
	Struct FString                                               SpawningCrewId;                                    // 0x10(0x10)
	Struct FString                                               AIShipBattleId;                                    // 0x20(0x10)
	Struct FString                                               AIShipType;                                        // 0x30(0x10)
	Struct Guid                                                  SpawnConfigId;                                     // 0x40(0x10)
	Struct FString                                               AIShipSize;                                        // 0x50(0x10)
	Struct Vector                                                SpawnLocation;                                     // 0x60(0xc)
	int                                                          AIShipWaveIndex;                                   // 0x6c(0x4)
};


}