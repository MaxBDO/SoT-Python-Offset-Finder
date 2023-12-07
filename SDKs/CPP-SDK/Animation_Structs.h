// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x500
struct TransformBlendCurve
{
public:
	bool                                                         UseLocationCurve;                                  // 0x0(0x1)
	char                                                         pad0x7_1KVQ0[0x7];                                 // 0x1(0x7)
	struct RuntimeVectorCurve                                    LocationCurve;                                     // 0x8(0x170)
	bool                                                         UseRotationCurve;                                  // 0x178(0x1)
	char                                                         pad0x7_3JSZU[0x7];                                 // 0x179(0x7)
	struct RuntimeVectorCurve                                    RotationCurve;                                     // 0x180(0x170)
	bool                                                         UseScaleCurve;                                     // 0x2f0(0x1)
	char                                                         pad0x7_XQZ5S[0x7];                                 // 0x2f1(0x7)
	struct RuntimeVectorCurve                                    ScaleCurve;                                        // 0x2f8(0x170)
	char                                                         pad0x8_3QCA6[0x8];                                 // 0x468(0x8)
	struct Transform                                             SourceTransform;                                   // 0x470(0x30)
	struct Transform                                             TargetTransform;                                   // 0x4a0(0x30)
	char                                                         pad0x30_12TSD[0x30];                               // 0x4d0(0x30)
};


// Size 0x8
struct CustomAnimationMontageId
{
public:
	struct FName                                                 CustomAnimationMontageId;                          // 0x0(0x8)
};


// Size 0x8
struct HitReactionAnimationData
{
public:
	class BlendSpace1D*                                          HitReactBlendSpace;                                // 0x0(0x8)
};


// Size 0x18
struct AnimDataEntryStructWrapper
{
public:
	char                                                         pad0x18_SGAMF[0x18];                               // 0x0(0x18)
};


// Size 0x18
struct AnimationDataStoreEntry
{
public:
	class UClass*                                                AnimDataId;                                        // 0x0(0x8)
	class AnimationData*                                         AnimData;                                          // 0x8(0x8)
	class AnimationServerData*                                   AnimServerData;                                    // 0x10(0x8)
};


// Size 0x40
struct AnimationDataStoreLoadingEntry
{
public:
	char                                                         pad0x38_V6OWF[0x38];                               // 0x0(0x38)
	class UClass*                                                AnimDataId;                                        // 0x38(0x8)
};


// Size 0x28
struct AnimationDataStoreAssetWeakReferenceEntry
{
public:
	class UClass*                                                AnimDataId;                                        // 0x0(0x8)
	char                                                         pad0x20_ZX0AY[0x20];                               // 0x8(0x20)
};


// Size 0x18
struct AnimationDataStoreAssetEntry
{
public:
	class UClass*                                                AnimDataId;                                        // 0x0(0x8)
	class UClass*                                                AnimDataTypeCooked;                                // 0x8(0x8)
	class AnimationServerData*                                   AnimServerData;                                    // 0x10(0x8)
};


// Size 0xc
struct CurveUpdateValues
{
public:
	struct FName                                                 CurveName;                                         // 0x0(0x8)
	float                                                        FinalValue;                                        // 0x8(0x4)
};


// Size 0x40
struct CharacterAnimationIKUpdateParams
{
public:
	float                                                        CurrentAlpha;                                      // 0x0(0x4)
	float                                                        TranslationStrength;                               // 0x4(0x4)
	float                                                        RotationStrength;                                  // 0x8(0x4)
	struct Vector                                                Location;                                          // 0xc(0xc)
	char                                                         pad0x8_2P181[0x8];                                 // 0x18(0x8)
	struct Quat                                                  Orientation;                                       // 0x20(0x10)
	byte                                                         EffectorSpace;                                     // 0x30(0x1)
	char                                                         pad0x3_08AFG[0x3];                                 // 0x31(0x3)
	struct FName                                                 ParentBone;                                        // 0x34(0x8)
	char                                                         pad0x4_2J2QS[0x4];                                 // 0x3c(0x4)
};


// Size 0x60
struct LimbIK
{
public:
	char                                                         pad0x60_OUIVY[0x60];                               // 0x0(0x60)
};


// Size 0x10
struct CosmeticItems
{
public:
	TArray<class Actor*>                                         CosmeticItemArray;                                 // 0x0(0x10)
};


