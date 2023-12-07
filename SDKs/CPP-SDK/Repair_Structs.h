// Generated by dougthedruid on Discord
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
	struct FString                                               Identifier;                                        // 0x10(0x10)
};


// Size 0xc
struct RepairableComponentMaxDamageLevelOverride
{
public:
	struct FName                                                 FeatureName;                                       // 0x0(0x8)
	int                                                          MaxDamageLevel;                                    // 0x8(0x4)
};


// Size 0x18
struct RepairableAuthoritiveRepairState
{
public:
	byte                                                         RepairableState;                                   // 0x0(0x1)
	char                                                         pad0x7_L5X4A[0x7];                                 // 0x1(0x7)
	TArray<Weakclass RepairingList>                              RepairingList;                                     // 0x8(0x10)
};


// Size 0x10
struct DamageZoneRepairableStateChangedEvent
{
public:
	class Actor*                                                 DamageZoneActor;                                   // 0x0(0x8)
	byte                                                         RepairableState;                                   // 0x8(0x1)
	char                                                         pad0x7_M9B60[0x7];                                 // 0x9(0x7)
};


// Size 0x10
struct RepairableComponentRepairableStateChangedEvent
{
public:
	class ActorComponent*                                        RepairableComponent;                               // 0x0(0x8)
	byte                                                         RepairableState;                                   // 0x8(0x1)
	char                                                         pad0x7_EOZ3G[0x7];                                 // 0x9(0x7)
};


// Size 0x28
struct EventRepairableObjectRepairEndedEvent
{
public:
	class Object*                                                Repairable;                                        // 0x0(0x8)
	struct Vector                                                Position;                                          // 0x8(0xc)
	char                                                         pad0x4_V4DHT[0x4];                                 // 0x14(0x4)
	class Actor*                                                 RepairerActor;                                     // 0x18(0x8)
	float                                                        RepairPercentage;                                  // 0x20(0x4)
	bool                                                         RepairCompleted;                                   // 0x24(0x1)
	char                                                         pad0x3_0EWFS[0x3];                                 // 0x25(0x3)
};


// Size 0x1
struct EventRepairableObjectDestroyed
{
public:
	char                                                         pad0x1_SRTAA[0x1];                                 // 0x0(0x1)
};


// Size 0x60
struct RepairObjectActionStateConstructionInfo
{
public:
	char                                                         pad0x30_SOUCG[0x30];                               // 0x0(0x30)
	struct NetSubObjectPtr                                       RepairableObject;                                  // 0x30(0x14)
	struct NetActorPtr                                           WieldedItem;                                       // 0x44(0x14)
	class UClass*                                                InputID;                                           // 0x58(0x8)
};


}