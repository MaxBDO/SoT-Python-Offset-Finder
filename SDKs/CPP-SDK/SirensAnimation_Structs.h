#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x48
struct SirenAnimationLocomotion
{
public:
	class AnimSequence*                                          TreadwaterSequence;                                // 0x0(0x8)
	class AnimSequence*                                          AggressiveTreadwaterSequence;                      // 0x8(0x8)
	class BlendSpace1D*                                          LongwaysLocomotionBlendSpace;                      // 0x10(0x8)
	class BlendSpace1D*                                          AggressiveLongwaysLocomotionBlendSpace;            // 0x18(0x8)
	class BlendSpace1D*                                          AlternativeAggressiveLongwaysLocomotionBlendSpace; // 0x20(0x8)
	class BlendSpace1D*                                          LocomotionTurningAdditiveBlendSpace;               // 0x28(0x8)
	class BlendSpace1D*                                          LocomotionSpinningAdditiveBlendSpace;              // 0x30(0x8)
	class AnimSequence*                                          DivingFromSurfaceSequence;                         // 0x38(0x8)
	class AnimSequence*                                          EmergingToSurfaceSequence;                         // 0x40(0x8)
};


// Size 0x60
struct SirenAnimationDataStructure
{
public:
	struct SirenAnimationLocomotion                              LocomotionAnims;                                   // 0x0(0x48)
	class CustomAnimationMontageDefinitionListingDataAsset*      FullBodyMontageListings;                           // 0x48(0x8)
	class AthenaAnimationWeaponDataAsset*                        AttackAnimationAsset;                              // 0x50(0x8)
	struct HitReactionAnimationData                              HitReactAnimationData;                             // 0x58(0x8)
};


