// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28 (Full Size[0xc0] - InheritedSize[0x98]
class AddMarkToTornMapStep: public TaleQuestStep
{
public:
	char                                                         pad0x20_VIAJ3[0x20];                               // 0x98(0x20)
	class UClass*                                                MapMark;                                           // 0xb8(0x8)
};


// Size 0x60 (Full Size[0xe0] - InheritedSize[0x80]
class AddMarkToTornMapStepDescBase: public TaleQuestStepDesc
{
public:
	struct QuestVariableGuid                                     MapID;                                             // 0x80(0x30)
	struct TaleQuestVariableMapMarkType                          MapMark;                                           // 0xb0(0x30)
};


// Size 0x30 (Full Size[0x110] - InheritedSize[0xe0]
class AddMarkToTornMapAtLocationStepDesc: public AddMarkToTornMapStepDescBase
{
public:
	struct QuestVariableVector                                   MarkLocation;                                      // 0xe0(0x30)
};


// Size 0x30 (Full Size[0x110] - InheritedSize[0xe0]
class AddMarkToTornMapAtActorLocationStepDesc: public AddMarkToTornMapStepDescBase
{
public:
	struct QuestVariableActor                                    MarkLocation;                                      // 0xe0(0x30)
};


// Size 0x40 (Full Size[0xd8] - InheritedSize[0x98]
class GetNumberOfCollectedTornMapPiecesStep: public TaleQuestStep
{
public:
	char                                                         pad0x40_TKP7I[0x40];                               // 0x98(0x40)
};


