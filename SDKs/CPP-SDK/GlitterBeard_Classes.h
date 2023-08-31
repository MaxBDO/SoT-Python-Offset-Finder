// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0xc8] - InheritedSize[0xc8]
class GlitterBeardEntitlementDesc: public EntitlementDesc
{
public:
};


// Size 0xa8 (Full Size[0x170] - InheritedSize[0xc8]
class GlitterBeardFinaleCoordinatorComponent: public ActorComponent
{
public:
	Class WwiseEvent*                                            AudioEventToSynchronise;                           // 0xc8(0x8)
	Struct FinaleReplicationState                                ReplicationState;                                  // 0xd0(0x10)
	char                                                         pad0x90_2OH0J[0x90];                               // 0xe0(0x90)
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class GlitterBeardIsHideoutOpenConditional: public NPCDialogConditional
{
public:
};


// Size 0x48 (Full Size[0x80] - InheritedSize[0x38]
class GlitterBeardLanternSoundEffect: public EffectBlendObjectBase
{
public:
	float                                                        TriggerThreshold;                                  // 0x38(0x4)
	char                                                         pad0x4_NI3YB[0x4];                                 // 0x3c(0x4)
	Class WwiseObjectPoolWrapper*                                WwisePool;                                         // 0x40(0x8)
	Class WwiseEvent*                                            WwiseEvent;                                        // 0x48(0x8)
	Struct WwiseEmitter                                          Emitter;                                           // 0x50(0x20)
	char                                                         pad0x10_OZBGD[0x10];                               // 0x70(0x10)
};


// Size 0x8 (Full Size[0x548] - InheritedSize[0x540]
class GlitterbeardSlidingDoor: public SlidingDoor
{
public:
	Class EffectBlendControllerComponent*                        DecalBlendComponent;                               // 0x540(0x8)
};


// Size 0x48 (Full Size[0x110] - InheritedSize[0xc8]
class GlitterBeardTelemetryComponent: public ActorComponent
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class GlitterBeardTrustedTreeInterface: public Interface
{
public:
};


// Size 0x328 (Full Size[0x6f0] - InheritedSize[0x3c8]
class GlitterBeardTree: public Actor
{
public:
	char                                                         pad0x28_J9WTY[0x28];                               // 0x3c8(0x28)
	Class ActionRulesComponent*                                  ActionRulesComponent;                              // 0x3f0(0x8)
	Class ActionRulesInteractableComponent*                      InteractableComponent;                             // 0x3f8(0x8)
	float                                                        LanternLightDelay;                                 // 0x400(0x4)
	char                                                         pad0x4_CX704[0x4];                                 // 0x404(0x4)
	Class GlitterBeardUnlockVFXCoordinatorComponent*             UnlockVFXCoordinatorComponent;                     // 0x408(0x8)
	Class GlitterBeardTelemetryComponent*                        TelemetryComponent;                                // 0x410(0x8)
	class                                                        VocalShanty;                                       // 0x418(0x8)
	Class WwiseEvent*                                            VocalsFadeEvent;                                   // 0x420(0x8)
	float                                                        VocalsFadeDelay;                                   // 0x428(0x4)
	float                                                        UnlockDelay;                                       // 0x42c(0x4)
	Class GlitterBeardFinaleCoordinatorComponent*                FinaleCoordinator;                                 // 0x430(0x8)
	Class LandmarkReactionTriggerComponent*                      LandmarkReactionTrigger;                           // 0x438(0x8)
	float                                                        DistanceFromTreeToPauseAISpawn;                    // 0x440(0x4)
	char                                                         pad0x254_T6NYS[0x254];                             // 0x444(0x254)
	Class SlidingDoor*                                           HideoutDoor;                                       // 0x698(0x8)
	Struct WwiseEmitter                                          SoundEmitter;                                      // 0x6a0(0x20)
	char                                                         pad0x30_W1TGE[0x30];                               // 0x6c0(0x30)
};


// Size 0x50 (Full Size[0x118] - InheritedSize[0xc8]
class GlitterBeardTreeVisualFeedbackComponent: public ActorComponent
{
public:
	TArray<struct FeedbackActions>                               FeedbackActions;                                   // 0xc8(0x10)
	char                                                         pad0x10_WMTWV[0x10];                               // 0xd8(0x10)
	TArray<Byte CurrentStates>                                   CurrentStates;                                     // 0xe8(0x10)
	char                                                         pad0x20_YC0AZ[0x20];                               // 0xf8(0x20)
};


// Size 0x28 (Full Size[0xf0] - InheritedSize[0xc8]
class GlitterBeardUnlockVFXCoordinatorComponent: public ActorComponent
{
public:
	Struct ActorComponentSelector                                TreeActor;                                         // 0xc8(0x10)
	Class MaterialInstanceDynamic*                               TreeMaterialInstanceDynamic;                       // 0xd8(0x8)
	float                                                        TreeBlendTime;                                     // 0xe0(0x4)
	char                                                         pad0xc_T2UAH[0xc];                                 // 0xe4(0xc)
};


}