// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xa8 (Full Size[0x928] - InheritedSize[0x880]
class BP_AggressiveGhostShip_C: public AggressiveGhostShip
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x880(0x8)
	Class WwiseEmitterComponent*                                 WwiseEmitter;                                      // 0x888(0x8)
	Class TetherCustomisationComponent*                          TetherCustomisation;                               // 0x890(0x8)
	Class ActorDamageableComponent*                              ActorDamageable;                                   // 0x898(0x8)
	Class StaticMeshComponent*                                   ShroudMask;                                        // 0x8a0(0x8)
	Class StaticMeshComponent*                                   IntersectionEffectMesh;                            // 0x8a8(0x8)
	Class StaticMeshComponent*                                   shroud;                                            // 0x8b0(0x8)
	Class StaticMeshComponent*                                   StaticMesh;                                        // 0x8b8(0x8)
	Class BoxComponent*                                          Collision;                                         // 0x8c0(0x8)
	struct FName                                                 IgnoreForFadingTag;                                // 0x8c8(0x8)
	float                                                        DeathFadeDuration;                                 // 0x8d0(0x4)
	float                                                        ImpactFadeDuration;                                // 0x8d4(0x4)
	TArray<struct Impacts>                                       Impacts;                                           // 0x8d8(0x10)
	TArray<struct FName>                                         ImpactDataMaterialParameterNames;                  // 0x8e8(0x10)
	TArray<struct PersistentDamageLocations>                     PersistentDamageLocations;                         // 0x8f8(0x10)
	TArray<struct FName>                                         PersistentDamageLocationsParameterNames;           // 0x908(0x10)
	float                                                        PersistentDamageScale;                             // 0x918(0x4)
	float                                                        EntryPortalDistanceOffset;                         // 0x91c(0x4)
	Class MaterialInstanceDynamic*                               IntersectionDynamicMaterial;                       // 0x920(0x8)
};


}