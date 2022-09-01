// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class AbandonedNoteWeightedTextDataAsset: public DataAsset
{
public:
	TArray<Struct AbandonedNoteWeightedTextEntry>                Entries;                                           // 0x28(0x10)
};


// Size 0xe0
class AbandonedNoteWeightedTextSourceComponent: public ActorComponent
{
public:
	Struct FText                                                 ClueText;                                          // 0x108(0x38)
	Struct FText                                                 TitleText;                                         // 0x140(0x38)
};


// Size 0x80
class OneShotRewardableObjectBase: public InteractableObject
{
public:
	Class InteractableComponent*                                 InteractableComponent;                             // 0x468(0x8)
	Class StaticMeshComponent*                                   StaticMeshComponent;                               // 0x470(0x8)
	Struct RewardId                                              Reward;                                            // 0x478(0x8)
	class                                                        RewardEntitlement;                                 // 0x480(0x8)
	float                                                        InteractionHoldTime;                               // 0x488(0x4)
	float                                                        InteractionRadius;                                 // 0x48c(0x4)
	Struct FText                                                 DisplayName;                                       // 0x490(0x38)
};


// Size 0x20
class PopUpNotificationOnItemWieldedComponent: public OnItemWieldedComponent
{
public:
	Class PopUpMessageDesc*                                      PopUpDesc;                                         // 0x138(0x8)
};


// Size 0xf0
class SirenPuzzleContext: public Actor
{
public:
	Class SceneComponent*                                        Root;                                              // 0x3d0(0x8)
	TArray<Struct SirenPuzzleLockState>                          PuzzleLocks;                                       // 0x3d8(0x10)
	TArray<Struct LandmarkReactionKeyFrame>                      UnlockCompleteReactions;                           // 0x3e8(0x10)
	TArray<Struct LandmarkReactionKeyFrame>                      ResetLocksReactions;                               // 0x3f8(0x10)
	TArray<Byte LockStates>                                      LockStates;                                        // 0x408(0x10)
};


}