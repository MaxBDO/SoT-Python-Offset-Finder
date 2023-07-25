// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x38
struct TaleQuestDeliveryRequest
{
public:
	int                                                          Id;                                                // 0x0(0x4)
	char                                                         pad0x4_CFIEO[0x4];                                 // 0x4(0x4)
	Struct MerchantContractItemDesc                              Item;                                              // 0x8(0x28)
	int                                                          NumToDeliver;                                      // 0x30(0x4)
	int                                                          NumToAllocate;                                     // 0x34(0x4)
};


// Size 0x3
struct TaleActorSpawnParameters
{
public:
	bool                                                         Tracked;                                           // 0x0(0x1)
	bool                                                         GatherForMigration;                                // 0x1(0x1)
	bool                                                         DeferredSpawning;                                  // 0x2(0x1)
};


// Size 0x14
struct IslandTypeWeights
{
public:
	float                                                        FeatureIslandWeight;                               // 0x0(0x4)
	float                                                        ResourceIslandWeight;                              // 0x4(0x4)
	float                                                        OutpostIslandWeight;                               // 0x8(0x4)
	float                                                        SeapostIslandWeight;                               // 0xc(0x4)
	float                                                        FortIslandWeight;                                  // 0x10(0x4)
};


// Size 0x30
struct QuestVariableAny
{
public:
};


// Size 0x1
struct SplineFootprintPathTool
{
public:
};


// Size 0x18
struct TaleQuestCargoRunContractItem
{
public:
	class                                                        ItemToCollect;                                     // 0x0(0x8)
};


// Size 0x48
struct CompondNodePinDesc
{
public:
	Struct FText                                                 DisplayName;                                       // 0x0(0x38)
	Struct Guid                                                  PinId;                                             // 0x38(0x10)
};


// Size 0x80
struct TaleQuestDesc
{
public:
	Class TaleQuestStepDesc*                                     Root;                                              // 0x28(0x8)
	Class Object*                                                Definition;                                        // 0x30(0x8)
	Struct FText                                                 TaleFailMessage;                                   // 0x38(0x38)
	struct FName                                                 TaleFailBannerTag;                                 // 0x70(0x8)
	bool                                                         ShouldFireStartTallTaleTrackedObjective;           // 0x78(0x1)
	bool                                                         Development;                                       // 0x79(0x1)
};


// Size 0x10
struct TaleQuestToggledDefinition
{
public:
	struct FName                                                 FeatureToggle;                                     // 0x0(0x8)
	class                                                        Definition;                                        // 0x8(0x8)
};


// Size 0x20
struct TaleQuestQueryableStateDataInfoId
{
public:
	Struct Guid                                                  MyTaleId;                                          // 0x0(0x10)
	Struct Guid                                                  MyScopeId;                                         // 0x10(0x10)
};


// Size 0x30
struct TaleQuestQueryableStateDataInfo
{
public:
	Struct TaleQuestQueryableStateDataInfoId                     InfoId;                                            // 0x0(0x20)
	class                                                        DataID;                                            // 0x20(0x8)
	bool                                                         DataBool;                                          // 0x28(0x1)
	char                                                         pad0x3_GNHWV[0x3];                                 // 0x29(0x3)
	int                                                          DataInt;                                           // 0x2c(0x4)
};


// Size 0x10
struct TrackedActorData
{
public:
	Class Actor*                                                 Actor;                                             // 0x0(0x8)
};


// Size 0x60
struct SnapshottedActorData
{
public:
	Struct Guid                                                  SnapshotID;                                        // 0x10(0x10)
	bool                                                         ActorWasCritical;                                  // 0x20(0x1)
	bool                                                         ActorWasTracked;                                   // 0x21(0x1)
	char                                                         pad0x6_2ESP1[0x6];                                 // 0x22(0x6)
	Struct FText                                                 FailureMessage;                                    // 0x28(0x38)
};


// Size 0x48
struct CriticalActorDelegateData
{
public:
	Class Actor*                                                 CriticalActor;                                     // 0x0(0x8)
	Struct FText                                                 FailureMessage;                                    // 0x8(0x38)
};


