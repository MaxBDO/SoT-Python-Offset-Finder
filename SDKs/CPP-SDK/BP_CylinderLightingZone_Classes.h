#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x45 (Full Size[0x40d] - InheritedSize[0x3c8]
class BP_CylinderLightingZone_C: public Actor
{
public:
	struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x3c8(0x8)
	class CapsuleComponent*                                      InnerCapsule;                                      // 0x3d0(0x8)
	class CapsuleComponent*                                      OuterCapsule;                                      // 0x3d8(0x8)
	class LightingZoneComponent*                                 LightingZone;                                      // 0x3e0(0x8)
	class SceneComponent*                                        DefaultSceneRoot;                                  // 0x3e8(0x8)
	float                                                        Outer Radius;                                      // 0x3f0(0x4)
	float                                                        Outer Half Height;                                 // 0x3f4(0x4)
	float                                                        Inner Radius;                                      // 0x3f8(0x4)
	float                                                        Inner Half Height;                                 // 0x3fc(0x4)
	float                                                        Weight;                                            // 0x400(0x4)
	int                                                          Priority Layer;                                    // 0x404(0x4)
	int                                                          Lighting Set;                                      // 0x408(0x4)
	bool                                                         IsUnderwaterZone;                                  // 0x40c(0x1)
};


