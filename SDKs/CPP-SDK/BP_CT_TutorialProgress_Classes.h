// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class BP_CT_TutorialProgress_C: public Object
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x28(0x8)
	char                                                         pad0x196_L406A[0x196];                             // 0x30(0x196)
	Class AthenaPlayerController*                                AthenaPlayerController;                            // 0x30(0x8)
	TArray<class BP_CT_VoyageProgress_C*>                        TutorialVoyageProgressTrackers;                    // 0x38(0x10)
	BlueprintGeneratedClass BP_CT_VoyageProgress_C*              XMarksTutorialProgress;                            // 0x48(0x8)
	BlueprintGeneratedClass BP_CT_VoyageProgress_C*              RiddleTutorialProgress;                            // 0x50(0x8)
	BlueprintGeneratedClass BP_CT_VoyageProgress_C*              FaunaTutorialProgress;                             // 0x58(0x8)
	BlueprintGeneratedClass BP_CT_VoyageProgress_C*              CargoTutorialProgress;                             // 0x60(0x8)
	BlueprintGeneratedClass BP_CT_VoyageProgress_C*              BootyTutorialProgress;                             // 0x68(0x8)
};


}