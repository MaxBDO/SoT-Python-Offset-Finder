#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x58 (Full Size[0x80] - InheritedSize[0x28]
class WidgetReflectorNodeBase: public Object
{
public:
	struct Geometry                                              Geometry;                                          // 0x28(0x34)
	char                                                         pad0x4_OSEI7[0x4];                                 // 0x5c(0x4)
	TArray<class WidgetReflectorNodeBase*>                       ChildNodes;                                        // 0x60(0x10)
	struct LinearColor                                           Tint;                                              // 0x70(0x10)
};


// Size 0x18 (Full Size[0x98] - InheritedSize[0x80]
class LiveWidgetReflectorNode: public WidgetReflectorNodeBase
{
public:
	char                                                         pad0x18_XJXWX[0x18];                               // 0x80(0x18)
};


// Size 0x118 (Full Size[0x198] - InheritedSize[0x80]
class SnapshotWidgetReflectorNode: public WidgetReflectorNodeBase
{
public:
	struct FText                                                 CachedWidgetType;                                  // 0x80(0x38)
	struct FText                                                 CachedWidgetVisibilityText;                        // 0xb8(0x38)
	struct FText                                                 CachedWidgetReadableLocation;                      // 0xf0(0x38)
	struct FString                                               CachedWidgetFile;                                  // 0x128(0x10)
	int                                                          CachedWidgetLineNumber;                            // 0x138(0x4)
	struct FName                                                 CachedWidgetAssetName;                             // 0x13c(0x8)
	struct Vector2D                                              CachedWidgetDesiredSize;                           // 0x144(0x8)
	char                                                         pad0x4_59CJ2[0x4];                                 // 0x14c(0x4)
	struct SlateColor                                            CachedWidgetForegroundColor;                       // 0x150(0x30)
	struct FString                                               CachedWidgetAddress;                               // 0x180(0x10)
	bool                                                         CachedWidgetEnabled;                               // 0x190(0x1)
	char                                                         pad0x7_0K34D[0x7];                                 // 0x191(0x7)
};


