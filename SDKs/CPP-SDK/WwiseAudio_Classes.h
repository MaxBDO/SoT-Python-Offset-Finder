// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class AnimNotifyWwiseEmitterComponentRetrievalInterface: public Interface
{
public:
};


// Size 0x28
class WwiseEvent: public Object
{
public:
	Class WwiseBank*                                             RequiredBank;                                      // 0x28(0x8)
	bool                                                         WaitForBankToLoad;                                 // 0x30(0x1)
	float                                                        DurationMin;                                       // 0x38(0x4)
	float                                                        DurationMax;                                       // 0x3c(0x4)
	float                                                        MaxAttenuation;                                    // 0x40(0x4)
	byte                                                         DurationType;                                      // 0x44(0x1)
	bool                                                         CookedIsStopEvent;                                 // 0x45(0x1)
};


// Size 0x8
class MovieSceneAkAudioEventSection: public MovieSceneSection
{
public:
	Class WwiseEvent*                                            Event;                                             // 0x98(0x8)
};


// Size 0x90
class MovieSceneAkAudioRTPCSection: public MovieSceneSection
{
public:
	Struct FString                                               Name;                                              // 0xa0(0x10)
	Struct RichCurve                                             FloatCurve;                                        // 0xb0(0x78)
};


// Size 0x18
class MovieSceneAkTrack: public MovieSceneTrack
{
public:
	TArray<class Sections*>                                      Sections;                                          // 0x88(0x10)
	bool                                                         bIsAMasterTrack;                                   // 0x98(0x1)
};


// Size 0x0
class MovieSceneAkAudioEventTrack: public MovieSceneAkTrack
{
public:
};


// Size 0x0
class MovieSceneAkAudioRTPCTrack: public MovieSceneAkTrack
{
public:
};


// Size 0x20
class MultiEmitterRootComponent: public SceneComponent
{
public:
	TArray<Struct MultiEmitterData>                              MultiEmitterDataArray;                             // 0x2e0(0x10)
	TArray<Struct WwiseEmitter>                                  PlayingEmitters;                                   // 0x2f0(0x10)
};


// Size 0x3f8
class WwiseAudioSettings: public Object
{
public:
	Struct WwiseAudioReverbPresets                               ReverbPresetSettings;                              // 0xe8(0x64)
	Struct WwiseBinkSettings                                     BinkSettings;                                      // 0x150(0x38)
	TArray<Struct StringAssetReference>                          PersistentSoundBanks;                              // 0x188(0x10)
	Struct StringAssetReference                                  InitBank;                                          // 0x198(0x10)
	Struct DirectoryPath                                         WwiseSoundbanksRoot;                               // 0x1a8(0x10)
	Struct StringAssetReference                                  WwiseIDsDatabase;                                  // 0x1b8(0x10)
	Struct StringAssetReference                                  WwiseFileHashDatabase;                             // 0x1c8(0x10)
	Struct DirectoryPath                                         WwiseStreamedFilesRoot;                            // 0x1d8(0x10)
	TArray<Struct WwiseIOPriorityMappingConfig>                  AsyncIOPriorityMappings;                           // 0x1e8(0x10)
	Struct DirectoryPath                                         TritonAcousticMapsDirectory;                       // 0x1f8(0x10)
	Struct FString                                               DefaultLanguage;                                   // 0x208(0x10)
	Struct FString                                               SinkSharesetName;                                  // 0x218(0x10)
	Struct StringAssetReference                                  PauseEventStart;                                   // 0x228(0x10)
	Struct StringAssetReference                                  PauseEventRelease;                                 // 0x238(0x10)
	Struct StringAssetReference                                  StopAllEvent;                                      // 0x248(0x10)
	Struct WwiseNetworkRelationship                              NetworkRelationship;                               // 0x258(0x18)
	Struct WwiseAudioGameStateSettings                           AudioStateSettings;                                // 0x270(0xa0)
	Struct StringAssetReference                                  WwiseMediaSoundComponentEventName;                 // 0x318(0x10)
	Class WwiseEvent*                                            PauseEventStartInstance;                           // 0x328(0x8)
	Class WwiseEvent*                                            PauseEventReleaseInstance;                         // 0x330(0x8)
	Class WwiseEvent*                                            StopAllEventInstance;                              // 0x338(0x8)
	Class WwiseEvent*                                            WwiseMediaSoundComponentEventNameInstance;         // 0x340(0x8)
	Class WwiseObjectPoolWrapper*                                AnimNotifyPoolInstance;                            // 0x348(0x8)
	TArray<class EventsToPlayOnFrontendStartInstance*>           EventsToPlayOnFrontendStartInstance;               // 0x3a0(0x10)
	TArray<class EventsToPlayOnFrontendEndInstance*>             EventsToPlayOnFrontendEndInstance;                 // 0x3b0(0x10)
	TArray<class EventsToPlayOnStartEngagementInstance*>         EventsToPlayOnStartEngagementInstance;             // 0x3c0(0x10)
	TArray<class EventsToPlayOnEndEngagementInstance*>           EventsToPlayOnEndEngagementInstance;               // 0x3d0(0x10)
	TArray<class EventsToPlayOnLoadingStartInstance*>            EventsToPlayOnLoadingStartInstance;                // 0x3e0(0x10)
	TArray<class EventsToPlayOnLoadingEndInstance*>              EventsToPlayOnLoadingEndInstance;                  // 0x3f0(0x10)
	TArray<class EventsToPlayOnFrontEndOrLoadingStartInstance*>  EventsToPlayOnFrontEndOrLoadingStartInstance;      // 0x400(0x10)
	TArray<class EventsToPlayOnFrontEndOrLoadingEndInstance*>    EventsToPlayOnFrontEndOrLoadingEndInstance;        // 0x410(0x10)
};


