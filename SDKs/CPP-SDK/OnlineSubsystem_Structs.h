// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xa0
struct InAppPurchaseProductInfo
{
public:
	Struct FString                                               Identifier;                                        // 0x0(0x10)
	Struct FString                                               TransactionIdentifier;                             // 0x10(0x10)
	Struct FString                                               DisplayName;                                       // 0x20(0x10)
	Struct FString                                               DisplayDescription;                                // 0x30(0x10)
	Struct FString                                               DisplayPrice;                                      // 0x40(0x10)
	Struct FString                                               CurrencyCode;                                      // 0x50(0x10)
	Struct FString                                               CurrencySymbol;                                    // 0x60(0x10)
	Struct FString                                               DecimalSeparator;                                  // 0x70(0x10)
	Struct FString                                               GroupingSeparator;                                 // 0x80(0x10)
	Struct FString                                               ReceiptData;                                       // 0x90(0x10)
};


// Size 0x20
struct InAppPurchaseRestoreInfo
{
public:
	Struct FString                                               Identifier;                                        // 0x0(0x10)
	Struct FString                                               ReceiptData;                                       // 0x10(0x10)
};


// Size 0x38
struct AchievementUpdatedEvent
{
public:
	Struct FString                                               AchievementId;                                     // 0x0(0x10)
	bool                                                         Successful;                                        // 0x14(0x1)
	char                                                         pad0x3_VJSMD[0x3];                                 // 0x15(0x3)
	Struct FString                                               Reason;                                            // 0x18(0x10)
	Struct FString                                               Platform;                                          // 0x28(0x10)
};


// Size 0x18
struct NamedInterfaceDef
{
public:
	struct FName                                                 InterfaceName;                                     // 0x0(0x8)
	Struct FString                                               InterfaceClassName;                                // 0x8(0x10)
};


// Size 0x10
struct NamedInterface
{
public:
	struct FName                                                 InterfaceName;                                     // 0x0(0x8)
	Class Object*                                                InterfaceObject;                                   // 0x8(0x8)
};


// Size 0x90
struct OnlineStoreCatalogItem
{
public:
	Struct FString                                               ProductId;                                         // 0x0(0x10)
	Struct FString                                               Title;                                             // 0x10(0x10)
	Struct FString                                               Description;                                       // 0x20(0x10)
	Struct FString                                               FormattedPrice;                                    // 0x30(0x10)
	Struct FString                                               FormattedBasePrice;                                // 0x40(0x10)
	bool                                                         IsOnSale;                                          // 0x50(0x1)
	char                                                         pad0x7_TGOHL[0x7];                                 // 0x51(0x7)
	Struct DateTime                                              SaleEndDate;                                       // 0x58(0x8)
	Struct FString                                               ImageUri;                                          // 0x60(0x10)
	Struct FString                                               CurrencyCode;                                      // 0x70(0x10)
	TArray<Str MetaTags>                                         MetaTags;                                          // 0x80(0x10)
};


// Size 0x18
struct InAppPurchaseProductRequest
{
public:
	Struct FString                                               ProductIdentifier;                                 // 0x0(0x10)
	bool                                                         bIsConsumable;                                     // 0x10(0x1)
};


}