// Size 0x60 (Full Size[0xe0] - InheritedSize[0x80]
class GetNumberOfCollectedTornMapPiecesStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableGuid                                     MapID;                                             // 0x80(0x30)
	struct QuestVariableInt                                      NumPieces;                                         // 0xb0(0x30)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RegionIslandSelectionStrategyBase: public Object
{
public:
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class RegionIslandFilteredSelectionStrategy: public RegionIslandSelectionStrategyBase
{
public:
	TArray<Byte IslandTypes>                                     IslandTypes;                                       // 0x28(0x10)
	bool                                                         UseMaxDistance;                                    // 0x38(0x1)
	char                                                         pad0x3_Q36I5[0x3];                                 // 0x39(0x3)
	float                                                        MaxDistanceFromStartingIsland;                     // 0x3c(0x4)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RegionIslandRandomSelectionStrategy: public RegionIslandSelectionStrategyBase
{
public:
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class RegionIslandWayfinderSelectionStrategy: public RegionIslandSelectionStrategyBase
{
public:
	TArray<Byte IslandTypes>                                     IslandTypes;                                       // 0x28(0x10)
	float                                                        StartingIslandMinDistanceFromKeyIsland;            // 0x38(0x4)
	char                                                         pad0x4_TABFX[0x4];                                 // 0x3c(0x4)
	class Actor*                                                 VaultActor;                                        // 0x40(0x8)
};


// Size 0x60 (Full Size[0xf8] - InheritedSize[0x98]
class SelectIslandsFromRegionStep: public TaleQuestStep
{
public:
	class RegionMapDataAsset*                                    RegionData;                                        // 0x98(0x8)
	class RegionIslandSelectionStrategyBase*                     SelectionStrategy;                                 // 0xa0(0x8)
	char                                                         pad0x50_TFT7R[0x50];                               // 0xa8(0x50)
};


// Size 0xd0 (Full Size[0x150] - InheritedSize[0x80]
class SelectIslandsFromRegionStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableDataAsset                                Region;                                            // 0x80(0x30)
	struct QuestVariableInt                                      NumIslands;                                        // 0xb0(0x30)
	struct QuestVariableInt                                      MaxDifferentIslands;                               // 0xe0(0x30)
	struct QuestVariableNameArray                                SelectedIslands;                                   // 0x110(0x30)
	class RegionIslandSelectionStrategyBase*                     SelectionStrategy;                                 // 0x140(0x8)
	int                                                          DefaultNumIslands;                                 // 0x148(0x4)
	int                                                          DefaultMaxDifferentIslands;                        // 0x14c(0x4)
};


// Size 0x98 (Full Size[0x130] - InheritedSize[0x98]
class SelectWayfinderIslandsFromRegionStep: public TaleQuestStep
{
public:
	class RegionMapDataAsset*                                    RegionData;                                        // 0x98(0x8)
	class RegionIslandWayfinderSelectionStrategy*                SelectionStrategy;                                 // 0xa0(0x8)
	class Actor*                                                 VaultActor;                                        // 0xa8(0x8)
	char                                                         pad0x80_2Q4R1[0x80];                               // 0xb0(0x80)
};


// Size 0x130 (Full Size[0x1b0] - InheritedSize[0x80]
class SelectWayfinderIslandsFromRegionStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableDataAsset                                Region;                                            // 0x80(0x30)
	struct QuestVariableInt                                      NumIslands;                                        // 0xb0(0x30)
	struct QuestVariableInt                                      MaxDifferentIslands;                               // 0xe0(0x30)
	struct QuestVariableActor                                    VaultActor;                                        // 0x110(0x30)
	struct QuestVariableName                                     KeyIslandName;                                     // 0x140(0x30)
	struct QuestVariableNameArray                                SelectedIslands;                                   // 0x170(0x30)
	class RegionIslandWayfinderSelectionStrategy*                SelectionStrategy;                                 // 0x1a0(0x8)
	int                                                          DefaultNumIslands;                                 // 0x1a8(0x4)
	int                                                          DefaultMaxDifferentIslands;                        // 0x1ac(0x4)
};


// Size 0xc0 (Full Size[0x158] - InheritedSize[0x98]
class TaleQuestAddLocationMapStep: public TaleQuestStep
{
public:
	char                                                         pad0xc0_AVRJ2[0xc0];                               // 0x98(0xc0)
};


// Size 0xd8 (Full Size[0x170] - InheritedSize[0x98]
class TaleQuestAddTornMapStep: public TaleQuestStep
{
public:
	char                                                         pad0xd8_GV8AU[0xd8];                               // 0x98(0xd8)
};


// Size 0x90 (Full Size[0x128] - InheritedSize[0x98]
class TaleQuestAddTradeRouteMapStep: public TaleQuestStep
{
public:
	char                                                         pad0x90_EDGTZ[0x90];                               // 0x98(0x90)
};


// Size 0x18 (Full Size[0x198] - InheritedSize[0x180]
class TaleQuestCustomMapFunctionLibrary: public TaleQuestFunctionStepLibrary
{
public:
	char                                                         pad0x18_IVCTX[0x18];                               // 0x180(0x18)
};


// Size 0x8 (Full Size[0xa0] - InheritedSize[0x98]
class TaleQuestLocationMapChestFoundStep: public TaleQuestStep
{
public:
	char                                                         pad0x8_1KJ7G[0x8];                                 // 0x98(0x8)
};


// Size 0x0 (Full Size[0x80] - InheritedSize[0x80]
class TaleQuestMapStepDescBase: public TaleQuestStepDesc
{
public:
};


// Size 0xc8 (Full Size[0x148] - InheritedSize[0x80]
class TaleQuestAddLocationMapStepDesc: public TaleQuestMapStepDescBase
{
public:
	struct FName                                                 MapID;                                             // 0x80(0x8)
	struct QuestVariableInt                                      NumberOfChests;                                    // 0x88(0x30)
	struct QuestVariableDataAsset                                RegionMapData;                                     // 0xb8(0x30)
	struct QuestVariableDataAsset                                VaultData;                                         // 0xe8(0x30)
	struct QuestVariableDataAsset                                MapParams;                                         // 0x118(0x30)
};


// Size 0xc0 (Full Size[0x140] - InheritedSize[0x80]
class TaleQuestAddTornMapStepDesc: public TaleQuestMapStepDescBase
{
public:
	struct QuestVariableName                                     IslandName;                                        // 0x80(0x30)
	struct QuestVariableInt                                      NumberOfPieces;                                    // 0xb0(0x30)
	struct QuestVariableDataAsset                                MapParams;                                         // 0xe0(0x30)
	struct QuestVariableGuid                                     MapID;                                             // 0x110(0x30)
};


// Size 0x98 (Full Size[0x118] - InheritedSize[0x80]
class TaleQuestAddTradeRouteMapStepDesc: public TaleQuestMapStepDescBase
{
public:
	struct QuestVariableDataAsset                                TradeRouteData;                                    // 0x80(0x30)
	struct QuestVariableText                                     VesselName;                                        // 0xb0(0x30)
	struct QuestVariableGuid                                     MapID;                                             // 0xe0(0x30)
	class ClueSiteTypeToMapMarkIdDataAsset*                      ClueSiteToMapMarkIdMap;                            // 0x110(0x8)
};


// Size 0x8 (Full Size[0x88] - InheritedSize[0x80]
class TaleQuestLocationMapChestFoundStepDesc: public TaleQuestMapStepDescBase
{
public:
	struct FName                                                 MapID;                                             // 0x80(0x8)
};


// Size 0x8 (Full Size[0xa0] - InheritedSize[0x98]
class TaleQuestWaitForChecklistMapCompletionStep: public TaleQuestStep
{
public:
	char                                                         pad0x8_79V8I[0x8];                                 // 0x98(0x8)
};


// Size 0x0 (Full Size[0x180] - InheritedSize[0x180]
class TaleQuestTornMapFunctionLibrary: public TaleQuestFunctionStepLibrary
{
public:
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleQuestTriggerNamedChecklistEventStep: public TaleQuestStep
{
public:
};


// Size 0x8 (Full Size[0x88] - InheritedSize[0x80]
class TaleQuestTriggerNamedChecklistEventStepDesc: public TaleQuestStepDesc
{
public:
	struct FName                                                 Event;                                             // 0x80(0x8)
};


}