// Size 0x40
class WwiseBank: public Object
{
public:
	Struct FString                                               path;                                              // 0x28(0x10)
};


// Size 0x0
class WwiseSubSystemInterface: public Interface
{
public:
};


// Size 0x60
class WwiseDebugManager: public Object
{
public:
};


// Size 0x0
class WwiseEmitterInterface: public Interface
{
public:
};


// Size 0x10
class MergedMultiEmitterComponent: public WwiseEmitterComponent
{
public:
	Class WwiseObjectPoolWrapper*                                EmitterPool;                                       // 0x310(0x8)
	Class WwiseEvent*                                            PlayEvent;                                         // 0x318(0x8)
};


// Size 0x20
class WwiseEmitterManager: public Object
{
public:
};


// Size 0x10
class WwiseDDSEvent: public WwiseEvent
{
public:
	TArray<UInt32 DDSArgumentsGroupsIDs>                         DDSArgumentsGroupsIDs;                             // 0x50(0x10)
};


// Size 0x80
class WwiseIDsDatabase: public DataAsset
{
public:
	TArray<UInt32 StateGroupIDs>                                 StateGroupIDs;                                     // 0x28(0x10)
	TArray<Struct FName>                                         StateGroupNames;                                   // 0x38(0x10)
	TArray<UInt32 StateValueIDs>                                 StateValueIDs;                                     // 0x48(0x10)
	TArray<Struct FName>                                         StateValueNames;                                   // 0x58(0x10)
	TArray<UInt32 SwitchGroupIDs>                                SwitchGroupIDs;                                    // 0x68(0x10)
	TArray<Struct FName>                                         SwitchGroupNames;                                  // 0x78(0x10)
	TArray<UInt32 SwitchStateIDs>                                SwitchStateIDs;                                    // 0x88(0x10)
	TArray<Struct FName>                                         SwitchStateNames;                                  // 0x98(0x10)
};


// Size 0x0
class WwiseInputManagerInterface: public Interface
{
public:
};


// Size 0x28
class WwiseInputManager: public Object
{
public:
};


// Size 0x50
class WwiseMediaManager: public Object
{
public:
};


// Size 0x10
class WwisePersistentContentStore: public Object
{
public:
	TArray<class PersistentlyLoadedBanks*>                       PersistentlyLoadedBanks;                           // 0x28(0x10)
};


// Size 0xd8
class WwisePoolManager: public Object
{
public:
};


// Size 0x20
class WwiseSoundFrameManager: public Object
{
public:
};


}