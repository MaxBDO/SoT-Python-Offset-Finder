// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
struct PoolableCollectionMapConfiguration
{
public:
	TArray<struct PoolableCollectionMapConfigurationEntry>       Pools;                                             // 0x0(0x10)
	bool                                                         PopulateJustInTime;                                // 0x10(0x1)
	char                                                         pad0x7_EN4KJ[0x7];                                 // 0x11(0x7)
};


// Size 0x28
struct PoolableCollectionMapConfigurationEntry
{
public:
	char                                                         pad0x20_5DV60[0x20];                               // 0x0(0x20)
	int                                                          Size;                                              // 0x20(0x4)
	char                                                         pad0x4_1ESM4[0x4];                                 // 0x24(0x4)
};


}