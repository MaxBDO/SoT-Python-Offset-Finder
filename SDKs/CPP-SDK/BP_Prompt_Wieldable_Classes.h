// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xe0
class BP_Prompt_WieldableItemZoom_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x118(0x8)
	class                                                        PromptAccessKey;                                   // 0x120(0x8)
	Struct ObjectMessagingHandle                                 WieldableItemEquipEvent;                           // 0x128(0x48)
	bool                                                         WieldingZoomableWieldable;                         // 0x170(0x1)
	bool                                                         StatCompleted;                                     // 0x171(0x1)
	Struct ObjectMessagingDispatcherHandle                       CharacterDispatcher;                               // 0x178(0x8)
	bool                                                         HasShown;                                          // 0x180(0x1)
	Struct PrioritisedPromptWithHandle                           Prompt;                                            // 0x188(0x68)
	class                                                        ShowForItemCategory;                               // 0x1f0(0x8)
};


// Size 0x0
class BP_Prompt_WieldableQuestbookZoom_C: public BP_Prompt_WieldableItemZoom_C
{
public:
};


// Size 0x0
class BP_Prompt_WieldableIMapZoom_C: public BP_Prompt_WieldableItemZoom_C
{
public:
};


}