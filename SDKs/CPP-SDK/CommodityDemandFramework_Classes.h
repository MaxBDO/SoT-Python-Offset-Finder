// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class CommodityTokenEntitlementDesc: public EntitlementDesc
{
public:
	struct FName                                                 NPCToRedeemAt;                                     // 0xc8(0x8)
	class UClass*                                                ItemToRedeemFor;                                   // 0xd0(0x8)
};


// Size 0x10 (Full Size[0x48] - InheritedSize[0x38]
class CommodityDemandFrameworkEditorSettings: public DeveloperSettings
{
public:
	struct StringAssetReference                                  CommodityDataFileLocation;                         // 0x38(0x10)
};


// Size 0x40 (Full Size[0x78] - InheritedSize[0x38]
class CommodityDemandFrameworkSettings: public DeveloperSettings
{
public:
	float                                                        DemandRefreshFrequencyInSeconds;                   // 0x38(0x4)
	struct FName                                                 DemandCollectionId;                                // 0x3c(0x8)
	int                                                          CommodityPurchaseLockoutInGameDays;                // 0x44(0x4)
	int                                                          InGameHourWhenCommoditiesRestock;                  // 0x48(0x4)
	char                                                         pad0x4_74UPF[0x4];                                 // 0x4c(0x4)
	struct GameTime                                              CommodityRedemptionTimeOutPeriodInDays;            // 0x50(0x8)
	struct StringAssetReference                                  NPCListAsset;                                      // 0x58(0x10)
	struct StringAssetReference                                  MerchantSovereignHandInNameFileLocation;           // 0x68(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CommodityDemandServiceInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class MerchantSovereignHandInNameInformationDataAsset: public DataAsset
{
public:
	TArray<struct MerchantSovereignHandInNameInformation>        MerchantSovereignHandInNameInformationArray;       // 0x28(0x10)
};


// Size 0x78 (Full Size[0x440] - InheritedSize[0x3c8]
class CommodityDemandService: public Actor
{
public:
	char                                                         pad0x20_GX3YG[0x20];                               // 0x3c8(0x20)
	struct ActiveNPCDemands                                      ActiveCommodityDemands;                            // 0x3e8(0x20)
	class MerchantSovereignHandInNameInformationDataAsset*       MerchantSovereignHandInNameInformationDataAsset;   // 0x408(0x8)
	char                                                         pad0x30_VBM0B[0x30];                               // 0x410(0x30)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CommodityDemandStorageInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CommodityDemandStorageProviderInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class CommodityEntitlementRedemptionAsset: public DataAsset
{
public:
	TArray<struct EntitlementToRedeemItems>                      CommoditiesForRedemption;                          // 0x28(0x10)
};


// Size 0x10 (Full Size[0x130] - InheritedSize[0x120]
class CommodityItemDesc: public BootyItemDesc
{
public:
	struct CommoditySelectionType                                CommodityType;                                     // 0x120(0x8)
	byte                                                         CommodityDemand;                                   // 0x128(0x1)
	char                                                         pad0x7_ZOA47[0x7];                                 // 0x129(0x7)
};


// Size 0x90 (Full Size[0x158] - InheritedSize[0xc8]
class CommodityPurchaseTrackingComponent: public ActorComponent
{
public:
	char                                                         pad0x90_XLHVI[0x90];                               // 0xc8(0x90)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CommodityRedemptionInterface: public Interface
{
public:
};


// Size 0xc8 (Full Size[0x190] - InheritedSize[0xc8]
class CommodityRedemptionComponent: public ActorComponent
{
public:
	char                                                         pad0x8_X8OMU[0x8];                                 // 0xc8(0x8)
	struct FText                                                 RedeemTooltipText;                                 // 0xd0(0x38)
	char                                                         pad0x78_W0WTG[0x78];                               // 0x108(0x78)
	TArray<class Actor*>                                         PendingRedemptions;                                // 0x180(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CommoditySourceInterface: public Interface
{
public:
};


// Size 0x18 (Full Size[0xe0] - InheritedSize[0xc8]
class CommoditySourceComponent: public ActorComponent
{
public:
	char                                                         pad0x8_IE78D[0x8];                                 // 0xc8(0x8)
	struct FName                                                 NPCIdentifier;                                     // 0xd0(0x8)
	struct FName                                                 IslandIdentifier;                                  // 0xd8(0x8)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class CommodityTypeDataAsset: public DataAsset
{
public:
	TArray<struct CommodityTypeDataEntry>                        CommodityEntries;                                  // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CrateFillerInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class CrateFillerComponent: public ActorComponent
{
public:
	char                                                         pad0x10_W4NNJ[0x10];                               // 0xc8(0x10)
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class DeliverableCommodityRequirement: public DeliverableRequirementBase
{
public:
};


// Size 0x20 (Full Size[0x50] - InheritedSize[0x30]
class IsWieldedCommodityItemInDemandStatCondition: public TargetedStatCondition
{
public:
	byte                                                         CommodityDemand;                                   // 0x30(0x1)
	char                                                         pad0x1f_276GM[0x1f];                               // 0x31(0x1f)
};


// Size 0x18 (Full Size[0xe0] - InheritedSize[0xc8]
class SpecificItemsCrateFillerComponent: public ActorComponent
{
public:
	char                                                         pad0x8_7RYXL[0x8];                                 // 0xc8(0x8)
	TArray<struct StorageContainerNode>                          ItemsToFillCrateWith;                              // 0xd0(0x10)
};


// Size 0x8 (Full Size[0x38] - InheritedSize[0x30]
class WasWieldedCommodityItemBoughtAtDemandStatCondition: public TargetedStatCondition
{
public:
	byte                                                         CommodityDemand;                                   // 0x30(0x1)
	char                                                         pad0x7_T78GR[0x7];                                 // 0x31(0x7)
};


}