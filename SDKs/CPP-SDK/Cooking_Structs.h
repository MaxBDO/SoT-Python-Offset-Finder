// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xc
struct CookingInfo
{
public:
};


// Size 0x8
struct CookableComponentSmokeFeedbackTimingEntry
{
public:
	float                                                        StateDuration;                                     // 0x0(0x4)
	byte                                                         StateFeedbackLevel;                                // 0x4(0x1)
};


// Size 0x68
struct CookingClientRepresentation
{
public:
	bool                                                         Cooking;                                           // 0x0(0x1)
	bool                                                         HasItem;                                           // 0x1(0x1)
	char                                                         pad0x6_2BY82[0x6];                                 // 0x2(0x6)
	Class ItemInfo*                                              CurrentlyCookingItem;                              // 0x8(0x8)
	Struct FText                                                 CurrentCookingItemDisplayName;                     // 0x10(0x38)
	class                                                        CurrentCookingItemCategory;                        // 0x48(0x8)
	byte                                                         SmokeFeedbackLevel;                                // 0x50(0x1)
	char                                                         pad0x3_TYJSP[0x3];                                 // 0x51(0x3)
	float                                                        VisibleCookedExtent;                               // 0x54(0x4)
	float                                                        CurrentItemPlacementAngle;                         // 0x58(0x4)
	struct FName                                                 CurrentCookableTypeName;                           // 0x5c(0x8)
};


// Size 0x10
struct CookerSmokeFeedbackEntry
{
public:
	byte                                                         FeedbackLevel;                                     // 0x0(0x1)
	char                                                         pad0x7_47CWH[0x7];                                 // 0x1(0x7)
	Class ParticleSystem*                                        SmokeVFX;                                          // 0x8(0x8)
};


// Size 0x8
struct OnRemovedItemFromCookingPot
{
public:
	Class Actor*                                                 Interactor;                                        // 0x0(0x8)
};


// Size 0x10
struct OnPlacedItemInCookingPot
{
public:
	Class Actor*                                                 Interactor;                                        // 0x0(0x8)
	Class ItemInfo*                                              ItemToCook;                                        // 0x8(0x8)
};


// Size 0x10
struct OnItemStartedCooking
{
public:
};


// Size 0x1
struct OnItemStoppedCooking
{
public:
};


// Size 0x30
struct CookEndTelemetryEvent
{
public:
	Struct FString                                               ItemName;                                          // 0x0(0x10)
	byte                                                         CookState;                                         // 0x10(0x1)
	char                                                         pad0x3_6Y6G1[0x3];                                 // 0x11(0x3)
	Struct Vector                                                Location;                                          // 0x14(0xc)
	Struct Guid                                                  CookId;                                            // 0x20(0x10)
};


// Size 0x30
struct CookStartTelemetryEvent
{
public:
	Struct FString                                               ItemName;                                          // 0x0(0x10)
	byte                                                         CookState;                                         // 0x10(0x1)
	char                                                         pad0x3_21NF4[0x3];                                 // 0x11(0x3)
	Struct Vector                                                Location;                                          // 0x14(0xc)
	Struct Guid                                                  CookId;                                            // 0x20(0x10)
};


}