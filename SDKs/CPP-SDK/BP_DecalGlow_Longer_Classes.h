// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x3d (Full Size[0x40d] - InheritedSize[0x3d0]
class BP_DecalGlow_Longer_C: public LandmarkReactionActor
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x3d0(0x8)
	Class WwiseEmitterComponent*                                 WwiseEmitter;                                      // 0x3d8(0x8)
	Class SceneComponent*                                        DefaultSceneRoot;                                  // 0x3e0(0x8)
	TArray<class MaterialInstanceDynamic*>                       DecalMaterials;                                    // 0x3e8(0x10)
	float                                                        Reveal Duration;                                   // 0x3f8(0x4)
	char                                                         pad0x4_7NLN9[0x4];                                 // 0x3fc(0x4)
	BlueprintGeneratedClass BP_StepsTrigger_C*                   StepsTriggerActor;                                 // 0x400(0x8)
	float                                                        StartTime;                                         // 0x408(0x4)
	bool                                                         CollectedDecals;                                   // 0x40c(0x1)
};


}