// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x78
struct GameEventOnDemandAnnouncementBannerData
{
public:
	Struct FText                                                 Header;                                            // 0x0(0x38)
	Struct FText                                                 Message;                                           // 0x38(0x38)
	struct FName                                                 Tag;                                               // 0x70(0x8)
};


// Size 0x20
struct GameEventAvailabilityData
{
public:
	Struct FString                                               EventName;                                         // 0x0(0x10)
	byte                                                         EventCategory;                                     // 0x10(0x1)
	byte                                                         AvailabilityState;                                 // 0x11(0x1)
	char                                                         pad0x6_CT85D[0x6];                                 // 0x12(0x6)
	class                                                        ShipSizeLimit;                                     // 0x18(0x8)
};


}