// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
struct ChestEntitlementTrinketItem
{
public:
	struct FString                                               ItemDesc;                                          // 0x0(0x10)
	int                                                          PlacedValue;                                       // 0x10(0x4)
	int                                                          PlacedThreshold;                                   // 0x14(0x4)
	struct FString                                               OwnerGamerTag;                                     // 0x18(0x10)
};


// Size 0x48
struct TrinketLoadout
{
public:
	TArray<struct TrinketLoadoutEntry>                           TrinketEntries;                                    // 0x0(0x10)
	TArray<struct UniqueNetIdRepl>                               TrinketOwnerXUIDs;                                 // 0x10(0x10)
	char                                                         pad0x28_C9ZPF[0x28];                               // 0x20(0x28)
};


// Size 0x8
struct TrinketLoadoutEntry
{
public:
	int                                                          TrinketEntitlementIndex;                           // 0x0(0x4)
	int                                                          TrinketOwnerPlayerXUIDIndex;                       // 0x4(0x4)
};


// Size 0x28
struct RemoveInteractingPlayerFromTrinketMountpointRpc
{
public:
	char                                                         pad0x10_XVY55[0x10];                               // 0x0(0x10)
	struct NetSubObjectPtr                                       TrinketMountpointManager;                          // 0x10(0x14)
	int                                                          MountpointIndex;                                   // 0x24(0x4)
};


// Size 0x10
struct TrinketLoadoutUpdatedEvent
{
public:
	char                                                         pad0x10_3EISH[0x10];                               // 0x0(0x10)
};


// Size 0x20
struct TrinketLoadoutModelEntry
{
public:
	struct FName                                                 EntitlementId;                                     // 0x0(0x8)
	int                                                          LocationIndex;                                     // 0x8(0x4)
	char                                                         pad0x4_BOKTW[0x4];                                 // 0xc(0x4)
	struct FString                                               UserId;                                            // 0x10(0x10)
};


// Size 0x10
struct TrinketLoadoutModel
{
public:
	TArray<struct TrinketLoadoutModelEntry>                      Trinkets;                                          // 0x0(0x10)
};


// Size 0x10
struct EventTrinketSetReady
{
public:
	char                                                         pad0x10_CFVN6[0x10];                               // 0x0(0x10)
};


// Size 0x1
struct RequestTrinketChestItemInfoEvent
{
public:
	char                                                         pad0x1_NPCM4[0x1];                                 // 0x0(0x1)
};


// Size 0x10
struct RequestTrinketLoadoutUIEvent
{
public:
	TArray<Str Categories>                                       Categories;                                        // 0x0(0x10)
};


// Size 0x10
struct RequestTrinketEntitlementsUIEvent
{
public:
	struct FString                                               TrinketCategory;                                   // 0x0(0x10)
};


// Size 0x10
struct RequestUnequipTrinketsOfClassUIEvent
{
public:
	struct FString                                               TrinketDesc;                                       // 0x0(0x10)
};


}