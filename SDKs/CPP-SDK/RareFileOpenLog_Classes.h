// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8 (Full Size[0x88] - InheritedSize[0x80]
class AggregateOpenOrderLogsCommandlet: public Commandlet
{
public:
};


// Size 0x48 (Full Size[0x208] - InheritedSize[0x1c0]
class RareFileOpenFileHandler: public Class
{
public:
};


// Size 0x0 (Full Size[0x208] - InheritedSize[0x208]
class RareFileOpenOnDiskFileHandler: public RareFileOpenFileHandler
{
public:
};


// Size 0x48 (Full Size[0x80] - InheritedSize[0x38]
class RareFileOpenLogSettings: public DeveloperSettings
{
public:
	int                                                          InitialOpenOrderArraySize;                         // 0x38(0x4)
	int                                                          DataSizeSaveIncrement;                             // 0x3c(0x4)
	float                                                        TimeSaveIncrement;                                 // 0x40(0x4)
	byte                                                         DataSource;                                        // 0x44(0x1)
	char                                                         pad0x3_21ZJS[0x3];                                 // 0x45(0x3)
	Struct FString                                               OpenOrderLogDirectory;                             // 0x48(0x10)
	Struct FString                                               OutputOrderLogDirectory;                           // 0x58(0x10)
	int                                                          NumberOfLogsToAggregate;                           // 0x68(0x4)
	char                                                         pad0x14_X4XVK[0x14];                               // 0x6c(0x14)
};


}