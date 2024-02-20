#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "GameplayTasks_Structs.h"


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class GameplayTaskOwnerInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class GameplayTaskResource: public Object
{
public:
	int                                                          ManualResourceID;                                  // 0x28(0x4)
	char                                                         pad0x4_252ZE[0x4];                                 // 0x2c(0x4)
	bool                                                         bManuallySetID;                                    // 0x30(0x1)
	char                                                         pad0x7_4106K[0x7];                                 // 0x31(0x7)
};


// Size 0x60 (Full Size[0x128] - InheritedSize[0xc8]
class GameplayTasksComponent: public ActorComponent
{
public:
	char                                                         pad0x8_ZZFSH[0x8];                                 // 0xc8(0x8)
	TArray<class GameplayTask*>                                  SimulatedTasks;                                    // 0xd0(0x10)
	TArray<class GameplayTask*>                                  TaskPriorityQueue;                                 // 0xe0(0x10)
	char                                                         pad0x28_STXSK[0x28];                               // 0xf0(0x28)
	char                                                         pad0x10_BF63M[0x10];                               // 0x118(0x10)
};


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class GameplayTask: public Object
{
public:
	struct FName                                                 InstanceName;                                      // 0x28(0x8)
	char                                                         pad0x28_N2YDN[0x28];                               // 0x30(0x28)
};


// Size 0x40 (Full Size[0x98] - InheritedSize[0x58]
class GameplayTask_SpawnActor: public GameplayTask
{
public:
	char                                                         pad0x38_HMG34[0x38];                               // 0x58(0x38)
	class UClass*                                                ClassToSpawn;                                      // 0x90(0x8)
};


// Size 0x18 (Full Size[0x70] - InheritedSize[0x58]
class GameplayTask_WaitDelay: public GameplayTask
{
public:
	char                                                         pad0x18_I1BSO[0x18];                               // 0x58(0x18)
};


