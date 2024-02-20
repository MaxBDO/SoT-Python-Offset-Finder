#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x20
struct OutgoingServerMigrationStartedEvent
{
public:
	char                                                         pad0x20_5X6VE[0x20];                               // 0x0(0x20)
};


// Size 0x10
struct ServerMigrationAbortEvent
{
public:
	char                                                         pad0x10_GY1WN[0x10];                               // 0x0(0x10)
};


// Size 0x50
struct ServerMigrationRequestEvent
{
public:
	struct Guid                                                  MigrationId;                                       // 0x0(0x10)
	struct FString                                               DestinationAddress;                                // 0x10(0x10)
	TArray<struct Guid>                                          CrewIds;                                           // 0x20(0x10)
	struct FString                                               SubMode;                                           // 0x30(0x10)
	TArray<char>                                                 MatchmakingReasons;                                // 0x40(0x10)
};


// Size 0x20
struct OutgoingServerMigrationCompletedEvent
{
public:
	char                                                         pad0x20_2IS8W[0x20];                               // 0x0(0x20)
};


// Size 0x20
struct ServerMigrationAboutToStartEvent
{
public:
	char                                                         pad0x20_P5X9L[0x20];                               // 0x0(0x20)
};


// Size 0x1
struct ServerMigrationCompleteEvent
{
public:
	char                                                         pad0x1_S6RPZ[0x1];                                 // 0x0(0x1)
};


// Size 0x10
struct AthenaServerMigrationClientContext
{
public:
	struct FString                                               StampId;                                           // 0x0(0x10)
};


// Size 0x20
struct OutgoingServerMigrationAbortedEvent
{
public:
	char                                                         pad0x20_ZSGZL[0x20];                               // 0x0(0x20)
};


// Size 0x48
struct AddedPendingIncomingInvaderCrewEvent
{
public:
	char                                                         pad0x48_MJQT2[0x48];                               // 0x0(0x48)
};


// Size 0x90
struct ServerMigrationReadyToTransferActors
{
public:
	char                                                         pad0x90_GPZVW[0x90];                               // 0x0(0x90)
};


// Size 0x10
struct PrepareForWorldSwitchRpc
{
public:
	char                                                         pad0x10_3SN1D[0x10];                               // 0x0(0x10)
};


// Size 0x20
struct ServerMigrationRefusedEvent
{
public:
	struct Guid                                                  MigrationId;                                       // 0x0(0x10)
	TArray<struct Guid>                                          CrewIds;                                           // 0x10(0x10)
};


// Size 0x1
struct ServerMigrationSetupCompleteEvent
{
public:
	char                                                         pad0x1_4PIHK[0x1];                                 // 0x0(0x1)
};


// Size 0x20
struct ServerMigrationRequestBroadcastEvent
{
public:
	struct FString                                               DestinationAddress;                                // 0x0(0x10)
	struct Guid                                                  CrewId;                                            // 0x10(0x10)
};


// Size 0x20
struct ServerMigrationInstanceEventBase
{
public:
	struct Guid                                                  ServerId;                                          // 0x0(0x10)
	struct Guid                                                  MigrationId;                                       // 0x10(0x10)
};


// Size 0xc
struct IncomingMigrationPreventionZone
{
public:
	struct Vector2D                                              Location;                                          // 0x0(0x8)
	float                                                        Radius;                                            // 0x8(0x4)
};


// Size 0x1
struct ServerMigrationSetupRequestEvent
{
public:
	char                                                         pad0x1_U250R[0x1];                                 // 0x0(0x1)
};


// Size 0x48
struct AddedPendingIncomingGameEventOnDemandCrewEvent
{
public:
	char                                                         pad0x48_BA6B6[0x48];                               // 0x0(0x48)
};


