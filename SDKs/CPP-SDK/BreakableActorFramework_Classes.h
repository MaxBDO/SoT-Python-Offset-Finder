// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x100 (Full Size[0x1c8] - InheritedSize[0xc8]
class BreakableActorAudioComponent: public ActorComponent
{
public:
	bool                                                         UseParentEmitter;                                  // 0xc8(0x1)
	char                                                         pad0x7_EI4Z0[0x7];                                 // 0xc9(0x7)
	Class WwiseObjectPoolWrapper*                                AudioPool;                                         // 0xd0(0x8)
	Class WwiseEvent*                                            PlayMusicEvent;                                    // 0xd8(0x8)
	Class WwiseEvent*                                            StopMusicEvent;                                    // 0xe0(0x8)
	Class WwiseEvent*                                            PlayDamagedEvent;                                  // 0xe8(0x8)
	Class WwiseEvent*                                            PlayDestroyedEvent;                                // 0xf0(0x8)
	char                                                         pad0xd0_DDGJZ[0xd0];                               // 0xf8(0xd0)
};


// Size 0x190 (Full Size[0x558] - InheritedSize[0x3c8]
class BreakableActorBase: public Actor
{
public:
	char                                                         pad0x20_P4OVY[0x20];                               // 0x3c8(0x20)
	float                                                        DespawnDelay;                                      // 0x3e8(0x4)
	char                                                         pad0x4_75JB8[0x4];                                 // 0x3ec(0x4)
	Class PrimitiveComponent*                                    ThirdPersonMesh;                                   // 0x410(0x8)
	Class HealthComponent*                                       HealthComponent;                                   // 0x418(0x8)
	Class BreakableActorAudioComponent*                          AudioComponent;                                    // 0x420(0x8)
	Class BreakableActorVfxComponent*                            VFXComponent;                                      // 0x428(0x8)
	Class BreakableActorDynamicMaterialComponent*                DamageMaterialComponent;                           // 0x430(0x8)
	Class ActorDamageableComponent*                              DamageableComponent;                               // 0x438(0x8)
	char                                                         pad0x118_B2S6U[0x118];                             // 0x440(0x118)
};


// Size 0x0 (Full Size[0x558] - InheritedSize[0x558]
class BreakableSarcophagus: public BreakableActorBase
{
public:
};


// Size 0x158 (Full Size[0x220] - InheritedSize[0xc8]
class BreakableActorDynamicMaterialComponent: public ActorComponent
{
public:
	char                                                         pad0x4_MHP89[0x4];                                 // 0xc8(0x4)
	struct FName                                                 MagicColourPropertyName;                           // 0xcc(0x8)
	struct FName                                                 DamageLevelPropertyName;                           // 0xd4(0x8)
	struct FName                                                 TimeBasedPropertyName;                             // 0xdc(0x8)
	struct FName                                                 HitPositionPropertyName;                           // 0xe4(0x8)
	struct FName                                                 CollapseStartTimePropertyName;                     // 0xec(0x8)
	char                                                         pad0x4_HL5OM[0x4];                                 // 0xf4(0x4)
	Class PrimitiveComponent*                                    TargetMesh;                                        // 0xf8(0x8)
	TArray<class MaterialInstanceDynamic*>                       DynamicMaterials;                                  // 0x100(0x10)
	Class BreakableActorBase*                                    BreakableActor;                                    // 0x110(0x8)
	char                                                         pad0x108_T0YTF[0x108];                             // 0x118(0x108)
};


// Size 0x80 (Full Size[0x4f0] - InheritedSize[0x470]
class BreakableActorItemSpawnComponent: public ItemSpawnComponent
{
public:
};


// Size 0xf8 (Full Size[0x1c0] - InheritedSize[0xc8]
class BreakableActorVfxComponent: public ActorComponent
{
public:
	Struct Color                                                 VFXTintColour;                                     // 0xc8(0x4)
	char                                                         pad0x4_9UW51[0x4];                                 // 0xcc(0x4)
	Class Object*                                                DamagedParticleSystem;                             // 0xd0(0x8)
	Class Object*                                                DestroyedParticleSystem;                           // 0xd8(0x8)
	int                                                          GlowMaterialIndex;                                 // 0xe0(0x4)
	struct FName                                                 GlowMaterialPropertyName;                          // 0xe4(0x8)
	float                                                        GlowMaterialScale;                                 // 0xec(0x4)
	float                                                        GlowMaterialBias;                                  // 0xf0(0x4)
	float                                                        GlowUpdateSpeed;                                   // 0xf4(0x4)
	Class BreakableActorBase*                                    BreakableActor;                                    // 0xf8(0x8)
	Class MaterialInstanceDynamic*                               GlowMaterial;                                      // 0x100(0x8)
	char                                                         pad0xb8_ESQD0[0xb8];                               // 0x108(0xb8)
};


}