// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18 (Full Size[0xe0] - InheritedSize[0xc8]
class FlammableComponent: public ActorComponent
{
public:
	char                                                         pad0x10_K37M1[0x10];                               // 0xc8(0x10)
	bool                                                         OnFire;                                            // 0xd8(0x1)
	char                                                         pad0x7_J0F86[0x7];                                 // 0xd9(0x7)
};


// Size 0x30 (Full Size[0x110] - InheritedSize[0xe0]
class ActorFlammableComponent: public FlammableComponent
{
public:
	char                                                         pad0x18_NVNVV[0x18];                               // 0xe0(0x18)
	Class ParticleSystem*                                        FireVFX;                                           // 0xf8(0x8)
	Class ParticleSystem*                                        SteamVFX;                                          // 0x100(0x8)
	float                                                        FireVFXIntensity;                                  // 0x108(0x4)
	char                                                         pad0x4_8M4VY[0x4];                                 // 0x10c(0x4)
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class BlownByWindStatus: public StatusBase
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ExtinguishableInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FireDamagerType: public DamagerType
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FireExplosionDamagerType: public DamagerType
{
public:
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class FireStatus: public StatusBase
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FlammableInterface: public Interface
{
public:
};


// Size 0x18 (Full Size[0xf8] - InheritedSize[0xe0]
class FlammableWieldableComponent: public FlammableComponent
{
public:
	Struct Status                                                IgnitedStatus;                                     // 0xe0(0x18)
};


// Size 0x8 (Full Size[0xe8] - InheritedSize[0xe0]
class TimedFlammableComponent: public FlammableComponent
{
public:
	bool                                                         UseExtinguishTimer;                                // 0xe0(0x1)
	bool                                                         AllowFireToBeReplenishedBeforeExtinguishTimerExpired; // 0xe1(0x1)
	char                                                         pad0x2_QJYJT[0x2];                                 // 0xe2(0x2)
	float                                                        TimeInSecondsUntilFireExtinguished;                // 0xe4(0x4)
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class IgniteStatus: public StatusBase
{
public:
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class StatusResponseExtinguish: public StatusResponse
{
public:
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class StatusResponseIgnite: public StatusResponse
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class FireGridCellSelectionParamsDataAsset: public DataAsset
{
public:
	TArray<struct FireGridCellSelectionParams>                   FireGridCellSelectionParams;                       // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FirePropagationInterface: public Interface
{
public:
};


// Size 0x78 (Full Size[0x140] - InheritedSize[0xc8]
class CookerIgnitionComponent: public ActorComponent
{
public:
	Struct CookerIgnitionParams                                  CookerIgnitionParams;                              // 0xc8(0x78)
};


// Size 0x98 (Full Size[0xc0] - InheritedSize[0x28]
class FireCellStateTimingParamsDataAsset: public DataAsset
{
public:
	Struct FireCellStateTimingParams                             TimingParams;                                      // 0x28(0x94)
	char                                                         pad0x4_PL292[0x4];                                 // 0xbc(0x4)
};


// Size 0xa8 (Full Size[0xd0] - InheritedSize[0x28]
class FireGridAudioManager: public Object
{
public:
	Struct FireCellAudioParams                                   FireAudioParams;                                   // 0x28(0x40)
	Class Actor*                                                 OwningActor;                                       // 0x68(0x8)
	Class FirePropagator*                                        FirePropagator;                                    // 0x70(0x8)
	char                                                         pad0x58_IHXDC[0x58];                               // 0x78(0x58)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FireGridLocationInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FireGridProxyInterface: public FireGridLocationInterface
{
public:
};


// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class FireGridVFXParamsDataAsset: public DataAsset
{
public:
	Struct FireGridVFXParams                                     Params;                                            // 0x28(0x40)
};


// Size 0x1e8 (Full Size[0x210] - InheritedSize[0x28]
class FireGridVFXManager: public Object
{
public:
	Class FireGridVFXParamsDataAsset*                            VFXParams;                                         // 0x28(0x8)
	TArray<struct SpawnedCustomParticleSystemsForCells>          SpawnedCustomParticleSystemsForCells;              // 0x80(0x10)
	Class ParticleSystemComponent*                               SpawnedExteriorSmokeParticleSystem;                // 0x130(0x8)
	Class ParticleSystemComponent*                               SpawnedLowDetailParticleSystem;                    // 0x138(0x8)
	TArray<struct DespawningMeshes>                              DespawningMeshes;                                  // 0x140(0x10)
	TArray<struct InteriorSmokeSpawnDescs>                       InteriorSmokeSpawnDescs;                           // 0x150(0x10)
	TArray<struct LowDetailVFXSpawnDescs>                        LowDetailVFXSpawnDescs;                            // 0x160(0x10)
	TArray<struct ParticleSpawnLODSettings>                      ParticleSpawnLODSettings;                          // 0x170(0x10)
	TArray<struct ExteriorSmokeVFXSpawnDescs>                    ExteriorSmokeVFXSpawnDescs;                        // 0x180(0x10)
	TArray<struct VFXToSpawn>                                    VFXToSpawn;                                        // 0x190(0x10)
	char                                                         pad0x8_2SWBE[0x8];                                 // 0x1a0(0x8)
	TArray<struct InterleavedSpawnLists>                         InterleavedSpawnLists;                             // 0x1a8(0x10)
	Class FirePropagator*                                        Propagator;                                        // 0x1b8(0x8)
	char                                                         pad0x50_RO24K[0x50];                               // 0x1c0(0x50)
};


// Size 0xf8 (Full Size[0x120] - InheritedSize[0x28]
class FirePropagator: public Object
{
public:
	char                                                         pad0x90_ZT5DK[0x90];                               // 0x28(0x90)
	Class FireCellStateTimingParamsDataAsset*                    CellStateTimingParams;                             // 0xb8(0x8)
	char                                                         pad0x4_XW549[0x4];                                 // 0xc0(0x4)
	float                                                        WaterHeightOffsetToFloodCells;                     // 0xc4(0x4)
	char                                                         pad0x58_I7E4I[0x58];                               // 0xc8(0x58)
};


// Size 0x28 (Full Size[0x138] - InheritedSize[0x110]
class MastFlammableComponent: public ActorFlammableComponent
{
public:
	char                                                         pad0x8_NNU0A[0x8];                                 // 0x110(0x8)
	Struct Vector                                                FireGridLocation;                                  // 0x118(0xc)
	char                                                         pad0x14_TSVZN[0x14];                               // 0x124(0x14)
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class ShipFireDamageParamsDataAsset: public DataAsset
{
public:
	Struct ShipFireDamageParams                                  FireDamageParams;                                  // 0x28(0x18)
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class ShipFireLightParamsDataAsset: public DataAsset
{
public:
	Struct ShipFireLightParams                                   Params;                                            // 0x28(0x14)
	char                                                         pad0x4_25T3F[0x4];                                 // 0x3c(0x4)
};


// Size 0x3d8 (Full Size[0x4a0] - InheritedSize[0xc8]
class ShipFirePropagationComponent: public ActorComponent
{
public:
	char                                                         pad0x10_16EY1[0x10];                               // 0xc8(0x10)
	struct FName                                                 FeatureToggleName;                                 // 0xd8(0x8)
	class                                                        ShipSize;                                          // 0xe0(0x8)
	float                                                        CellSize;                                          // 0xe8(0x4)
	Struct IntVector                                             GridDimensions;                                    // 0xec(0xc)
	Struct Vector                                                GridOffset;                                        // 0xf8(0xc)
	char                                                         pad0x4_6I8S1[0x4];                                 // 0x104(0x4)
	Class FirePropagator*                                        Propagator;                                        // 0x108(0x8)
	Class ShipFireDamageParamsDataAsset*                         FireDamageDataAsset;                               // 0x110(0x8)
	TArray<struct FireCellDescs>                                 FireCellDescs;                                     // 0x118(0x10)
	char                                                         pad0x10_Y5APF[0x10];                               // 0x128(0x10)
	Struct Status                                                BurnStatus;                                        // 0x138(0x18)
	Class FireGridVFXManager*                                    VFXManager;                                        // 0x150(0x8)
	Struct FireGridVfxSpawnSettings                              VfxSpawnSettings;                                  // 0x158(0x58)
	Struct ShipFireLightManager                                  FireLightManager;                                  // 0x1b0(0x150)
	Struct FireGridCharringManager                               FireCharringManager;                               // 0x300(0xd8)
	TArray<struct ReplicatedCellData>                            ReplicatedCellData;                                // 0x3d8(0x10)
	Struct ReplicatedFireCellCharringData                        ReplicatedCellCharringData;                        // 0x3e8(0x18)
	Class FireGridAudioManager*                                  FireAudioManager;                                  // 0x400(0x8)
	Struct FireCellAudioParams                                   FireAudioParams;                                   // 0x408(0x40)
	char                                                         pad0x58_WWPWN[0x58];                               // 0x448(0x58)
};


}