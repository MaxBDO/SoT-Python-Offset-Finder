// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x40 (Full Size[0x108] - InheritedSize[0xc8]
class ShantyPuzzleCompletionComponent: public ActorComponent
{
public:
	float                                                        CompletionTime;                                    // 0xc8(0x4)
	char                                                         pad0x4_CMTXW[0x4];                                 // 0xcc(0x4)
	TArray<struct LandmarkReactionKeyFrame>                      StartCompletionReaction;                           // 0xd0(0x10)
	TArray<struct LandmarkReactionKeyFrame>                      AbortCompletionReaction;                           // 0xe0(0x10)
	TArray<struct LandmarkReactionKeyFrame>                      PuzzleCompletedReaction;                           // 0xf0(0x10)
	class LandmarkReactionPlayer*                                ReactionPlayer;                                    // 0x100(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ShantyPuzzleInterface: public Interface
{
public:
};


// Size 0x110 (Full Size[0x3f0] - InheritedSize[0x2e0]
class ShantyPuzzleComponent: public SceneComponent
{
public:
	char                                                         pad0x8_ORD19[0x8];                                 // 0x2e0(0x8)
	class UClass*                                                RequiredShantyItemDesc;                            // 0x2e8(0x8)
	TArray<struct ShantyPuzzleInteractionZoneDefinition>         ShantyPuzzleInteractionZoneDefinitions;            // 0x2f0(0x10)
	bool                                                         TimeLimited;                                       // 0x300(0x1)
	bool                                                         ShouldMoveEnsembleToActorPosition;                 // 0x301(0x1)
	char                                                         pad0x6_4H2UT[0x6];                                 // 0x302(0x6)
	struct GameTimeRange                                         ActiveTimeRange;                                   // 0x308(0x10)
	TArray<class ShantyPuzzleInteractionZoneComponent*>          ShantyPuzzleInteractionZones;                      // 0x318(0x10)
	class Ensemble*                                              CurrentlyPlayingShantyPuzzleEnsemble;              // 0x328(0x8)
	char                                                         pad0xc0_MTCYY[0xc0];                               // 0x330(0xc0)
};


// Size 0x20 (Full Size[0x600] - InheritedSize[0x5e0]
class ShantyPuzzleInteractionZoneComponent: public SphereComponent
{
public:
	char                                                         pad0x20_N6UOY[0x20];                               // 0x5e0(0x20)
};


}