// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xa0 (Full Size[0x1d8] - InheritedSize[0x138]
class BP_Prompt_EmissaryActivated_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x138(0x8)
	char                                                         pad0x4c_SEUO8[0x4c];                               // 0x140(0x4c)
	Struct ObjectMessagingHandle                                 Handle_EmissaryCompanyChangedEvent;                // 0x140(0x58)
	struct FName                                                 CompanyName;                                       // 0x198(0x8)
	struct FName                                                 ExpectedCompanyName;                               // 0x1a0(0x8)
	TArray<struct Prompts>                                       Prompts;                                           // 0x1a8(0x10)
	bool                                                         PromptSurfacedThisSession;                         // 0x1b8(0x1)
	char                                                         pad0x7_9AOQO[0x7];                                 // 0x1b9(0x7)
	class                                                        PromptAccessKey;                                   // 0x1c0(0x8)
	int                                                          PromptIndex;                                       // 0x1c8(0x4)
	int                                                          NumberOfPrompts;                                   // 0x1cc(0x4)
	float                                                        InitialDelay;                                      // 0x1d0(0x4)
	float                                                        ShowPromptDuration;                                // 0x1d4(0x4)
};


}