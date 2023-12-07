// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
struct CommoditySelectionType
{
public:
	struct FName                                                 CommodityType;                                     // 0x0(0x8)
};


// Size 0x20
struct ActiveNPCDemands
{
public:
	TArray<UInt32 NPCIdHashes>                                   NPCIdHashes;                                       // 0x0(0x10)
	TArray<struct ActiveCommodityDemands>                        NPCDemands;                                        // 0x10(0x10)
};


// Size 0x20
struct ActiveCommodityDemands
{
public:
	TArray<UInt32 CommodityIdHashes>                             CommodityIdHashes;                                 // 0x0(0x10)
	TArray<Byte CommodityDemands>                                CommodityDemands;                                  // 0x10(0x10)
};


// Size 0x10
struct MerchantSovereignHandInNameInformation
{
public:
	struct FName                                                 MerchantNPCName;                                   // 0x0(0x8)
	struct FName                                                 SovereignNPCName;                                  // 0x8(0x8)
};


// Size 0x10
struct CommodityDescWithRedeemId
{
public:
	struct CommoditySelectionType                                RedeemId;                                          // 0x0(0x8)
	class UClass*                                                RedeemItemDesc;                                    // 0x8(0x8)
};


// Size 0x18
struct EntitlementToRedeemItems
{
public:
	class UClass*                                                RequiredEntitlement;                               // 0x0(0x8)
	TArray<struct CommodityDescWithRedeemId>                     RedeemItems;                                       // 0x8(0x10)
};


// Size 0x28
struct CommoditySourceMetaWrapper
{
public:
	char                                                         pad0x18_381CI[0x18];                               // 0x0(0x18)
	struct FName                                                 NPCIdentifier;                                     // 0x18(0x8)
	struct FName                                                 IslandIdentifier;                                  // 0x20(0x8)
};


// Size 0x10
struct CommodityTypeDataEntry
{
public:
	struct FName                                                 CommodityType;                                     // 0x0(0x8)
	struct FName                                                 DisplayName;                                       // 0x8(0x8)
};


// Size 0x18
struct EventCommodityCrateRedeemed
{
public:
	char                                                         pad0x18_ZUQ18[0x18];                               // 0x0(0x18)
};


// Size 0x10
struct CommodityRedemptionTrackingModel
{
public:
	char                                                         pad0x2_OOYYM[0x2];                                 // 0x0(0x2)
	byte                                                         NPCName;                                           // 0x2(0x1)
	char                                                         pad0x5_X37UV[0x5];                                 // 0x3(0x5)
	char                                                         pad0x8_20VHH[0x8];                                 // 0x8(0x8)
};


// Size 0x20
struct CommodityTrackingModel
{
public:
	struct Guid                                                  ItemOfferId;                                       // 0x0(0x10)
	byte                                                         NPCName;                                           // 0x10(0x1)
	char                                                         pad0x7_DFXPJ[0x7];                                 // 0x11(0x7)
	char                                                         pad0x8_DR2VO[0x8];                                 // 0x18(0x8)
};


// Size 0x40
struct TrackCommodityPurchaseOnServerRpc
{
public:
	char                                                         pad0x10_ZLAIS[0x10];                               // 0x0(0x10)
	class Object*                                                CommodityDemandStorageObject;                      // 0x10(0x8)
	struct FName                                                 NPCName;                                           // 0x18(0x8)
	struct Guid                                                  ItemOfferId;                                       // 0x20(0x10)
	struct FString                                               ItemClientId;                                      // 0x30(0x10)
};


}