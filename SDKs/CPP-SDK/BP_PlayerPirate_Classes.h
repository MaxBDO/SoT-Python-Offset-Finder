// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xdc (Full Size[0x201c] - InheritedSize[0x1f40]
class BP_PlayerPirate_C: public AthenaPlayerCharacter
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x1f40(0x8)
	Class WorldVelocityTrackerComponent*                         WorldVelocityTracker;                              // 0x1f48(0x8)
	Class ChainLightningReceiverComponent*                       ChainLightningReceiver;                            // 0x1f50(0x8)
	Class StatusApplicationMonitorComponent*                     StatusApplicationMonitor;                          // 0x1f58(0x8)
	Class ReviveComponent*                                       ReviveComponent;                                   // 0x1f60(0x8)
	Class AnimNotifyWwiseEmitterComponent*                       AnimNotifyWwiseEmitter;                            // 0x1f68(0x8)
	Class VomitComponent*                                        Vomit;                                             // 0x1f70(0x8)
	Class NoiseMakerComponent*                                   NoiseMaker;                                        // 0x1f78(0x8)
	Class PlayerNameplateComponent*                              PlayerNameplate;                                   // 0x1f80(0x8)
	Class BodyLightControllerComponent*                          BodyLightController;                               // 0x1f88(0x8)
	Class AmbientLightSourceComponent*                           BodyLight;                                         // 0x1f90(0x8)
	Class AudioSpaceTrackerComponent*                            AudioSpaceTracker;                                 // 0x1f98(0x8)
	Class PlayerAtmosphericsAudioComponent*                      PlayerAtmosphericsAudio;                           // 0x1fa0(0x8)
	BlueprintGeneratedClass BP_CharacterVFXComponent_C*          BP_CharacterVFXComponent;                          // 0x1fa8(0x8)
	Class WaterInteractionComponent*                             WaterInteraction;                                  // 0x1fb0(0x8)
	BlueprintGeneratedClass BP_CharacterAudioComponent_C*        BP_PlayerAudioComponent;                           // 0x1fb8(0x8)
	Class CharacterFootImpactComponent*                          CharacterFootImpact;                               // 0x1fc0(0x8)
	Class PlayerOceanAudioComponent*                             PlayerOceanAudio;                                  // 0x1fc8(0x8)
	float                                                        TattooGlowDuration;                                // 0x1fd0(0x4)
	char                                                         pad0x4_OSSXZ[0x4];                                 // 0x1fd4(0x4)
	Class StaticMesh*                                            CurrentStaticMesh;                                 // 0x1fd8(0x8)
	Class SkeletalMesh*                                          CurrentSkeletalMesh;                               // 0x1fe0(0x8)
	TArray<class SkeletalMesh*>                                  SkeletalMeshArray;                                 // 0x1fe8(0x10)
	TArray<class StaticMesh*>                                    StaticMeshArray;                                   // 0x1ff8(0x10)
	bool                                                         IsSkeletalMesh;                                    // 0x2008(0x1)
	char                                                         pad0x3_B1SOF[0x3];                                 // 0x2009(0x3)
	int                                                          ItemSelectArray;                                   // 0x200c(0x4)
	Struct Vector                                                ItemScale;                                         // 0x2010(0xc)
};


}