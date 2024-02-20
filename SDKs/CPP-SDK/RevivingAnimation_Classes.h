#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "RevivingAnimation_Structs.h"


// Size 0x50 (Full Size[0x490] - InheritedSize[0x440]
class ReviveGhostAnimationInstance: public AnimInstance
{
public:
	char                                                         pad0x8_AKU06[0x8];                                 // 0x440(0x8)
	struct ReviveGhostAnimations                                 ReviveAnimations;                                  // 0x448(0x28)
	bool                                                         FullyInitialised;                                  // 0x470(0x1)
	bool                                                         FullyRevived;                                      // 0x471(0x1)
	bool                                                         FromSwimming;                                      // 0x472(0x1)
	char                                                         pad0x1d_GSA5J[0x1d];                               // 0x473(0x1d)
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class ReviveGhostAnimationDataAsset: public DataAsset
{
public:
	struct ReviveGhostAnimations                                 Animations;                                        // 0x28(0x28)
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class ReviveGhostAnimationData: public AnimationData
{
public:
	class ReviveGhostAnimationDataAsset*                         ReviveAnimationsDataAsset;                         // 0x28(0x8)
};


