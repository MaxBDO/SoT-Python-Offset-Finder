// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xc
struct IncomingMigrationPreventionZone
{
public:
	struct Vector2D                                              Location;                                          // 0x0(0x8)
	float                                                        Radius;                                            // 0x8(0x4)
};


// Size 0x1
struct ServerMigrationSetupCompleteEvent
{
public:
	char                                                         pad0x1_N7UC9[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct ServerMigrationSetupRequestEvent
{
public:
	char                                                         pad0x1_0QA9R[0x1];                                 // 0x0(0x1)
};


// Size 0x90
struct ServerMigrationReadyToTransferActors
{
public:
	char                                                         pad0x90_AIOQG[0x90];                               // 0x0(0x90)
};


// Size 0x48
struct AddedPendingIncomingGameEventOnDemandCrewEvent
{
public:
	char                                                         pad0x48_DWTCI[0x48];                               // 0x0(0x48)
};


// Size 0x48
struct AddedPendingIncomingInvaderCrewEvent
{
public:
	char                                                         pad0x48_CBIMX[0x48];                               // 0x0(0x48)
};


// Size 0x20
struct ServerMigrationAboutToStartEvent
{
public:
	char                                                         pad0x20_SPDO1[0x20];                               // 0x0(0x20)
};


// Size 0x10
struct ServerMigrationAbortEvent
{
public:
	char                                                         pad0x10_M2MZL[0x10];                               // 0x0(0x10)
};


// Size 0x1
struct ServerMigrationCompleteEvent
{
public:
	char                                                         pad0x1_X1X18[0x1];                                 // 0x0(0x1)
};


// Size 0x20
struct ServerMigrationRefusedEvent
{
public:
	struct Guid                                                  MigrationId;                                       // 0x0(0x10)
	TArray<struct Guid>                                          CrewIds;                                           // 0x10(0x10)
};


// Size 0x20
struct OutgoingServerMigrationAbortedEvent
{
public:
	char                                                         pad0x20_VE7OE[0x20];                               // 0x0(0x20)
};


// Size 0x20
struct ServerMigrationInstanceEventBase
{
public:
	struct Guid                                                  ServerId;                                          // 0x0(0x10)
	struct Guid                                                  MigrationId;                                       // 0x10(0x10)
};


// Size 0x20
struct OutgoingServerMigrationCompletedEvent
{
public:
	char                                                         pad0x20_EVA7A[0x20];                               // 0x0(0x20)
};


// Size 0x20
struct OutgoingServerMigrationStartedEvent
{
public:
	char                                                         pad0x20_O6KGF[0x20];                               // 0x0(0x20)
};


// Size 0x50
struct ServerMigrationRequestEvent
{
public:
	struct Guid                                                  MigrationId;                                       // 0x0(0x10)
	struct FString                                               DestinationAddress;                                // 0x10(0x10)
	TArray<struct Guid>                                          CrewIds;                                           // 0x20(0x10)
	struct FString                                               SubMode;                                           // 0x30(0x10)
	TArray<Byte MatchmakingReasons>                              MatchmakingReasons;                                // 0x40(0x10)
};


// Size 0x20
struct ServerMigrationRequestBroadcastEvent
{
public:
	struct FString                                               DestinationAddress;                                // 0x0(0x10)
	struct Guid                                                  CrewId;                                            // 0x10(0x10)
};


// Size 0x10
struct PrepareForWorldSwitchRpc
{
public:
	char                                                         pad0x10_A9GG0[0x10];                               // 0x0(0x10)
};


// Size 0x10
struct AthenaServerMigrationClientContext
{
public:
	struct FString                                               StampId;                                           // 0x0(0x10)
};


}