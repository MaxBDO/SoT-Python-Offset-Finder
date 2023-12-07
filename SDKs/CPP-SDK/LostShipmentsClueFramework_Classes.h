// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class ClueSiteData: public Object
{
public:
	byte                                                         DebrisTrackingType;                                // 0x28(0x1)
	char                                                         pad0xf_O4G9B[0xf];                                 // 0x29(0xf)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ClueSiteType: public Object
{
public:
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class LandClueCreator: public Object
{
public:
	char                                                         pad0x8_EU4P1[0x8];                                 // 0x28(0x8)
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class SeaClueCreator: public Object
{
public:
	char                                                         pad0x8_IL3XS[0x8];                                 // 0x28(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ClueChoiceSelectionStrategy: public Object
{
public:
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class FixedClueChoiceSelectionStrategy: public ClueChoiceSelectionStrategy
{
public:
	int                                                          IndexToSelect;                                     // 0x28(0x4)
	char                                                         pad0x4_X62VQ[0x4];                                 // 0x2c(0x4)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RandomClueChoiceSelectionStrategy: public ClueChoiceSelectionStrategy
{
public:
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class ClueDestinationDescriptor: public Object
{
public:
	char                                                         pad0x18_ISVZ8[0x18];                               // 0x28(0x18)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ClueDescriptor: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ClueConnectionBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class ClueDescriptorGenerator: public Object
{
public:
	class UClass*                                                DescriptorType;                                    // 0x28(0x8)
	TArray<class Class*>                                         SupportedDestinationTypes;                         // 0x30(0x10)
};


// Size 0x68 (Full Size[0x90] - InheritedSize[0x28]
class ClueDestinationGenerator: public Object
{
public:
	class UClass*                                                RequiredClueSiteDataType;                          // 0x28(0x8)
	TArray<struct WeightedClueDestinationDescriptor>             WeightedSupportedDescriptorTypes;                  // 0x30(0x10)
	char                                                         pad0x50_0BWKL[0x50];                               // 0x40(0x50)
};


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class ClueConnectionConfig: public DataAsset
{
public:
	TArray<struct ClueSiteTypeSupportedDescribedByEntry>         CluesThatCanDescribeSites;                         // 0x28(0x10)
	TArray<class ClueDescriptorGenerator*>                       ClueGenerators;                                    // 0x38(0x10)
	TArray<class ClueDestinationGenerator*>                      DestinationGenerators;                             // 0x48(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ClueDescriptorContainerInterface: public Interface
{
public:
};


// Size 0x18 (Full Size[0xe0] - InheritedSize[0xc8]
class ClueDescriptorContainerComponent: public ActorComponent
{
public:
	char                                                         pad0x8_OGF84[0x8];                                 // 0xc8(0x8)
	class ClueDescriptor*                                        CurrentClue;                                       // 0xd0(0x8)
	bool                                                         HasClueBeenGiven;                                  // 0xd8(0x1)
	char                                                         pad0x7_9XVOW[0x7];                                 // 0xd9(0x7)
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class ClueFactoryConfig: public DataAsset
{
public:
	TArray<class LandClueCreator*>                               LandClueCreators;                                  // 0x28(0x10)
	TArray<class SeaClueCreator*>                                SeaClueCreators;                                   // 0x38(0x10)
	class ClueChoiceSelectionStrategy*                           ChoiceStrategy;                                    // 0x48(0x8)
	TArray<struct RestrictedClueType>                            RestrictedClueTypes;                               // 0x50(0x10)
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class ClueFactory: public Object
{
public:
	class ClueFactoryConfig*                                     Config;                                            // 0x28(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ClueLifetimeBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class ClueSiteLootRestrictionsDataAsset: public DataAsset
{
public:
	TArray<struct ClueSiteLootRestriction>                       ClueSiteLootRestrictions;                          // 0x28(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class DebrisForVoyageRankDescAsset: public DataAsset
{
public:
	TArray<struct DebrisToRangeDist>                             RankBasedDebrisDistribution;                       // 0x28(0x10)
};


// Size 0x28 (Full Size[0x198] - InheritedSize[0x170]
class EnvQueryTest_SeaClueSpawnLocation: public EnvQueryTest
{
public:
	float                                                        MinProjectionDistance;                             // 0x170(0x4)
	float                                                        MaxProjectionDistance;                             // 0x174(0x4)
	float                                                        ProjectionAngleInDegrees;                          // 0x178(0x4)
	float                                                        IslandProximitySafeThreshold;                      // 0x17c(0x4)
	class UClass*                                                ContextSourcePoint;                                // 0x180(0x8)
	class UClass*                                                ContextProjectionPoint;                            // 0x188(0x8)
	char                                                         pad0x8_P0MVL[0x8];                                 // 0x190(0x8)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class LootForVoyageRankDescAsset: public DataAsset
{
public:
	TArray<struct LootToRangeDist>                               RankBasedLootDistribution;                         // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class NPCLootSpawnInterface: public Interface
{
public:
};


// Size 0x18 (Full Size[0xe0] - InheritedSize[0xc8]
class NPCLootSpawnComponent: public ActorComponent
{
public:
	char                                                         pad0x8_SM3IX[0x8];                                 // 0xc8(0x8)
	TArray<struct Vector>                                        LootItemSpawnRelativeLocations;                    // 0xd0(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class SeaClueSiteTypesDataAsset: public DataAsset
{
public:
	TArray<class Class*>                                         ClueSiteTypes;                                     // 0x28(0x10)
};


// Size 0x100 (Full Size[0x198] - InheritedSize[0x98]
class TaleQuestChooseLandOrSeaStep: public TaleQuestStep
{
public:
	char                                                         pad0x18_AW359[0x18];                               // 0x98(0x18)
	class SeaClueSiteTypesDataAsset*                             SeaClueSiteTypes;                                  // 0xb0(0x8)
	char                                                         pad0xe0_XY1NS[0xe0];                               // 0xb8(0xe0)
};


// Size 0x78 (Full Size[0xd8] - InheritedSize[0x60]
class TaleQuestClueSiteService: public TaleQuestService
{
public:
	class TaleQuestClueSiteServiceDesc*                          Desc;                                              // 0x60(0x8)
	TArray<struct ClueSite>                                      ClueSites;                                         // 0x68(0x10)
	TArray<struct Guid>                                          DebugClueSiteIds;                                  // 0xc8(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TaleQuestClueSiteServiceDesc: public TaleQuestServiceDesc
{
public:
};


// Size 0xe0 (Full Size[0x160] - InheritedSize[0x80]
class TaleQuestChooseLandOrSeaStepDesc: public TaleQuestStepDesc
{
public:
	class SeaClueSiteTypesDataAsset*                             SeaClueSiteTypes;                                  // 0x80(0x8)
	float                                                        ProjectionAngleInDegrees;                          // 0x88(0x4)
	float                                                        MinProjectionProportion;                           // 0x8c(0x4)
	float                                                        MaxProjectionProportion;                           // 0x90(0x4)
	float                                                        LandClueChanceWhenPreviousClueWasSea;              // 0x94(0x4)
	float                                                        LandClueChanceWhenPreviousClueWasLand;             // 0x98(0x4)
	char                                                         pad0x4_FKSKZ[0x4];                                 // 0x9c(0x4)
	struct QuestVariableVector                                   ProjectionPoint;                                   // 0xa0(0x30)
	struct QuestVariableTradeRouteData                           TradeRouteData;                                    // 0xd0(0x30)
	struct QuestVariableBool                                     IsSeaLocation;                                     // 0x100(0x30)
	struct QuestVariableNameArray                                ValidIslandNames;                                  // 0x130(0x30)
};


// Size 0xc0 (Full Size[0x158] - InheritedSize[0x98]
class TaleQuestGenerateCluePointingToSiteStep: public TaleQuestStep
{
public:
	char                                                         pad0xc0_KC2AV[0xc0];                               // 0x98(0xc0)
};


// Size 0xd8 (Full Size[0x158] - InheritedSize[0x80]
class TaleQuestGenerateCluePointingToSiteStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableInt                                      Difficulty;                                        // 0x80(0x30)
	struct QuestVariableVector                                   SourceLocation;                                    // 0xb0(0x30)
	struct QuestVariableClueSite                                 TargetClueSite;                                    // 0xe0(0x30)
	struct QuestVariableClueDescriptor                           GeneratedClue;                                     // 0x110(0x30)
	TArray<class Class*>                                         AllowedClueTypes;                                  // 0x140(0x10)
	class ClueConnectionConfig*                                  ConnectionConfiguration;                           // 0x150(0x8)
};


// Size 0x60 (Full Size[0xf8] - InheritedSize[0x98]
class TaleQuestGenerateClueSiteAtSeaLocationStep: public TaleQuestStep
{
public:
	char                                                         pad0x60_K1SW6[0x60];                               // 0x98(0x60)
};


// Size 0x68 (Full Size[0xe8] - InheritedSize[0x80]
class TaleQuestGenerateClueSiteAtSeaLocationStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableVector                                   ApproximateLocation;                               // 0x80(0x30)
	struct QuestVariableClueSite                                 ClueSite;                                          // 0xb0(0x30)
	class ClueFactoryConfig*                                     ClueFactoryConfiguration;                          // 0xe0(0x8)
};


// Size 0x60 (Full Size[0xf8] - InheritedSize[0x98]
class TaleQuestGenerateClueSiteOnIslandStep: public TaleQuestStep
{
public:
	char                                                         pad0x60_3LD65[0x60];                               // 0x98(0x60)
};


// Size 0x68 (Full Size[0xe8] - InheritedSize[0x80]
class TaleQuestGenerateClueSiteOnIslandStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableName                                     IslandName;                                        // 0x80(0x30)
	struct QuestVariableClueSite                                 ClueSite;                                          // 0xb0(0x30)
	class ClueFactoryConfig*                                     ClueGenerationConfiguration;                       // 0xe0(0x8)
};


// Size 0x60 (Full Size[0xf8] - InheritedSize[0x98]
class TaleQuestGenerateDebrisTypeForVoyageRankStep: public TaleQuestStep
{
public:
	char                                                         pad0x60_7ZQNM[0x60];                               // 0x98(0x60)
};


// Size 0x68 (Full Size[0xe8] - InheritedSize[0x80]
class TaleQuestGenerateDebrisTypeForVoyageRankStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableInt                                      VoyageRank;                                        // 0x80(0x30)
	struct QuestVariableActorAssetTypeArray                      DebrisTypeArray;                                   // 0xb0(0x30)
	class DebrisForVoyageRankDescAsset*                          DebrisForRankDescAsset;                            // 0xe0(0x8)
};


// Size 0x60 (Full Size[0xf8] - InheritedSize[0x98]
class TaleQuestGenerateLootDescForVoyageRankStep: public TaleQuestStep
{
public:
	char                                                         pad0x60_3QR3H[0x60];                               // 0x98(0x60)
};


// Size 0x68 (Full Size[0xe8] - InheritedSize[0x80]
class TaleQuestGenerateLootDescForVoyageRankStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableInt                                      VoyageRank;                                        // 0x80(0x30)
	struct QuestVariableItemDescTypeArray                        LootDescArray;                                     // 0xb0(0x30)
	class LootForVoyageRankDescAsset*                            LootForRankDescAsset;                              // 0xe0(0x8)
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleQuestIsClueOfTypeStep: public TaleQuestStep
{
public:
};


// Size 0x68 (Full Size[0xe8] - InheritedSize[0x80]
class TaleQuestIsClueOfTypeStepDesc: public TaleQuestStepDesc
{
public:
	class UClass*                                                ClueSiteTypeToMatch;                               // 0x80(0x8)
	struct QuestVariableClueSite                                 ClueSite;                                          // 0x88(0x30)
	struct QuestVariableBool                                     IsMatchingType;                                    // 0xb8(0x30)
};


// Size 0x68 (Full Size[0x100] - InheritedSize[0x98]
class TaleQuestSelectClueSiteForLootStep: public TaleQuestStep
{
public:
	class TaleQuestSelectClueSiteForLootStepDesc*                StepDesc;                                          // 0x98(0x8)
	char                                                         pad0x60_OOQF8[0x60];                               // 0xa0(0x60)
};


// Size 0x78 (Full Size[0xf8] - InheritedSize[0x80]
class TaleQuestSelectClueSiteForLootStepDesc: public TaleQuestStepDesc
{
public:
	class TaleQuestArrayEntrySelectionStrategy*                  SelectionStrategy;                                 // 0x80(0x8)
	class ClueSiteLootRestrictionsDataAsset*                     ClueSiteLootRestrictions;                          // 0x88(0x8)
	byte                                                         LootType;                                          // 0x90(0x1)
	char                                                         pad0x7_TFLL9[0x7];                                 // 0x91(0x7)
	struct QuestVariableClueSite                                 OutputClueSite;                                    // 0x98(0x30)
	struct QuestVariableBool                                     MaxedAllClueSites;                                 // 0xc8(0x30)
};


// Size 0xa8 (Full Size[0x140] - InheritedSize[0x98]
class TaleQuestSpawnDebrisAtClueSiteStep: public TaleQuestStep
{
public:
	char                                                         pad0xa8_FL0IE[0xa8];                               // 0x98(0xa8)
};


// Size 0x90 (Full Size[0x110] - InheritedSize[0x80]
class TaleQuestSpawnDebrisAtClueSiteStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableClueSite                                 ClueSiteVar;                                       // 0x80(0x30)
	struct QuestVariableActorAssetType                           DebrisTypeVar;                                     // 0xb0(0x30)
	struct QuestVariableActor                                    OutDebrisActorVar;                                 // 0xe0(0x30)
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleQuestSpawnLootItemInClueSiteStep: public TaleQuestStep
{
public:
};


// Size 0x98 (Full Size[0x118] - InheritedSize[0x80]
class TaleQuestSpawnLootItemInClueSiteStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableClass                                    LootItem;                                          // 0x80(0x30)
	struct QuestVariableClueSite                                 ClueSite;                                          // 0xb0(0x30)
	struct QuestVariableItemInfo                                 SpawnedLootItem;                                   // 0xe0(0x30)
	bool                                                         Tracked;                                           // 0x110(0x1)
	char                                                         pad0x7_U7WZR[0x7];                                 // 0x111(0x7)
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleQuestStoreClueOnActorStep: public TaleQuestStep
{
public:
};


// Size 0x90 (Full Size[0x110] - InheritedSize[0x80]
class TaleQuestStoreClueOnActorStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableClueDescriptor                           ClueDescriptor;                                    // 0x80(0x30)
	struct QuestVariableActor                                    Actor;                                             // 0xb0(0x30)
	struct QuestVariableActor                                    ClueActor;                                         // 0xe0(0x30)
};


// Size 0x38 (Full Size[0xd0] - InheritedSize[0x98]
class TaleQuestUpdateBuoyancyAutoSinkSettingForItemStep: public TaleQuestStep
{
public:
	char                                                         pad0x38_4HO3M[0x38];                               // 0x98(0x38)
};


// Size 0x38 (Full Size[0xb8] - InheritedSize[0x80]
class TaleQuestUpdateBuoyancyAutoSinkSettingForItemStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableItemInfo                                 Item;                                              // 0x80(0x30)
	bool                                                         EnableAutoSink;                                    // 0xb0(0x1)
	char                                                         pad0x7_UNIML[0x7];                                 // 0xb1(0x7)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class WeightedDebrisDataAsset: public DataAsset
{
public:
	TArray<struct WeightedDebris>                                Debris;                                            // 0x28(0x10)
};


}