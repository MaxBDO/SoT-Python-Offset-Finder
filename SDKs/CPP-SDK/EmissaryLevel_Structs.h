#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0xc
struct EmissaryCompanyCampaignScale
{
public:
	struct FName                                                 Campaign;                                          // 0x0(0x8)
	float                                                        Scale;                                             // 0x8(0x4)
};


// Size 0x8
struct EmissaryCompanyActionReward
{
public:
	char                                                         CompanyActionType;                                 // 0x0(0x1)
	char                                                         pad0x3_VU336[0x3];                                 // 0x1(0x3)
	float                                                        Amount;                                            // 0x4(0x4)
};


// Size 0x1
struct ActivateEmissaryMaxRankQuestForSession
{
public:
	char                                                         pad0x1_UMRN8[0x1];                                 // 0x0(0x1)
};


// Size 0x28
struct ParticleVisualisation
{
public:
	struct ActorComponentSelector                                TargetParticles;                                   // 0x0(0x10)
	float                                                        Delay;                                             // 0x10(0x4)
	float                                                        DelayAfterPutOutParticles;                         // 0x14(0x4)
	class ParticleSystem*                                        PutOutParticles;                                   // 0x18(0x8)
	class ParticleSystemComponent*                               ParticleSystem;                                    // 0x20(0x8)
};


// Size 0x10
struct EmissaryDeactivatedNetworkEvent
{
public:
	char                                                         pad0x10_6U8JJ[0x10];                               // 0x0(0x10)
};


// Size 0x20
struct EmissaryMaxRankQuestProviderQuestOverrides
{
public:
	struct FeatureFlag                                           FeatureFlag;                                       // 0x0(0xc)
	char                                                         pad0x4_03H7H[0x4];                                 // 0xc(0x4)
	struct StringAssetReference                                  QuestDesc;                                         // 0x10(0x10)
};


// Size 0x8
struct EmissaryEncounteredAIShipEvent
{
public:
	struct FName                                                 CompanyName;                                       // 0x0(0x8)
};


// Size 0x1
struct EmissaryLevelResetProgress
{
public:
	char                                                         pad0x1_J59ZR[0x1];                                 // 0x0(0x1)
};


// Size 0x30
struct MaterialVisualisation
{
public:
	struct ActorComponentSelector                                TargetMesh;                                        // 0x0(0x10)
	float                                                        TransitionTime;                                    // 0x10(0x4)
	int                                                          MaterialIndex;                                     // 0x14(0x4)
	struct FName                                                 ParameterName;                                     // 0x18(0x8)
	float                                                        ActiveValue;                                       // 0x20(0x4)
	float                                                        InactiveValue;                                     // 0x24(0x4)
	class MaterialInstanceDynamic*                               DynamicMaterial;                                   // 0x28(0x8)
};


// Size 0x18
struct EmissarySoldLootNetworkEvent
{
public:
	char                                                         pad0x10_JNFY5[0x10];                               // 0x0(0x10)
	struct FName                                                 CompanyName;                                       // 0x10(0x8)
};


// Size 0x28
struct ReactivateEmissaryForMigratedCrew
{
public:
	struct Guid                                                  SessionId;                                         // 0x0(0x10)
	struct FName                                                 Company;                                           // 0x10(0x8)
	struct Guid                                                  AssociatedCrew;                                    // 0x18(0x10)
};


// Size 0x8
struct EmissaryVoteRemovedEvent
{
public:
	struct FName                                                 Company;                                           // 0x0(0x8)
};


// Size 0x30
struct EmissarySunkNetworkEvent
{
public:
	char                                                         pad0x10_FYEAQ[0x10];                               // 0x0(0x10)
	class DataAsset*                                             PopUpDesc;                                         // 0x10(0x8)
	struct FName                                                 CompanyName;                                       // 0x18(0x8)
	struct Guid                                                  GuildId;                                           // 0x20(0x10)
};


