#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x1
struct OnShipIgnitedEvent
{
public:
	char                                                         pad0x1_DTV3Q[0x1];                                 // 0x0(0x1)
};


// Size 0x38
struct FireGridLowDetailRelativeSpawnDesc
{
public:
	char                                                         pad0x30_PJF62[0x30];                               // 0x0(0x30)
	struct FName                                                 EmitterName;                                       // 0x30(0x8)
};


// Size 0x1
struct ShipOnFireBeginEvent
{
public:
	char                                                         pad0x1_MEEAW[0x1];                                 // 0x0(0x1)
};


// Size 0x14
struct ShipFireLightParams
{
public:
	float                                                        FadeOutTime;                                       // 0x0(0x4)
	struct FName                                                 FirePostprocessComponentName;                      // 0x4(0x8)
	float                                                        DistanceToFireToActivatePostProcessSq;             // 0xc(0x4)
	float                                                        PostProcessSpringAcceleration;                     // 0x10(0x4)
};


// Size 0xc
struct FireExtinguishedEvent
{
public:
	struct Vector                                                ExtinguishLocation;                                // 0x0(0xc)
};


// Size 0x48
struct PlayerFireGridTickParams
{
public:
	char                                                         pad0x28_ROW6Q[0x28];                               // 0x0(0x28)
	class Actor*                                                 FireGridActorPlayerIsInsideOf;                     // 0x28(0x8)
	class UClass*                                                PlayerShipSize;                                    // 0x30(0x8)
	char                                                         pad0x10_XNUGG[0x10];                               // 0x38(0x10)
};


// Size 0xd8
struct FireGridCharringManager
{
public:
	TArray<class MaterialInterface*>                             OwnerMaterials;                                    // 0x0(0x10)
	struct Vector                                                AdditionalGridOffsetForCharring;                   // 0x10(0xc)
	char                                                         pad0x4_D9JT9[0x4];                                 // 0x1c(0x4)
	class Texture2DDynamic*                                      FireGridTexture;                                   // 0x20(0x8)
	char                                                         pad0xb0_HO7N9[0xb0];                               // 0x28(0xb0)
};


// Size 0x30
struct FireCellStateData
{
public:
	char                                                         pad0x30_ZQ6GB[0x30];                               // 0x0(0x30)
};


// Size 0x30
struct FireGridRelativeSpawnDesc
{
public:
	struct Vector                                                Location;                                          // 0x0(0xc)
	struct IntVector                                             GridLocation;                                      // 0xc(0xc)
	int                                                          NumCellRowsToSpawnFor;                             // 0x18(0x4)
	int                                                          MinNumCellsToActivate;                             // 0x1c(0x4)
	TArray<int>                                                  CellIndicesToSpawnFor;                             // 0x20(0x10)
};


// Size 0x1
struct ReplicatedFireCellData
{
public:
	char                                                         State;                                             // 0x0(0x1)
};


// Size 0x10
struct FireMesh
{
public:
	class StaticMeshComponent*                                   Mesh;                                              // 0x0(0x8)
	char                                                         pad0x8_UVJ66[0x8];                                 // 0x8(0x8)
};


// Size 0x94
struct FireCellStateTimingParams
{
public:
	struct FloatRange                                            KindleTime;                                        // 0x0(0x10)
	struct FloatRange                                            BurningTime;                                       // 0x10(0x10)
	struct FloatRange                                            RainExposureTime;                                  // 0x20(0x10)
	float                                                        CharringTime;                                      // 0x30(0x4)
	struct FloatRange                                            SmoulderingTime;                                   // 0x34(0x10)
	struct FloatRange                                            SteamingTime;                                      // 0x44(0x10)
	struct FloatRange                                            WetTime;                                           // 0x54(0x10)
	struct FloatRange                                            SidewaysPropagationTime;                           // 0x64(0x10)
	struct FloatRange                                            UpwardPropagationTime;                             // 0x74(0x10)
	struct FloatRange                                            DownwardPropagationTime;                           // 0x84(0x10)
};


