// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x278 (Full Size[0x2a0] - InheritedSize[0x28]
class SeasonPopupAsset: public DataAsset
{
public:
	struct FName                                                 ThemeId;                                           // 0x28(0x8)
	TArray<struct SeasonIconPopupAsset>                          TierInfos;                                         // 0x30(0x10)
	TArray<struct SeasonGoalPopupAsset>                          TrialInfos;                                        // 0x40(0x10)
	TArray<struct SeasonGoalPopupAsset>                          DeedInfos;                                         // 0x50(0x10)
	TArray<struct SeasonGoalPopupAsset>                          RenownActionInfos;                                 // 0x60(0x10)
	struct SeasonIconPopupAsset                                  SeasonInfo;                                        // 0x70(0x68)
	struct SeasonIconPopupAsset                                  LevelIncreaseInfo;                                 // 0xd8(0x68)
	struct SeasonIconPopupAsset                                  RewardInfo;                                        // 0x140(0x68)
	struct SeasonIconPopupAsset                                  MultipleRewardsInfo;                               // 0x1a8(0x68)
	struct StringAssetReference                                  BackgroundImage;                                   // 0x210(0x10)
	struct FString                                               DefaultToastSfxEventName;                          // 0x220(0x10)
	struct FString                                               DefaultToastEventName;                             // 0x230(0x10)
	struct FString                                               DefaultToastSwitchName;                            // 0x240(0x10)
	struct FString                                               DefaultToastSwitchValue;                           // 0x250(0x10)
	struct FString                                               DefaultChatSfxEventName;                           // 0x260(0x10)
	struct FString                                               DefaultChatEventName;                              // 0x270(0x10)
	struct FString                                               DefaultChatSwitchName;                             // 0x280(0x10)
	struct FString                                               DefaultChatSwitchValue;                            // 0x290(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class SeasonPopupListAsset: public DataAsset
{
public:
	TArray<class SeasonPopupAsset*>                              SeasonPopups;                                      // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class SeasonProgressionUIInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class SeasonProgressionUITelemetryInterface: public Interface
{
public:
};


// Size 0xf8 (Full Size[0x1c0] - InheritedSize[0xc8]
class SeasonProgressionUIComponent: public ActorComponent
{
public:
	char                                                         pad0x20_C5MZ3[0x20];                               // 0xc8(0x20)
	TArray<struct EnableMoreButtonEvent>                         DetailsNavigationDesc;                             // 0xe8(0x10)
	struct SeasonProgressionUITelemetryFragment                  NextReceivedEventsTelemetryData;                   // 0xf8(0x18)
	char                                                         pad0xb0_P2EME[0xb0];                               // 0x110(0xb0)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class SeasonProgressionUIServiceInterface: public Interface
{
public:
};


// Size 0x1e0 (Full Size[0x5a8] - InheritedSize[0x3c8]
class SeasonProgressionUIService: public Actor
{
public:
	char                                                         pad0x30_XXLW1[0x30];                               // 0x3c8(0x30)
	class SeasonPopupListAsset*                                  SeasonPopupListAsset;                              // 0x3f8(0x8)
	char                                                         pad0x1a8_L8IOM[0x1a8];                             // 0x400(0x1a8)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class SeasonProgressionUISettings: public Object
{
public:
	struct StringAssetReference                                  SeasonPopupListAsset;                              // 0x28(0x10)
};


}