// Size 0x40
struct CriticalActorWrapper
{
public:
	Class Actor*                                                 CriticalActor;                                     // 0x0(0x8)
};


// Size 0x28
struct PhasedItem
{
public:
	Class ItemProxy*                                             ItemProxy;                                         // 0x0(0x8)
	Class ItemInfo*                                              ItemInfo;                                          // 0x8(0x8)
	bool                                                         Tracked;                                           // 0x10(0x1)
};


// Size 0x20
struct PhasedActor
{
public:
	Class Actor*                                                 MapActor;                                          // 0x0(0x8)
	Class Actor*                                                 Actor;                                             // 0x8(0x8)
};


// Size 0x30
struct QuestVariableCollection
{
public:
};


// Size 0x30
struct QuestVariableArray
{
public:
};


// Size 0x30
struct QuestVariableGuidArray
{
public:
};


// Size 0x30
struct QuestVariableActorArray
{
public:
};


// Size 0x30
struct QuestVariableObjectArray
{
public:
};


// Size 0x30
struct QuestVariableClassArray
{
public:
};


// Size 0x30
struct QuestVariableSetEQSTaleContextValue
{
public:
};


// Size 0x30
struct QuestVariableLinkEQSContext
{
public:
};


// Size 0x20
struct ParticpantToolGroup
{
public:
};


// Size 0x10
struct MigrationActionPair
{
public:
	Struct TaleResourceHandle                                    AllocatedResourceHandle;                           // 0x0(0x8)
	Class TaleMigrationAction*                                   MigrationAction;                                   // 0x8(0x8)
};


// Size 0x30
struct QuestVariableRotator
{
public:
};


// Size 0x30
struct QuestVariableActorAssetType
{
public:
};


// Size 0x28
struct BodyFramePair
{
public:
	Class TaleQuestIndexedFrame*                                 Frame;                                             // 0x10(0x8)
};


// Size 0x28
struct TaleQuestForEachCrewTask
{
public:
};


// Size 0x1
struct TaleQuestStopPermanentPromptEvent
{
public:
};


// Size 0x30
struct QuestVariableItemDescType
{
public:
};


// Size 0x30
struct QuestVariableItemInfo
{
public:
};


// Size 0x30
struct QuestVariablePrioritisedPrompt
{
public:
};


// Size 0x30
struct QuestVariableGameEvent
{
public:
};


// Size 0x30
struct QuestVariableAISpawner
{
public:
};


// Size 0x40
struct TaleQuestQueryableStateCanAllDataBeReadCondition
{
public:
	TArray<class Class*>                                         AllDataToCheck;                                    // 0x28(0x10)
	bool                                                         ExpectedValue;                                     // 0x38(0x1)
};


// Size 0x40
struct TaleQuestQueryableStateCanAnyDataBeReadCondition
{
public:
	TArray<class Class*>                                         AllDataToCheck;                                    // 0x28(0x10)
	bool                                                         ExpectedValue;                                     // 0x38(0x1)
};


// Size 0x40
struct TaleQuestQueryableStateReadAllValueBoolCondition
{
public:
	TArray<class Class*>                                         AllDataToCheck;                                    // 0x28(0x10)
	bool                                                         ExpectedValue;                                     // 0x38(0x1)
};


// Size 0x40
struct TaleQuestQueryableStateReadAnyValueBoolCondition
{
public:
	TArray<class Class*>                                         AllDataToCheck;                                    // 0x28(0x10)
	bool                                                         ExpectedValue;                                     // 0x38(0x1)
};


// Size 0x38
struct TaleQuestQueryableStateReadValueIntCondition
{
public:
	class                                                        DataID;                                            // 0x28(0x8)
	int                                                          ExpectedValue;                                     // 0x30(0x4)
	byte                                                         ComparisonToExpectedValue;                         // 0x34(0x1)
};


// Size 0x20
struct InteractionOptionSelectedWithQueryableStateNonUI
{
public:
	class                                                        DataID;                                            // 0x0(0x8)
	Struct Guid                                                  InstigatorCrewID;                                  // 0x8(0x10)
	Class Actor*                                                 InteractingPlayer;                                 // 0x18(0x8)
};


// Size 0x30
struct QuestVariableTaleResourceHandle
{
public:
};