// Size 0x28
struct ActivateEmissaryForCrew
{
public:
	struct Guid                                                  SessionId;                                         // 0x0(0x10)
	struct FName                                                 Company;                                           // 0x10(0x8)
	struct Guid                                                  AssociatedCrew;                                    // 0x18(0x10)
};


// Size 0x2c
struct EmissarySessionStartTelemetryEvent
{
public:
	struct Guid                                                  EmissarySessionId;                                 // 0x0(0x10)
	struct FName                                                 EmissaryCompany;                                   // 0x10(0x8)
	int                                                          EmisarriesOnServerCount;                           // 0x18(0x4)
	struct Guid                                                  GuildId;                                           // 0x1c(0x10)
};


// Size 0x28
struct VoteRemovedNetworkEvent
{
public:
	char                                                         pad0x10_4XS2A[0x10];                               // 0x0(0x10)
	struct FName                                                 CompanyId;                                         // 0x10(0x8)
	struct Guid                                                  CrewId;                                            // 0x18(0x10)
};


// Size 0x1c
struct EmissarySessionEndTelemetryEvent
{
public:
	struct Guid                                                  EmissarySessionId;                                 // 0x0(0x10)
	struct FName                                                 EmissaryCompany;                                   // 0x10(0x8)
	char                                                         DisbandedReason;                                   // 0x18(0x1)
	char                                                         pad0x3_M5HNN[0x3];                                 // 0x19(0x3)
};


// Size 0x1
struct EmissaryNonQuestCompanyActionRewardBoostEvent
{
public:
	char                                                         CompanyActionType;                                 // 0x0(0x1)
};


// Size 0x8
struct EmissaryFactionActionReward
{
public:
	char                                                         FactionActionType;                                 // 0x0(0x1)
	char                                                         pad0x3_2UJSM[0x3];                                 // 0x1(0x3)
	float                                                        Amount;                                            // 0x4(0x4)
};


// Size 0x20
struct EmissaryKilledAnotherEmissaryNetworkEvent
{
public:
	char                                                         pad0x10_VEWVU[0x10];                               // 0x0(0x10)
	struct FName                                                 CompanyName;                                       // 0x10(0x8)
	struct FName                                                 VictimCompanyName;                                 // 0x18(0x8)
};


// Size 0x20
struct EmissaryFlagMeshReferences
{
public:
	struct StringAssetReference                                  BackOfShipEmissaryFlagMeshAssetReference;          // 0x0(0x10)
	struct StringAssetReference                                  MastEmissaryFlagMeshAssetReference;                // 0x10(0x10)
};


// Size 0x1c
struct EmissaryCompanyActionRewardBoostServiceEvent
{
public:
	struct FName                                                 AssociatedCompany;                                 // 0x0(0x8)
	char                                                         CompanyActionType;                                 // 0x8(0x1)
	char                                                         pad0x3_477OR[0x3];                                 // 0x9(0x3)
	struct Guid                                                  AssociatedCrew;                                    // 0xc(0x10)
};


// Size 0xc
struct EmissaryLevelRankChange
{
public:
	int                                                          NewLevel;                                          // 0x0(0x4)
	struct FName                                                 CompanyName;                                       // 0x4(0x8)
};


// Size 0x2c
struct EmissaryRoleplayActionTelemetryEvent
{
public:
	struct Guid                                                  EmissarySessionId;                                 // 0x0(0x10)
	struct FName                                                 EmissaryCompany;                                   // 0x10(0x8)
	int                                                          EmissaryRank;                                      // 0x18(0x4)
	char                                                         ActionName;                                        // 0x1c(0x1)
	char                                                         pad0x3_QYH4V[0x3];                                 // 0x1d(0x3)
	int                                                          PointsRewarded;                                    // 0x20(0x4)
	int                                                          PointsAccumulated;                                 // 0x24(0x4)
	int                                                          PointsRequiredToNextRank;                          // 0x28(0x4)
};


// Size 0x8
struct EmissaryPointBoostMultipliers
{
public:
	float                                                        PlayerWearningCompanyCostume;                      // 0x0(0x4)
	float                                                        CrewShipFullyEquippedWithCompanyCosmetics;         // 0x4(0x4)
};