// Size 0x44
struct FireGridCellSelection
{
public:
	int                                                          NumberOfAffectedCells;                             // 0x0(0x4)
	int                                                          AdjacencyRadius;                                   // 0x4(0x4)
	float                                                        ChanceToAffectCellsAbove;                          // 0x8(0x4)
	float                                                        ChanceToAffectCellsBelow;                          // 0xc(0x4)
	bool                                                         TreatDiagonalsAsAdjacent;                          // 0x10(0x1)
	bool                                                         OverrideFirePropagationTimesForAffectedCells;      // 0x11(0x1)
	char                                                         pad0x2_OLMFK[0x2];                                 // 0x12(0x2)
	struct FloatRange                                            SidewaysPropagationTimeOverride;                   // 0x14(0x10)
	struct FloatRange                                            UpwardPropagationTimeOverride;                     // 0x24(0x10)
	struct FloatRange                                            DownwardPropagationTimeOverride;                   // 0x34(0x10)
};


// Size 0x38
struct ActorFireDamageParams
{
public:
	char                                                         pad0x20_GHVVF[0x20];                               // 0x0(0x20)
	struct FloatRange                                            TimeInFireBeforeDamage;                            // 0x20(0x10)
	int                                                          LevelsOfDamage;                                    // 0x30(0x4)
	char                                                         pad0x4_P1LXS[0x4];                                 // 0x34(0x4)
};


// Size 0x40
struct FireCellAudioParams
{
public:
	class WwiseObjectPoolWrapper*                                EmitterPool;                                       // 0x0(0x8)
	class WwiseObjectPoolWrapper*                                DousePool;                                         // 0x8(0x8)
	class WwiseEvent*                                            FirePlay;                                          // 0x10(0x8)
	class WwiseEvent*                                            FireStop;                                          // 0x18(0x8)
	class WwiseEvent*                                            FireDouse;                                         // 0x20(0x8)
	struct FName                                                 FireSwitchGroup;                                   // 0x28(0x8)
	struct FName                                                 FireSwitchBurning;                                 // 0x30(0x8)
	struct FName                                                 FireSwitchKindled;                                 // 0x38(0x8)
};


// Size 0x58
struct ShipFireLightRelativeSpawnDesc
{
public:
	char                                                         pad0x30_6HYFR[0x30];                               // 0x0(0x30)
	struct Vector                                                LightPositionOffset;                               // 0x30(0xc)
	char                                                         pad0x4_7ZL7C[0x4];                                 // 0x3c(0x4)
	TArray<char>                                                 DormantShipRegions;                                // 0x40(0x10)
	float                                                        DormantFadeDistance;                               // 0x50(0x4)
	float                                                        AreaLightScaleWhenNotOnShip;                       // 0x54(0x4)
};


// Size 0x8
struct PlayerNearBurningFireGridUpdatedEvent
{
public:
	char                                                         pad0x8_NSISH[0x8];                                 // 0x0(0x8)
};


// Size 0x1
struct OnFireChangedEvent
{
public:
	bool                                                         OnFire;                                            // 0x0(0x1)
};


// Size 0x10
struct FireParticleSpawnData
{
public:
	float                                                        MaximumLODDistance;                                // 0x0(0x4)
	float                                                        SpawnInterval;                                     // 0x4(0x4)
	char                                                         pad0x8_M108T[0x8];                                 // 0x8(0x8)
};


// Size 0x18
struct ReplicatedFireCellCharringData
{
public:
	float                                                        MaxCharringTime;                                   // 0x0(0x4)
	char                                                         pad0x4_Y6BIX[0x4];                                 // 0x4(0x4)
	TArray<float>                                                TimeSpentCharring;                                 // 0x8(0x10)
};


// Size 0x1
struct ShipOnFireEndEvent
{
public:
	char                                                         pad0x1_GTCDK[0x1];                                 // 0x0(0x1)
};