// Size 0x30
struct QueryableStateChangedEvent
{
public:
	Struct TaleQuestQueryableStateDataInfo                       DataValue;                                         // 0x0(0x30)
};


// Size 0x8
struct ActorSpawnedAutomationEvent
{
public:
};


// Size 0x1
struct EventSpawnedTallTaleQuestItem
{
public:
};


// Size 0x4
struct TaleQuestSelectorServiceSeedSetTelemetryEvent
{
public:
	int                                                          Seed;                                              // 0x0(0x4)
};


// Size 0x18
struct PlaySequencerAutomationEvent
{
public:
};


// Size 0x18
struct MontageAnimationCommandBase
{
public:
	Class Actor*                                                 MyTarget;                                          // 0x8(0x8)
	Class AnimMontage*                                           MyMontage;                                         // 0x10(0x8)
};


// Size 0x20
struct JumpToMontageSectionCommand
{
public:
	struct FName                                                 SectionName;                                       // 0x18(0x8)
};


// Size 0x20
struct PlayMontageAnimationCommand
{
public:
	float                                                        PlayRate;                                          // 0x18(0x4)
	float                                                        Position;                                          // 0x1c(0x4)
};


// Size 0x28
struct SetNextMontageSectionCommand
{
public:
	struct FName                                                 FromSectionName;                                   // 0x18(0x8)
	struct FName                                                 ToSectionName;                                     // 0x20(0x8)
};


// Size 0x20
struct StopMontageAnimationCommand
{
public:
	float                                                        BlendOutTime;                                      // 0x18(0x4)
};


// Size 0x18
struct SetDialogueInteractionEnabledClientCommand
{
public:
	Class Object*                                                DialogueComponentObject;                           // 0x8(0x8)
	bool                                                         ShouldBeEnabled;                                   // 0x10(0x1)
};


// Size 0x48
struct SetDialogueInteractionPromptClientCommand
{
public:
	Class NPCDialogComponent*                                    DialogueComponent;                                 // 0x8(0x8)
	Struct FText                                                 Prompt;                                            // 0x10(0x38)
};


// Size 0x1
struct EventModalInteractionStateChanged
{
public:
	bool                                                         IsInteractionBlocked;                              // 0x0(0x1)
};


// Size 0x20
struct ToggleModalInteractionNetworkEvent
{
public:
	Class Actor*                                                 TargetActor;                                       // 0x10(0x8)
	bool                                                         InteractionBlocked;                                // 0x18(0x1)
};


// Size 0x30
struct QuestVariableMerchantItemArray
{
public:
};


// Size 0x30
struct QuestVariableMerchantItem
{
public:
};


// Size 0x40
struct StepMerchantItemDesc
{
public:
	Struct FText                                                 Name;                                              // 0x0(0x38)
	Class Texture*                                               Icon;                                              // 0x38(0x8)
};


// Size 0x30
struct QuestVariableActorAssetTypeArray
{
public:
};


// Size 0x30
struct QuestVariableItemDescTypeArray
{
public:
};


// Size 0x30
struct QuestVariablePageLayout
{
public:
};


// Size 0x30
struct QuestVariableTexture
{
public:
};


// Size 0x20
struct TaleQuestFailedEvent
{
public:
	TArray<struct CrewIds>                                       CrewIds;                                           // 0x0(0x10)
	Struct Guid                                                  QuestId;                                           // 0x10(0x10)
};


// Size 0x10
struct TaleQuestContextInvalidTelemetryEvent
{
public:
	struct FName                                                 StepType;                                          // 0x0(0x8)
	struct FName                                                 Tale;                                              // 0x8(0x8)
};


// Size 0x40
struct TaleQuestDeliverableItem
{
public:
	Struct FText                                                 Name;                                              // 0x0(0x38)
	Class Texture*                                               Icon;                                              // 0x38(0x8)
};


// Size 0x30
struct QuestVariableBountyTargetArray
{
public:
};


// Size 0x40
struct StepBountyTargetDesc
{
public:
	Struct FText                                                 Name;                                              // 0x0(0x38)
	Class Texture*                                               Portrait;                                          // 0x38(0x8)
};


}