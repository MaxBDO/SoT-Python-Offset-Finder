// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
struct ShipPartDamagePersistenceModel
{
public:
	TArray<Byte ComponentRepairableStates>                       ComponentRepairableStates;                         // 0x0(0x10)
	Struct FString                                               Identifier;                                        // 0x10(0x10)
};


// Size 0x10
struct DamageZoneRepairableStateChangedEvent
{
public:
	Class Actor*                                                 DamageZoneActor;                                   // 0x0(0x8)
	byte                                                         RepairableState;                                   // 0x8(0x1)
};


// Size 0x10
struct RepairableComponentRepairableStateChangedEvent
{
public:
	Class ActorComponent*                                        RepairableComponent;                               // 0x0(0x8)
	byte                                                         RepairableState;                                   // 0x8(0x1)
};


// Size 0x28
struct EventRepairableObjectRepairEndedEvent
{
public:
	Class Object*                                                Repairable;                                        // 0x0(0x8)
	Struct Vector                                                Position;                                          // 0x8(0xc)
	char                                                         pad0x4_L8PHB[0x4];                                 // 0x14(0x4)
	Class Actor*                                                 RepairerActor;                                     // 0x18(0x8)
	float                                                        RepairPercentage;                                  // 0x20(0x4)
};


// Size 0x1
struct EventRepairableObjectDestroyed
{
public:
};


// Size 0x8
struct EventPlayerUndoRepairEnd
{
public:
};


// Size 0x8
struct EventPlayerUndoRepairCompleted
{
public:
};


// Size 0x8
struct EventPlayerUndoRepairStart
{
public:
};


}