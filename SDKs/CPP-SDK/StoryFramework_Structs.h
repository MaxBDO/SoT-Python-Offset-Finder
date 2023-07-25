// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
struct StoryFlag
{
public:
	struct FName                                                 StoryName;                                         // 0x0(0x8)
};


// Size 0x10
struct StoryClaimedResourcesChangedTelemetryEvent
{
public:
	TArray<struct StoryResourceStateChanges>                     StoryResourceStateChanges;                         // 0x0(0x10)
};


// Size 0x14
struct StoryResourceStateChanged
{
public:
	struct FName                                                 StoryName;                                         // 0x0(0x8)
	int                                                          NumResourcesClaimed;                               // 0x8(0x4)
	int                                                          NumResourcesReleased;                              // 0xc(0x4)
	int                                                          NumClaimsPending;                                  // 0x10(0x4)
};


// Size 0x20
struct StoryClaimableResourcesList
{
public:
	Struct StoryFlag                                             StoryFlag;                                         // 0x0(0x8)
	bool                                                         AreResourcesClaimed;                               // 0x8(0x1)
	char                                                         pad0x7_V1JGJ[0x7];                                 // 0x9(0x7)
	TArray<Weakclass ClaimableResources>                         ClaimableResources;                                // 0x10(0x10)
};


// Size 0x10
struct LightingZoneStoryRelatedSettings
{
public:
	Struct StoryFlag                                             Story;                                             // 0x0(0x8)
	float                                                        TargetPointOnCurve;                                // 0x8(0x4)
	float                                                        FadeDuration;                                      // 0xc(0x4)
};


// Size 0x28
struct NamedPointsGroupActorLocation
{
public:
	struct FName                                                 NamedPointsGroup;                                  // 0x0(0x8)
};


// Size 0x20
struct StorySpawnedActorsComponentList
{
public:
	Struct StoryFlag                                             Story;                                             // 0x0(0x8)
	TArray<struct GroupLocations>                                GroupLocations;                                    // 0x8(0x10)
	Class LayerActorsDataAsset*                                  LayerToSpawn;                                      // 0x18(0x8)
};


// Size 0x38
struct StorySpawnedActorsList
{
public:
	Struct StoryFlag                                             Story;                                             // 0x0(0x8)
	TArray<struct ActorLocations>                                ActorLocations;                                    // 0x8(0x10)
	TArray<struct NamedPointsActorLocations>                     NamedPointsActorLocations;                         // 0x18(0x10)
	TArray<struct InstancedLayerLocations>                       InstancedLayerLocations;                           // 0x28(0x10)
};


// Size 0x18
struct InstancedLayerLocation
{
public:
	Struct StringAssetReference                                  ActorWithInstancedLayerComponent;                  // 0x0(0x10)
	Class LayerActorsDataAsset*                                  LayerToSpawn;                                      // 0x10(0x8)
};


// Size 0x20
struct NamedPointsActorLocation
{
public:
	Struct StringAssetReference                                  ActorWithNamedPointsComponent;                     // 0x0(0x10)
	TArray<struct GroupLocations>                                GroupLocations;                                    // 0x10(0x10)
};


// Size 0x30
struct ActorLocationPair
{
public:
	Struct StringAssetReference                                  SpawnLocation;                                     // 0x0(0x10)
};


// Size 0x20
struct StorySpawnedActorsChangeTelemetryEvent
{
public:
	TArray<struct StorySpawnedActors>                            StorySpawnedActors;                                // 0x0(0x10)
	TArray<struct StoryDespawnedActors>                          StoryDespawnedActors;                              // 0x10(0x10)
};


// Size 0x18
struct StorySpawnedActorsIndividualStoryInfo
{
public:
	Struct FString                                               StoryName;                                         // 0x0(0x10)
	int                                                          NumActorsSpawned;                                  // 0x10(0x4)
	int                                                          NumActorsDespawned;                                // 0x14(0x4)
};


// Size 0x48
struct IsStoryActiveConditionBase
{
public:
	TArray<struct StoryFlags>                                    StoryFlags;                                        // 0x28(0x10)
};


// Size 0x48
struct IsAllStoryActiveCondition
{
public:
};


// Size 0x48
struct IsAnyStoryActiveCondition
{
public:
};


// Size 0x18
struct StoryInfo
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
};


// Size 0x18
struct StoryNameInfo
{
public:
	struct FName                                                 StoryName;                                         // 0x0(0x8)
	Struct FString                                               StoryDesc;                                         // 0x8(0x10)
};


// Size 0x10
struct DuplicateStoriesReceivedTelemetryEvent
{
public:
	TArray<Str DuplicateStoriesReceived>                         DuplicateStoriesReceived;                          // 0x0(0x10)
};


// Size 0x1
struct StoriesRefreshRequestedTelemetryEvent
{
public:
	bool                                                         IsForcedRefresh;                                   // 0x0(0x1)
};


// Size 0x28
struct StoriesChangedTelemetryEvent
{
public:
	TArray<Str AllStories>                                       AllStories;                                        // 0x0(0x10)
	TArray<Str ActiveStories>                                    ActiveStories;                                     // 0x10(0x10)
	bool                                                         DidStoriesChange;                                  // 0x20(0x1)
	bool                                                         WereStoriesRefreshed;                              // 0x21(0x1)
};


}