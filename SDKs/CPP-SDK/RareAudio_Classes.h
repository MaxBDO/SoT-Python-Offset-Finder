#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "RareAudio_Structs.h"


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WwiseEmitterComponentBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x10 (Full Size[0x50] - InheritedSize[0x40]
class RareAudioHardwareDeviceService: public AudioHardwareDeviceService
{
public:
	char                                                         pad0x10_MD10N[0x10];                               // 0x40(0x10)
};


// Size 0x30 (Full Size[0x310] - InheritedSize[0x2e0]
class WwiseEmitterComponent: public SceneComponent
{
public:
	char                                                         pad0x8_XVNMW[0x8];                                 // 0x2e0(0x8)
	struct WwiseEmitter                                          Emitter;                                           // 0x2e8(0x20)
	class WwiseObjectPoolWrapper*                                WwiseObjectPoolWrapper;                            // 0x308(0x8)
};


// Size 0x10 (Full Size[0x2f0] - InheritedSize[0x2e0]
class StaticMeshAudioEmittersComponent: public SceneComponent
{
public:
	TArray<struct StaticMeshComponentAudioAssociation>           InstanceAssociations;                              // 0x2e0(0x10)
};


// Size 0x50 (Full Size[0x78] - InheritedSize[0x28]
class WwiseObjectPoolWrapper: public Object
{
public:
	struct FName                                                 PoolName;                                          // 0x28(0x8)
	int                                                          MaxResources;                                      // 0x30(0x4)
	bool                                                         DisableOcclusion;                                  // 0x34(0x1)
	bool                                                         DisableReverb;                                     // 0x35(0x1)
	char                                                         pad0x2_WSDMX[0x2];                                 // 0x36(0x2)
	struct WwiseNativeEmitterPoolDensityParams                   PoolDensityParams;                                 // 0x38(0x28)
	char                                                         pad0x18_QH01Z[0x18];                               // 0x60(0x18)
};


// Size 0x48 (Full Size[0x80] - InheritedSize[0x38]
class AnimNotify_WwiseSound: public AnimNotify
{
public:
	class WwiseEvent*                                            WwiseEvent;                                        // 0x38(0x8)
	bool                                                         OwnedByWorld;                                      // 0x40(0x1)
	char                                                         pad0x3_WNEMT[0x3];                                 // 0x41(0x3)
	struct Vector                                                OwnedByWorldEmitterOffset;                         // 0x44(0xc)
	char                                                         PerspectiveRestriction;                            // 0x50(0x1)
	char                                                         pad0x7_F9IXB[0x7];                                 // 0x51(0x7)
	class WwiseObjectPoolWrapper*                                OwnedByWorldWisePoolToUse;                         // 0x58(0x8)
	char                                                         pad0x20_HX5D4[0x20];                               // 0x60(0x20)
};


// Size 0x0 (Full Size[0x3c8] - InheritedSize[0x3c8]
class AudioIslandStaticMeshAssociatorBase: public Actor
{
public:
};


// Size 0x60 (Full Size[0x90] - InheritedSize[0x30]
class AnimNotifyState_WwiseSound: public AnimNotifyState
{
public:
	class WwiseEvent*                                            WwiseEvent;                                        // 0x30(0x8)
	class WwiseEvent*                                            WwiseEventEnd;                                     // 0x38(0x8)
	char                                                         pad0x50_J76J6[0x50];                               // 0x40(0x50)
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class AudioSpaceDataAsset: public DataAsset
{
public:
	struct FName                                                 RtpcToUpdate;                                      // 0x28(0x8)
	class WwiseEvent*                                            AmbienceToStart;                                   // 0x30(0x8)
	class WwiseEvent*                                            AmbienceToStop;                                    // 0x38(0x8)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class StaticMeshAudioDataAsset: public DataAsset
{
public:
	TArray<struct StaticMeshAudioAssociation>                    MeshToAudioAssociations;                           // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WwiseEmitterBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class TritonAcousticMap: public Object
{
public:
	struct FString                                               TritonMapFilename;                                 // 0x28(0x10)
	float                                                        CustomCacheRatio;                                  // 0x38(0x4)
	char                                                         pad0x2c_QQZR4[0x2c];                               // 0x3c(0x2c)
};


// Size 0x128 (Full Size[0x150] - InheritedSize[0x28]
class TritonService: public Object
{
public:
	char                                                         pad0x10_L9QC3[0x10];                               // 0x28(0x10)
	TArray<class TritonComponent*>                               RegisteredTritonComponents;                        // 0x38(0x10)
	char                                                         pad0xa8_LC3GS[0xa8];                               // 0x48(0xa8)
	class TritonComponent*                                       CachedListenerInfo;                                // 0xf0(0x8)
	char                                                         pad0x58_YIJBE[0x58];                               // 0xf8(0x58)
};


// Size 0x10 (Full Size[0x2f0] - InheritedSize[0x2e0]
class TritonComponent: public SceneComponent
{
public:
	class TritonAcousticMap*                                     TritonMapAsset;                                    // 0x2e0(0x8)
	float                                                        TritonEffectRadius;                                // 0x2e8(0x4)
	char                                                         pad0x4_WVX6H[0x4];                                 // 0x2ec(0x4)
};


// Size 0x18 (Full Size[0x98] - InheritedSize[0x80]
class AnimNotify_WwiseSoundMeshSwitch: public AnimNotify_WwiseSound
{
public:
	struct FName                                                 SkeletalMeshSwitchGroup;                           // 0x80(0x8)
	TArray<struct AnimNotify_SoundSwitch>                        MeshOverrides;                                     // 0x88(0x10)
};


// Size 0x0 (Full Size[0x310] - InheritedSize[0x310]
class AnimNotifyWwiseEmitterComponent: public WwiseEmitterComponent
{
public:
};


