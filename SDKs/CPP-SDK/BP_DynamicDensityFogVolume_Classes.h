// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x61 (Full Size[0x439] - InheritedSize[0x3d8]
class BP_DynamicDensityFogVolume_C: public FogVolume
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x3d8(0x8)
	float                                                        StateBlend_BlendAmount_F79089CA4C773743F03F4C978EB7C986; // 0x3e0(0x4)
	byte                                                         StateBlend__Direction_F79089CA4C773743F03F4C978EB7C986; // 0x3e4(0x1)
	char                                                         pad0x3_5UFN3[0x3];                                 // 0x3e5(0x3)
	Class TimelineComponent*                                     StateBlend;                                        // 0x3e8(0x8)
	Class MaterialInstanceDynamic*                               UpdateMaterial;                                    // 0x3f0(0x8)
	Class CanvasRenderTarget2D*                                  Canvas;                                            // 0x3f8(0x8)
	int                                                          CurrentState;                                      // 0x400(0x4)
	int                                                          NextState;                                         // 0x404(0x4)
	TArray<class Texture2D*>                                     StateTextures;                                     // 0x408(0x10)
	int                                                          Width;                                             // 0x418(0x4)
	int                                                          Height;                                            // 0x41c(0x4)
	bool                                                         UseStateParameters;                                // 0x420(0x1)
	char                                                         pad0x7_PS9CN[0x7];                                 // 0x421(0x7)
	TArray<struct StateParams>                                   StateParams;                                       // 0x428(0x10)
	bool                                                         AlignMaskToActor;                                  // 0x438(0x1)
};


}