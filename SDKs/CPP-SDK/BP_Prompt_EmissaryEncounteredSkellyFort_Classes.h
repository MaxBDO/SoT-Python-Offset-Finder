// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xa0 (Full Size[0x1d8] - InheritedSize[0x138]
class BP_Prompt_EmissaryEncounteredSkellyFort_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x138(0x8)
	char                                                         pad0x4c_X0FZ6[0x4c];                               // 0x140(0x4c)
	Struct ObjectMessagingHandle                                 Handle_EmissaryEncounteredSkellyFort;              // 0x140(0x58)
	struct FName                                                 CompanyName;                                       // 0x198(0x8)
	bool                                                         SurfacedThisSession;                               // 0x1a0(0x1)
	char                                                         pad0x3_NMC7A[0x3];                                 // 0x1a1(0x3)
	struct FName                                                 ExpectedCompanyName;                               // 0x1a4(0x8)
	char                                                         pad0x4_146LC[0x4];                                 // 0x1ac(0x4)
	TArray<struct Prompts>                                       Prompts;                                           // 0x1b0(0x10)
	class                                                        PromptAccessKey;                                   // 0x1c0(0x8)
	int                                                          PromptIndex;                                       // 0x1c8(0x4)
	int                                                          NumberOfPrompts;                                   // 0x1cc(0x4)
	float                                                        InitialDelay;                                      // 0x1d0(0x4)
	float                                                        ShowPromptDuration;                                // 0x1d4(0x4)
};


}