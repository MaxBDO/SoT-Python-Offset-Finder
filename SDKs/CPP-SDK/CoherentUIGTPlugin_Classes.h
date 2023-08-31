// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x248 (Full Size[0x310] - InheritedSize[0xc8]
class CoherentUIGTBaseComponent: public ActorComponent
{
public:
	char                                                         pad0xa8_ND9QV[0xa8];                               // 0xc8(0xa8)
	Class TextureRenderTarget2D*                                 Texture;                                           // 0x170(0x8)
	byte                                                         Filter;                                            // 0x178(0x1)
	bool                                                         bReceiveInput;                                     // 0x179(0x1)
	bool                                                         bReceiveInputWhenTransparent;                      // 0x17a(0x1)
	bool                                                         AllowPerformanceWarnings;                          // 0x17b(0x1)
	float                                                        ExecuteJSTimersThresholdMs;                        // 0x17c(0x4)
	float                                                        UpdateStylesAndLayoutThresholdMs;                  // 0x180(0x4)
	float                                                        RecordRenderingCommandsThresholdMs;                // 0x184(0x4)
	float                                                        PaintWarningThresholdMs;                           // 0x188(0x4)
	int                                                          LayersCountThreshold;                              // 0x18c(0x4)
	int                                                          LayerWidthThreshold;                               // 0x190(0x4)
	int                                                          LayerHeightThreshold;                              // 0x194(0x4)
	bool                                                         bEnableAdditionalDefaultStyles;                    // 0x198(0x1)
	bool                                                         bDelayedUpdate;                                    // 0x199(0x1)
	char                                                         pad0x176_RJXBH[0x176];                             // 0x19a(0x176)
};


// Size 0x38 (Full Size[0x348] - InheritedSize[0x310]
class CoherentUIGTComponent: public CoherentUIGTBaseComponent
{
public:
	Struct FString                                               URL;                                               // 0x310(0x10)
	int                                                          Width;                                             // 0x320(0x4)
	int                                                          Height;                                            // 0x324(0x4)
	bool                                                         ManualTexture;                                     // 0x328(0x1)
	char                                                         pad0x3_O2J6Z[0x3];                                 // 0x329(0x3)
	float                                                        ClickThroughAlphaThreshold;                        // 0x32c(0x4)
	bool                                                         Transparent;                                       // 0x330(0x1)
	char                                                         pad0x17_C4RLY[0x17];                               // 0x331(0x17)
};


// Size 0x30 (Full Size[0xf8] - InheritedSize[0xc8]
class CoherentUIGTLiveView: public ActorComponent
{
public:
	Struct FString                                               LinkName;                                          // 0xc8(0x10)
	Class TextureRenderTarget2D*                                 Texture;                                           // 0xd8(0x8)
	char                                                         pad0x18_2BN2T[0x18];                               // 0xe0(0x18)
};


// Size 0x8 (Full Size[0x100] - InheritedSize[0xf8]
class CoherentUIGTRenderToTextureLiveView: public CoherentUIGTLiveView
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CoherentUIGTAssetReferencer: public Object
{
public:
};


// Size 0x50 (Full Size[0x418] - InheritedSize[0x3c8]
class CoherentUIGTSystem: public Actor
{
public:
};