// Size 0x38
struct FireCellStateParticleTemplate
{
public:
	class ParticleSystem*                                        Template;                                          // 0x0(0x8)
	int                                                          TranslucencySortPriority;                          // 0x8(0x4)
	char                                                         pad0x4_AE0FE[0x4];                                 // 0xc(0x4)
	class StaticMesh*                                            Mesh;                                              // 0x10(0x8)
	float                                                        MeshSpawnTime;                                     // 0x18(0x4)
	float                                                        MeshDespawnTime;                                   // 0x1c(0x4)
	struct Vector                                                MeshScale;                                         // 0x20(0xc)
	char                                                         State;                                             // 0x2c(0x1)
	bool                                                         OverrideMaxLODToSpawnFor;                          // 0x2d(0x1)
	char                                                         pad0x2_WC598[0x2];                                 // 0x2e(0x2)
	int                                                          MaxLODToSpawnFor;                                  // 0x30(0x4)
	bool                                                         SpawnWithLowFrequencySettings;                     // 0x34(0x1)
	bool                                                         VisibleInLowDetailMode;                            // 0x35(0x1)
	char                                                         pad0x2_KBGC5[0x2];                                 // 0x36(0x2)
};


// Size 0x18
struct HullCharringPersistenceModel
{
public:
	TArray<float>                                                TimeSpentCharring;                                 // 0x0(0x10)
	int                                                          TotalCellsOnFire;                                  // 0x10(0x4)
	char                                                         pad0x4_NAMME[0x4];                                 // 0x14(0x4)
};


// Size 0x78
struct CookerIgnitionParams
{
public:
	struct FloatRange                                            InitialIgnitionTime;                               // 0x0(0x10)
	struct FloatRange                                            SuccessIgnitionTime;                               // 0x10(0x10)
	struct FloatRange                                            FailureIgnitionTime;                               // 0x20(0x10)
	float                                                        ChanceToIgnite;                                    // 0x30(0x4)
	struct FireGridCellSelection                                 IgnitionSelection;                                 // 0x34(0x44)
};


// Size 0x40
struct FireGridVFXParams
{
public:
	TArray<struct FireCellStateParticleTemplate>                 DefaultParticleTemplates;                          // 0x0(0x10)
	class ParticleSystem*                                        ExteriorLowDetailParticleSystem;                   // 0x10(0x8)
	class ParticleSystem*                                        ExteriorSmokeParticleSystem;                       // 0x18(0x8)
	class ParticleSystem*                                        InteriorSmokeParticleSystem;                       // 0x20(0x8)
	int                                                          InteriorSmokeTranslucencySortPriority;             // 0x28(0x4)
	int                                                          NumInterleaveSpawnSteps;                           // 0x2c(0x4)
	float                                                        TickIntervalForAllCells;                           // 0x30(0x4)
	float                                                        KillSphereRadiusForDousingFire;                    // 0x34(0x4)
	float                                                        ExteriorLowDetailTransitionWarmupTime;             // 0x38(0x4)
	int                                                          MaxDefaultVFXToSpawnPerFrame;                      // 0x3c(0x4)
};


// Size 0x18
struct ShipFireDamageParams
{
public:
	class UClass*                                                DamagerType;                                       // 0x0(0x8)
	TArray<struct ActorFireDamageParams>                         ShipFireDamageParams;                              // 0x8(0x10)
};


// Size 0x58
struct FireGridVfxSpawnSettings
{
public:
	TArray<struct FireGridRelativeSpawnDesc>                     InteriorSmokeSpawnDescs;                           // 0x0(0x10)
	TArray<struct FireGridLowDetailRelativeSpawnDesc>            LowDetailVFXSpawnDescs;                            // 0x10(0x10)
	TArray<struct FireParticleSpawnData>                         ParticleSpawnLODSettings;                          // 0x20(0x10)
	struct FireParticleSpawnData                                 LowFrequencyParticleSpawnSettings;                 // 0x30(0x10)
	TArray<struct FireGridLowDetailRelativeSpawnDesc>            ExteriorSmokeVFXSpawnDescs;                        // 0x40(0x10)
	class FireGridVFXParamsDataAsset*                            VFXParams;                                         // 0x50(0x8)
};


// Size 0x90
struct ShipFireLight
{
public:
	struct ShipFireLightRelativeSpawnDesc                        Desc;                                              // 0x0(0x58)
	class PointLightComponent*                                   PointLight;                                        // 0x58(0x8)
	class StaticMeshComponent*                                   AreaLight;                                         // 0x60(0x8)
	class MaterialInstanceDynamic*                               AreaLightMaterial;                                 // 0x68(0x8)
	char                                                         pad0x20_W5BMD[0x20];                               // 0x70(0x20)
};


