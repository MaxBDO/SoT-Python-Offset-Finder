// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class AIHomeComponent: public ActorComponent
{
public:
	char                                                         pad0x8_FJ6XD[0x8];                                 // 0xc8(0x8)
	class Actor*                                                 HomeActor;                                         // 0xd0(0x8)
};


// Size 0x0 (Full Size[0x40] - InheritedSize[0x40]
class AlwaysEvaluatesTrueAIGoal: public AIGoal
{
public:
};


// Size 0xa0 (Full Size[0x110] - InheritedSize[0x70]
class BTService_SetBestActionSpotNearTarget: public BTService
{
public:
	struct BlackboardKeySelector                                 TargetKey;                                         // 0x70(0x28)
	struct BlackboardKeySelector                                 BestActionSpotKey;                                 // 0x98(0x28)
	struct BestActionSpotSelectionCriteria                       BestActionSpotSelectionCriteria;                   // 0xc0(0x34)
	char                                                         pad0x1c_ZMDXL[0x1c];                               // 0xf4(0x1c)
};


// Size 0x38 (Full Size[0x78] - InheritedSize[0x40]
class WhileActionSpotAvailableForPatrolAIGoal: public AIGoal
{
public:
	float                                                        MinTimeToChangePatrolSpot;                         // 0x40(0x4)
	float                                                        MaxTimeToChangePatrolSpot;                         // 0x44(0x4)
	char                                                         pad0x30_RPSCJ[0x30];                               // 0x48(0x30)
};


// Size 0x8 (Full Size[0x48] - InheritedSize[0x40]
class WhileBlackboardKeySetAIGoal: public AIGoal
{
public:
	struct FName                                                 BlackboardKey;                                     // 0x40(0x8)
};


// Size 0x38 (Full Size[0x78] - InheritedSize[0x40]
class WhileCanBeInteractedWithAndPlayerIsNearbyAIGoal: public AIGoal
{
public:
	float                                                        InnerRadius;                                       // 0x40(0x4)
	float                                                        OuterRadius;                                       // 0x44(0x4)
	struct AIGoalMovementModeFilter                              MovementModeFilter;                                // 0x48(0x20)
	bool                                                         ShouldOnlyActivateWhileDocked;                     // 0x68(0x1)
	char                                                         pad0x7_6YTTY[0x7];                                 // 0x69(0x7)
	class Pawn*                                                  TargetPlayerPawn;                                  // 0x70(0x8)
};


// Size 0x0 (Full Size[0x40] - InheritedSize[0x40]
class WhileHomeSetAIGoal: public AIGoal
{
public:
};


// Size 0xb0 (Full Size[0xf0] - InheritedSize[0x40]
class WhilePlayerWithinAreaAIGoal: public AIGoal
{
public:
	float                                                        EnterAreaTriggerDistance;                          // 0x40(0x4)
	float                                                        ExitAreaTriggerDistance;                           // 0x44(0x4)
	struct AIGoalMovementModeFilter                              MovementModeFilter;                                // 0x48(0x20)
	class Pawn*                                                  TargetPlayerPawn;                                  // 0x68(0x8)
	char                                                         pad0x80_M8EY0[0x80];                               // 0x70(0x80)
};


}