// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class ConsoleSettings: public Object
{
public:
	int                                                          MaxScrollbackSize;                                 // 0x28(0x4)
	char                                                         pad0x4_IC1W6[0x4];                                 // 0x2c(0x4)
	TArray<struct AutoCompleteCommand>                           ManualAutoCompleteList;                            // 0x30(0x10)
	TArray<Str AutoCompleteMapPaths>                             AutoCompleteMapPaths;                              // 0x40(0x10)
};


// Size 0x88 (Full Size[0xb0] - InheritedSize[0x28]
class GameMapsSettings: public Object
{
public:
	struct FString                                               EditorStartupMap;                                  // 0x28(0x10)
	struct FString                                               LocalMapOptions;                                   // 0x38(0x10)
	struct FString                                               TransitionMap;                                     // 0x48(0x10)
	bool                                                         bUseSplitscreen;                                   // 0x58(0x1)
	byte                                                         TwoPlayerSplitscreenLayout;                        // 0x59(0x1)
	byte                                                         ThreePlayerSplitscreenLayout;                      // 0x5a(0x1)
	char                                                         pad0x5_0F8ZV[0x5];                                 // 0x5b(0x5)
	struct StringClassReference                                  GameInstanceClass;                                 // 0x60(0x10)
	struct FString                                               GameDefaultMap;                                    // 0x70(0x10)
	struct FString                                               ServerDefaultMap;                                  // 0x80(0x10)
	struct StringClassReference                                  GlobalDefaultGameMode;                             // 0x90(0x10)
	struct StringClassReference                                  GlobalDefaultServerGameMode;                       // 0xa0(0x10)
};


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class GameNetworkManagerSettings: public Object
{
public:
	int                                                          MinDynamicBandwidth;                               // 0x28(0x4)
	int                                                          MaxDynamicBandwidth;                               // 0x2c(0x4)
	int                                                          TotalNetBandwidth;                                 // 0x30(0x4)
	int                                                          BadPingThreshold;                                  // 0x34(0x4)
	bool                                                         bIsStandbyCheckingEnabled;                         // 0x38(0x1)
	char                                                         pad0x3_XQ8LW[0x3];                                 // 0x39(0x3)
	float                                                        StandbyRxCheatTime;                                // 0x3c(0x4)
	float                                                        StandbyTxCheatTime;                                // 0x40(0x4)
	float                                                        PercentMissingForRxStandby;                        // 0x44(0x4)
	float                                                        PercentMissingForTxStandby;                        // 0x48(0x4)
	float                                                        PercentForBadPing;                                 // 0x4c(0x4)
	float                                                        JoinInProgressStandbyWaitTime;                     // 0x50(0x4)
	char                                                         pad0x4_BR1O2[0x4];                                 // 0x54(0x4)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class GameSessionSettings: public Object
{
public:
	int                                                          MaxSpectators;                                     // 0x28(0x4)
	int                                                          MaxPlayers;                                        // 0x2c(0x4)
	bool                                                         bRequiresPushToTalk;                               // 0x30(0x1)
	char                                                         pad0x7_YKJ5P[0x7];                                 // 0x31(0x7)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class GeneralEngineSettings: public Object
{
public:
};


// Size 0xe8 (Full Size[0x110] - InheritedSize[0x28]
class GeneralProjectSettings: public Object
{
public:
	struct FString                                               CompanyName;                                       // 0x28(0x10)
	struct FString                                               CompanyDistinguishedName;                          // 0x38(0x10)
	struct FString                                               CopyrightNotice;                                   // 0x48(0x10)
	struct FString                                               Description;                                       // 0x58(0x10)
	struct FString                                               Homepage;                                          // 0x68(0x10)
	struct FString                                               LicensingTerms;                                    // 0x78(0x10)
	struct FString                                               PrivacyPolicy;                                     // 0x88(0x10)
	struct Guid                                                  ProjectID;                                         // 0x98(0x10)
	struct FString                                               ProjectName;                                       // 0xa8(0x10)
	struct FString                                               ProjectVersion;                                    // 0xb8(0x10)
	struct FString                                               SupportContact;                                    // 0xc8(0x10)
	struct FText                                                 ProjectDisplayedTitle;                             // 0xd8(0x38)
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class HudSettings: public Object
{
public:
	bool                                                         bShowHUD;                                          // 0x28(0x1)
	char                                                         pad0x7_T3E0I[0x7];                                 // 0x29(0x7)
	TArray<struct FName>                                         DebugDisplay;                                      // 0x30(0x10)
};


}