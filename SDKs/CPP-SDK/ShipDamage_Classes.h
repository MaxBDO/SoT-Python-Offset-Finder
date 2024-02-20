#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "ShipDamage_Structs.h"


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ShipDamagerType: public DamagerType
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class LandscapeDamagerType: public DamagerType
{
public:
};


// Size 0x8 (Full Size[0xd0] - InheritedSize[0xc8]
class ShipPartsDamageTrackerComponent: public ActorComponent
{
public:
	int                                                          IsAnyShipPartDamaged;                              // 0xc8(0x4)
	char                                                         pad0x4_XE4MP[0x4];                                 // 0xcc(0x4)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class StrainDamagerType: public DamagerType
{
public:
};


// Size 0x20 (Full Size[0x3e8] - InheritedSize[0x3c8]
class GenericShipDamageablePart: public Actor
{
public:
	char                                                         pad0x8_03YFQ[0x8];                                 // 0x3c8(0x8)
	class ShipDamageableComponent*                               ShipDamageableComponent;                           // 0x3d0(0x8)
	char                                                         pad0x10_WB0FH[0x10];                               // 0x3d8(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class StormDamageParamsHandlerInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ShipDamagePartInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class DamageablePartsInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class HullDamageInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class HullDamageProviderInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class LevelOfDamagePropertiesDataAsset: public DataAsset
{
public:
	TArray<struct LevelOfDamageProperties>                       LevelOfDamageProperties;                           // 0x28(0x10)
};


// Size 0x10 (Full Size[0x48] - InheritedSize[0x38]
class ShipRestorationSettings: public DeveloperSettings
{
public:
	float                                                        MaxDistanceSquared;                                // 0x38(0x4)
	char                                                         pad0x4_WJVZT[0x4];                                 // 0x3c(0x4)
	char                                                         pad0x8_O5J61[0x8];                                 // 0x40(0x8)
};


