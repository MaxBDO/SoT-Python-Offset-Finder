// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x338 (Full Size[0x790] - InheritedSize[0x458]
class BP_Shroudbreaker_OnShip_C: public ShroudBreakerOnShip
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x458(0x8)
	Class ParticleSystemComponent*                               vfx_ShroudBreaker_OnShip_stage4;                   // 0x460(0x8)
	Class StaticMeshComponent*                                   ShieldPulseMesh;                                   // 0x468(0x8)
	Class ParticleSystemComponent*                               vfx_ShroudBreaker_OnShip_stage3;                   // 0x470(0x8)
	Class ParticleSystemComponent*                               vfx_shroudbreaker_ember;                           // 0x478(0x8)
	Class ParticleSystemComponent*                               vfx_shroudbreaker_shipTip;                         // 0x480(0x8)
	Class StaticMeshComponent*                                   ShieldMesh;                                        // 0x488(0x8)
	Class WwiseEmitterComponent*                                 WwiseEmitter;                                      // 0x490(0x8)
	Class ParticleSystemComponent*                               vfx_ShroudBreaker_disappear_smoke_cloud;           // 0x498(0x8)
	Class ParticleSystemComponent*                               vfx_ShroudBreaker_OnShip_stage1;                   // 0x4a0(0x8)
	Class MusicZoneComponent*                                    MusicZone;                                         // 0x4a8(0x8)
	Class StaticMeshComponent*                                   StaticMesh;                                        // 0x4b0(0x8)
	Struct ObjectMessagingHandle                                 ActivateShroudbreakerHandle;                       // 0x4b8(0x58)
	Struct ObjectMessagingHandle                                 DeactivateShroudbreakerHandle;                     // 0x510(0x58)
	Struct ObjectMessagingHandle                                 ActivateEffectsHandle;                             // 0x568(0x58)
	Struct ObjectMessagingHandle                                 DeactivateEffectsHandle;                           // 0x5c0(0x58)
	Struct ObjectMessagingHandle                                 ShipDestroyedHandle;                               // 0x618(0x58)
	Class Actor*                                                 ParentShipActor;                                   // 0x670(0x8)
	bool                                                         MusicZoneActive;                                   // 0x678(0x1)
	char                                                         pad0x3_DNAHU[0x3];                                 // 0x679(0x3)
	float                                                        GemEmissiveOn;                                     // 0x67c(0x4)
	Class MaterialInstanceDynamic*                               Shroudbreaker Material;                            // 0x680(0x8)
	float                                                        GemEmissiveOff;                                    // 0x688(0x4)
	bool                                                         ShroudBreakerEffectsActive;                        // 0x68c(0x1)
	bool                                                         ShroudBreakerDeactivate;                           // 0x68d(0x1)
	char                                                         pad0x2_HU07O[0x2];                                 // 0x68e(0x2)
	Struct ObjectMessagingHandle                                 PlayerEnteredIslandVincityEventHandle;             // 0x690(0x58)
	Struct ObjectMessagingHandle                                 PlayerLeftIslandVincityEventHandle;                // 0x6e8(0x58)
	TArray<Assetclass ShipProgressSpawnLoactionsAssetID>         ShipProgressSpawnLoactionsAssetID;                 // 0x740(0x10)
	TArray<class ProgressShipSpawnLocation*>                     ShipProgressSpawnLocationsReference;               // 0x750(0x10)
	Class MaterialInstanceDynamic*                               ShieldMaterial;                                    // 0x760(0x8)
	Class MaterialInstanceDynamic*                               ShieldPulseMaterial;                               // 0x768(0x8)
	int                                                          DEBUG_Stage;                                       // 0x770(0x4)
	float                                                        FinalStageActivationDelay;                         // 0x774(0x4)
	Class SoundBase*                                             NewVar;                                            // 0x778(0x8)
	Class ShipHullAudio*                                         ShipHullAudio;                                     // 0x780(0x8)
	Class WwiseEvent*                                            ShroudBreakerAmbientLoopingWwiseEvent;             // 0x788(0x8)
};


}