// Size 0x28
struct EmissaryMaxLevelReachedNetworkEvent
{
public:
	char                                                         pad0x10_9LBS3[0x10];                               // 0x0(0x10)
	class DataAsset*                                             PopUpDesc;                                         // 0x10(0x8)
	struct Guid                                                  GuildId;                                           // 0x18(0x10)
};


// Size 0x40
struct DeactivateEmissaryForCrew
{
public:
	struct Guid                                                  SessionId;                                         // 0x0(0x10)
	struct Guid                                                  GuildId;                                           // 0x10(0x10)
	struct FName                                                 Company;                                           // 0x20(0x8)
	struct Guid                                                  AssociatedCrew;                                    // 0x28(0x10)
	char                                                         EmissaryDeactivateReason;                          // 0x38(0x1)
	char                                                         pad0x3_FPHY9[0x3];                                 // 0x39(0x3)
	int                                                          EmissaryTotal;                                     // 0x3c(0x4)
};


// Size 0x14
struct EmissaryFactionActionRewardBoostServiceEvent
{
public:
	char                                                         FactionActionType;                                 // 0x0(0x1)
	char                                                         pad0x3_64TLQ[0x3];                                 // 0x1(0x3)
	struct Guid                                                  AssociatedCrew;                                    // 0x4(0x10)
};


// Size 0x8
struct EmissaryEncounteredKrakenEvent
{
public:
	struct FName                                                 CompanyName;                                       // 0x0(0x8)
};


// Size 0x8
struct EmissaryGlobalActionRewardBoostEvent
{
public:
	class UClass*                                                GameEventType;                                     // 0x0(0x8)
};


// Size 0x20
struct EmissaryCompanyCosmetics
{
public:
	TArray<class Class*>                                         CompanyCostumeCosmetics;                           // 0x0(0x10)
	TArray<class Class*>                                         CompanyShipCosmetics;                              // 0x10(0x10)
};


// Size 0x8
struct EmissaryVoteAddedEvent
{
public:
	struct FName                                                 Company;                                           // 0x0(0x8)
};


// Size 0x18
struct EmissaryDiscoveredCargoRunCrateNetworkEvent
{
public:
	char                                                         pad0x10_K3LFR[0x10];                               // 0x0(0x10)
	struct FName                                                 CompanyName;                                       // 0x10(0x8)
};


// Size 0x18
struct EmissaryDiscoveredLootNetworkEvent
{
public:
	char                                                         pad0x10_N2MPF[0x10];                               // 0x0(0x10)
	struct FName                                                 CompanyName;                                       // 0x10(0x8)
};


// Size 0x8
struct EmissaryEncounteredTinySharkEvent
{
public:
	struct FName                                                 CompanyName;                                       // 0x0(0x8)
};


// Size 0x14
struct EmissaryLevelProgressUpdatedEvent
{
public:
	float                                                        LevelProgress;                                     // 0x0(0x4)
	struct Guid                                                  AssociatedCrew;                                    // 0x4(0x10)
};


// Size 0x18
struct EmissaryStoleLootNetworkEvent
{
public:
	char                                                         pad0x10_I341N[0x10];                               // 0x0(0x10)
	struct FName                                                 CompanyName;                                       // 0x10(0x8)
};


// Size 0x8
struct EmissaryPointsBoostCriteria
{
public:
	char                                                         pad0x8_V35HF[0x8];                                 // 0x0(0x8)
};


// Size 0xc
struct EmissaryStateUpdateEvent
{
public:
	float                                                        CurrentRepTotal;                                   // 0x0(0x4)
	struct FName                                                 CompanyId;                                         // 0x4(0x8)
};


// Size 0x18
struct EmissarySecuredLootOnShipNetworkEvent
{
public:
	char                                                         pad0x10_IPO4Q[0x10];                               // 0x0(0x10)
	struct FName                                                 CompanyName;                                       // 0x10(0x8)
};


// Size 0x4
struct ChaliceStatuePhaseUpdate
{
public:
	int                                                          NewLevel;                                          // 0x0(0x4)
};


