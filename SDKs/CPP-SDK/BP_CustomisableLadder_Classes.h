// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x88
class BP_CustomisableLadder_C: public Ladder
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x5b0(0x8)
	Class InteractableComponent*                                 InteractableComponent;                             // 0x5b8(0x8)
	Class StaticMeshComponent*                                   Ladder Cap;                                        // 0x5c0(0x8)
	Struct CustomisableLadderDefinitionStruct                    LadderCustomisationDefinition;                     // 0x5c8(0x20)
	TArray<Struct InteractOffset>                                OffTopSplineComponentPositions;                    // 0x5e8(0x10)
	TArray<Struct Vector>                                        OnTopSplineComponentPositions;                     // 0x5f8(0x10)
	int                                                          Steps;                                             // 0x608(0x4)
	Class MaterialInterface*                                     Material Override;                                 // 0x610(0x8)
	float                                                        StepHeight;                                        // 0x618(0x4)
	Struct Vector                                                Interactable Position;                             // 0x61c(0xc)
	Struct Vector                                                Interactable Scale;                                // 0x628(0xc)
	int                                                          Minimum Steps;                                     // 0x634(0x4)
};


}