// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x34 (Full Size[0x104] - InheritedSize[0xd0]
class BP_ParallelStep_LostShipments_SpawnClues_C: public TaleQuestParallelForeachStep
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0xd0(0x8)
	char                                                         pad0xb5_F89X1[0xb5];                               // 0xd8(0xb5)
	TArray<struct ClueSites>                                     ClueSites;                                         // 0xd8(0x10)
	TArray<class Class*>                                         AllowedClueTypes;                                  // 0xe8(0x10)
	Class CustomShipwreck*                                       Shipwreck;                                         // 0xf8(0x8)
	int                                                          Difficulty;                                        // 0x100(0x4)
};


}