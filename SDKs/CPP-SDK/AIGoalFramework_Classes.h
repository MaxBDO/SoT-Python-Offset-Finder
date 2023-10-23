// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AIAreaOfOperationInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class AIAreaOfOperationComponent: public ActorComponent
{
public:
	char                                                         pad0x8_K7OV4[0x8];                                 // 0xc8(0x8)
	bool                                                         UseAreaOfOperationOnSpawn;                         // 0xd0(0x1)
	char                                                         pad0x3_6J75A[0x3];                                 // 0xd1(0x3)
	float                                                        InitialRadius;                                     // 0xd4(0x4)
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class AIGoal: public Object
{
public:
	class BehaviorTree*                                          BehaviorTree;                                      // 0x28(0x8)
	class UClass*                                                WhileActiveActivityType;                           // 0x30(0x8)
	char                                                         pad0x8_DDGTD[0x8];                                 // 0x38(0x8)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class AIGoalAssetList: public DataAsset
{
public:
	TArray<class AIGoal*>                                        GoalTemplates;                                     // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AIGoalProcessorInterface: public Interface
{
public:
};


// Size 0x60 (Full Size[0x128] - InheritedSize[0xc8]
class AIGoalProcessorComponent: public ActorComponent
{
public:
	char                                                         pad0x8_36S0J[0x8];                                 // 0xc8(0x8)
	TArray<class AIGoal*>                                        Goals;                                             // 0xd0(0x10)
	class AIGoalAssetList*                                       AIGoalAssetList;                                   // 0xe0(0x8)
	class AIGoal*                                                ActiveGoal;                                        // 0xe8(0x8)
	TArray<class AIGoalAssetList*>                               AdditionalGoalLists;                               // 0xf0(0x10)
	char                                                         pad0x28_2ITFU[0x28];                               // 0x100(0x28)
};


// Size 0x0 (Full Size[0x128] - InheritedSize[0x128]
class FirstActionableAIGoalProcessorComponent: public AIGoalProcessorComponent
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AIHomeInterface: public Interface
{
public:
};


}