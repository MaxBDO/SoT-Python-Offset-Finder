// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class WwiseCoreAssets: public DataAsset
{
public:
	Class WwiseEvent*                                            PauseEventStart;                                   // 0x28(0x8)
	Class WwiseEvent*                                            PauseEventRelease;                                 // 0x30(0x8)
	Class WwiseEvent*                                            StopAllEvent;                                      // 0x38(0x8)
	Class WwiseEvent*                                            WwiseMediaSoundComponentEvent;                     // 0x40(0x8)
	Class WwiseNonShippingAudioRootAsset*                        NonShippingAudioRootAsset;                         // 0x48(0x8)
	Class WwiseIDsDatabase*                                      WwiseIDsDatabase;                                  // 0x50(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AnimNotifyWwiseEmitterComponentRetrievalInterface: public Interface
{
public:
};


// Size 0x50 (Full Size[0x78] - InheritedSize[0x28]
class AudioReporterSubSystem: public Object
{
public:
};


// Size 0x8 (Full Size[0xa0] - InheritedSize[0x98]
class MovieSceneAkAudioEventSection: public MovieSceneSection
{
public:
	Class WwiseEvent*                                            Event;                                             // 0x98(0x8)
};


// Size 0x90 (Full Size[0x128] - InheritedSize[0x98]
class MovieSceneAkAudioRTPCSection: public MovieSceneSection
{
public:
	char                                                         pad0x8_5D1A7[0x8];                                 // 0x98(0x8)
	Struct FString                                               Name;                                              // 0xa0(0x10)
	Struct RichCurve                                             FloatCurve;                                        // 0xb0(0x78)
};


// Size 0x18 (Full Size[0xa0] - InheritedSize[0x88]
class MovieSceneAkTrack: public MovieSceneTrack
{
public:
	TArray<class MovieSceneSection*>                             Sections;                                          // 0x88(0x10)
	bool                                                         bIsAMasterTrack;                                   // 0x98(0x1)
	char                                                         pad0x7_AVQ4K[0x7];                                 // 0x99(0x7)
};


// Size 0x0 (Full Size[0xa0] - InheritedSize[0xa0]
class MovieSceneAkAudioEventTrack: public MovieSceneAkTrack
{
public:
};


// Size 0x0 (Full Size[0xa0] - InheritedSize[0xa0]
class MovieSceneAkAudioRTPCTrack: public MovieSceneAkTrack
{
public:
};


// Size 0x20 (Full Size[0x300] - InheritedSize[0x2e0]
class MultiEmitterRootComponent: public SceneComponent
{
public:
	TArray<struct MultiEmitterDataArray>                         MultiEmitterDataArray;                             // 0x2e0(0x10)
	TArray<struct PlayingEmitters>                               PlayingEmitters;                                   // 0x2f0(0x10)
};


// Size 0x60 (Full Size[0x88] - InheritedSize[0x28]
class WwiseDebugManager: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WwiseEmitterInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x320] - InheritedSize[0x310]
class MergedMultiEmitterComponent: public WwiseEmitterComponent
{
public:
	Class WwiseObjectPoolWrapper*                                EmitterPool;                                       // 0x310(0x8)
	Class WwiseEvent*                                            PlayEvent;                                         // 0x318(0x8)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class WwiseEmitterManager: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WwiseInputManagerInterface: public Interface
{
public:
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class WwiseInputManager: public Object
{
public:
};


// Size 0x50 (Full Size[0x78] - InheritedSize[0x28]
class WwiseMediaManager: public Object
{
public:
};


// Size 0xd8 (Full Size[0x100] - InheritedSize[0x28]
class WwisePoolManager: public Object
{
public:
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class WwiseSoundFrameManager: public Object
{
public:
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class WwiseEvent: public Object
{
public:
	Class WwiseBank*                                             RequiredBank;                                      // 0x28(0x8)
	bool                                                         WaitForBankToLoad;                                 // 0x30(0x1)
	char                                                         pad0x3_GQ7QA[0x3];                                 // 0x31(0x3)
	float                                                        DurationMin;                                       // 0x38(0x4)
	float                                                        DurationMax;                                       // 0x3c(0x4)
	float                                                        MaxAttenuation;                                    // 0x40(0x4)
	byte                                                         DurationType;                                      // 0x44(0x1)
	bool                                                         CookedIsStopEvent;                                 // 0x45(0x1)
	char                                                         pad0xa_GXK8A[0xa];                                 // 0x46(0xa)
};


// Size 0x80 (Full Size[0xa8] - InheritedSize[0x28]
class WwiseIDsDatabase: public DataAsset
{
public:
	TArray<UInt32 StateGroupIDs>                                 StateGroupIDs;                                     // 0x28(0x10)
	TArray<struct FName>                                         StateGroupNames;                                   // 0x38(0x10)
	TArray<UInt32 StateValueIDs>                                 StateValueIDs;                                     // 0x48(0x10)
	TArray<struct FName>                                         StateValueNames;                                   // 0x58(0x10)
	TArray<UInt32 SwitchGroupIDs>                                SwitchGroupIDs;                                    // 0x68(0x10)
	TArray<struct FName>                                         SwitchGroupNames;                                  // 0x78(0x10)
	TArray<UInt32 SwitchStateIDs>                                SwitchStateIDs;                                    // 0x88(0x10)
	TArray<struct FName>                                         SwitchStateNames;                                  // 0x98(0x10)
};


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class WwiseNonShippingAudioAsset: public DataAsset
{
public:
	Struct FString                                               CodeName;                                          // 0x28(0x10)
	Struct FString                                               UAssetRelativePath;                                // 0x38(0x10)
	Struct FString                                               StreamRelativePath;                                // 0x48(0x10)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class WwiseNonShippingAudioRootAsset: public DataAsset
{
public:
	TArray<class WwiseNonShippingAudioAsset*>                    NonShippingAudioAssets;                            // 0x28(0x10)
	char                                                         pad0x10_MYWE6[0x10];                               // 0x38(0x10)
};


// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class WwiseBank: public Object
{
public:
	Struct FString                                               path;                                              // 0x28(0x10)
	Class WwiseBank*                                             InitBank;                                          // 0x40(0x8)
	char                                                         pad0x28_B8K99[0x28];                               // 0x48(0x28)
};


// Size 0x10 (Full Size[0x60] - InheritedSize[0x50]
class WwiseDDSEvent: public WwiseEvent
{
public:
	TArray<UInt32 DDSArgumentsGroupsIDs>                         DDSArgumentsGroupsIDs;                             // 0x50(0x10)
};


}