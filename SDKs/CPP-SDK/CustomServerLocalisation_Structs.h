// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x50
struct CustomServerLocalisationModel
{
public:
	char                                                         pad0x50_U5MHW[0x50];                               // 0x0(0x50)
};


// Size 0x20
struct CustomServerLocalisationData
{
public:
	struct FString                                               Key;                                               // 0x0(0x10)
	TArray<struct LocPairData>                                   LocaleEntries;                                     // 0x10(0x10)
};


// Size 0x20
struct LocPairData
{
public:
	struct FString                                               Locale;                                            // 0x0(0x10)
	struct FString                                               Value;                                             // 0x10(0x10)
};


// Size 0x20
struct CustomServerClientData
{
public:
	struct FString                                               Key;                                               // 0x0(0x10)
	char                                                         pad0x10_24GS2[0x10];                               // 0x10(0x10)
};


}