// Size 0x90 (Full Size[0xb8] - InheritedSize[0x28]
class CoherentUIGTJSEvent: public Object
{
public:
	char                                                         pad0x80_0PHJO[0x80];                               // 0x28(0x80)
	TArray<class Struct*>                                        StructTypes;                                       // 0xa8(0x10)
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class CoherentUIGTJSPayload: public Object
{
public:
	Struct FString                                               EventName;                                         // 0x28(0x10)
	char                                                         pad0x8_IUU2K[0x8];                                 // 0x38(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CoherentUIGTEventHelpers: public Object
{
public:
};


// Size 0x28 (Full Size[0x338] - InheritedSize[0x310]
class CoherentUIGTHUD: public CoherentUIGTBaseComponent
{
public:
	Struct StringAssetReference                                  HUDMaterialName;                                   // 0x310(0x10)
	Class Material*                                              HUDMaterial;                                       // 0x320(0x8)
	Class MaterialInstanceDynamic*                               HUDMaterialInstance;                               // 0x328(0x8)
	char                                                         pad0x8_8D54C[0x8];                                 // 0x330(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CoherentUIGTBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x98 (Full Size[0x558] - InheritedSize[0x4c0]
class CoherentUIGTGameHUD: public HUD
{
public:
	Class CoherentUIGTHUD*                                       CoherentUIGTHUD;                                   // 0x4c0(0x8)
	char                                                         pad0x90_AUPMA[0x90];                               // 0x4c8(0x90)
};


// Size 0x60 (Full Size[0x428] - InheritedSize[0x3c8]
class CoherentUIGTInputActor: public Actor
{
public:
};


// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class CoherentUIGTSettings: public Object
{
public:
	bool                                                         EnableLiveReload;                                  // 0x28(0x1)
	char                                                         pad0x3_8H7QC[0x3];                                 // 0x29(0x3)
	int                                                          InspectorPort;                                     // 0x2c(0x4)
	int                                                          WebdriverPort;                                     // 0x30(0x4)
	bool                                                         EnableWebSecurity;                                 // 0x34(0x1)
	bool                                                         EnableLocalization;                                // 0x35(0x1)
	bool                                                         RunAsynchronous;                                   // 0x36(0x1)
	bool                                                         bRecursivelyBindUStructs;                          // 0x37(0x1)
	bool                                                         LoadSystemFonts;                                   // 0x38(0x1)
	bool                                                         AllowPerformanceWarningsInEditor;                  // 0x39(0x1)
	bool                                                         ShowWarningsOnScreen;                              // 0x3a(0x1)
	byte                                                         LogSeverity;                                       // 0x3b(0x1)
	bool                                                         bPaintToBackBuffer;                                // 0x3c(0x1)
	bool                                                         bRespectTitleSafeZone;                             // 0x3d(0x1)
	bool                                                         bRespectLetterboxing;                              // 0x3e(0x1)
	char                                                         pad0x1_5YV9O[0x1];                                 // 0x3f(0x1)
	Struct FString                                               HUDMaterialName;                                   // 0x40(0x10)
	Struct FString                                               CoUIResourcesRoot;                                 // 0x50(0x10)
	bool                                                         TickWhileGameIsPaused;                             // 0x60(0x1)
	byte                                                         MSAA;                                              // 0x61(0x1)
	char                                                         pad0x6_MSSXZ[0x6];                                 // 0x62(0x6)
};


// Size 0x2a0 (Full Size[0x3d8] - InheritedSize[0x138]
class CoherentUIGTWidget: public Widget
{
public:
	char                                                         pad0x20_8342U[0x20];                               // 0x138(0x20)
	Class Actor*                                                 Owner;                                             // 0x158(0x8)
	byte                                                         Filter;                                            // 0x1f8(0x1)
	bool                                                         bReceiveInput;                                     // 0x1f9(0x1)
	bool                                                         bReceiveInputWhenTransparent;                      // 0x1fa(0x1)
	bool                                                         bGammaCorrectedMaterial;                           // 0x1fb(0x1)
	bool                                                         AllowPerformanceWarnings;                          // 0x1fc(0x1)
	char                                                         pad0x3_29R0J[0x3];                                 // 0x1fd(0x3)
	float                                                        ExecuteJSTimersThresholdMs;                        // 0x200(0x4)
	float                                                        UpdateStylesAndLayoutThresholdMs;                  // 0x204(0x4)
	float                                                        RecordRenderingCommandsThresholdMs;                // 0x208(0x4)
	float                                                        PaintWarningThresholdMs;                           // 0x20c(0x4)
	int                                                          LayersCountThreshold;                              // 0x210(0x4)
	int                                                          LayerWidthThreshold;                               // 0x214(0x4)
	int                                                          LayerHeightThreshold;                              // 0x218(0x4)
	bool                                                         bEnableAdditionalDefaultStyles;                    // 0x21c(0x1)
	char                                                         pad0x1a3_N5DZ9[0x1a3];                             // 0x21d(0x1a3)
	Struct FString                                               URL;                                               // 0x3c0(0x10)
	float                                                        ClickThroughAlphaThreshold;                        // 0x3d0(0x4)
	bool                                                         Transparent;                                       // 0x3d4(0x1)
	char                                                         pad0x3_TWEWS[0x3];                                 // 0x3d5(0x3)
};


}