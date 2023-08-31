// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class CheckRowboatLiveriesStatCondition: public StatCondition
{
public:
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class CheckRowboatTypeStatCondition: public StatCondition
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ControllableOarsInterface: public Interface
{
public:
};


// Size 0x110 (Full Size[0x4d8] - InheritedSize[0x3c8]
class FakeShip: public Actor
{
public:
	char                                                         pad0x8_V3CQL[0x8];                                 // 0x3c8(0x8)
	TArray<class ItemProxy*>                                     AttachedItems;                                     // 0x3d0(0x10)
	char                                                         pad0xf8_L63SG[0xf8];                               // 0x3e0(0xf8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WatercraftTrackerInterface: public Interface
{
public:
};


// Size 0x98 (Full Size[0x160] - InheritedSize[0xc8]
class ItemProxyWatercraftTrackerComponent: public ActorComponent
{
public:
	char                                                         pad0x8_6RFT8[0x8];                                 // 0xc8(0x8)
	Class ItemProxyWatercraftTrackerComponentDataAsset*          WatercraftTrackingData;                            // 0xd0(0x8)
	Class Actor*                                                 CurrentWatercraft;                                 // 0xd8(0x8)
	char                                                         pad0x80_QPEU1[0x80];                               // 0xe0(0x80)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class ItemProxyWatercraftTrackerComponentDataAsset: public DataAsset
{
public:
	TArray<class Class*>                                         WatercraftTypes;                                   // 0x28(0x10)
};


// Size 0x1e0 (Full Size[0x4c0] - InheritedSize[0x2e0]
class RowboatAudioComponent: public SceneComponent
{
public:
	Class RowboatAudioComponentParams*                           Params;                                            // 0x2e0(0x8)
	Class Rowboat*                                               ParentRowboat;                                     // 0x2e8(0x8)
	char                                                         pad0x1d0_TR5QM[0x1d0];                             // 0x2f0(0x1d0)
};


// Size 0xc0 (Full Size[0xe8] - InheritedSize[0x28]
class RowboatAudioComponentParams: public DataAsset
{
public:
	Class WwiseObjectPoolWrapper*                                RowboatObjectPool;                                 // 0x28(0x8)
	Class WwiseEvent*                                            RowboatWakeStart;                                  // 0x30(0x8)
	Class WwiseEvent*                                            RowboatWakeStop;                                   // 0x38(0x8)
	struct FName                                                 RowboatSpeedRtpcName;                              // 0x40(0x8)
	float                                                        RowboatMaxSpeedRtpc;                               // 0x48(0x4)
	char                                                         pad0x4_M0WCK[0x4];                                 // 0x4c(0x4)
	Class WwiseEvent*                                            RowboatLaunch;                                     // 0x50(0x8)
	Class WwiseEvent*                                            RowboatImpactAndScrapeStart;                       // 0x58(0x8)
	Class WwiseEvent*                                            RowboatImpactAndScrapeStop;                        // 0x60(0x8)
	Class WwiseEvent*                                            RowboatStrainStart;                                // 0x68(0x8)
	Class WwiseEvent*                                            RowboatStrainStop;                                 // 0x70(0x8)
	struct FName                                                 RowboatStrainRtpcName;                             // 0x78(0x8)
	float                                                        RowboatMaxStrainRtpc;                              // 0x80(0x4)
	char                                                         pad0x4_8EK5D[0x4];                                 // 0x84(0x4)
	Class WwiseEvent*                                            RowboatTakenDamage;                                // 0x88(0x8)
	float                                                        DamageAmountRequiredForNoiseToPlay;                // 0x90(0x4)
	char                                                         pad0x4_Y45M0[0x4];                                 // 0x94(0x4)
	Class WwiseEvent*                                            RowboatAttach;                                     // 0x98(0x8)
	Class WwiseEvent*                                            RowboatDetach;                                     // 0xa0(0x8)
	Class WwiseObjectPoolWrapper*                                WwiseOarEmitterPool;                               // 0xa8(0x8)
	Class WwiseEvent*                                            PlayOarInOarLayer;                                 // 0xb0(0x8)
	Class WwiseEvent*                                            PlayOarInWaterLayer;                               // 0xb8(0x8)
	Class WwiseEvent*                                            PlayOarOutOarLayer;                                // 0xc0(0x8)
	Class WwiseEvent*                                            PlayOarOutWaterLayer;                              // 0xc8(0x8)
	Class WwiseEvent*                                            PlayOarBrakingLoop;                                // 0xd0(0x8)
	Class WwiseEvent*                                            StopOarBrakingLoop;                                // 0xd8(0x8)
	Class WwiseEvent*                                            PlayOarPullFinished;                               // 0xe0(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RowboatCustomizationLoadoutInterface: public Interface
{
public:
};


// Size 0x48 (Full Size[0x110] - InheritedSize[0xc8]
class RowboatCustomizationLoadoutComponent: public ActorComponent
{
public:
	char                                                         pad0x28_81YX5[0x28];                               // 0xc8(0x28)
	class                                                        EquippedCustomization;                             // 0xf0(0x8)
	char                                                         pad0x18_VUGG8[0x18];                               // 0xf8(0x18)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class RowboatDescDataAsset: public DataAsset
{
public:
	Struct PartDesc                                              PartDesc;                                          // 0x28(0x20)
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class RowboatDockedToShipConditionalStatTrigger: public ConditionalStatsTriggerType
{
public:
};


// Size 0x0 (Full Size[0x78] - InheritedSize[0x78]
class RowboatTypeCategory: public CategoryBase
{
public:
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class RowboatEntitlementDesc: public EntitlementDesc
{
public:
	Struct StringClassReference                                  Rowboat;                                           // 0xc8(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RowboatInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x78] - InheritedSize[0x78]
class RowboatLiveryCategory: public CategoryBase
{
public:
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class RowboatLiveryDesc: public EntitlementDesc
{
public:
	Struct StringAssetReference                                  RowboatDescDataAsset;                              // 0xc8(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RowboatLiveryPicker: public Object
{
public:
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class RowboatLiveryPickerDataAsset: public DataAsset
{
public:
	TArray<struct LiveriesInThisGroup>                           LiveriesInThisGroup;                               // 0x28(0x10)
	TArray<struct SubgroupsInPriorityOrder>                      SubgroupsInPriorityOrder;                          // 0x38(0x10)
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class DataAssetRowboatLiveryPicker: public RowboatLiveryPicker
{
public:
	Class RowboatLiveryPickerDataAsset*                          DataAsset;                                         // 0x28(0x8)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class FixedRowboatLiveryPicker: public RowboatLiveryPicker
{
public:
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsLeftForwardNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsLeftForwardDeactivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsRightForwardNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsRightForwardDeactivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsLeftBrakingActivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsLeftBrakingDeactivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsRightBrakingActivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsRightBrakingDeactivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class ScrapeableDamageDataAsset: public DataAsset
{
public:
	TArray<struct DamageSpeedParams>                             DamageSpeedParams;                                 // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ScrapeableInterface: public Interface
{
public:
};


// Size 0x30 (Full Size[0xf8] - InheritedSize[0xc8]
class ScrapeableComponent: public ActorComponent
{
public:
	char                                                         pad0x8_X88Z8[0x8];                                 // 0xc8(0x8)
	float                                                        MinIntervalBetweenScrapeDamage;                    // 0xd0(0x4)
	char                                                         pad0x4_RK7NE[0x4];                                 // 0xd4(0x4)
	Class ScrapeableDamageDataAsset*                             ScrapeDamageSettings;                              // 0xd8(0x8)
	Struct Vector                                                SafeZoneCenterDirection;                           // 0xe0(0xc)
	float                                                        SafeZoneMaximumAngle;                              // 0xec(0x4)
	class                                                        ScrapeDamagerType;                                 // 0xf0(0x8)
};


// Size 0x368 (Full Size[0x730] - InheritedSize[0x3c8]
class Watercraft: public Actor
{
public:
	char                                                         pad0x38_YWHAO[0x38];                               // 0x3c8(0x38)
	Class BuoyancyComponent*                                     BuoyancyComponent;                                 // 0x400(0x8)
	Struct WatercraftRolloverCorrector                           RolloverCorrector;                                 // 0x408(0xc)
	char                                                         pad0x4_XUG4T[0x4];                                 // 0x414(0x4)
	Class ShipNosediveBrake*                                     NosediveBrake;                                     // 0x418(0x8)
	Class BowSplashContainer*                                    BowSplashContainer;                                // 0x420(0x8)
	Class StaticMeshComponent*                                   CollisionMesh;                                     // 0x428(0x8)
	Class StaticMeshComponent*                                   CraftMesh;                                         // 0x430(0x8)
	Class BoxComponent*                                          OverlapHits;                                       // 0x438(0x8)
	Class StaticMeshComponent*                                   WaterOcclusionVolume;                              // 0x440(0x8)
	Class WaterInteractionComponent*                             WaterInteractionComponent;                         // 0x448(0x8)
	struct FName                                                 ClientConvexHullCollisionProfile;                  // 0x450(0x8)
	Struct NetTimeStampCalculator                                MovementTimeStamp;                                 // 0x458(0x70)
	Struct RigidBodyErrorCorrection                              PhysicsErrorCorrection;                            // 0x4c8(0x1c)
	char                                                         pad0x3c_WDJ8D[0x3c];                               // 0x4e4(0x3c)
	Struct BuoyancySampleMovement                                BuoyancySampleMovement;                            // 0x520(0x68)
	Class CurveFloat*                                            SpeedToChoppinessScalarCurve;                      // 0x588(0x8)
	float                                                        DeepWaterSubmersionThreshold;                      // 0x590(0x4)
	float                                                        BuoyancyChoppinessWhileSinking;                    // 0x594(0x4)
	bool                                                         IsCritical;                                        // 0x598(0x1)
	bool                                                         RigidBodyAwake;                                    // 0x599(0x1)
	bool                                                         InContactWithLand;                                 // 0x59a(0x1)
	bool                                                         InDeepWater;                                       // 0x59b(0x1)
	char                                                         pad0x4_J7FOR[0x4];                                 // 0x59c(0x4)
	char                                                         pad0x190_Z4U6G[0x190];                             // 0x5a0(0x190)
};


// Size 0x378 (Full Size[0xaa8] - InheritedSize[0x730]
class Rowboat: public Watercraft
{
public:
	char                                                         pad0x48_OYAZV[0x48];                               // 0x730(0x48)
	Class ChildActorComponent*                                   LeftSideClamberSpot;                               // 0x778(0x8)
	Class ChildActorComponent*                                   RightSideClamberSpot;                              // 0x780(0x8)
	Class ChildActorComponent*                                   ForceSpot;                                         // 0x788(0x8)
	Class ChildActorComponent*                                   Lantern;                                           // 0x790(0x8)
	Class ChildActorComponent*                                   RowingSeat;                                        // 0x798(0x8)
	Class ChildActorComponent*                                   StorageSeat;                                       // 0x7a0(0x8)
	Class RowboatCustomizationLoadoutComponent*                  CustomizationLoadoutComponent;                     // 0x7a8(0x8)
	Class ShipLiveryComponent*                                   LiveryComponent;                                   // 0x7b0(0x8)
	Class ReplicatedShipPartCustomizationComponent*              CustomizationComponent;                            // 0x7b8(0x8)
	Class RepairableComponent*                                   RepairableComponent;                               // 0x7c0(0x8)
	Struct Vector                                                WaterExclusionOffset;                              // 0x7c8(0xc)
	char                                                         pad0x4_WDIOH[0x4];                                 // 0x7d4(0x4)
	Class TetherCustomisationComponent*                          TetherCustomisationComponent;                      // 0x7d8(0x8)
	Class HealthComponent*                                       HealthComponent;                                   // 0x7e0(0x8)
	Class ActorDamageableComponent*                              ActorDamageableComponent;                          // 0x7e8(0x8)
	Class RammableComponent*                                     RammableComponent;                                 // 0x7f0(0x8)
	Class ScrapeableComponent*                                   ScrapeableComponent;                               // 0x7f8(0x8)
	Class RowboatAudioComponent*                                 RowboatAudio;                                      // 0x800(0x8)
	Class BaseHullDragDynamicsDesc*                              HullDragDynamicsDesc;                              // 0x808(0x8)
	Class BowSplashContainer*                                    OarSplashContainer;                                // 0x810(0x8)
	Class MountableComponent*                                    MountableComponent;                                // 0x818(0x8)
	Class ActorActivationComponent*                              ActorActivationComponent;                          // 0x820(0x8)
	Class CurveFloat*                                            LinearDampingOverTimeWhileBeachedScalarCurve;      // 0x828(0x8)
	Class CurveFloat*                                            AngularDampingOverTimeWhileBeachedScalarCurve;     // 0x830(0x8)
	Struct RowboatDamageEffectData                               DamageEffectData;                                  // 0x838(0x18)
	Struct RowboatStrainDamageData                               StrainDamageData;                                  // 0x850(0x20)
	TArray<class ChildActorComponent*>                           AlwaysEnabledInteractables;                        // 0x870(0x10)
	Class ShroudBreakerTrackerComponent*                         ShroudBreakerTrackerComponent;                     // 0x880(0x8)
	bool                                                         IsBeingLaunched;                                   // 0x888(0x1)
	bool                                                         IsSinking;                                         // 0x889(0x1)
	char                                                         pad0x2_Y596T[0x2];                                 // 0x88a(0x2)
	float                                                        MaxPushingAngle;                                   // 0x88c(0x4)
	float                                                        CurrentStrainAmount;                               // 0x890(0x4)
	bool                                                         IsDocked;                                          // 0x894(0x1)
	char                                                         pad0x1_61F06[0x1];                                 // 0x895(0x1)
	byte                                                         CoverCollisionChannel;                             // 0x896(0x1)
	char                                                         pad0x1_627QZ[0x1];                                 // 0x897(0x1)
	float                                                        UnderCoverCheckInterval;                           // 0x898(0x4)
	float                                                        UnderCoverHeight;                                  // 0x89c(0x4)
	TArray<struct RelativeUnderCoverProbeRoots>                  RelativeUnderCoverProbeRoots;                      // 0x8a0(0x10)
	byte                                                         TrackedActorType;                                  // 0x8b0(0x1)
	char                                                         pad0x3_TUVWU[0x3];                                 // 0x8b1(0x3)
	float                                                        LightDamagedRepairTime;                            // 0x8b4(0x4)
	float                                                        ModerateDamagedRepairTime;                         // 0x8b8(0x4)
	float                                                        HeavyDamagedRepairTime;                            // 0x8bc(0x4)
	float                                                        LightDamagedHealthThreshold;                       // 0x8c0(0x4)
	float                                                        ModerateDamagedHealthThreshold;                    // 0x8c4(0x4)
	float                                                        HeavyDamagedHealthThreshold;                       // 0x8c8(0x4)
	char                                                         pad0x1dc_ZCTJQ[0x1dc];                             // 0x8cc(0x1dc)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RowboatPartInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class RowboatSpawnParamsDataAsset: public DataAsset
{
public:
	TArray<class Class*>                                         RowboatTypes;                                      // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RowingActionStateId: public ActionStateId
{
public:
};


// Size 0x8 (Full Size[0x2a8] - InheritedSize[0x2a0]
class RowingInputComponent: public LookAtOffsetInputComponent
{
public:
	Class RowingSeat*                                            TargetOars;                                        // 0x2a0(0x8)
};


// Size 0x30 (Full Size[0x6b0] - InheritedSize[0x680]
class StorageSeat: public Seat
{
public:
	class                                                        StorageInteractionInput;                           // 0x680(0x8)
	Class StorageContainerComponent*                             StorageContainerComponent;                         // 0x688(0x8)
	char                                                         pad0x20_IEI8Y[0x20];                               // 0x690(0x20)
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleQuestSinkWatercraftStep: public TaleQuestStep
{
public:
};


// Size 0x28 (Full Size[0x88] - InheritedSize[0x60]
class TaleQuestWatercraftService: public TaleQuestService
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TaleQuestWatercraftServiceDesc: public TaleQuestServiceDesc
{
public:
};


// Size 0x30 (Full Size[0xb0] - InheritedSize[0x80]
class TaleQuestSinkWatercraftStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableWatercraft                               Watercraft;                                        // 0x80(0x30)
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleQuestSpawnWatercraftStep: public TaleQuestStep
{
public:
};


// Size 0xa8 (Full Size[0x128] - InheritedSize[0x80]
class TaleQuestSpawnWatercraftStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableTransform                                SpawnLocation;                                     // 0x80(0x38)
	Struct QuestVariableWatercraft                               Watercraft;                                        // 0xf8(0x30)
};


// Size 0x0 (Full Size[0x180] - InheritedSize[0x180]
class TaleQuestWatercraftFunctionLibrary: public TaleQuestFunctionStepLibrary
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WatercraftBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WatercraftServiceInterface: public Interface
{
public:
};


// Size 0x8 (Full Size[0x3d0] - InheritedSize[0x3c8]
class WatercraftService: public Actor
{
public:
};


// Size 0x30 (Full Size[0x88] - InheritedSize[0x58]
class WatercraftSpawnData: public ItemSpawnData
{
public:
	char                                                         pad0x20_HPTAX[0x20];                               // 0x58(0x20)
	Class RowboatLiveryPicker*                                   LiveryPicker;                                      // 0x78(0x8)
	float                                                        MinDistanceToNearestWatercraftInMetres;            // 0x80(0x4)
	char                                                         pad0x4_OCDLW[0x4];                                 // 0x84(0x4)
};


// Size 0x20 (Full Size[0x58] - InheritedSize[0x38]
class WatercraftsSettings: public DeveloperSettings
{
public:
	Struct StringAssetReference                                  RowboatTypesEntitlementsMapDataAsset;              // 0x38(0x10)
	Struct StringAssetReference                                  RowboatLiveryEntitlementsMapDataAsset;             // 0x48(0x10)
};


// Size 0x18 (Full Size[0xe0] - InheritedSize[0xc8]
class WatercraftTrackerComponent: public ActorComponent
{
public:
	char                                                         pad0x8_LEFIK[0x8];                                 // 0xc8(0x8)
	TArray<class Actor*>                                         CurrentWatercrafts;                                // 0xd0(0x10)
};


}