// Size 0x20
struct CosmeticItemAnimationSetLoopData
{
public:
	class AnimSequenceBase*                                      Into;                                              // 0x0(0x8)
	class AnimSequenceBase*                                      Loop;                                              // 0x8(0x8)
	struct FName                                                 IntoSyncGroup;                                     // 0x10(0x8)
	struct FName                                                 LoopSyncGroup;                                     // 0x18(0x8)
};


// Size 0xc
struct CustomAnimationMontageComponentReplicatedData
{
public:
	struct CustomAnimationMontageId                              CustomMontageId;                                   // 0x0(0x8)
	int                                                          AnimationCallId;                                   // 0x8(0x4)
};


// Size 0x28
struct CustomAnimationMontageStagedLoopingData
{
public:
	class AnimMontage*                                           Into;                                              // 0x0(0x8)
	TArray<class AnimMontage*>                                   LoopAnims;                                         // 0x8(0x10)
	TArray<class AnimMontage*>                                   OutOfAnims;                                        // 0x18(0x10)
};


// Size 0x18
struct CustomAnimationMontageDefinitionEntry
{
public:
	struct FName                                                 MontageId;                                         // 0x0(0x8)
	struct StringAssetReference                                  Definition;                                        // 0x8(0x10)
};


// Size 0x18
struct ActorVelocityData
{
public:
	struct Vector                                                ActorsVelocityVector;                              // 0x0(0xc)
	float                                                        ActorSpeed;                                        // 0xc(0x4)
	bool                                                         IsCharacterMoving;                                 // 0x10(0x1)
	char                                                         pad0x3_JNPOI[0x3];                                 // 0x11(0x3)
	float                                                        WantedMovementSpeed;                               // 0x14(0x4)
};


// Size 0x18
struct WeightedAnimationData
{
public:
	struct StringAssetReference                                  Animation;                                         // 0x0(0x10)
	float                                                        Weighting;                                         // 0x10(0x4)
	char                                                         pad0x4_X42GK[0x4];                                 // 0x14(0x4)
};


// Size 0x8
struct EventCosmeticItemAttachmentSwitched
{
public:
	class Actor*                                                 Owner;                                             // 0x0(0x8)
};


// Size 0x8
struct EventCosmeticItemSpawnedOwnerNotification
{
public:
	class Actor*                                                 CosmeticItemActor;                                 // 0x0(0x8)
};


// Size 0x10
struct EventCosmeticItemSpawned
{
public:
	class Actor*                                                 Owner;                                             // 0x0(0x8)
	class CosmeticItemAnimationSetDataAsset*                     CosmeticData;                                      // 0x8(0x8)
};


