// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x140 (Full Size[0x278] - InheritedSize[0x138]
class BP_Prompt_QuickStorageTransfer_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x138(0x8)
	char                                                         pad0x4c_71KKO[0x4c];                               // 0x140(0x4c)
	bool                                                         State_Complete;                                    // 0x140(0x1)
	bool                                                         State_ShowPrompt;                                  // 0x141(0x1)
	char                                                         pad0x6_4R2Z3[0x6];                                 // 0x142(0x6)
	Struct PrioritisedPromptWithHandle                           Prompt_QuickStorageTransfer_Take;                  // 0x148(0x68)
	Struct PrioritisedPromptWithHandle                           Prompt_QuickStorageTransfer_Add;                   // 0x1b0(0x68)
	bool                                                         State_ShowAdd;                                     // 0x218(0x1)
	char                                                         pad0x7_VGFA0[0x7];                                 // 0x219(0x7)
	Struct ObjectMessagingHandle                                 Handle_ObjectWielded;                              // 0x220(0x58)
};


}