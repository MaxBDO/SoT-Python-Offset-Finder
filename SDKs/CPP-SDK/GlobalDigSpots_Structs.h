// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
struct GlobalDigSpotDefinition
{
public:
	struct StoryFlag                                             Story;                                             // 0x0(0x8)
	struct StringAssetReference                                  ActorWithNamedPointComponent;                      // 0x8(0x10)
	struct FName                                                 NamedPoint;                                        // 0x18(0x8)
	class WeightedItemDescSpawnDataAsset*                        Rewards;                                           // 0x20(0x8)
};


// Size 0x18
struct GlobalDigSpotPopupEvent
{
public:
	char                                                         pad0x10_U5DMH[0x10];                               // 0x0(0x10)
	class PopUpMessageDesc*                                      PopUpDesc;                                         // 0x10(0x8)
};


// Size 0x30
struct GlobalDigSpotStatusUpdateTelemetryEvent
{
public:
	struct FString                                               DigSpotEventId;                                    // 0x0(0x10)
	struct Guid                                                  VoyageID;                                          // 0x10(0x10)
	struct FString                                               DigSpotStatus;                                     // 0x20(0x10)
};


}