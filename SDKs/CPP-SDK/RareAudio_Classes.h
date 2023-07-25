// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x30 (Full Size[0x310] - InheritedSize[0x2e0]
class WwiseEmitterComponent: public SceneComponent
{
public:
	char                                                         pad0x8_UNRGC[0x8];                                 // 0x2e0(0x8)
	Struct WwiseEmitter                                          Emitter;                                           // 0x2e8(0x20)
	Class WwiseObjectPoolWrapper*                                WwiseObjectPoolWrapper;                            // 0x308(0x8)
};


// Size 0x0 (Full Size[0x310] - InheritedSize[0x310]
class AnimNotifyWwiseEmitterComponent: public WwiseEmitterComponent
{
public:
};


// Size 0x48 (Full Size[0x80] - InheritedSize[0x38]
class AnimNotify_WwiseSound: public AnimNotify
{
public:
	Class WwiseEvent*                                            WwiseEvent;                                        // 0x38(0x8)
	bool                                                         OwnedByWorld;                                      // 0x40(0x1)
	char                                                         pad0x3_N4TUV[0x3];                                 // 0x41(0x3)
	Struct Vector                                                OwnedByWorldEmitterOffset;                         // 0x44(0xc)
	byte                                                         PerspectiveRestriction;                            // 0x50(0x1)
	char                                                         pad0x7_FWYW7[0x7];                                 // 0x51(0x7)
	Class WwiseObjectPoolWrapper*                                OwnedByWorldWisePoolToUse;                         // 0x58(0x8)
	char                                                         pad0x20_SI6WO[0x20];                               // 0x60(0x20)
};


// Size 0x18 (Full Size[0x98] - InheritedSize[0x80]
class AnimNotify_WwiseSoundMeshSwitch: public AnimNotify_WwiseSound
{
public:
	struct FName                                                 SkeletalMeshSwitchGroup;                           // 0x80(0x8)
	TArray<struct MeshOverrides>                                 MeshOverrides;                                     // 0x88(0x10)
};


// Size 0x60 (Full Size[0x90] - InheritedSize[0x30]
class AnimNotifyState_WwiseSound: public AnimNotifyState
{
public:
	Class WwiseEvent*                                            WwiseEvent;                                        // 0x30(0x8)
	Class WwiseEvent*                                            WwiseEventEnd;                                     // 0x38(0x8)
	char                                                         pad0x50_798YM[0x50];                               // 0x40(0x50)
};


// Size 0x8 (Full Size[0x3d0] - InheritedSize[0x3c8]
class AudioEventToComponentMap: public Actor
{
public:
	Class AudioEventToComponentMapComponent*                     AudioEventToComponentMapComponent;                 // 0x3c8(0x8)
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class AudioEventToComponentMapComponent: public ActorComponent
{
public:
	TArray<struct LocalComponentMappings>                        LocalComponentMappings;                            // 0xc8(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WwiseEmitterBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WwiseEmitterComponentBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x50 (Full Size[0x78] - InheritedSize[0x28]
class WwiseObjectPoolWrapper: public Object
{
public:
	struct FName                                                 PoolName;                                          // 0x28(0x8)
	int                                                          MaxResources;                                      // 0x30(0x4)
	bool                                                         DisableOcclusion;                                  // 0x34(0x1)
	bool                                                         DisableReverb;                                     // 0x35(0x1)
	char                                                         pad0x2_LFUBX[0x2];                                 // 0x36(0x2)
	Struct WwiseNativeEmitterPoolDensityParams                   PoolDensityParams;                                 // 0x38(0x28)
	char                                                         pad0x18_YQWHE[0x18];                               // 0x60(0x18)
};


// Size 0x0 (Full Size[0x3c8] - InheritedSize[0x3c8]
class AudioIslandStaticMeshAssociatorBase: public Actor
{
public:
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class AudioSpaceDataAsset: public DataAsset
{
public:
	struct FName                                                 RtpcToUpdate;                                      // 0x28(0x8)
	Class WwiseEvent*                                            AmbienceToStart;                                   // 0x30(0x8)
	Class WwiseEvent*                                            AmbienceToStop;                                    // 0x38(0x8)
};


// Size 0x10 (Full Size[0x50] - InheritedSize[0x40]
class RareAudioHardwareDeviceService: public AudioHardwareDeviceService
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class StaticMeshAudioDataAsset: public DataAsset
{
public:
	TArray<struct MeshToAudioAssociations>                       MeshToAudioAssociations;                           // 0x28(0x10)
};


// Size 0x10 (Full Size[0x2f0] - InheritedSize[0x2e0]
class StaticMeshAudioEmittersComponent: public SceneComponent
{
public:
	TArray<struct InstanceAssociations>                          InstanceAssociations;                              // 0x2e0(0x10)
};


// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class TritonAcousticMap: public Object
{
public:
	Struct FString                                               TritonMapFilename;                                 // 0x28(0x10)
	float                                                        CustomCacheRatio;                                  // 0x38(0x4)
	char                                                         pad0x2c_EZN3C[0x2c];                               // 0x3c(0x2c)
};


// Size 0x10 (Full Size[0x2f0] - InheritedSize[0x2e0]
class TritonComponent: public SceneComponent
{
public:
	Class TritonAcousticMap*                                     TritonMapAsset;                                    // 0x2e0(0x8)
	float                                                        TritonEffectRadius;                                // 0x2e8(0x4)
	char                                                         pad0x4_1R50E[0x4];                                 // 0x2ec(0x4)
};


// Size 0x128 (Full Size[0x150] - InheritedSize[0x28]
class TritonService: public Object
{
public:
	char                                                         pad0x10_S51XE[0x10];                               // 0x28(0x10)
	TArray<class TritonComponent*>                               RegisteredTritonComponents;                        // 0x38(0x10)
	char                                                         pad0xa8_4VNH1[0xa8];                               // 0x48(0xa8)
	Class TritonComponent*                                       CachedListenerInfo;                                // 0xf0(0x8)
	char                                                         pad0x58_8D747[0x58];                               // 0xf8(0x58)
};


}