// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xd8 (Full Size[0x210] - InheritedSize[0x138]
class BP_Prompt_ProposeVoyage_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x138(0x8)
	char                                                         pad0x4c_5M3LZ[0x4c];                               // 0x140(0x4c)
	bool                                                         State_OfferPurchased;                              // 0x140(0x1)
	char                                                         pad0x7_SYS6S[0x7];                                 // 0x141(0x7)
	Struct ObjectMessagingHandle                                 Handle_OnOfferPurchased;                           // 0x148(0x58)
	bool                                                         State_Complete;                                    // 0x1a0(0x1)
	char                                                         pad0x7_K60UX[0x7];                                 // 0x1a1(0x7)
	Struct PrioritisedPromptWithHandle                           Prompt_ProposeVoyage;                              // 0x1a8(0x68)
};


}