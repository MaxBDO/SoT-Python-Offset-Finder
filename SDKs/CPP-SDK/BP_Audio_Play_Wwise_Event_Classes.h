// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x38
class BP_Audio_Play_Wwise_Event_C: public Actor
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x3c8(0x8)
	Class WwiseEmitterComponent*                                 BPAudioEvent;                                      // 0x3d0(0x8)
	TArray<class WwiseEvent*>                                    WwiseEvent;                                        // 0x3d8(0x10)
	struct FName                                                 Wwise Game Parameter;                              // 0x3e8(0x8)
	float                                                        Wwise Game Parameter Value;                        // 0x3f0(0x4)
	Class WwiseObjectPoolWrapper*                                Wwise Object Pool Wrapper;                         // 0x3f8(0x8)
};


}