// Size 0x10
struct EmissaryGameEventsReward
{
public:
	class UClass*                                                FinishedEventType;                                 // 0x0(0x8)
	float                                                        Amount;                                            // 0x8(0x4)
	char                                                         pad0x4_5LZM6[0x4];                                 // 0xc(0x4)
};


// Size 0x14
struct EmissaryQuestCompanyActionRewardBoostEvent
{
public:
	char                                                         CompanyActionType;                                 // 0x0(0x1)
	char                                                         pad0x3_2DE18[0x3];                                 // 0x1(0x3)
	struct Guid                                                  QuestId;                                           // 0x4(0x10)
};


// Size 0x20
struct EmissaryProgressUpdatedNetworkEvent
{
public:
	char                                                         pad0x10_MWUDM[0x10];                               // 0x0(0x10)
	float                                                        OldRepTotal;                                       // 0x10(0x4)
	float                                                        NewRepTotal;                                       // 0x14(0x4)
	struct FName                                                 CompanyId;                                         // 0x18(0x8)
};


// Size 0x10
struct PlayerAddedToEmissaryCrew
{
public:
	int                                                          EmissaryLevel;                                     // 0x0(0x4)
	float                                                        EmissaryLevelProgress;                             // 0x4(0x4)
	struct FName                                                 EmissaryCompany;                                   // 0x8(0x8)
};


// Size 0x8
struct EmissaryEventAward
{
public:
	bool                                                         FirstTimeOnly;                                     // 0x0(0x1)
	bool                                                         NotOriginalOwner;                                  // 0x1(0x1)
	char                                                         ItemQualityRequirement;                            // 0x2(0x1)
	char                                                         pad0x1_9MN4L[0x1];                                 // 0x3(0x1)
	int                                                          EmissaryLevelIncrease;                             // 0x4(0x4)
};


// Size 0x18
struct EmissaryEncounteredSkellyFortNetworkEvent
{
public:
	char                                                         pad0x10_7LQU5[0x10];                               // 0x0(0x10)
	struct FName                                                 CompanyName;                                       // 0x10(0x8)
};


// Size 0x10
struct EmissaryLedgerVisited
{
public:
	struct FString                                               CompanyId;                                         // 0x0(0x10)
};


// Size 0x18
struct TrackedPlayerKillEntry
{
public:
	struct FString                                               KilledPlayer;                                      // 0x0(0x10)
	int                                                          KillCount;                                         // 0x10(0x4)
	float                                                        KillTime;                                          // 0x14(0x4)
};


// Size 0x28
struct VoteAddedNetworkEvent
{
public:
	char                                                         pad0x10_3WAHG[0x10];                               // 0x0(0x10)
	struct FName                                                 CompanyId;                                         // 0x10(0x8)
	struct Guid                                                  CrewId;                                            // 0x18(0x10)
};


// Size 0x30
struct UpdateEmissaryValueForCompany
{
public:
	struct Guid                                                  SessionId;                                         // 0x0(0x10)
	struct FName                                                 Company;                                           // 0x10(0x8)
	struct Guid                                                  AssociatedCrew;                                    // 0x18(0x10)
	char                                                         RewardType;                                        // 0x28(0x1)
	char                                                         pad0x3_VOUKN[0x3];                                 // 0x29(0x3)
	int                                                          UpdateAmount;                                      // 0x2c(0x4)
};


// Size 0x1
struct PlayerRemovedFromEmissaryCrew
{
public:
	char                                                         pad0x1_7EO5O[0x1];                                 // 0x0(0x1)
};


// Size 0x4
struct EmissaryLevelStatusStatInfo
{
public:
	struct PlayerStat                                            StatToFire;                                        // 0x0(0x4)
};


// Size 0x10
struct EmissaryCompanyChangedEvent
{
public:
	char                                                         pad0x10_4VZVP[0x10];                               // 0x0(0x10)
};


