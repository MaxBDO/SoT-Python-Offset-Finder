#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x40 (Full Size[0x408] - InheritedSize[0x3c8]
class BP_Placement_HeightDrop_C: public Actor
{
public:
	class SceneComponent*                                        DefaultSceneRoot;                                  // 0x3c8(0x8)
	bool                                                         Drop Components to Floor;                          // 0x3d0(0x1)
	char                                                         pad0x3_4GUH5[0x3];                                 // 0x3d1(0x3)
	float                                                        Vertical Displacement;                             // 0x3d4(0x4)
	bool                                                         Match Surface Orientation;                         // 0x3d8(0x1)
	char                                                         pad0x3_8YOW7[0x3];                                 // 0x3d9(0x3)
	float                                                        Maximum Deviation Angle;                           // 0x3dc(0x4)
	TArray<class SceneComponent*>                                ComponentsToDrop;                                  // 0x3e0(0x10)
	bool                                                         Check For Movable Components;                      // 0x3f0(0x1)
	bool                                                         CreateParentBoundsVolume;                          // 0x3f1(0x1)
	char                                                         pad0x2_LXZE2[0x2];                                 // 0x3f2(0x2)
	float                                                        ParentBoundsPadding;                               // 0x3f4(0x4)
	TArray<class PhysicalMaterial*>                              Physical Materials To Ignore;                      // 0x3f8(0x10)
};


