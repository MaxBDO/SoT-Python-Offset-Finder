// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x30
struct GameEventAvailabilityData
{
public:
	struct FString                                               EventName;                                         // 0x0(0x10)
	byte                                                         EventCategory;                                     // 0x10(0x1)
	byte                                                         AvailabilityState;                                 // 0x11(0x1)
	char                                                         pad0x6_45WQX[0x6];                                 // 0x12(0x6)
	class UClass*                                                ShipSizeLimit;                                     // 0x18(0x8)
	TArray<struct Guid>                                          ParticipatingCrewIds;                              // 0x20(0x10)
};


// Size 0x50
struct GameEventOnDemandCompleteBannerNetworkEvent
{
public:
	char                                                         pad0x10_HMHAB[0x10];                               // 0x0(0x10)
	struct FText                                                 Title;                                             // 0x10(0x38)
	struct FName                                                 Company;                                           // 0x48(0x8)
};


// Size 0x10
struct GameEventOnDemandCompleted
{
public:
	TArray<struct Guid>                                          OnDemandCrewIds;                                   // 0x0(0x10)
};


// Size 0x10
struct GameEventOnDemandCrewSentToSinkingTunnel
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x10
struct GameEventOnDemandDeactivated
{
public:
	TArray<struct Guid>                                          OnDemandCrewIds;                                   // 0x0(0x10)
};


// Size 0x10
struct CrewFailedToJoinGameEventOnDemand
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x10
struct CrewJoinedGameEventOnDemand
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x30
struct GameEventOnDemandCompletedTelemetryEvent
{
public:
	struct FString                                               Company;                                           // 0x0(0x10)
	TArray<struct Guid>                                          ParticipatingOnDemandCrews;                        // 0x10(0x10)
	TArray<struct Guid>                                          ParticipatingCrews;                                // 0x20(0x10)
};


// Size 0x30
struct GameEventOnDemandDeactivatedTelemetryEvent
{
public:
	struct FString                                               ShipSizeLimit;                                     // 0x0(0x10)
	TArray<struct Guid>                                          ParticipatingOnDemandCrews;                        // 0x10(0x10)
	TArray<struct Guid>                                          ParticipatingCrews;                                // 0x20(0x10)
};


// Size 0x4
struct GameEventOnDemandActivatedTelemetryEvent
{
public:
	int                                                          NumCrewsOnDemandLimit;                             // 0x0(0x4)
};


// Size 0x1
struct GameEventOnDemandCrewCancelledVoyageTelemetryEvent
{
public:
	char                                                         pad0x1_73FQY[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct GameEventOnDemandCrewSinkingTelemetryEvent
{
public:
	char                                                         pad0x1_DWCIY[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct GameEventOnDemandCrewScuttledTelemetryEvent
{
public:
	char                                                         pad0x1_SZVKI[0x1];                                 // 0x0(0x1)
};


// Size 0x20
struct GameEventOnDemandCrewJoinedTelemetryEvent
{
public:
	struct FString                                               ShipType;                                          // 0x0(0x10)
	struct FString                                               Company;                                           // 0x10(0x10)
};


// Size 0x20
struct GameEventOnDemandBaseTelemetryFragmentInput
{
public:
	struct FString                                               GameEventType;                                     // 0x0(0x10)
	struct Guid                                                  GameEventOnDemandId;                               // 0x10(0x10)
};


// Size 0x20
struct GameEventOnDemandBaseTelemetryFragment
{
public:
	struct FString                                               GameEventType;                                     // 0x0(0x10)
	struct Guid                                                  GameEventOnDemandId;                               // 0x10(0x10)
};


}