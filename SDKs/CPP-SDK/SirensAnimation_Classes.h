// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x60 (Full Size[0x88] - InheritedSize[0x28]
class SirenAnimationData: public AnimationData
{
public:
	Struct SirenAnimationDataStructure                           SirenAnimationData;                                // 0x28(0x60)
};


// Size 0x2d0 (Full Size[0x710] - InheritedSize[0x440]
class SirenAnimationInstance: public AnimInstance
{
public:
	char                                                         pad0x18_T4LIU[0x18];                               // 0x440(0x18)
	struct FName                                                 PropAttachmentSocket;                              // 0x458(0x8)
	Struct SirenAnimationDataStructure                           SirenAnimationData;                                // 0x460(0x60)
	Struct AthenaAnimationWeapon                                 AttackAnimations;                                  // 0x4c0(0xb8)
	float                                                        ForwardSpeed;                                      // 0x578(0x4)
	char                                                         pad0xc_A7MMT[0xc];                                 // 0x57c(0xc)
	float                                                        TiltDirectionAngleDegrees;                         // 0x588(0x4)
	float                                                        TiltAngleAlpha;                                    // 0x58c(0x4)
	float                                                        SpinAngleDegrees;                                  // 0x590(0x4)
	float                                                        MaxTiltAngleRepresentedByAdditiveBendAnimations;   // 0x594(0x4)
	bool                                                         UpperBodyOverlayActive;                            // 0x598(0x1)
	bool                                                         SwimmingLongways;                                  // 0x599(0x1)
	bool                                                         UseAggressiveAnimations;                           // 0x59a(0x1)
	bool                                                         UseAlternativeAggressiveAnimation;                 // 0x59b(0x1)
	char                                                         pad0x4_BXCQ2[0x4];                                 // 0x59c(0x4)
	TArray<class Class*>                                         StrategiesForAggressiveAnimations;                 // 0x5a0(0x10)
	Struct FloatRange                                            TimeBeforeAlternativeAggressiveAnimationToggleFlips; // 0x5b0(0x10)
	char                                                         pad0x8_ZG6ZV[0x8];                                 // 0x5c0(0x8)
	bool                                                         AnimationsLoaded;                                  // 0x5c8(0x1)
	char                                                         pad0x3_HZI92[0x3];                                 // 0x5c9(0x3)
	float                                                        AimUpAlpha;                                        // 0x5cc(0x4)
	float                                                        AimDownAlpha;                                      // 0x5d0(0x4)
	char                                                         pad0x4_7RML1[0x4];                                 // 0x5d4(0x4)
	Struct CustomAnimationMontageStateMachine                    FullBodyStateMachine;                              // 0x5d8(0xd8)
	Struct HitReactionAnimationState                             HitReacts;                                         // 0x6b0(0x28)
	char                                                         pad0x38_R8XU7[0x38];                               // 0x6d8(0x38)
};


}