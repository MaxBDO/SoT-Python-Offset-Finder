// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x138 (Full Size[0x270] - InheritedSize[0x138]
class BP_Prompt_RepairShip_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x138(0x8)
	char                                                         pad0x4c_FLWYJ[0x4c];                               // 0x140(0x4c)
	bool                                                         State_ShipDamaged;                                 // 0x140(0x1)
	char                                                         pad0x7_N80EU[0x7];                                 // 0x141(0x7)
	Struct ObjectMessagingHandle                                 Handle_OnShipDamaged;                              // 0x148(0x58)
	bool                                                         State_Complete;                                    // 0x1a0(0x1)
	char                                                         pad0x7_5R647[0x7];                                 // 0x1a1(0x7)
	Struct PrioritisedPromptWithHandle                           Prompt_RepairShip;                                 // 0x1a8(0x68)
	Struct ObjectMessagingHandle                                 Handle_CurrentShipChanged;                         // 0x210(0x58)
	Class Ship*                                                  CurrentShip;                                       // 0x268(0x8)
};


}