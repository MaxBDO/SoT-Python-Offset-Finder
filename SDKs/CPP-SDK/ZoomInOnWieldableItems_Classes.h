// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ZoomedInOnWieldableItemActionStateId: public ActionStateId
{
public:
};


// Size 0x60 (Full Size[0x128] - InheritedSize[0xc8]
class ZoomInOnWieldableItemComponent: public ActorComponent
{
public:
	char                                                         pad0x8_D1WLQ[0x8];                                 // 0xc8(0x8)
	struct FName                                                 FeatureName;                                       // 0xd0(0x8)
	float                                                        ZoomedInFov;                                       // 0xd8(0x4)
	float                                                        FreelookPitch;                                     // 0xdc(0x4)
	float                                                        FreelookYaw;                                       // 0xe0(0x4)
	float                                                        FreelookOutInterpolationRate;                      // 0xe4(0x4)
	float                                                        LookSensitivityScaler;                             // 0xe8(0x4)
	char                                                         pad0x3c_Q4CRV[0x3c];                               // 0xec(0x3c)
};


}