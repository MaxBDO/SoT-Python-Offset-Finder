// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
struct MeleeAttackIdWeights
{
public:
	class UClass*                                                MeleeAttackType;                                   // 0x0(0x8)
	float                                                        Weight;                                            // 0x8(0x4)
	char                                                         pad0x4_CC4HV[0x4];                                 // 0xc(0x4)
};


// Size 0x18
struct AshenLordFireShroudParams
{
public:
	class UClass*                                                FireShroudZoneClass;                               // 0x0(0x8)
	struct Vector                                                FireShroudCollisionVolume;                         // 0x8(0xc)
	char                                                         pad0x4_SI5NU[0x4];                                 // 0x14(0x4)
};


// Size 0x20
struct AshenLordFireShroud
{
public:
	class StatusEffectOverlapZone*                               FireShroudOverlapZone;                             // 0x0(0x8)
	struct AshenLordFireShroudParams                             Params;                                            // 0x8(0x18)
};


}