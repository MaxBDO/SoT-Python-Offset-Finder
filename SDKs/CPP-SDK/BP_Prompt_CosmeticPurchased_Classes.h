// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x218 (Full Size[0x350] - InheritedSize[0x138]
class BP_Prompt_CosmeticPurchased_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x138(0x8)
	char                                                         pad0xec_T03HI[0xec];                               // 0x140(0xec)
	Struct ObjectMessagingHandle                                 Handle_OfferPurchasedEvent;                        // 0x140(0x58)
	Struct ObjectMessagingHandle                                 Handle_ShopClosedEvent;                            // 0x198(0x58)
	Struct ObjectMessagingHandle                                 Handle_PlayerEntitlementUpdatedEvent;              // 0x1f0(0x58)
	Struct PrioritisedPromptWithHandle                           Prompt_CosmeticPurchased;                          // 0x248(0x68)
	Struct PrioritisedPromptWithHandle                           Prompt_VisitCustomizationChest;                    // 0x2b0(0x68)
	class                                                        AccessKey;                                         // 0x318(0x8)
	TArray<class Class*>                                         CategoryTypes;                                     // 0x320(0x10)
	TArray<Str PurchasedEntitlementIds>                          PurchasedEntitlementIds;                           // 0x330(0x10)
	float                                                        DelayUntilPromptDisplays;                          // 0x340(0x4)
	float                                                        DelayBetweenPrompts;                               // 0x344(0x4)
	float                                                        PromptDisplayDuration;                             // 0x348(0x4)
	bool                                                         CosmeticPurchased;                                 // 0x34c(0x1)
	bool                                                         PromptInfoSet;                                     // 0x34d(0x1)
	bool                                                         DisplayingPrompts;                                 // 0x34e(0x1)
	bool                                                         ProcessingPurchase;                                // 0x34f(0x1)
};


}