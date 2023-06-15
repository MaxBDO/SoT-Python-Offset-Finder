// Generated by DougTheDruid#2784 on Discord
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
	char                                                         pad0x8_QBMS6[0x8];                                 // 0x3c8(0x8)
	TArray<class ItemProxy*>                                     AttachedItems;                                     // 0x3d0(0x10)
	char                                                         pad0xf8_YU388[0xf8];                               // 0x3e0(0xf8)
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
	char                                                         pad0x8_TCB3Y[0x8];                                 // 0xc8(0x8)
	Class ItemProxyWatercraftTrackerComponentDataAsset*          WatercraftTrackingData;                            // 0xd0(0x8)
	Class Actor*                                                 CurrentWatercraft;                                 // 0xd8(0x8)
	char                                                         pad0x80_0K7FR[0x80];                               // 0xe0(0x80)
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
	char                                                         pad0x1d0_ZWYAM[0x1d0];                             // 0x2f0(0x1d0)
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
	char                                                         pad0x4_AEFA6[0x4];                                 // 0x4c(0x4)
	Class WwiseEvent*                                            RowboatLaunch;                                     // 0x50(0x8)
	Class WwiseEvent*                                            RowboatImpactAndScrapeStart;                       // 0x58(0x8)
	Class WwiseEvent*                                            RowboatImpactAndScrapeStop;                        // 0x60(0x8)
	Class WwiseEvent*                                            RowboatStrainStart;                                // 0x68(0x8)
	Class WwiseEvent*                                            RowboatStrainStop;                                 // 0x70(0x8)
	struct FName                                                 RowboatStrainRtpcName;                             // 0x78(0x8)
	float                                                        RowboatMaxStrainRtpc;                              // 0x80(0x4)
	char                                                         pad0x4_WEDCQ[0x4];                                 // 0x84(0x4)
	Class WwiseEvent*                                            RowboatTakenDamage;                                // 0x88(0x8)
	float                                                        DamageAmountRequiredForNoiseToPlay;                // 0x90(0x4)
	char                                                         pad0x4_934FP[0x4];                                 // 0x94(0x4)
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
	char                                                         pad0x28_JUO72[0x28];                               // 0xc8(0x28)
	class                                                        EquippedCustomization;                             // 0xf0(0x8)
	char                                                         pad0x18_3QDS0[0x18];                               // 0xf8(0x18)
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
	char                                                         pad0x8_CZ970[0x8];                                 // 0xc8(0x8)
	float                                                        MinIntervalBetweenScrapeDamage;                    // 0xd0(0x4)
	char                                                         pad0x4_0UMHE[0x4];                                 // 0xd4(0x4)
	Class ScrapeableDamageDataAsset*                             ScrapeDamageSettings;                              // 0xd8(0x8)
	Struct Vector                                                SafeZoneCenterDirection;                           // 0xe0(0xc)
	float                                                        SafeZoneMaximumAngle;                              // 0xec(0x4)
	class                                                        ScrapeDamagerType;                                 // 0xf0(0x8)
};


// Size 0x360 (Full Size[0x728] - InheritedSize[0x3c8]
class Watercraft: public Actor
{
public:
	char                                                         pad0x30_8OAL8[0x30];                               // 0x3c8(0x30)
	Class BuoyancyComponent*                                     BuoyancyComponent;                                 // 0x3f8(0x8)
	Struct WatercraftRolloverCorrector                           RolloverCorrector;                                 // 0x400(0xc)
	char                                                         pad0x4_CU8VE[0x4];                                 // 0x40c(0x4)
	Class ShipNosediveBrake*                                     NosediveBrake;                                     // 0x410(0x8)
	Class BowSplashContainer*                                    BowSplashContainer;                                // 0x418(0x8)
	Class StaticMeshComponent*                                   CollisionMesh;                                     // 0x420(0x8)
	Class StaticMeshComponent*                                   CraftMesh;                                         // 0x428(0x8)
	Class BoxComponent*                                          OverlapHits;                                       // 0x430(0x8)
	Class StaticMeshComponent*                                   WaterOcclusionVolume;                              // 0x438(0x8)
	Class WaterInteractionComponent*                             WaterInteractionComponent;                         // 0x440(0x8)
	struct FName                                                 ClientConvexHullCollisionProfile;                  // 0x448(0x8)
	Struct NetTimeStampCalculator                                MovementTimeStamp;                                 // 0x450(0x70)
	Struct RigidBodyErrorCorrection                              PhysicsErrorCorrection;                            // 0x4c0(0x1c)
	char                                                         pad0x3c_J3ZJ4[0x3c];                               // 0x4dc(0x3c)
	Struct BuoyancySampleMovement                                BuoyancySampleMovement;                            // 0x518(0x68)
	Class CurveFloat*                                            SpeedToChoppinessScalarCurve;                      // 0x580(0x8)
	float                                                        DeepWaterSubmersionThreshold;                      // 0x588(0x4)
	float                                                        BuoyancyChoppinessWhileSinking;                    // 0x58c(0x4)
	bool                                                         IsCritical;                                        // 0x590(0x1)
	bool                                                         RigidBodyAwake;                                    // 0x591(0x1)
	bool                                                         InContactWithLand;                                 // 0x592(0x1)
	bool                                                         InDeepWater;                                       // 0x593(0x1)
	char                                                         pad0x4_G7QX6[0x4];                                 // 0x594(0x4)
	char                                                         pad0x190_GR969[0x190];                             // 0x598(0x190)
};


