#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0xe8 (Full Size[0x220] - InheritedSize[0x138]
class BP_MerchantCrate_PromptCoordinator_C: public BP_PromptCoordinator_Base_C
{
public:
	struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x138(0x8)
	char                                                         pad0xba_A0WCL[0xba];                               // 0x140(0xba)
	bool                                                         HasMountedItemInCrate;                             // 0x140(0x1)
	char                                                         pad0x7_1UF00[0x7];                                 // 0x141(0x7)
	struct ObjectMessagingHandle                                 ItemMountedEventHandle;                            // 0x148(0x58)
	struct PrioritisedPromptWithHandle                           Prompt;                                            // 0x1a0(0x70)
	class UClass*                                                DesiredMountedItemType;                            // 0x210(0x8)
	class UClass*                                                PromptAccessKey;                                   // 0x218(0x8)
};


