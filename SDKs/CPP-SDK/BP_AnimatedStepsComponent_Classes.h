// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x3c (Full Size[0x12c] - InheritedSize[0xf0]
class BP_AnimatedStepsComponent_C: public AnimatedStepsComponent
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0xf0(0x8)
	char                                                         pad0x135_44RDF[0x135];                             // 0xf8(0x135)
	TArray<Float BoxDelays>                                      BoxDelays;                                         // 0xf8(0x10)
	TArray<Float BoxTargetZs>                                    BoxTargetZs;                                       // 0x108(0x10)
	Class CurveFloat*                                            AnimCurve;                                         // 0x118(0x8)
	float                                                        MovementTimer;                                     // 0x120(0x4)
	float                                                        AnimationDuration;                                 // 0x124(0x4)
	float                                                        AnimationStartDelay;                               // 0x128(0x4)
};


}