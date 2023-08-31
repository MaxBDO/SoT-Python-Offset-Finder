// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
struct SessionTemplate
{
public:
	Struct FString                                               TemplateName;                                      // 0x0(0x10)
	byte                                                         SessionType;                                       // 0x10(0x1)
	char                                                         pad0x3_BY3RD[0x3];                                 // 0x11(0x3)
	int                                                          MaxPlayers;                                        // 0x14(0x4)
};


// Size 0x38
struct CrewSessionTemplate
{
public:
	Struct FString                                               MatchmakingHopper;                                 // 0x18(0x10)
	class                                                        ShipSize;                                          // 0x28(0x8)
	int                                                          MaxMatchmakingPlayers;                             // 0x30(0x4)
};


// Size 0x28
struct OnlineSessionMemberLostEvent
{
public:
};


// Size 0x1
struct SessionLostEvent
{
public:
};


// Size 0x20
struct SessionDetailsChangedEvent
{
public:
};


// Size 0x10
struct SessionInfoUpdateAvailableEvent
{
public:
	Struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x28
struct CrewSessionKeepAliveFailedTelemetryEvent
{
public:
	Struct Guid                                                  CrewId;                                            // 0x0(0x10)
	Struct FString                                               UserStatus;                                        // 0x10(0x10)
	int                                                          ErrorCode;                                         // 0x20(0x4)
	int                                                          KeepAliveCounter;                                  // 0x24(0x4)
};


// Size 0x18
struct CrewSessionOperationFailedTelemetryEvent
{
public:
	Struct FString                                               ErrorMessage;                                      // 0x0(0x10)
	int                                                          OperationTypeCode;                                 // 0x10(0x4)
	bool                                                         WasCancelled;                                      // 0x14(0x1)
};


// Size 0x78
struct CrewSessionMatchmakingFollowedTelemetryEvent
{
public:
	Struct Guid                                                  NewCrewId;                                         // 0x50(0x10)
	int                                                          ResultCode;                                        // 0x60(0x4)
	char                                                         pad0x4_X9LZX[0x4];                                 // 0x64(0x4)
	Struct FString                                               Message;                                           // 0x68(0x10)
};


// Size 0x50
struct CrewSessionBaseSessionTelemetryEvent
{
public:
	Struct CrewSessionTelemetry                                  Session;                                           // 0x10(0x40)
};


// Size 0x10
struct CrewSessionBaseTelemetryEvent
{
public:
	Struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x40
struct CrewSessionTelemetry
{
public:
	TArray<struct SessionMembers>                                SessionMembers;                                    // 0x0(0x10)
	Struct FString                                               SessionTemplate;                                   // 0x10(0x10)
	Struct FString                                               SessionVisibility;                                 // 0x20(0x10)
	Struct FString                                               PlayMode;                                          // 0x30(0x10)
};


// Size 0x28
struct CrewSessionMemberTelemetry
{
public:
	Struct FString                                               UserId;                                            // 0x0(0x10)
	Struct FString                                               StatusString;                                      // 0x10(0x10)
	bool                                                         IsSessionHost;                                     // 0x20(0x1)
};


// Size 0x98
struct CrewSessionMatchmakingEndedTelemetryEvent
{
public:
	Struct Guid                                                  NewCrewId;                                         // 0x10(0x10)
	Struct Guid                                                  CrewMatchmakingAttemptId;                          // 0x20(0x10)
	Struct FString                                               SessionType;                                       // 0x30(0x10)
	Struct FString                                               MatchmakingHopper;                                 // 0x40(0x10)
	Struct FString                                               MatchmakingType;                                   // 0x50(0x10)
	Struct FString                                               MatchmakingResult;                                 // 0x60(0x10)
	Struct FString                                               ErrorMessage;                                      // 0x70(0x10)
	TArray<Int CrewSegmentValues>                                CrewSegmentValues;                                 // 0x80(0x10)
	int                                                          CurrentCrewCount;                                  // 0x90(0x4)
	int                                                          TotalWaitTime;                                     // 0x94(0x4)
};


// Size 0x70
struct CrewSessionMatchmakingStartedTelemetryEvent
{
public:
	Struct Guid                                                  CrewMatchmakingAttemptId;                          // 0x10(0x10)
	Struct FString                                               SessionType;                                       // 0x20(0x10)
	Struct FString                                               MatchmakingHopper;                                 // 0x30(0x10)
	Struct FString                                               MatchmakingType;                                   // 0x40(0x10)
	TArray<Int CrewSegmentValues>                                CrewSegmentValues;                                 // 0x50(0x10)
	int                                                          CurrentCrewCount;                                  // 0x60(0x4)
	int                                                          EstimatedWaitTime;                                 // 0x64(0x4)
	int                                                          MaxWaitTime;                                       // 0x68(0x4)
};


// Size 0x10
struct CrewSessionLeaveTelemetryEvent
{
public:
};


// Size 0x70
struct CrewSessionJoinedTelemetryEvent
{
public:
	Struct FString                                               JoinMethod;                                        // 0x50(0x10)
	TArray<struct QoSTelemetry>                                  QoSTelemetry;                                      // 0x60(0x10)
};


// Size 0x20
struct CrewSessionQoSMeasurementTelemetry
{
public:
	Struct FString                                               Location;                                          // 0x0(0x10)
	int                                                          NumReceivedPings;                                  // 0x14(0x4)
	int                                                          NumFailedPings;                                    // 0x18(0x4)
	byte                                                         ResolveResult;                                     // 0x1c(0x1)
	bool                                                         LocationWasConsidered;                             // 0x1d(0x1)
};


// Size 0x60
struct CrewSessionCreatedTelemetryEvent
{
public:
	TArray<struct QoSTelemetry>                                  QoSTelemetry;                                      // 0x50(0x10)
};


}