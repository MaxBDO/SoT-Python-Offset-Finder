// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x24 (Full Size[0x3ec] - InheritedSize[0x3c8]
class BP_InvisibleMechanismTrigger_C: public Actor
{
public:
	struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x3c8(0x8)
	class MechanismTriggerComponent*                             MechanismTrigger;                                  // 0x3d0(0x8)
	class SceneComponent*                                        DefaultSceneRoot;                                  // 0x3d8(0x8)
	bool                                                         AutoDeactivate;                                    // 0x3e0(0x1)
	char                                                         pad0x3_9W5AS[0x3];                                 // 0x3e1(0x3)
	float                                                        AutoDeactivateDelay;                               // 0x3e4(0x4)
	struct TimerHandle                                           DeactivateTimerHandle;                             // 0x3e8(0x4)
};


}