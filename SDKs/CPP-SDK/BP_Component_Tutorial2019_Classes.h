#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0xb0 (Full Size[0x188] - InheritedSize[0xd8]
class BP_Component_Tutorial2019_C: public Tutorial2019ContextualDelegatingComponent
{
public:
	struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0xd8(0x8)
	char                                                         pad0x115_KE9O8[0x115];                             // 0xe0(0x115)
	TArray<Class>                                                GoldHoarders;                                      // 0xe0(0x10)
	TArray<struct Vector>                                        GoldHoarderLocations;                              // 0xf0(0x10)
	blueprintgeneratedclass BP_Prompt_CTPurchaseVoyageSequence_C* GoToVendorPromptObject;                            // 0x100(0x8)
	TArray<Class>                                                NPCBlacklist;                                      // 0x108(0x10)
	TArray<struct Name>                                          OutpostNames;                                      // 0x118(0x10)
	bool                                                         GoldHoarderOnRepPrerequiste;                       // 0x128(0x1)
	char                                                         pad0x7_S8L8D[0x7];                                 // 0x129(0x7)
	struct ObjectMessagingHandle                                 Handle_PlayerFinishedSpawning;                     // 0x130(0x58)
};


