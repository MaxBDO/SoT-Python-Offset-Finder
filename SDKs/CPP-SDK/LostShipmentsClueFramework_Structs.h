#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x30
struct QuestVariableClueDescriptor
{
public:
	char                                                         pad0x30_HPID7[0x30];                               // 0x0(0x30)
};


// Size 0x30
struct QuestVariableClueSite
{
public:
	char                                                         pad0x30_2SORV[0x30];                               // 0x0(0x30)
};


// Size 0x20
struct ClueSite
{
public:
	class UClass*                                                SiteType;                                          // 0x0(0x8)
	class ClueSiteData*                                          SiteData;                                          // 0x8(0x8)
	struct Vector                                                Location;                                          // 0x10(0xc)
	char                                                         pad0x4_2KK6Y[0x4];                                 // 0x1c(0x4)
};


// Size 0x28
struct WeightedDebris
{
public:
	char                                                         pad0x20_PJ3GO[0x20];                               // 0x0(0x20)
	float                                                        Weight;                                            // 0x20(0x4)
	char                                                         pad0x4_LXJII[0x4];                                 // 0x24(0x4)
};


// Size 0x20
struct EventClueObtained
{
public:
	class ClueDescriptor*                                        ObtainedClue;                                      // 0x0(0x8)
	class UClass*                                                ObtainedSiteType;                                  // 0x8(0x8)
	char                                                         pad0x10_QOMS8[0x10];                               // 0x10(0x10)
};


// Size 0x20
struct SeaClueCreationChoice
{
public:
	class UClass*                                                SiteType;                                          // 0x0(0x8)
	class SeaClueCreator*                                        ClueCreator;                                       // 0x8(0x8)
	char                                                         pad0x10_X4I0W[0x10];                               // 0x10(0x10)
};


// Size 0x10
struct RestrictedClueType
{
public:
	class UClass*                                                Type;                                              // 0x0(0x8)
	int                                                          Max;                                               // 0x8(0x4)
	char                                                         pad0x4_GKZ77[0x4];                                 // 0xc(0x4)
};


// Size 0x18
struct LootSpawnedAtClueSite
{
public:
	class UClass*                                                SiteType;                                          // 0x0(0x8)
	struct Vector                                                SiteLocation;                                      // 0x8(0xc)
	int                                                          NumLoot;                                           // 0x14(0x4)
};


// Size 0x18
struct LandClueCreationChoice
{
public:
	class UClass*                                                ClueSiteType;                                      // 0x0(0x8)
	struct FName                                                 IslandIdentifier;                                  // 0x8(0x8)
	class LandClueCreator*                                       ClueCreator;                                       // 0x10(0x8)
};


// Size 0x10
struct ClueSiteLootRestriction
{
public:
	class UClass*                                                SiteType;                                          // 0x0(0x8)
	int                                                          LootMax;                                           // 0x8(0x4)
	char                                                         pad0x4_F4DAP[0x4];                                 // 0xc(0x4)
};


// Size 0x18
struct WeightedClueDestinationDescriptor
{
public:
	class UClass*                                                DestinationType;                                   // 0x0(0x8)
	TArray<float>                                                DifficultyWeightings;                              // 0x8(0x10)
};


// Size 0x28
struct DebrisToRangeDist
{
public:
	struct WeightedProbabilityRange                              NumberOfDebrisItemsToSpawn;                        // 0x0(0x20)
	class WeightedDebrisDataAsset*                               WeightedDebrisTypeAsset;                           // 0x20(0x8)
};


// Size 0x28
struct LootToRangeDist
{
public:
	struct WeightedProbabilityRange                              NumberOfLootItemsToSpawn;                          // 0x0(0x20)
	class WeightedTreasureChestDescAsset*                        WeightedLootDescAsset;                             // 0x20(0x8)
};


// Size 0x18
struct WeightedClueDescriptor
{
public:
	class UClass*                                                Descriptor;                                        // 0x0(0x8)
	TArray<float>                                                DifficultyWeightings;                              // 0x8(0x10)
};


// Size 0x30
struct QuestVariableClueSiteArray
{
public:
	char                                                         pad0x30_AP9Y1[0x30];                               // 0x0(0x30)
};


// Size 0x10
struct ClueSiteLootHistory
{
public:
	TArray<struct LootSpawnedAtClueSite>                         History;                                           // 0x0(0x10)
};


// Size 0x18
struct ClueSiteTypeSupportedDescribedByEntry
{
public:
	class UClass*                                                SiteType;                                          // 0x0(0x8)
	TArray<struct WeightedClueDescriptor>                        SupportedDescriptors;                              // 0x8(0x10)
};


