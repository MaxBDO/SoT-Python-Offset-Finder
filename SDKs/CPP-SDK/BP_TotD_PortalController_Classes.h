// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x68 (Full Size[0x430] - InheritedSize[0x3c8]
class BP_TotD_PortalController_C: public Actor
{
public:
	struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x3c8(0x8)
	class AnimNotifyWwiseEmitterComponent*                       AnimNotifyWwiseEmitter;                            // 0x3d0(0x8)
	class SceneComponent*                                        DefaultSceneRoot;                                  // 0x3d8(0x8)
	float                                                        Timeline_0_CloudVisibility_E720F06846CDD3DCC686A1B40E94C68C; // 0x3e0(0x4)
	float                                                        Timeline_0_PortalSwirlVisibility_E720F06846CDD3DCC686A1B40E94C68C; // 0x3e4(0x4)
	float                                                        Timeline_0_CrackVisibility_E720F06846CDD3DCC686A1B40E94C68C; // 0x3e8(0x4)
	float                                                        Timeline_0_LightScale_E720F06846CDD3DCC686A1B40E94C68C; // 0x3ec(0x4)
	float                                                        Timeline_0_PortalOpen_E720F06846CDD3DCC686A1B40E94C68C; // 0x3f0(0x4)
	byte                                                         Timeline_0__Direction_E720F06846CDD3DCC686A1B40E94C68C; // 0x3f4(0x1)
	char                                                         pad0x3_9V28E[0x3];                                 // 0x3f5(0x3)
	class TimelineComponent*                                     Timeline;                                          // 0x3f8(0x8)
	TArray<class MaterialInstanceDynamic*>                       DynamicMaterials;                                  // 0x400(0x10)
	TArray<class PointLightComponent*>                           Lights;                                            // 0x410(0x10)
	float                                                        LightMaxScale;                                     // 0x420(0x4)
	float                                                        GlowMaxScale;                                      // 0x424(0x4)
	class Texture2D*                                             PortalMask;                                        // 0x428(0x8)
};


}