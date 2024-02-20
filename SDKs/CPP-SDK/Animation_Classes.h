#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "Animation_Structs.h"


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class CustomAnimationMontageIdListingDataAsset: public DataAsset
{
public:
	TArray<struct Name>                                          MontageIds;                                        // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class DockingAnimationInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AnimationLookAtInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CosmeticItemAnimationDataConsumerInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AIAnimationInstanceInterface: public Interface
{
public:
};


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class CosmeticItemAnimationSetDataAsset: public DataAsset
{
public:
	struct CosmeticItemAnimationSetLoopData                      LoopData;                                          // 0x28(0x20)
	TArray<class AnimSequenceBase*>                              OneShotSequences;                                  // 0x48(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CustomAnimationHandlerInterface: public Interface
{
public:
};


// Size 0xf8 (Full Size[0x120] - InheritedSize[0x28]
class WeightedAnimSequenceLoadOnDemand: public Object
{
public:
	class AnimSequence*                                          FallBackAnimation;                                 // 0x28(0x8)
	TArray<struct WeightedAnimationData>                         WeightedAnimationList;                             // 0x30(0x10)
	char                                                         pad0xe0_CFJ80[0xe0];                               // 0x40(0xe0)
};


// Size 0x220 (Full Size[0x660] - InheritedSize[0x440]
class CharacterAnimationInstance: public AnimInstance
{
public:
	char                                                         pad0x10_J10I0[0x10];                               // 0x440(0x10)
	struct CharacterAnimationIKUpdateParams                      IKLeftHandUpdateParams;                            // 0x450(0x40)
	struct CharacterAnimationIKUpdateParams                      IKRightHandUpdateParams;                           // 0x490(0x40)
	struct FName                                                 RightHandIKSocketName;                             // 0x4d0(0x8)
	struct FName                                                 LeftHandIKSocketName;                              // 0x4d8(0x8)
	struct LimbIK                                                RightHandIK;                                       // 0x4e0(0x60)
	struct LimbIK                                                LeftHandIK;                                        // 0x540(0x60)
	struct LimbIK                                                RightFootIK;                                       // 0x5a0(0x60)
	struct LimbIK                                                LeftFootIK;                                        // 0x600(0x60)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AnimationDataStoreLoaderInterface: public Interface
{
public:
};


// Size 0x8 (Full Size[0x40] - InheritedSize[0x38]
class AnimNotify_DestroyCosmeticItem: public AnimNotify
{
public:
	char                                                         DestroyLocation;                                   // 0x38(0x1)
	char                                                         pad0x7_E8GPT[0x7];                                 // 0x39(0x7)
};


// Size 0x8 (Full Size[0x40] - InheritedSize[0x38]
class AnimNotify_SwitchCosmeticItemAttachment: public AnimNotify
{
public:
	char                                                         PreviousLocation;                                  // 0x38(0x1)
	char                                                         NewLocation;                                       // 0x39(0x1)
	char                                                         pad0x6_XGOYZ[0x6];                                 // 0x3a(0x6)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AnimationServerData: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AnimationDataFunctionLib: public BlueprintFunctionLibrary
{
public:
};


// Size 0x8 (Full Size[0x38] - InheritedSize[0x30]
class AnimNotifyState_HideMeshByBoneForDuration: public AnimNotifyState
{
public:
	struct FName                                                 BoneName;                                          // 0x30(0x8)
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class AnimNotifyState_SetLookAtDisabledForDuration: public AnimNotifyState
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CustomAnimationInstanceInterface: public Interface
{
public:
};


// Size 0x48 (Full Size[0x110] - InheritedSize[0xc8]
class NetworkSyncedAnimationComponent: public ActorComponent
{
public:
	float                                                        PlayRateAdjustMaxTimeDelta;                        // 0xc8(0x4)
	float                                                        PlayRateAdjustMaxPercentageToSpeedUpPlayRate;      // 0xcc(0x4)
	float                                                        PlayRateAdjustMaxPercentageToSlowDownPlayRate;     // 0xd0(0x4)
	float                                                        ReplicatedAnimationProgression;                    // 0xd4(0x4)
	int                                                          ReplicatedPlayingAnimationIndex;                   // 0xd8(0x4)
	float                                                        ReplicatedPlayRate;                                // 0xdc(0x4)
	char                                                         pad0x8_FL01P[0x8];                                 // 0xe0(0x8)
	class AnimInstance*                                          AnimInstance;                                      // 0xe8(0x8)
	char                                                         pad0x20_HJUNY[0x20];                               // 0xf0(0x20)
};


// Size 0x8 (Full Size[0x40] - InheritedSize[0x38]
class AnimNotify_SetCosmeticItemVisibility: public AnimNotify
{
public:
	char                                                         ItemLocation;                                      // 0x38(0x1)
	bool                                                         Visible;                                           // 0x39(0x1)
	bool                                                         RenderShadow;                                      // 0x3a(0x1)
	bool                                                         RenderShadowWhenHidden;                            // 0x3b(0x1)
	bool                                                         UpdateForRole;                                     // 0x3c(0x1)
	char                                                         UpdateRole;                                        // 0x3d(0x1)
	char                                                         pad0x2_S0FWL[0x2];                                 // 0x3e(0x2)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TurningFunctionLib: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class DockableInterface: public Interface
{
public:
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class WeightedAnimationLoadOnDemandDataAsset: public DataAsset
{
public:
	TArray<struct WeightedAnimationData>                         WeightedAnimationList;                             // 0x28(0x10)
	class AnimSequence*                                          FallBackAnimation;                                 // 0x38(0x8)
};


// Size 0x28 (Full Size[0x58] - InheritedSize[0x30]
class AnimNotifyState_PropagateCurveValuesToMaterials: public AnimNotifyState
{
public:
	TArray<struct CurveUpdateValues>                             CurveValues;                                       // 0x30(0x10)
	bool                                                         DoNotPropagteCurveValues;                          // 0x40(0x1)
	char                                                         pad0x17_B3EA3[0x17];                               // 0x41(0x17)
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class AnimationDataStore: public Object
{
public:
	char                                                         pad0x18_U1SSG[0x18];                               // 0x28(0x18)
	TArray<struct AnimationDataStoreEntry>                       Data;                                              // 0x40(0x10)
	TArray<struct AnimationDataStoreLoadingEntry>                LoadingData;                                       // 0x50(0x10)
};


// Size 0x508 (Full Size[0x5d0] - InheritedSize[0xc8]
class TransformBlendCurveComponent: public ActorComponent
{
public:
	char                                                         pad0x8_C2X4T[0x8];                                 // 0xc8(0x8)
	struct TransformBlendCurve                                   Curve;                                             // 0xd0(0x500)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CustomAnimationMontageInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class NetworkSyncedAnimationInstanceInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class AnimNotifyCondition_FeatureConfigValidation: public AnimNotifyCondition
{
public:
	struct FName                                                 Feature;                                           // 0x28(0x8)
	bool                                                         TriggerWhenDisabled;                               // 0x30(0x1)
	char                                                         pad0x7_UVZ9L[0x7];                                 // 0x31(0x7)
};


// Size 0x80 (Full Size[0x148] - InheritedSize[0xc8]
class CustomAnimationMontageComponent: public ActorComponent
{
public:
	char                                                         pad0x8_HQ9QP[0x8];                                 // 0xc8(0x8)
	struct CustomAnimationMontageComponentReplicatedData         ReplicatedData;                                    // 0xd0(0xc)
	char                                                         pad0x6c_SRTYF[0x6c];                               // 0xdc(0x6c)
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class AnimNotify_DestroyAllCosmeticItems: public AnimNotify
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AnimationData: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RemoteAnimPlayableInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AnimationDataStoreId: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AnimationDataStoreInterface: public Interface
{
public:
};


// Size 0x20 (Full Size[0x58] - InheritedSize[0x38]
class AnimNotify_SpawnCosmeticItem: public AnimNotify
{
public:
	class UClass*                                                ItemSpawnClass;                                    // 0x38(0x8)
	char                                                         SpawnLocation;                                     // 0x40(0x1)
	char                                                         pad0x7_EK9T6[0x7];                                 // 0x41(0x7)
	class CosmeticItemAnimationSetDataAsset*                     CosmeticItemAnimationDataSet;                      // 0x48(0x8)
	bool                                                         SpawnHidden;                                       // 0x50(0x1)
	bool                                                         SpawnForRole;                                      // 0x51(0x1)
	char                                                         SpawnRole;                                         // 0x52(0x1)
	char                                                         pad0x5_1OR4J[0x5];                                 // 0x53(0x5)
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class AnimNotifyState_SetLookAtEnabledForDuration: public AnimNotifyState
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class LoadableAnimationsInterface: public Interface
{
public:
};


// Size 0x8 (Full Size[0x40] - InheritedSize[0x38]
class AnimNotify_ReattachCosmeticItem: public AnimNotify
{
public:
	char                                                         CurrentLocation;                                   // 0x38(0x1)
	char                                                         NewLocation;                                       // 0x39(0x1)
	char                                                         pad0x6_TRNHP[0x6];                                 // 0x3a(0x6)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class WaitForAnimationStateExitProxy: public Object
{
public:
	char                                                         pad0x20_VGQ6E[0x20];                               // 0x28(0x20)
};


// Size 0x18 (Full Size[0x50] - InheritedSize[0x38]
class AnimNotify_PlayAnimationForCosmetic: public AnimNotify
{
public:
	char                                                         CosmeticLocation;                                  // 0x38(0x1)
	char                                                         pad0x7_P3HYT[0x7];                                 // 0x39(0x7)
	class AnimSequenceBase*                                      CosmeticItemAnimation;                             // 0x40(0x8)
	bool                                                         Looping;                                           // 0x48(0x1)
	char                                                         pad0x7_9ZHQD[0x7];                                 // 0x49(0x7)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CosmeticItemAnimationInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AnimationStateId: public Object
{
public:
};


// Size 0x8 (Full Size[0x40] - InheritedSize[0x38]
class AnimNotify_PlayMontage: public AnimNotify
{
public:
	class AnimMontage*                                           MontageToPlay;                                     // 0x38(0x8)
};


// Size 0xc8 (Full Size[0x190] - InheritedSize[0xc8]
class AnimationDataStoreComponent: public ActorComponent
{
public:
	char                                                         pad0x8_R6NYS[0x8];                                 // 0xc8(0x8)
	class AnimationDataStoreWeakReferenceAsset*                  AnimationDataStoreWeakReferences;                  // 0xd0(0x8)
	char                                                         pad0xb8_RXSCC[0xb8];                               // 0xd8(0xb8)
};


// Size 0x0 (Full Size[0x9c0] - InheritedSize[0x9c0]
class ClientSkeletalMeshComponent: public SkeletalMeshComponent
{
public:
};


// Size 0x68 (Full Size[0x130] - InheritedSize[0xc8]
class CosmeticItemAnimationComponent: public ActorComponent
{
public:
	char                                                         pad0x58_7MBGF[0x58];                               // 0xc8(0x58)
	class CosmeticItemAnimationDataAsset*                        DataAsset;                                         // 0x120(0x8)
	char                                                         pad0x8_NCJTU[0x8];                                 // 0x128(0x8)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class CustomAnimationMontageDefinitionListingDataAsset: public DataAsset
{
public:
	TArray<struct CustomAnimationMontageDefinitionEntry>         Entries;                                           // 0x28(0x10)
};


// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class CustomAnimationMontageDefinitionDataAsset: public DataAsset
{
public:
	struct FName                                                 MontageId;                                         // 0x28(0x8)
	char                                                         MontageType;                                       // 0x30(0x1)
	char                                                         pad0x7_SQ3DZ[0x7];                                 // 0x31(0x7)
	class AnimMontage*                                           MontageData;                                       // 0x38(0x8)
	struct CustomAnimationMontageStagedLoopingData               LoopingData;                                       // 0x40(0x28)
	bool                                                         Interrupts;                                        // 0x68(0x1)
	char                                                         pad0x7_9H2W4[0x7];                                 // 0x69(0x7)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class LocomotionFunctionLib: public BlueprintFunctionLibrary
{
public:
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class SyncGroupAnimMetaData: public AnimMetaData
{
public:
	struct FName                                                 SyncGroup;                                         // 0x28(0x8)
};


// Size 0x10 (Full Size[0x48] - InheritedSize[0x38]
class AnimationEditorSettings: public DeveloperSettings
{
public:
	struct StringAssetReference                                  CustomAnimationMontageIdListings;                  // 0x38(0x10)
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class WaitForAnimationStateEntryProxy: public Object
{
public:
	char                                                         pad0x28_UBUO5[0x28];                               // 0x28(0x28)
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class CosmeticItemAnimationDataAsset: public DataAsset
{
public:
	struct FName                                                 WieldSockets;                                      // 0x28(0x8)
	char                                                         pad0x30_OP6O5[0x30];                               // 0x30(0x30)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AnimationDataConsumerInterface: public Interface
{
public:
};


// Size 0x20 (Full Size[0x50] - InheritedSize[0x30]
class AnimNotifyState_SpawnCosmeticItem: public AnimNotifyState
{
public:
	class UClass*                                                CosmeticItemToSpawn;                               // 0x30(0x8)
	char                                                         SpawnLocation;                                     // 0x38(0x1)
	char                                                         pad0x7_1V57N[0x7];                                 // 0x39(0x7)
	class CosmeticItemAnimationSetDataAsset*                     CosmeticItemAnimationDataSet;                      // 0x40(0x8)
	bool                                                         SpawnHidden;                                       // 0x48(0x1)
	bool                                                         DestroyOnEnd;                                      // 0x49(0x1)
	bool                                                         OverrideDestroyLocation;                           // 0x4a(0x1)
	char                                                         DestroyLocation;                                   // 0x4b(0x1)
	char                                                         pad0x4_4SSEL[0x4];                                 // 0x4c(0x4)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class LimbIKFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class AnimationDataStoreWeakReferenceAsset: public DataAsset
{
public:
	TArray<struct AnimationDataStoreAssetWeakReferenceEntry>     AssetWeakRefs;                                     // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class IndexedPlayableMontagesInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AnimationDataOverriderInterface: public Interface
{
public:
};


// Size 0xb0 (Full Size[0x478] - InheritedSize[0x3c8]
class CosmeticItemActor: public Actor
{
public:
	char                                                         pad0x8_GV3YM[0x8];                                 // 0x3c8(0x8)
	class SkeletalMeshComponent*                                 MeshComponent;                                     // 0x3d0(0x8)
	char                                                         pad0xa0_OVJGN[0xa0];                               // 0x3d8(0xa0)
};


// Size 0x8 (Full Size[0x40] - InheritedSize[0x38]
class AnimNotify_SetLookAtEnabled: public AnimNotify
{
public:
	bool                                                         Enabled;                                           // 0x38(0x1)
	char                                                         pad0x7_H1ZFZ[0x7];                                 // 0x39(0x7)
};


// Size 0x68 (Full Size[0x98] - InheritedSize[0x30]
class AnimNotifyState_ToggleIK: public AnimNotifyState
{
public:
	TArray<char>                                                 IKLimbsToAdjust;                                   // 0x30(0x10)
	bool                                                         Enabled;                                           // 0x40(0x1)
	char                                                         pad0x57_0VMS2[0x57];                               // 0x41(0x57)
};


// Size 0x18 (Full Size[0x50] - InheritedSize[0x38]
class AnimNotify_DetachAndMaintainWorldPosition: public AnimNotify
{
public:
	char                                                         CurrentLocation;                                   // 0x38(0x1)
	char                                                         pad0x3_SNDQP[0x3];                                 // 0x39(0x3)
	struct Vector                                                PreviewLocationOffset;                             // 0x3c(0xc)
	float                                                        PreviewScaleMultiplier;                            // 0x48(0x4)
	char                                                         pad0x4_JU8BZ[0x4];                                 // 0x4c(0x4)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AthenaAnimationControllableSocketsInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CustomAnimationInstanceProviderInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CharacterIKInterface: public Interface
{
public:
};


// Size 0xc0 (Full Size[0x500] - InheritedSize[0x440]
class CosmeticItemAnimationInstance: public AnimInstance
{
public:
	char                                                         pad0x8_MFWG6[0x8];                                 // 0x440(0x8)
	class CosmeticItemAnimationSetDataAsset*                     AnimationDataSet;                                  // 0x448(0x8)
	class AnimMontage*                                           ActiveMontage;                                     // 0x450(0x8)
	char                                                         pad0xa8_ZP981[0xa8];                               // 0x458(0xa8)
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class AnimNotifyState_SetMeshInvisibleForDuration: public AnimNotifyState
{
public:
};


// Size 0x8 (Full Size[0x40] - InheritedSize[0x38]
class AnimNotify_StateComplete: public AnimNotify
{
public:
	class UClass*                                                CompletedStateId;                                  // 0x38(0x8)
};


// Size 0x18 (Full Size[0x50] - InheritedSize[0x38]
class AnimNotify_ToggleIK: public AnimNotify
{
public:
	TArray<char>                                                 IKLimbsToAdjust;                                   // 0x38(0x10)
	bool                                                         Enabled;                                           // 0x48(0x1)
	char                                                         pad0x7_1JSCP[0x7];                                 // 0x49(0x7)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class EmotePropDataInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class AnimationDataStoreAsset: public DataAsset
{
public:
	TArray<struct AnimationDataStoreAssetEntry>                  AssetRefs;                                         // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ServerAnimationDataStoreInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AnimationDataStoreOverrideId: public AnimationDataStoreId
{
public:
};


// Size 0x90 (Full Size[0x6f0] - InheritedSize[0x660]
class PreviewCharacterAnimationInstance: public CharacterAnimationInstance
{
public:
	class AnimMontage*                                           ActiveMontage;                                     // 0x660(0x8)
	char                                                         pad0x88_1PRG0[0x88];                               // 0x668(0x88)
};


