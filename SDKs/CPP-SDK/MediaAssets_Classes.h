// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class MediaBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class MediaComponent: public ActorComponent
{
public:
	Class MediaTexture*                                          MediaTexture;                                      // 0xc8(0x8)
	Class MediaPlayer*                                           MediaPlayer;                                       // 0xd0(0x8)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class MediaTimeStampInfo: public Object
{
public:
	Struct Timespan                                              Time;                                              // 0x28(0x8)
	char                                                         pad0x8_9RLW2[0x8];                                 // 0x30(0x8)
};


// Size 0x148 (Full Size[0x170] - InheritedSize[0x28]
class MediaPlayer: public Object
{
public:
	char                                                         pad0x80_A1LA6[0x80];                               // 0x28(0x80)
	Struct Timespan                                              CacheAhead;                                        // 0xa8(0x8)
	Struct Timespan                                              CacheBehind;                                       // 0xb0(0x8)
	Struct Timespan                                              CacheBehindGame;                                   // 0xb8(0x8)
	bool                                                         NativeAudioOut;                                    // 0xc0(0x1)
	bool                                                         PlayOnOpen;                                        // 0xc1(0x1)
	char                                                         pad0x2_EP2B5[0x2];                                 // 0xc2(0x2)
	bool                                                         Shuffle;                                           // 0xc4(0x1)
	bool                                                         Loop;                                              // 0xc4(0x1)
	char                                                         pad0x3_0NOB4[0x3];                                 // 0xc5(0x3)
	Class MediaPlaylist*                                         Playlist;                                          // 0xc8(0x8)
	int                                                          PlaylistIndex;                                     // 0xd0(0x4)
	char                                                         pad0x4_K2KJC[0x4];                                 // 0xd4(0x4)
	Struct Timespan                                              TimeDelay;                                         // 0xd8(0x8)
	float                                                        HorizontalFieldOfView;                             // 0xe0(0x4)
	float                                                        VerticalFieldOfView;                               // 0xe4(0x4)
	Struct Rotator                                               ViewRotation;                                      // 0xe8(0xc)
	char                                                         pad0x64_494UU[0x64];                               // 0xf4(0x64)
	Struct Guid                                                  PlayerGuid;                                        // 0x158(0x10)
	char                                                         pad0x8_HJ15N[0x8];                                 // 0x168(0x8)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class MediaPlaylist: public Object
{
public:
	TArray<class MediaSource*>                                   Items;                                             // 0x28(0x10)
};


// Size 0x58 (Full Size[0x80] - InheritedSize[0x28]
class MediaSource: public Object
{
public:
};


// Size 0x8 (Full Size[0x88] - InheritedSize[0x80]
class BaseMediaSource: public MediaSource
{
public:
	struct FName                                                 PlayerName;                                        // 0x80(0x8)
};


// Size 0x28 (Full Size[0xb0] - InheritedSize[0x88]
class FileMediaSource: public BaseMediaSource
{
public:
	Struct FString                                               FilePath;                                          // 0x88(0x10)
	bool                                                         PrecacheFile;                                      // 0x98(0x1)
	char                                                         pad0x17_F64IH[0x17];                               // 0x99(0x17)
};


// Size 0x10 (Full Size[0x98] - InheritedSize[0x88]
class StreamMediaSource: public BaseMediaSource
{
public:
	Struct FString                                               StreamUrl;                                         // 0x88(0x10)
};


// Size 0x10 (Full Size[0x98] - InheritedSize[0x88]
class TimeSynchronizableMediaSource: public BaseMediaSource
{
public:
	bool                                                         bUseTimeSynchronization;                           // 0x88(0x1)
	char                                                         pad0x3_6PWRG[0x3];                                 // 0x89(0x3)
	int                                                          FrameDelay;                                        // 0x8c(0x4)
	double                                                       TimeDelay;                                         // 0x90(0x8)
};


// Size 0x8 (Full Size[0x88] - InheritedSize[0x80]
class PlatformMediaSource: public MediaSource
{
public:
	Class MediaSource*                                           MediaSource;                                       // 0x80(0x8)
};


// Size 0xf0 (Full Size[0x228] - InheritedSize[0x138]
class MediaTexture: public Texture
{
public:
	byte                                                         AddressX;                                          // 0x138(0x1)
	byte                                                         AddressY;                                          // 0x139(0x1)
	bool                                                         AutoClear;                                         // 0x13a(0x1)
	char                                                         pad0x1_00W6Z[0x1];                                 // 0x13b(0x1)
	Struct LinearColor                                           ClearColor;                                        // 0x13c(0x10)
	bool                                                         EnableGenMips;                                     // 0x14c(0x1)
	byte                                                         NumMips;                                           // 0x14d(0x1)
	bool                                                         NewStyleOutput;                                    // 0x14e(0x1)
	byte                                                         OutputFormat;                                      // 0x14f(0x1)
	float                                                        CurrentAspectRatio;                                // 0x150(0x4)
	byte                                                         CurrentOrientation;                                // 0x154(0x1)
	char                                                         pad0x3_BJI6C[0x3];                                 // 0x155(0x3)
	Class MediaPlayer*                                           MediaPlayer;                                       // 0x158(0x8)
	char                                                         pad0xc8_T8P92[0xc8];                               // 0x160(0xc8)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class MovieAssetContainer: public DataAsset
{
public:
	TArray<class MediaTexture*>                                  MediaTextures;                                     // 0x28(0x10)
	TArray<class MediaPlayer*>                                   MediaPlayers;                                      // 0x38(0x10)
};


}