// Size 0x1
struct EventAnimationResetHappyReact
{
public:
	char                                                         pad0x1_JFXLN[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct EventAnimationHappyReact
{
public:
	char                                                         pad0x1_OM3US[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct EventHitReactAnimationFinished
{
public:
	char                                                         pad0x1_ZL34P[0x1];                                 // 0x0(0x1)
};


// Size 0x1c
struct EventHitReactAnimationRequested
{
public:
	struct Vector                                                HitNormal;                                         // 0x0(0xc)
	struct Vector                                                HitVelocity;                                       // 0xc(0xc)
	byte                                                         ReactionAnimType;                                  // 0x18(0x1)
	char                                                         pad0x3_N3IDB[0x3];                                 // 0x19(0x3)
};


// Size 0x28
struct HitReactionAnimationState
{
public:
	float                                                        Yaw;                                               // 0x0(0x4)
	float                                                        AdditiveBlend;                                     // 0x4(0x4)
	byte                                                         ReactType;                                         // 0x8(0x1)
	bool                                                         ActivateNewHitReact;                               // 0x9(0x1)
	char                                                         pad0x1e_FF9UD[0x1e];                               // 0xa(0x1e)
};


// Size 0xc
struct AnimationLookAtParams
{
public:
	float                                                        ActivationSpeed;                                   // 0x0(0x4)
	float                                                        HorizontalLimit;                                   // 0x4(0x4)
	float                                                        VerticalLimit;                                     // 0x8(0x4)
};


// Size 0xa8
struct AnimationLookAt
{
public:
	char                                                         pad0x8_DH5U8[0x8];                                 // 0x0(0x8)
	struct AnimationLookAtParams                                 Params;                                            // 0x8(0xc)
	struct Vector                                                LookAtTarget;                                      // 0x14(0xc)
	bool                                                         IKLookAtActive;                                    // 0x20(0x1)
	char                                                         pad0x87_N4BRY[0x87];                               // 0x21(0x87)
};


// Size 0x1
struct EventAnimationLookAtUpdated
{
public:
	char                                                         pad0x1_ORVNF[0x1];                                 // 0x0(0x1)
};


// Size 0xc
struct IKLookAtParams
{
public:
	float                                                        ActivationSpeed;                                   // 0x0(0x4)
	float                                                        HorizontalLimit;                                   // 0x4(0x4)
	float                                                        VerticalLimit;                                     // 0x8(0x4)
};


// Size 0x70
struct AnimNode_WeightedLoadOnDemandSquencePlayer
{
public:
	char                                                         pad0x40_6RS2E[0x40];                               // 0x0(0x40)
	float                                                        PlayRate;                                          // 0x40(0x4)
	char                                                         pad0x4_U0TY4[0x4];                                 // 0x44(0x4)
	class WeightedAnimSequenceLoadOnDemand*                      WeightedAnimSequenceLoadOnDemand;                  // 0x48(0x8)
	int                                                          GroupIndex;                                        // 0x50(0x4)
	byte                                                         GroupRole;                                         // 0x54(0x1)
	char                                                         pad0x3_BVKRO[0x3];                                 // 0x55(0x3)
	class AnimSequence*                                          CurrentSequence;                                   // 0x58(0x8)
	class AnimSequence*                                          NextSequence;                                      // 0x60(0x8)
	char                                                         pad0x8_28S6B[0x8];                                 // 0x68(0x8)
};


// Size 0x38
struct WeightedAnimationLoadOnDemandDataMetaData
{
public:
	TArray<struct WeightedAnimationData>                         AnimationList;                                     // 0x0(0x10)
	struct FString                                               AssetName;                                         // 0x10(0x10)
	struct FString                                               FallbackSkeletonName;                              // 0x20(0x10)
	bool                                                         FallbackValidAdditive;                             // 0x30(0x1)
	char                                                         pad0x7_NR3B4[0x7];                                 // 0x31(0x7)
};


// Size 0xc
struct EventCustomAnimationMontageExitRequested
{
public:
	char                                                         pad0xc_0GB9C[0xc];                                 // 0x0(0xc)
};


// Size 0x8
struct EventCustomAnimationMontageRequested
{
public:
	char                                                         pad0x8_OF94P[0x8];                                 // 0x0(0x8)
};


// Size 0xd8
struct CustomAnimationMontageStateMachine
{
public:
	class CustomAnimationMontageDefinitionDataAsset*             ActiveState;                                       // 0x0(0x8)
	class CustomAnimationMontageDefinitionDataAsset*             PendingState;                                      // 0x8(0x8)
	class AnimMontage*                                           ActiveMontage;                                     // 0x10(0x8)
	char                                                         pad0xc0_KCFNO[0xc0];                               // 0x18(0xc0)
};


// Size 0x8
struct EventPreviewCharacterAnimationRequest
{
public:
	class AnimationAsset*                                        AnimationToPlay;                                   // 0x0(0x8)
};


// Size 0x8
struct AnimationStateCompleteEvent
{
public:
	class UClass*                                                CompletedStateId;                                  // 0x0(0x8)
};


// Size 0x10
struct WeightedAnimationTimeoutSelector
{
public:
	TArray<struct WeightedAnimationTimeout>                      Weightings;                                        // 0x0(0x10)
};


// Size 0x14
struct WeightedAnimationTimeout
{
public:
	struct FloatRange                                            TimeoutRange;                                      // 0x0(0x10)
	float                                                        Weighting;                                         // 0x10(0x4)
};


// Size 0x18
struct DockableInfo
{
public:
	struct FName                                                 SocketName;                                        // 0x0(0x8)
	class SceneComponent*                                        SceneComponent;                                    // 0x8(0x8)
	byte                                                         ShouldOverlapsUpdateOnParentUpdate;                // 0x10(0x1)
	char                                                         pad0x7_FBOC9[0x7];                                 // 0x11(0x7)
};


// Size 0x90
struct Docker
{
public:
	char                                                         pad0x90_IIOBO[0x90];                               // 0x0(0x90)
};


}