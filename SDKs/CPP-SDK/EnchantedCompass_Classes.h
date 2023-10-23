// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x90 (Full Size[0xa60] - InheritedSize[0x9d0]
class RotatingCompass: public EnchantedCompass
{
public:
	class PickupableComponent*                                   PickupableComponent;                               // 0x9c8(0x8)
	class PoseableMeshMemoryConstraintComponent*                 PoseableStashedMeshComponent;                      // 0x9d0(0x8)
	class WieldableInteractableComponent*                        WieldableInteractableComponent;                    // 0x9d8(0x8)
	class Actor*                                                 SplinePathActor;                                   // 0x9e0(0x8)
	class CurveFloat*                                            RotationSequenceCurve;                             // 0x9e8(0x8)
	bool                                                         StartRotationSequenceCurve;                        // 0x9f0(0x1)
	char                                                         pad0x3_IZQAM[0x3];                                 // 0x9f1(0x3)
	float                                                        SplineDistanceOffset;                              // 0x9f4(0x4)
	float                                                        TargetYawAngleBeforeRotationSequence;              // 0x9f8(0x4)
	char                                                         pad0x4_VZIPL[0x4];                                 // 0x9fc(0x4)
	struct RotatingCompassAudioParams                            AudioParams;                                       // 0xa00(0x48)
	float                                                        MaxSpeedToTriggerOneShotSfx;                       // 0xa48(0x4)
	char                                                         pad0x14_UT8BQ[0x14];                               // 0xa4c(0x14)
};


// Size 0x148 (Full Size[0x210] - InheritedSize[0xc8]
class EnchantedCompassProximityAnnouncementComponent: public ActorComponent
{
public:
	class WwiseEvent*                                            StartAnnouncingEvent;                              // 0xc8(0x8)
	class WwiseEvent*                                            StopAnnouncingEvent;                               // 0xd0(0x8)
	float                                                        MaxFrequencyDistanceSquared;                       // 0xd8(0x4)
	char                                                         pad0x4_D1JH9[0x4];                                 // 0xdc(0x4)
	bool                                                         IsSettingEnabled;                                  // 0x120(0x1)
	char                                                         pad0xef_UZ6ZD[0xef];                               // 0x121(0xef)
};


// Size 0x30 (Full Size[0x910] - InheritedSize[0x8e0]
class MultiTargetEnchantedCompass: public Compass
{
public:
	TArray<struct Vector>                                        Locations;                                         // 0x8d8(0x10)
	TArray<struct Guid>                                          LocationIds;                                       // 0x8e8(0x10)
	class InventoryItemComponent*                                InventoryItem;                                     // 0x8f8(0x8)
	class EnchantedCompassProximityAnnouncementComponent*        ProximityAnnouncementComponent;                    // 0x900(0x8)
	char                                                         pad0x8_T7C59[0x8];                                 // 0x908(0x8)
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
	char                                                         pad0x8_XX4R5[0x8];                                 // 0x1e8(0x8)
};


// Size 0x8 (Full Size[0xa0] - InheritedSize[0x98]
class TaleQuestMultiTargetCompassAddTrackedLocationStep: public TaleQuestStep
{
public:
	class TaleQuestMultiTargetCompassAddTrackedLocationStepDesc* Desc;                                              // 0x98(0x8)
};


// Size 0x60 (Full Size[0xe0] - InheritedSize[0x80]
class TaleQuestMultiTargetCompassAddTrackedLocationStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableVector                                   Location;                                          // 0x80(0x30)
	struct QuestVariableGuid                                     TargetID;                                          // 0xb0(0x30)
};


// Size 0x10 (Full Size[0xa8] - InheritedSize[0x98]
class TaleQuestMultiTargetCompassRemoveTrackedLocationStep: public TaleQuestStep
{
public:
	char                                                         pad0x10_W5KBL[0x10];                               // 0x98(0x10)
};


// Size 0x30 (Full Size[0xb0] - InheritedSize[0x80]
class TaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableGuid                                     TargetID;                                          // 0x80(0x30)
};


// Size 0x20 (Full Size[0x190] - InheritedSize[0x170]
class TaleQuestMultiTargetCompassService: public TaleQuestToolService
{
public:
	char                                                         pad0x20_HE1J5[0x20];                               // 0x170(0x20)
};


// Size 0x8 (Full Size[0x38] - InheritedSize[0x30]
class TaleQuestMultiTargetCompassServiceDesc: public TaleQuestToolServiceDesc
{
public:
	class UClass*                                                CompassDesc;                                       // 0x30(0x8)
};


// Size 0xc0 (Full Size[0x120] - InheritedSize[0x60]
class TaleQuestRotatingCompassService: public TaleQuestService
{
public:
	char                                                         pad0x18_4BUB7[0x18];                               // 0x60(0x18)
	class Actor*                                                 SplinePathActor;                                   // 0x78(0x8)
	class RotatingCompass*                                       RotatingCompass;                                   // 0x80(0x8)
	char                                                         pad0x98_F2WI7[0x98];                               // 0x88(0x98)
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
	char                                                         pad0x8_DKYPF[0x8];                                 // 0x98(0x8)
};


// Size 0x30 (Full Size[0xb0] - InheritedSize[0x80]
class TaleQuestRotatingCompassSplinePathSetupAndWaitForCompletionStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableActor                                    SplinePathActor;                                   // 0x80(0x30)
};


// Size 0x60 (Full Size[0xf8] - InheritedSize[0x98]
class TaleQuestSetCompassTargetToTargetStep: public TaleQuestStep
{
public:
	char                                                         pad0x60_7N6RR[0x60];                               // 0x98(0x60)
};


// Size 0x8 (Full Size[0x88] - InheritedSize[0x80]
class TaleQuestSetCompassTargetBaseStepDesc: public TaleQuestStepDesc
{
public:
	byte                                                         TargetUpdateReason;                                // 0x80(0x1)
	char                                                         pad0x7_2MWLW[0x7];                                 // 0x81(0x7)
};


// Size 0x30 (Full Size[0xb8] - InheritedSize[0x88]
class TaleQuestSetCompassTargetToActorStepDesc: public TaleQuestSetCompassTargetBaseStepDesc
{
public:
	struct QuestVariableActor                                    TargetActor;                                       // 0x88(0x30)
};


// Size 0x30 (Full Size[0xb8] - InheritedSize[0x88]
class TaleQuestSetCompassTargetToPointStepDesc: public TaleQuestSetCompassTargetBaseStepDesc
{
public:
	struct QuestVariableOrientedPoint                            TargetPoint;                                       // 0x88(0x30)
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
	class CurveFloat*                                            RotationSequenceCurve;                             // 0x80(0x8)
};


}