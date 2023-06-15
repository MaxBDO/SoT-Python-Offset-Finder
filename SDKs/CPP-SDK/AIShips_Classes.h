// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x58 (Full Size[0x80] - InheritedSize[0x28]
class AIShipBattlesDataAsset: public DataAsset
{
public:
	TArray<struct Battles>                                       Battles;                                           // 0x28(0x10)
	TArray<struct FText>                                         SkellyCrewNames;                                   // 0x38(0x10)
	Struct FText                                                 EncounterCompleteText;                             // 0x48(0x38)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AIShipObstacleServiceInterface: public Interface
{
public:
};


// Size 0x50 (Full Size[0xd8] - InheritedSize[0x88]
class BTTask_SailShipBesideTarget: public BTTask_BlackboardBase
{
public:
	char                                                         pad0x20_P8IG2[0x20];                               // 0x88(0x20)
	Struct TrackingNoiseGenerator                                TrackingNoiseGenerator;                            // 0xa8(0x18)
	char                                                         pad0x18_Y2FK3[0x18];                               // 0xc0(0x18)
};


// Size 0x358 (Full Size[0x490] - InheritedSize[0x138]
class AthenaAIShipControllerParamsDataAsset: public AthenaAIControllerParamsDataAsset
{
public:
	Struct ShipMovementParams                                    TrackingMovementParams;                            // 0x138(0x38)
	Struct WeightedProbabilityRangeOfRanges                      TimesToSailBesideTarget;                           // 0x170(0x30)
	Struct WeightedProbabilityRangeOfRanges                      PerpendicularDistanceOffsets;                      // 0x1a0(0x30)
	Struct WeightedProbabilityRangeOfRanges                      TimesBeforeDistanceChange;                         // 0x1d0(0x30)
	float                                                        MaxParallelDistanceOffset;                         // 0x200(0x4)
	float                                                        AlignDistanceThreshold;                            // 0x204(0x4)
	float                                                        TimeToProjectIntoFutureForTracking;                // 0x208(0x4)
	float                                                        TargetSpeedThresholdToTrackShip;                   // 0x20c(0x4)
	Struct TrackingNoiseGenerator                                TrackingNoiseGenerator;                            // 0x210(0x18)
	float                                                        WheelAngleMonitorDuration;                         // 0x228(0x4)
	float                                                        WheelAngleChangeThresholdToBreakTracking;          // 0x22c(0x4)
	float                                                        SpeedMonitorDuration;                              // 0x230(0x4)
	float                                                        SpeedChangeThresholdToBreakTrackingInMPS;          // 0x234(0x4)
	float                                                        TargetSpeedToConsiderAnchorLoweredInMPS;           // 0x238(0x4)
	char                                                         pad0x4_M9ETC[0x4];                                 // 0x23c(0x4)
	Struct WeightedProbabilityRangeOfRanges                      TrackingLatencyTimes;                              // 0x240(0x30)
	Struct WeightedProbabilityRangeOfRanges                      TrackingLatencyTimesWhenAnchorLowered;             // 0x270(0x30)
	Class CurveFloat*                                            DistToTargetShipVSTrackingLatencyCurve;            // 0x2a0(0x8)
	Struct ShipMovementParams                                    CirclingMovementParams;                            // 0x2a8(0x38)
	float                                                        TargetSpeedThresholdInKnots;                       // 0x2e0(0x4)
	float                                                        SecondsInFutureToProjectTargetLocation;            // 0x2e4(0x4)
	Struct WeightedProbabilityRangeOfRanges                      CircleRadiuses;                                    // 0x2e8(0x30)
	Struct WeightedProbabilityRangeOfRanges                      CirclingSpeedsInDegreesPerSecond;                  // 0x318(0x30)
	Struct WeightedProbabilityRangeOfRanges                      TimesToCircleBeforeChangingRadius;                 // 0x348(0x30)
	float                                                        MinDistanceFromTargetToStartRam;                   // 0x378(0x4)
	float                                                        MaxDistanceFromTargetToStartRam;                   // 0x37c(0x4)
	float                                                        MaxSpeedToRamTarget;                               // 0x380(0x4)
	float                                                        RammingMaxTurnSpeed;                               // 0x384(0x4)
	float                                                        RammingTimeDampingScalar;                          // 0x388(0x4)
	float                                                        MinAngleToTargetToAttemptRam;                      // 0x38c(0x4)
	Struct WeightedProbabilityRangeOfRanges                      RammingLocationOffsets;                            // 0x390(0x30)
	Struct ShipMovementParams                                    SailingForwardMovementParams;                      // 0x3c0(0x38)
	float                                                        MinAllowedDistanceToObstacle;                      // 0x3f8(0x4)
	float                                                        MaxPathAvoidanceDistance;                          // 0x3fc(0x4)
	Struct ShipMovementParams                                    PassiveSailingMovementParams;                      // 0x400(0x38)
	float                                                        ChanceToAnchor;                                    // 0x438(0x4)
	char                                                         pad0x4_ZXD8D[0x4];                                 // 0x43c(0x4)
	Struct WeightedProbabilityRangeOfRanges                      TimesToStayAnchored;                               // 0x440(0x30)
	int                                                          NumIslandsToVisitBeforeReturning;                  // 0x470(0x4)
	float                                                        DistanceFromIslandsToSailTo;                       // 0x474(0x4)
	float                                                        DistanceToTargetToDropAnchor;                      // 0x478(0x4)
	char                                                         pad0x4_WUIIR[0x4];                                 // 0x47c(0x4)
	TArray<class Class*>                                         AggressionOverrideImpactIDs;                       // 0x480(0x10)
};


// Size 0x90 (Full Size[0xb8] - InheritedSize[0x28]
class AIShipContextDescDataAsset: public DataAsset
{
public:
	byte                                                         ShipType;                                          // 0x28(0x1)
	byte                                                         EncounterType;                                     // 0x29(0x1)
	char                                                         pad0x6_QVMFT[0x6];                                 // 0x2a(0x6)
	Class ShipDescAsset*                                         ShipDesc;                                          // 0x30(0x8)
	Class AthenaAIShipControllerParamsDataAsset*                 ControllerParams;                                  // 0x38(0x8)
	TArray<struct Spawners>                                      Spawners;                                          // 0x40(0x10)
	Struct AIShipContextDescDamageParams                         DamageParams;                                      // 0x50(0x14)
	Struct AIShipSailData                                        SailsCustomisation;                                // 0x64(0x10)
	Struct Color                                                 SailColour;                                        // 0x74(0x4)
	Struct AIShipCrewFormType                                    FormType;                                          // 0x78(0x20)
	Struct AIShipCrewAmmoType                                    AmmoType;                                          // 0x98(0x18)
	Class ShortRangeMarkerDataAsset*                             RewardMarkerParams;                                // 0xb0(0x8)
};


// Size 0x68 (Full Size[0x90] - InheritedSize[0x28]
class AIShipContextParamsDataAsset: public DataAsset
{
public:
	float                                                        TopDeckPlayerTrackerRadius;                        // 0x28(0x4)
	float                                                        TimeSpentEmotingOnInitialSpawn;                    // 0x2c(0x4)
	bool                                                         ForceAIToAlwaysSpawn;                              // 0x30(0x1)
	char                                                         pad0x3_YN188[0x3];                                 // 0x31(0x3)
	float                                                        IntervalBetweenRepairDamageAssignments;            // 0x34(0x4)
	float                                                        IntervalBetweenUseCannonAssignments;               // 0x38(0x4)
	float                                                        DistForMinXYAIInteractableUtility;                 // 0x3c(0x4)
	float                                                        DistForMaxXYAIInteractableUtility;                 // 0x40(0x4)
	float                                                        MinXYAIInteractableUtility;                        // 0x44(0x4)
	float                                                        MaxXYAIInteractableUtility;                        // 0x48(0x4)
	float                                                        DistForMinZAIInteractableUtility;                  // 0x4c(0x4)
	float                                                        DistForMaxZAIInteractableUtility;                  // 0x50(0x4)
	float                                                        MinZAIInteractableUtility;                         // 0x54(0x4)
	float                                                        MaxZAIInteractableUtility;                         // 0x58(0x4)
	float                                                        MinInactiveRepairSpawnDelay;                       // 0x5c(0x4)
	float                                                        MaxInactiveRepairSpawnDelay;                       // 0x60(0x4)
	float                                                        SpawnSfxDistance;                                  // 0x64(0x4)
	float                                                        SinkSfxDistance;                                   // 0x68(0x4)
	int                                                          MinCannonAttackersWhenBoarded;                     // 0x6c(0x4)
	float                                                        StuckCheckInterval;                                // 0x70(0x4)
	float                                                        StuckCheckDistance;                                // 0x74(0x4)
	float                                                        MaxDistanceFromEncounter;                          // 0x78(0x4)
	float                                                        ShipFlippedAngle;                                  // 0x7c(0x4)
	float                                                        SecondsUntilKillAIAfterShipDefeated;               // 0x80(0x4)
	float                                                        SecondsDelayForAIShipDefeatedNotification;         // 0x84(0x4)
	bool                                                         EnableShipSurfacingMusic;                          // 0x88(0x1)
	char                                                         pad0x7_77P6F[0x7];                                 // 0x89(0x7)
};


// Size 0x70 (Full Size[0x98] - InheritedSize[0x28]
class AIShipEncounterDynamicDesc: public Object
{
public:
	TArray<struct ShipPool>                                      ShipPool;                                          // 0x28(0x10)
	Class AIShipContextDescDataAsset*                            FinalShip;                                         // 0x38(0x8)
	Struct AIShipEncounterDynamicBalancingDesc                   DynamicBalancingDesc;                              // 0x40(0x58)
};


// Size 0xb0 (Full Size[0xd8] - InheritedSize[0x28]
class AIShipEncounterSpawnParamsDataAsset: public DataAsset
{
public:
	float                                                        SpawnDepth;                                        // 0x28(0x4)
	float                                                        Radius;                                            // 0x2c(0x4)
	float                                                        MinSafeSpawnDistanceFromOtherShips;                // 0x30(0x4)
	float                                                        TimeDelayBetweenWaves;                             // 0x34(0x4)
	Struct RelativeSpawnLocationGeneratorParams                  RelativeSpawnLocationParams;                       // 0x38(0xa0)
};


// Size 0x38 (Full Size[0x478] - InheritedSize[0x440]
class ShipProxyPawn: public Pawn
{
public:
	Class Ship*                                                  Ship;                                              // 0x440(0x8)
	Class Ship*                                                  SpawnTargetShip;                                   // 0x448(0x8)
	char                                                         pad0x28_OMBKP[0x28];                               // 0x450(0x28)
};


// Size 0x90 (Full Size[0xb8] - InheritedSize[0x28]
class AIShipEncounterParamsDataAsset: public DataAsset
{
public:
	Class AIShipEncounterSpawnParamsDataAsset*                   SpawnParams;                                       // 0x28(0x8)
	Class AIShipContextParamsDataAsset*                          ContextParams;                                     // 0x30(0x8)
	Class AIShipContextDescDataAsset*                            DefaultContextDesc;                                // 0x38(0x8)
	class                                                        ShipPawnClass;                                     // 0x40(0x8)
	Class BuoyantObjectSpawnProfileDataAsset*                    BuoyantObjectSpawnProfileAsset;                    // 0x48(0x8)
	class                                                        EventSignalAssetClass;                             // 0x50(0x8)
	float                                                        EventSignalHeight;                                 // 0x58(0x4)
	char                                                         pad0x4_EY933[0x4];                                 // 0x5c(0x4)
	Struct FText                                                 EncounterCompleteText;                             // 0x60(0x38)
	float                                                        OuterRadiusMultiplier;                             // 0x98(0x4)
	float                                                        MigrationRadiusMultiplier;                         // 0x9c(0x4)
	float                                                        InitialEncounterEntryDelay;                        // 0xa0(0x4)
	float                                                        MinEngagedDistanceFromPlayers;                     // 0xa4(0x4)
	bool                                                         EnableMusicWhenShipsHaveNoTarget;                  // 0xa8(0x1)
	char                                                         pad0x3_PZ8UB[0x3];                                 // 0xa9(0x3)
	int                                                          SecondsUntilEncounterEndsAfterLastCrewLeft;        // 0xac(0x4)
	int                                                          MaximumEncounterDuration;                          // 0xb0(0x4)
	char                                                         pad0x4_KQ9T0[0x4];                                 // 0xb4(0x4)
};


// Size 0x228 (Full Size[0x250] - InheritedSize[0x28]
class AIShipServiceDataAsset: public DataAsset
{
public:
	Class AIShipEncounterParamsDataAsset*                        BattleEncounterParams;                             // 0x28(0x8)
	Struct AIShipEncounterParams                                 AggressiveEncounterParams;                         // 0x30(0x18)
	Struct AIShipEncounterParams                                 PassiveEncounterParams;                            // 0x48(0x18)
	Struct IntPoint                                              ObstacleBucketDimensions;                          // 0x60(0x8)
	float                                                        ShipwreckObstacleRadius;                           // 0x68(0x4)
	char                                                         pad0x4_Y3VF0[0x4];                                 // 0x6c(0x4)
	Struct AIShipContextDescGenerationParams                     ContextDescGenerationParams;                       // 0x70(0x80)
	Struct AIShipBattleEncounterDescGenerationParams             EncounterGenerationParams;                         // 0xf0(0x80)
	Struct AIShipSingleWaveEncounterDescGenerationParams         AggressiveEncounterGenerationParams;               // 0x170(0x10)
	Struct AIShipSingleWaveEncounterDescGenerationParams         PassiveEncounterGenerationParams;                  // 0x180(0x10)
	Struct WeightedProbabilityRangeOfRanges                      TimerBattleFirstRegenInterval;                     // 0x190(0x30)
	Struct WeightedProbabilityRangeOfRanges                      TimerBattleRegenInterval;                          // 0x1c0(0x30)
	float                                                        TimerBattleFinderThrottle;                         // 0x1f0(0x4)
	char                                                         pad0x4_QDPDJ[0x4];                                 // 0x1f4(0x4)
	Struct WeightedProbabilityRangeOfRanges                      TimerBattleRetryRegenInterval;                     // 0x1f8(0x30)
	float                                                        TimerBattleMinActivationDistanceFromPlayers;       // 0x228(0x4)
	char                                                         pad0x4_7335J[0x4];                                 // 0x22c(0x4)
	Class ShortRangeMarkerDataAsset*                             RewardMarkerParams;                                // 0x230(0x8)
	TArray<struct FName>                                         IslandsToAvoid;                                    // 0x238(0x10)
	float                                                        AvoidanceRange;                                    // 0x248(0x4)
	char                                                         pad0x4_0X8GW[0x4];                                 // 0x24c(0x4)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AIShipDebugFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class AIShipEncounterDesc: public DataAsset
{
public:
	Struct Vector2D                                              Location;                                          // 0x28(0x8)
	float                                                        Radius;                                            // 0x30(0x4)
	bool                                                         Moveable;                                          // 0x34(0x1)
	bool                                                         ShowRevealBanner;                                  // 0x35(0x1)
	bool                                                         ShowCompleteBanner;                                // 0x36(0x1)
	bool                                                         ShouldSpawnShipCloud;                              // 0x37(0x1)
	bool                                                         RequirePlayerShipInZoneToSpawnShips;               // 0x38(0x1)
	bool                                                         EnableSecondsUntilEncounterEndsAfterLastCrewLeft;  // 0x39(0x1)
	char                                                         pad0x2_6XO5G[0x2];                                 // 0x3a(0x2)
	int                                                          SecondsUntilEncounterEndsAfterLastCrewLeft;        // 0x3c(0x4)
	bool                                                         EnableMaximumEncounterDuration;                    // 0x40(0x1)
	char                                                         pad0x3_THHXJ[0x3];                                 // 0x41(0x3)
	int                                                          MaximumEncounterDuration;                          // 0x44(0x4)
	byte                                                         EncounterType;                                     // 0x48(0x1)
	char                                                         pad0x7_BGLDR[0x7];                                 // 0x49(0x7)
	TArray<struct Waves>                                         Waves;                                             // 0x50(0x10)
};


// Size 0x28 (Full Size[0xf0] - InheritedSize[0xc8]
class AIShipObstacleComponent: public ActorComponent
{
public:
	byte                                                         ObstacleType;                                      // 0xc8(0x1)
	char                                                         pad0x3_QB6X3[0x3];                                 // 0xc9(0x3)
	float                                                        Radius;                                            // 0xcc(0x4)
	char                                                         pad0x20_6DI71[0x20];                               // 0xd0(0x20)
};


// Size 0x88 (Full Size[0x450] - InheritedSize[0x3c8]
class AIShipObstacleService: public Actor
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AIShipServiceInterface: public Interface
{
public:
};


// Size 0x350 (Full Size[0x718] - InheritedSize[0x3c8]
class AIShipService: public Actor
{
public:
	char                                                         pad0x20_K8Q1Z[0x20];                               // 0x3c8(0x20)
	Class AIShipServiceDataAsset*                                Params;                                            // 0x3e8(0x8)
	char                                                         pad0x328_PR386[0x328];                             // 0x3f0(0x328)
};


// Size 0x40 (Full Size[0x108] - InheritedSize[0xc8]
class AIShipTelemetryComponent: public ActorComponent
{
public:
};


// Size 0x170 (Full Size[0x780] - InheritedSize[0x610]
class AthenaAIShipController: public AthenaAIControllerBase
{
public:
	Class BehaviorTree*                                          BTAsset;                                           // 0x610(0x8)
	char                                                         pad0x18_ZNSNY[0x18];                               // 0x618(0x18)
	Class AthenaAIShipControllerParamsDataAsset*                 ShipParamsDataAsset;                               // 0x630(0x8)
	Class StatusEffectManagerComponent*                          StatusEffectManagerComponent;                      // 0x638(0x8)
	Struct StandardAnchorDynamicsParameters                      AnchorDynamicsParams;                              // 0x640(0x28)
	char                                                         pad0x118_WUISQ[0x118];                             // 0x668(0x118)
};


// Size 0xe0 (Full Size[0x150] - InheritedSize[0x70]
class BTService_UpdateIfShipShouldBreakTracking: public BTService
{
public:
	Struct BlackboardKeySelector                                 TargetActorKey;                                    // 0x70(0x28)
	Struct BlackboardKeySelector                                 DisableTrackingKey;                                // 0x98(0x28)
	Struct BlackboardKeySelector                                 ShouldSailForwardKey;                              // 0xc0(0x28)
	Struct BlackboardKeySelector                                 TimeToSailForwardKey;                              // 0xe8(0x28)
	Struct BlackboardKeySelector                                 CaptainIsPresentKey;                               // 0x110(0x28)
	char                                                         pad0x18_Y0HXE[0x18];                               // 0x138(0x18)
};


// Size 0x50 (Full Size[0xc0] - InheritedSize[0x70]
class BTService_UpdateLocationWithActorLocation: public BTService
{
public:
	Struct BlackboardKeySelector                                 LocationKey;                                       // 0x70(0x28)
	Struct BlackboardKeySelector                                 ActorKey;                                          // 0x98(0x28)
};


// Size 0x58 (Full Size[0xc8] - InheritedSize[0x70]
class BTService_UpdateTargetLocationForPassiveShip: public BTService
{
public:
	Struct BlackboardKeySelector                                 TargetLocationKey;                                 // 0x70(0x28)
	char                                                         pad0x30_1OL5M[0x30];                               // 0x98(0x30)
};


// Size 0x10 (Full Size[0x98] - InheritedSize[0x88]
class BTTask_AIShipSurface: public BTTask_BlackboardBase
{
public:
	float                                                        MaxSpeed;                                          // 0x88(0x4)
	float                                                        PreSurfaceDelay;                                   // 0x8c(0x4)
	char                                                         pad0x8_UEW0R[0x8];                                 // 0x90(0x8)
};


// Size 0xe0 (Full Size[0x168] - InheritedSize[0x88]
class BTTask_RamTargetShip: public BTTask_BlackboardBase
{
public:
};


// Size 0x38 (Full Size[0xc0] - InheritedSize[0x88]
class BTTask_SailShipCircleTarget: public BTTask_BlackboardBase
{
public:
};


// Size 0xa8 (Full Size[0x130] - InheritedSize[0x88]
class BTTask_SailShipForward: public BTTask_BlackboardBase
{
public:
	Struct BlackboardKeySelector                                 ShouldSailForwardKey;                              // 0x88(0x28)
	Struct BlackboardKeySelector                                 TimeToSailForwardKey;                              // 0xb0(0x28)
	Struct BlackboardKeySelector                                 IsCaptainPresentKey;                               // 0xd8(0x28)
	char                                                         pad0x30_T7MPR[0x30];                               // 0x100(0x30)
};


// Size 0x48 (Full Size[0xd0] - InheritedSize[0x88]
class BTTask_SailShipToLocation: public BTTask_BlackboardBase
{
public:
	Struct BlackboardKeySelector                                 TargetLocationKey;                                 // 0x88(0x28)
	float                                                        DistanceThresholdToConsiderTargetReached;          // 0xb0(0x4)
	char                                                         pad0x1c_TYGF8[0x1c];                               // 0xb4(0x1c)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CursedCrewCustomisationInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class CursedSailsCampaignDataAsset: public DataAsset
{
public:
	TArray<struct Battles>                                       Battles;                                           // 0x28(0x10)
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class DefeatAIShipEncounterConditionalStatTrigger: public ConditionalStatsTriggerType
{
public:
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class IsAIShipEncounterTypeStatCondition: public StatCondition
{
public:
	byte                                                         EncounterType;                                     // 0x28(0x1)
	char                                                         pad0x7_L8YU1[0x7];                                 // 0x29(0x7)
};


}