// Size 0x20
struct FireParticleSpawnList
{
public:
	TArray<struct FireParticleSpawnData>                         ParticleSpawnLODs;                                 // 0x0(0x10)
	char                                                         pad0x10_CTP86[0x10];                               // 0x10(0x10)
};


// Size 0x50
struct FireGridCellSelectionParams
{
public:
	class UClass*                                                ActorClassFilter;                                  // 0x0(0x8)
	float                                                        ChanceToAffectTheActor;                            // 0x8(0x4)
	struct FireGridCellSelection                                 FireGridCellSelectionParams;                       // 0xc(0x44)
};


// Size 0x100
struct FireCellDesc
{
public:
	struct Vector                                                Position;                                          // 0x0(0xc)
	struct Box                                                   BoundingBox;                                       // 0xc(0x1c)
	struct IntVector                                             GridPosition;                                      // 0x28(0xc)
	bool                                                         CanBurn;                                           // 0x34(0x1)
	bool                                                         IsExposedToWeather;                                // 0x35(0x1)
	char                                                         Deck;                                              // 0x36(0x1)
	char                                                         pad0x1_F0T7G[0x1];                                 // 0x37(0x1)
	int                                                          CellIndex;                                         // 0x38(0x4)
	int                                                          MasterCellFlatIndex;                               // 0x3c(0x4)
	bool                                                         ShouldSpawnDefaultParticleEffect;                  // 0x40(0x1)
	char                                                         pad0xf_5KAR7[0xf];                                 // 0x41(0xf)
	struct Transform                                             DefaultParticleEffectSpawnTransform;               // 0x50(0x30)
	struct Plane                                                 DefaultParticleEffectPlane;                        // 0x80(0x10)
	TArray<struct FireCellStateParticleTemplate>                 CustomParticleEffectTemplates;                     // 0x90(0x10)
	struct Transform                                             CustomParticleEffectSpawnTransform;                // 0xa0(0x30)
	TArray<int>                                                  NeighbourCellIndices;                              // 0xd0(0x10)
	TArray<struct IntVector>                                     CustomAddedDiagonalNeighbourOffsets;               // 0xe0(0x10)
	TArray<struct IntVector>                                     CustomRemovedDefaultNeighbourOffsets;              // 0xf0(0x10)
};


// Size 0x48
struct FireParticleSystem
{
public:
	class ParticleSystemComponent*                               SpawnedParticleSystem;                             // 0x0(0x8)
	char                                                         pad0x8_Y19V5[0x8];                                 // 0x8(0x8)
	struct FireCellStateParticleTemplate                         ParticleTemplate;                                  // 0x10(0x38)
};


// Size 0x140
struct FireDefaultVFXSpawnData
{
public:
	struct FireCellStateParticleTemplate                         Template;                                          // 0x0(0x38)
	char                                                         pad0x8_HEP1A[0x8];                                 // 0x38(0x8)
	struct FireCellDesc                                          CellDesc;                                          // 0x40(0x100)
};


// Size 0x150
struct ShipFireLightManager
{
public:
	TArray<struct ShipFireLightRelativeSpawnDesc>                LightSpawnDescs;                                   // 0x0(0x10)
	struct GenericLightTemplate                                  LightTemplate;                                     // 0x10(0xd0)
	TArray<struct ShipFireLight>                                 Lights;                                            // 0xe0(0x10)
	class FirePropagator*                                        Propagator;                                        // 0xf0(0x8)
	class StaticMesh*                                            AreaLightMesh;                                     // 0xf8(0x8)
	float                                                        AreaLightZScale;                                   // 0x100(0x4)
	float                                                        MinLightRadius;                                    // 0x104(0x4)
	float                                                        MaxLightRadius;                                    // 0x108(0x4)
	float                                                        MinFlickerScale;                                   // 0x10c(0x4)
	float                                                        LightMovementSpeedCmPerSecond;                     // 0x110(0x4)
	char                                                         pad0x4_E0VXO[0x4];                                 // 0x114(0x4)
	class ShipFireLightParamsDataAsset*                          LightParams;                                       // 0x118(0x8)
	class PostProcessComponent*                                  ShipPostProcessComponent;                          // 0x120(0x8)
	char                                                         pad0x28_3YNED[0x28];                               // 0x128(0x28)
};


