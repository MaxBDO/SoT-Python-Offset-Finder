// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x4
struct ServiceMessagingTestMessage
{
public:
	int                                                          Data;                                              // 0x0(0x4)
};


// Size 0x10
struct ServiceMessagingUnsubscribedEvent
{
public:
	Struct FString                                               RoutingKey;                                        // 0x0(0x10)
};


// Size 0x10
struct ServiceMessagingSubscribedEvent
{
public:
	Struct FString                                               RoutingKey;                                        // 0x0(0x10)
};


// Size 0x18
struct TestStructWithNetId
{
public:
	Struct UniqueNetIdRepl                                       NetId;                                             // 0x0(0x18)
};


}