// Size 0x1c
struct EmissaryLevelChanged
{
public:
	int                                                          NewLevel;                                          // 0x0(0x4)
	struct Guid                                                  AssociatedCrew;                                    // 0x4(0x10)
	struct FName                                                 CompanyName;                                       // 0x14(0x8)
};


// Size 0x18
struct EmissaryGlobalActionRewardBoostServiceEvent
{
public:
	class UClass*                                                FinishedEventType;                                 // 0x0(0x8)
	struct Guid                                                  AssociatedCrew;                                    // 0x8(0x10)
};


// Size 0x18
struct PerCompanyVotes
{
public:
	TArray<class PlayerState*>                                   MemberVotes;                                       // 0x0(0x10)
	struct FName                                                 CompanyIdentifier;                                 // 0x10(0x8)
};


// Size 0x8
struct EmissaryActivated
{
public:
	struct FName                                                 CompanyName;                                       // 0x0(0x8)
};


// Size 0x28
struct LightVisualisation
{
public:
	struct ActorComponentSelector                                TargetLight;                                       // 0x0(0x10)
	float                                                        TransitionTime;                                    // 0x10(0x4)
	float                                                        ActiveValue;                                       // 0x14(0x4)
	float                                                        InactiveValue;                                     // 0x18(0x4)
	char                                                         pad0x4_VOUIO[0x4];                                 // 0x1c(0x4)
	class LightComponent*                                        Light;                                             // 0x20(0x8)
};


// Size 0x34
struct UpdateGuildEmissaryValueForCompany
{
public:
	struct Guid                                                  GuildId;                                           // 0x0(0x10)
	struct FName                                                 Company;                                           // 0x10(0x8)
	struct Guid                                                  AssociatedCrew;                                    // 0x18(0x10)
	int                                                          UpdateAmount;                                      // 0x28(0x4)
	int                                                          From;                                              // 0x2c(0x4)
	int                                                          To;                                                // 0x30(0x4)
};


// Size 0x28
struct EmissaryJoinedNetworkEvent
{
public:
	char                                                         pad0x10_PFUHX[0x10];                               // 0x0(0x10)
	class DataAsset*                                             PopUpDesc;                                         // 0x10(0x8)
	struct Guid                                                  GuildId;                                           // 0x18(0x10)
};


// Size 0x8
struct EmissaryKillScaleFactor
{
public:
	int                                                          KillCount;                                         // 0x0(0x4)
	float                                                        ScaleFactor;                                       // 0x4(0x4)
};


// Size 0x10
struct EmissaryEntitlementPurchasedEvent
{
public:
	struct Guid                                                  OfferId;                                           // 0x0(0x10)
};


// Size 0x18
struct EmissaryCompanyCampaignKillPlayer
{
public:
	class UClass*                                                Company;                                           // 0x0(0x8)
	TArray<struct EmissaryCompanyCampaignScale>                  Scales;                                            // 0x8(0x10)
};


// Size 0x18
struct EmissaryCompanyCampaignGameEvent
{
public:
	class UClass*                                                EventType;                                         // 0x0(0x8)
	TArray<struct EmissaryCompanyCampaignScale>                  Scales;                                            // 0x8(0x10)
};


// Size 0x20
struct CrewMemberVotes
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
	TArray<struct PerCompanyVotes>                               CompanyVotes;                                      // 0x10(0x10)
};


// Size 0xd8
struct EmissaryLevelData
{
public:
	int                                                          LevelTarget;                                       // 0x0(0x4)
	char                                                         pad0x4_RB123[0x4];                                 // 0x4(0x4)
	struct EmissaryFlagMeshReferences                            EmissaryFlagMeshAssetReferences;                   // 0x8(0x20)
	class EmissaryColourSwatchSettingsAsset*                     CustomisedFlagSettings;                            // 0x68(0x8)
	struct RewardId                                              EmissaryDeactivationReward;                        // 0x70(0x8)
	TArray<struct PlayerStat>                                    StatsToFireOnEmissaryLevelReached;                 // 0x78(0x10)
	TArray<struct PlayerStat>                                    StatsToFireOnEmissaryLevelReachedGuildOnly;        // 0x88(0x10)
	TArray<struct PlayerStat>                                    StatsToFireOnEmissaryDeactivated;                  // 0x98(0x10)
	TArray<struct PlayerStat>                                    StatsToFireOnEmissaryDeactivatedGuildOnly;         // 0xa8(0x10)
	struct StringAssetReference                                  TreasureSoldNotificationFlag;                      // 0xb8(0x10)
	struct StringAssetReference                                  EmissaryFlagTextureReference;                      // 0xc8(0x10)
};


