#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0xdc (Full Size[0x214] - InheritedSize[0x138]
class BP_PromptCoordinator_FindAmmo_C: public BP_PromptCoordinator_Base_C
{
public:
	struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x138(0x8)
	char                                                         pad0xba_6VW28[0xba];                               // 0x140(0xba)
	struct ObjectMessagingHandle                                 AmmoChangedEventHandle;                            // 0x140(0x58)
	bool                                                         HasAmmoChanged;                                    // 0x198(0x1)
	bool                                                         HasShown;                                          // 0x199(0x1)
	char                                                         pad0x6_AK7I4[0x6];                                 // 0x19a(0x6)
	struct PrioritisedPromptWithHandle                           PromptToShow;                                      // 0x1a0(0x70)
	float                                                        PromptDuration;                                    // 0x210(0x4)
};