// Size 0x348 (Full Size[0xa70] - InheritedSize[0x728]
class Rowboat: public Watercraft
{
public:
	char                                                         pad0x48_ONF7B[0x48];                               // 0x728(0x48)
	Class ChildActorComponent*                                   LeftSideClamberSpot;                               // 0x770(0x8)
	Class ChildActorComponent*                                   RightSideClamberSpot;                              // 0x778(0x8)
	Class ChildActorComponent*                                   ForceSpot;                                         // 0x780(0x8)
	Class ChildActorComponent*                                   Lantern;                                           // 0x788(0x8)
	Class ChildActorComponent*                                   RowingSeat;                                        // 0x790(0x8)
	Class ChildActorComponent*                                   StorageSeat;                                       // 0x798(0x8)
	Class RowboatCustomizationLoadoutComponent*                  CustomizationLoadoutComponent;                     // 0x7a0(0x8)
	Class ShipLiveryComponent*                                   LiveryComponent;                                   // 0x7a8(0x8)
	Class ReplicatedShipPartCustomizationComponent*              CustomizationComponent;                            // 0x7b0(0x8)
	Struct Vector                                                WaterExclusionOffset;                              // 0x7b8(0xc)
	char                                                         pad0x4_FKREZ[0x4];                                 // 0x7c4(0x4)
	Class TetherCustomisationComponent*                          TetherCustomisationComponent;                      // 0x7c8(0x8)
	Class HealthComponent*                                       HealthComponent;                                   // 0x7d0(0x8)
	Class ActorDamageableComponent*                              ActorDamageableComponent;                          // 0x7d8(0x8)
	Class RammableComponent*                                     RammableComponent;                                 // 0x7e0(0x8)
	Class ScrapeableComponent*                                   ScrapeableComponent;                               // 0x7e8(0x8)
	Class RowboatAudioComponent*                                 RowboatAudio;                                      // 0x7f0(0x8)
	Class BaseHullDragDynamicsDesc*                              HullDragDynamicsDesc;                              // 0x7f8(0x8)
	Class BowSplashContainer*                                    OarSplashContainer;                                // 0x800(0x8)
	Class MountableComponent*                                    MountableComponent;                                // 0x808(0x8)
	Class CurveFloat*                                            LinearDampingOverTimeWhileBeachedScalarCurve;      // 0x810(0x8)
	Class CurveFloat*                                            AngularDampingOverTimeWhileBeachedScalarCurve;     // 0x818(0x8)
	Struct RowboatDamageEffectData                               DamageEffectData;                                  // 0x820(0x18)
	Struct RowboatStrainDamageData                               StrainDamageData;                                  // 0x838(0x20)
	TArray<class ChildActorComponent*>                           AlwaysEnabledInteractables;                        // 0x858(0x10)
	Class ShroudBreakerTrackerComponent*                         ShroudBreakerTrackerComponent;                     // 0x868(0x8)
	bool                                                         IsBeingLaunched;                                   // 0x870(0x1)
	bool                                                         IsSinking;                                         // 0x871(0x1)
	char                                                         pad0x2_UW5V8[0x2];                                 // 0x872(0x2)
	float                                                        MaxPushingAngle;                                   // 0x874(0x4)
	float                                                        CurrentStrainAmount;                               // 0x878(0x4)
	bool                                                         IsDocked;                                          // 0x87c(0x1)
	char                                                         pad0x1_96JN8[0x1];                                 // 0x87d(0x1)
	byte                                                         CoverCollisionChannel;                             // 0x87e(0x1)
	char                                                         pad0x1_NOH3J[0x1];                                 // 0x87f(0x1)
	float                                                        UnderCoverCheckInterval;                           // 0x880(0x4)
	float                                                        UnderCoverHeight;                                  // 0x884(0x4)
	TArray<struct RelativeUnderCoverProbeRoots>                  RelativeUnderCoverProbeRoots;                      // 0x888(0x10)
	byte                                                         TrackedActorType;                                  // 0x898(0x1)
	char                                                         pad0x1d7_NZ4TC[0x1d7];                             // 0x899(0x1d7)
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
	char                                                         pad0x20_TJXL4[0x20];                               // 0x690(0x20)
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
	char                                                         pad0x20_U2OCV[0x20];                               // 0x58(0x20)
	Class RowboatLiveryPicker*                                   LiveryPicker;                                      // 0x78(0x8)
	float                                                        MinDistanceToNearestWatercraftInMetres;            // 0x80(0x4)
	char                                                         pad0x4_9U6I2[0x4];                                 // 0x84(0x4)
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
	char                                                         pad0x8_7D66P[0x8];                                 // 0xc8(0x8)
	TArray<class Actor*>                                         CurrentWatercrafts;                                // 0xd0(0x10)
};


}