// Size 0x60
struct EmissaryColourSwatchInformation
{
public:
	struct FString                                               ColourSwatchIdentifier;                            // 0x0(0x10)
	struct EmissaryFlagMeshReferences                            EmissaryFlagMeshAssetReferences;                   // 0x10(0x20)
	struct StringAssetReference                                  EmissaryFlagTextureReference;                      // 0x50(0x10)
};


// Size 0x28
struct EmissaryKillPlayerReward
{
public:
	int                                                          EmissaryLevelIncrease;                             // 0x0(0x4)
	char                                                         pad0x4_S4IK9[0x4];                                 // 0x4(0x4)
	TArray<struct EmissaryKillScaleFactor>                       EmissaryLevelKillCountScaleFactors;                // 0x8(0x10)
	TArray<class Class*>                                         ValidEmissariesToKill;                             // 0x18(0x10)
};


// Size 0x88
struct EmissaryActionRewardData
{
public:
	TArray<struct EmissaryEventAward>                            OwnershipChangedRewards;                           // 0x0(0x10)
	TArray<struct EmissaryEventAward>                            PlacedOnShipRewards;                               // 0x10(0x10)
	struct EmissaryKillPlayerReward                              KillPlayerReward;                                  // 0x20(0x28)
	TArray<struct EmissaryGameEventsReward>                      GameEventsRewards;                                 // 0x48(0x10)
	TArray<struct EmissaryEventAward>                            HandinRewards;                                     // 0x58(0x10)
	TArray<struct EmissaryCompanyActionReward>                   CompanyActionRewards;                              // 0x68(0x10)
	TArray<struct EmissaryFactionActionReward>                   FactionActionRewards;                              // 0x78(0x10)
};


// Size 0x88
struct EmissaryLevelEntry
{
public:
	class UClass*                                                Company;                                           // 0x0(0x8)
	TArray<struct EmissaryLevelData>                             CompanyLevelData;                                  // 0x8(0x10)
	class DataAsset*                                             MaxRankPopUpToastData;                             // 0x18(0x8)
	class DataAsset*                                             EmissaryJoinedPopUpToastData;                      // 0x20(0x8)
	class DataAsset*                                             EmissarySunkPopUpToastData;                        // 0x28(0x8)
	struct EmissaryCompanyCosmetics                              CompanyCosmetics;                                  // 0x30(0x20)
	struct PlayerStat                                            TimeSpentAtMaxRankStat;                            // 0x50(0x4)
	char                                                         pad0x4_4JW8H[0x4];                                 // 0x54(0x4)
	TArray<struct PlayerStat>                                    StatsToFireOnFullEmissaryClothing;                 // 0x58(0x10)
	TArray<struct PlayerStat>                                    StatsToFireOnFullEmissaryShipCustomizations;       // 0x68(0x10)
	TArray<struct PlayerStat>                                    StatsToFireOnFullShipCustomizationsAndClothing;    // 0x78(0x10)
};


// Size 0x28
struct EmissaryCompanyCampaignSettings
{
public:
	class UClass*                                                Company;                                           // 0x0(0x8)
	TArray<struct EmissaryCompanyCampaignKillPlayer>             KillPlayers;                                       // 0x8(0x10)
	TArray<struct EmissaryCompanyCampaignGameEvent>              GameEvents;                                        // 0x18(0x10)
};


// Size 0x90
struct EmissaryRewardEntry
{
public:
	class UClass*                                                Company;                                           // 0x0(0x8)
	struct EmissaryActionRewardData                              ActionRewardData;                                  // 0x8(0x88)
};


