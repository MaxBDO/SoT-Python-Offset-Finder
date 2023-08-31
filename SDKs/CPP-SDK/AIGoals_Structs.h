// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x2c
struct BestActionSpotSelectionCriteria
{
public:
	bool                                                         PreferActionSpotsRelativeToTargetForwardFacingDirection; // 0x0(0x1)
	char                                                         pad0x3_N8T7H[0x3];                                 // 0x1(0x3)
	float                                                        ForwardFacingPreferenceMinAngleInDegrees;          // 0x4(0x4)
	float                                                        ForwardFacingPreferenceMaxAngleInDegrees;          // 0x8(0x4)
	float                                                        ForwardFacingPreferenceMinDistance;                // 0xc(0x4)
	float                                                        ForwardFacingPreferenceMaxDistance;                // 0x10(0x4)
	bool                                                         PreferStayingAtCurrentSpotOverMovingToNewSpot;     // 0x14(0x1)
	char                                                         pad0x3_WQNCB[0x3];                                 // 0x15(0x3)
	float                                                        StayingPreferenceDistance;                         // 0x18(0x4)
	bool                                                         ShouldAlwaysRefreshWhileOwnerMoving;               // 0x1c(0x1)
	bool                                                         ShouldRefreshAfterTargetMovesBeyondThreshold;      // 0x1d(0x1)
	char                                                         pad0x2_TSXW6[0x2];                                 // 0x1e(0x2)
	float                                                        TargetMovementRefreshThresholdDistance;            // 0x20(0x4)
	bool                                                         ShouldRefreshAfterStayingForTooLong;               // 0x24(0x1)
	char                                                         pad0x3_NADPN[0x3];                                 // 0x25(0x3)
	float                                                        RefreshTimeInSeconds;                              // 0x28(0x4)
};


// Size 0x40
struct HasAllActionContextTagsCondition
{
public:
	TArray<class Class*>                                         RequiredContextTags;                               // 0x28(0x10)
	bool                                                         ExpectedValue;                                     // 0x38(0x1)
};


}