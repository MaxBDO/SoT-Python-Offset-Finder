// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x1a9 (Full Size[0x2e1] - InheritedSize[0x138]
class BP_Prompt_SpeakingTrumpet_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x138(0x8)
	char                                                         pad0x4c_C6IK6[0x4c];                               // 0x140(0x4c)
	Struct ObjectMessagingHandle                                 WieldableItemUseEvent;                             // 0x140(0x58)
	class                                                        NotificationInputId;                               // 0x198(0x8)
	class                                                        SpeakingTrumpetPromptAccessKey;                    // 0x1a0(0x8)
	Struct ObjectMessagingHandle                                 WieldableItemEquipEvent;                           // 0x1a8(0x58)
	Struct PrioritisedPromptWithHandle                           Prompt;                                            // 0x200(0x68)
	bool                                                         WieldingTrumpet;                                   // 0x268(0x1)
	char                                                         pad0x7_GV0QL[0x7];                                 // 0x269(0x7)
	Struct ObjectMessagingHandle                                 WieldableItemStow;                                 // 0x270(0x58)
	class                                                        In;                                                // 0x2c8(0x8)
	bool                                                         UsingSecondaryInput;                               // 0x2d0(0x1)
	bool                                                         StatCompleted;                                     // 0x2d1(0x1)
	char                                                         pad0x6_84UTT[0x6];                                 // 0x2d2(0x6)
	Struct ObjectMessagingDispatcherHandle                       CharacterDispatcher;                               // 0x2d8(0x8)
	bool                                                         HasShown;                                          // 0x2e0(0x1)
};


}