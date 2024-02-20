#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x28
struct EventEntityIdsSwitch
{
public:
	struct FName                                                 Event;                                             // 0x0(0x8)
	TArray<int>                                                  EnableEntityIds;                                   // 0x8(0x10)
	TArray<int>                                                  DisableEntityIds;                                  // 0x18(0x10)
};


// Size 0x20
struct EventOverMemoryThreshold
{
public:
	struct FString                                               EventID;                                           // 0x0(0x10)
	struct DateTime                                              ServerTimeUTC;                                     // 0x10(0x8)
	int                                                          MemoryUsedPercentage;                              // 0x18(0x4)
	char                                                         pad0x4_90DUU[0x4];                                 // 0x1c(0x4)
};


// Size 0x20
struct GlobalEventSubscriptionGameServerRequestModel
{
public:
	TArray<struct Name>                                          EnableEvents;                                      // 0x0(0x10)
	TArray<struct Name>                                          DisableEvents;                                     // 0x10(0x10)
};


// Size 0x28
struct GameServerWebSocketEntityEvent
{
public:
	struct FString                                               EventID;                                           // 0x0(0x10)
	struct FString                                               ServerId;                                          // 0x10(0x10)
	struct DateTime                                              ServerTimeUTC;                                     // 0x20(0x8)
};


// Size 0x30
struct EntityEventSubscriptionGameServerRequestModel
{
public:
	TArray<struct EventEntityIdsSwitch>                          EventsSwitched;                                    // 0x0(0x10)
	TArray<struct Name>                                          EventsWithAllIdsEnabled;                           // 0x10(0x10)
	TArray<struct Name>                                          EventsWithAllIdsDisabled;                          // 0x20(0x10)
};


