// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x40 (Full Size[0xa10] - InheritedSize[0x9d0]
class RotatingCompass: public EnchantedCompass
{
public:
	Class PickupableComponent*                                   PickupableComponent;                               // 0x9c8(0x8)
	Class PoseableMeshMemoryConstraintComponent*                 PoseableStashedMeshComponent;                      // 0x9d0(0x8)
	Class WieldableInteractableComponent*                        WieldableInteractableComponent;                    // 0x9d8(0x8)
	Class Actor*                                                 SplinePathActor;                                   // 0x9e0(0x8)
	Class CurveFloat*                                            RotationSequenceCurve;                             // 0x9e8(0x8)
	Class RotatingCompassSpinComponent*                          RotatingCompassSpinComponent;                      // 0x9f0(0x8)
	byte                                                         RotationState;                                     // 0x9f8(0x1)
	char                                                         pad0x3_GKI3F[0x3];                                 // 0x9f9(0x3)
	float                                                        SplineDistanceOffset;                              // 0x9fc(0x4)
	float                                                        TargetYawAngleBeforeRotationSequence;              // 0xa00(0x4)
	char                                                         pad0xc_JTIG3[0xc];                                 // 0xa04(0xc)
};


// Size 0x148 (Full Size[0x210] - InheritedSize[0xc8]
class EnchantedCompassProximityAnnouncementComponent: public ActorComponent
{
public:
	Class WwiseEvent*                                            StartAnnouncingEvent;                              // 0xc8(0x8)
	Class WwiseEvent*                                            StopAnnouncingEvent;                               // 0xd0(0x8)
	float                                                        MaxFrequencyDistanceSquared;                       // 0xd8(0x4)
	char                                                         pad0x4_UEZCT[0x4];                                 // 0xdc(0x4)
	bool                                                         IsSettingEnabled;                                  // 0x120(0x1)
	char                                                         pad0xef_USU48[0xef];                               // 0x121(0xef)
};


// Size 0x30 (Full Size[0x910] - InheritedSize[0x8e0]
class MultiTargetEnchantedCompass: public Compass
{
public:
	TArray<struct Locations>                                     Locations;                                         // 0x8d8(0x10)
	TArray<struct LocationIds>                                   LocationIds;                                       // 0x8e8(0x10)
	Class InventoryItemComponent*                                InventoryItem;                                     // 0x8f8(0x8)
	Class EnchantedCompassProximityAnnouncementComponent*        ProximityAnnouncementComponent;                    // 0x900(0x8)
	char                                                         pad0x8_NCKXK[0x8];                                 // 0x908(0x8)
};


// Size 0x0 (Full Size[0x910] - InheritedSize[0x910]
class PrototypeMultiTargetEnchantedCompass: public MultiTargetEnchantedCompass
{
public:
};


// Size 0x8 (Full Size[0x1f0] - InheritedSize[0x1e8]
class RotatingCompassSpinComponent: public CompassSpinComponent
{
public:
};


// Size 0x8 (Full Size[0xa0] - InheritedSize[0x98]
class TaleQuestMultiTargetCompassAddTrackedLocationStep: public TaleQuestStep
{
public:
	Class TaleQuestMultiTargetCompassAddTrackedLocationStepDesc* Desc;                                              // 0x98(0x8)
};


// Size 0x60 (Full Size[0xe0] - InheritedSize[0x80]
class TaleQuestMultiTargetCompassAddTrackedLocationStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableVector                                   Location;                                          // 0x80(0x30)
	Struct QuestVariableGuid                                     TargetID;                                          // 0xb0(0x30)
};


// Size 0x10 (Full Size[0xa8] - InheritedSize[0x98]
class TaleQuestMultiTargetCompassRemoveTrackedLocationStep: public TaleQuestStep
{
public:
};


// Size 0x30 (Full Size[0xb0] - InheritedSize[0x80]
class TaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableGuid                                     TargetID;                                          // 0x80(0x30)
};


// Size 0x20 (Full Size[0x190] - InheritedSize[0x170]
class TaleQuestMultiTargetCompassService: public TaleQuestToolService
{
public:
};


// Size 0x8 (Full Size[0x38] - InheritedSize[0x30]
class TaleQuestMultiTargetCompassServiceDesc: public TaleQuestToolServiceDesc
{
public:
	class                                                        CompassDesc;                                       // 0x30(0x8)
};


// Size 0xa8 (Full Size[0x108] - InheritedSize[0x60]
class TaleQuestRotatingCompassService: public TaleQuestService
{
public:
	Class Actor*                                                 SplinePathActor;                                   // 0x60(0x8)
	Class RotatingCompass*                                       RotatingCompass;                                   // 0x68(0x8)
	char                                                         pad0x98_GTW2R[0x98];                               // 0x70(0x98)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TaleQuestRotatingCompassServiceDesc: public TaleQuestServiceDesc
{
public:
};


// Size 0x0 (Full Size[0x180] - InheritedSize[0x180]
class TaleQuestRotatingCompassFunctionLibrary: public TaleQuestFunctionStepLibrary
{
public:
};


// Size 0x8 (Full Size[0xa0] - InheritedSize[0x98]
class TaleQuestRotatingCompassSplinePathSetupAndWaitForCompletionStep: public TaleQuestStep
{
public:
};


// Size 0x30 (Full Size[0xb0] - InheritedSize[0x80]
class TaleQuestRotatingCompassSplinePathSetupAndWaitForCompletionStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableActor                                    SplinePathActor;                                   // 0x80(0x30)
};


// Size 0x60 (Full Size[0xf8] - InheritedSize[0x98]
class TaleQuestSetCompassTargetToTargetStep: public TaleQuestStep
{
public:
};


// Size 0x8 (Full Size[0x88] - InheritedSize[0x80]
class TaleQuestSetCompassTargetBaseStepDesc: public TaleQuestStepDesc
{
public:
	byte                                                         TargetUpdateReason;                                // 0x80(0x1)
	char                                                         pad0x7_NMYY8[0x7];                                 // 0x81(0x7)
};


// Size 0x30 (Full Size[0xb8] - InheritedSize[0x88]
class TaleQuestSetCompassTargetToActorStepDesc: public TaleQuestSetCompassTargetBaseStepDesc
{
public:
	Struct QuestVariableActor                                    TargetActor;                                       // 0x88(0x30)
};


// Size 0x30 (Full Size[0xb8] - InheritedSize[0x88]
class TaleQuestSetCompassTargetToPointStepDesc: public TaleQuestSetCompassTargetBaseStepDesc
{
public:
	Struct QuestVariableOrientedPoint                            TargetPoint;                                       // 0x88(0x30)
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleQuestSetRotationCurveForRotatingCompassStep: public TaleQuestStep
{
public:
};


// Size 0x8 (Full Size[0x88] - InheritedSize[0x80]
class TaleQuestSetRotationCurveForRotatingCompassStepDesc: public TaleQuestStepDesc
{
public:
	Class CurveFloat*                                            RotationSequenceCurve;                             // 0x80(0x8)
};


}