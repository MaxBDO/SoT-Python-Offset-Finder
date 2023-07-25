// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
struct PetCustomisation
{
public:
	Struct FString                                               DefaultPetName;                                    // 0x0(0x10)
	Struct FString                                               PetName;                                           // 0x10(0x10)
	Struct AIPartId                                              PetPartId;                                         // 0x20(0x8)
};


// Size 0x8
struct HangoutSpotId
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
};


// Size 0x20
struct PetTurnToFaceData
{
public:
	Struct Quat                                                  EndRotation;                                       // 0x0(0x10)
	float                                                        RotationTime;                                      // 0x10(0x4)
};


// Size 0x3
struct PetDangerHearingThreatResponse
{
public:
	byte                                                         Type;                                              // 0x0(0x1)
	byte                                                         IgnoredTarget;                                     // 0x1(0x1)
	bool                                                         InvertIgnoredTarget;                               // 0x2(0x1)
};


// Size 0x28
struct HangoutSpotParams
{
public:
	struct FName                                                 HangoutSpotName;                                   // 0x0(0x8)
	float                                                        Weight;                                            // 0x8(0x4)
	char                                                         pad0x4_4G1TA[0x4];                                 // 0xc(0x4)
	TArray<struct PetParams>                                     PetParams;                                         // 0x10(0x10)
	struct FName                                                 FeatureName;                                       // 0x20(0x8)
};


// Size 0xb8
struct PetHangoutSpotParams
{
public:
	class                                                        PetType;                                           // 0x0(0x8)
	Struct FloatRange                                            HangoutTime;                                       // 0x8(0x10)
	Struct WeightedPetAnimationSelector                          AnimationSelector;                                 // 0x18(0xa0)
};


// Size 0x18
struct PetCustomiationOverrideMappingEntry
{
public:
	Struct FString                                               Identifier;                                        // 0x0(0x10)
	Class PetCustomisationOverrideDataAsset*                     OverrideAsset;                                     // 0x10(0x8)
};


// Size 0x20
struct PetDangerHearingThreat
{
public:
	struct FName                                                 SoundTag;                                          // 0x0(0x8)
	float                                                        TimeBeforeForgotten;                               // 0x8(0x4)
	char                                                         pad0x4_ZVW67[0x4];                                 // 0xc(0x4)
	TArray<struct Responses>                                     Responses;                                         // 0x10(0x10)
};


// Size 0x38
struct PetFeedingParams
{
public:
	Struct PetFeedingAnimationData                               EatingAnimData;                                    // 0x0(0x8)
	Struct PetFeedingAnimationData                               FedAnimData;                                       // 0x8(0x8)
	Struct PetFeedingAnimationData                               NotFedAnimData;                                    // 0x10(0x8)
	Struct PetFeedingAnimationData                               SickAnimData;                                      // 0x18(0x8)
	Struct PetFeedingAnimationData                               RefusalAnimData;                                   // 0x20(0x8)
	float                                                        TimeToStartEating;                                 // 0x28(0x4)
	float                                                        TimeUntilGivingUp;                                 // 0x2c(0x4)
	float                                                        DistToleranceSquared;                              // 0x30(0x4)
	float                                                        RotationTolerance;                                 // 0x34(0x4)
};


// Size 0x8
struct PetFeedingAnimationData
{
public:
	byte                                                         AnimationState;                                    // 0x0(0x1)
	char                                                         pad0x3_0N7H8[0x3];                                 // 0x1(0x3)
	float                                                        AnimationTimeout;                                  // 0x4(0x4)
};


// Size 0x80
struct HangoutSpotPosition
{
public:
	Struct HangoutSpotId                                         Id;                                                // 0x0(0x8)
	char                                                         pad0x8_5KYBG[0x8];                                 // 0x8(0x8)
	Struct Transform                                             Transform;                                         // 0x10(0x30)
	byte                                                         RotationMode;                                      // 0x40(0x1)
	byte                                                         ShipDeck;                                          // 0x41(0x1)
	char                                                         pad0x6_V0U3I[0x6];                                 // 0x42(0x6)
	Class Pawn*                                                  Occupier;                                          // 0x48(0x8)
	char                                                         pad0x10_LDLKF[0x10];                               // 0x50(0x10)
	bool                                                         IsPerch;                                           // 0x60(0x1)
	bool                                                         NeedOverrideInteractionPoint;                      // 0x61(0x1)
	char                                                         pad0x2_BMJA0[0x2];                                 // 0x62(0x2)
	Struct Vector                                                OverrideInteractionPointPosition;                  // 0x64(0xc)
	bool                                                         BlockPetEmoteReactions;                            // 0x70(0x1)
	bool                                                         IgnorePickupFromHangoutTooltipDisplayOffset;       // 0x71(0x1)
};


// Size 0x38
struct PetListingTypeEntry
{
public:
	Struct StringAssetReference                                  PetPartsCategory;                                  // 0x0(0x10)
	Struct StringClassReference                                  PetType;                                           // 0x10(0x10)
	struct FName                                                 FeatureToggleName;                                 // 0x20(0x8)
	Struct FString                                               PetListingName;                                    // 0x28(0x10)
};


// Size 0x38
struct PetsServiceParams
{
public:
	int                                                          MaxPetsInProximity;                                // 0x8(0x4)
	float                                                        RespawnRequestTimeout;                             // 0xc(0x4)
	float                                                        SpawnTimeDelay;                                    // 0x10(0x4)
	float                                                        MinPetProximityLifespan;                           // 0x14(0x4)
	float                                                        MaxPetProximityLifespan;                           // 0x18(0x4)
	float                                                        MinPetProximityRespawnDelay;                       // 0x1c(0x4)
	float                                                        MaxPetProximityRespawnDelay;                       // 0x20(0x4)
	float                                                        HeldPetDespawnDelay;                               // 0x24(0x4)
	TArray<class Class*>                                         IllegalShipsSizesForSpawn;                         // 0x28(0x10)
};


// Size 0x20
struct PetRelationship
{
public:
	Class PetItemInfo*                                           PetInfo;                                           // 0x0(0x8)
};


// Size 0xd8
struct ReactStateMapping
{
public:
	struct FName                                                 AnimationID;                                       // 0x0(0x8)
	bool                                                         CanTimeout;                                        // 0x8(0x1)
	char                                                         pad0x3_IELZ4[0x3];                                 // 0x9(0x3)
	float                                                        AnimationTimeout;                                  // 0xc(0x4)
	Struct WeightedPetAnimationSelector                          PetStateSelector;                                  // 0x10(0xa0)
	float                                                        AnimationChance;                                   // 0xb0(0x4)
	Struct FloatRange                                            AnimationDelay;                                    // 0xb4(0x10)
	char                                                         pad0x4_KX7VN[0x4];                                 // 0xc4(0x4)
	TArray<class Class*>                                         IgnoringStrategies;                                // 0xc8(0x10)
};


// Size 0x1
struct EventWieldablePetPendingDrop
{
public:
	byte                                                         DropRequestReason;                                 // 0x0(0x1)
};


// Size 0x8
struct WieldablePetDropTimeout
{
public:
	byte                                                         RequestReason;                                     // 0x0(0x1)
	char                                                         pad0x3_FIPOC[0x3];                                 // 0x1(0x3)
	float                                                        DropDelay;                                         // 0x4(0x4)
};


// Size 0x10
struct WieldablePetFoodSourceEntry
{
public:
	Class Actor*                                                 FoodSourceActor;                                   // 0x0(0x8)
	float                                                        TimeUntilConsumption;                              // 0x8(0x4)
};


// Size 0x8
struct WieldablePetHungerAnimationData
{
public:
	byte                                                         AnimState;                                         // 0x0(0x1)
	char                                                         pad0x3_81A6Z[0x3];                                 // 0x1(0x3)
	float                                                        AnimTimeout;                                       // 0x4(0x4)
};


// Size 0x1
struct EventNewPetThreatDetected
{
public:
};


// Size 0x8
struct EventPetDismissed
{
public:
	Class Actor*                                                 DismissingActor;                                   // 0x0(0x8)
};


// Size 0x1
struct DismissPetNotificationEvent
{
public:
};


// Size 0x18
struct EventPetRefusedFood
{
public:
	Class Actor*                                                 FeedingActor;                                      // 0x10(0x8)
};


// Size 0x10
struct EventPetFoodBase
{
public:
	Struct Guid                                                  FeedingInteractionId;                              // 0x0(0x10)
};


// Size 0x14
struct EventPetReactedToFood
{
public:
	byte                                                         ReactionType;                                      // 0x10(0x1)
};


// Size 0x18
struct EventPetNotFed
{
public:
	Class Actor*                                                 FeedingActor;                                      // 0x10(0x8)
};


// Size 0x20
struct EventPetFed
{
public:
	Class Actor*                                                 FedWithActor;                                      // 0x10(0x8)
	Class Actor*                                                 FeedingActor;                                      // 0x18(0x8)
};


// Size 0x1
struct EventPetPerchSpotEnabledStateChanged
{
public:
};


// Size 0x8
struct EventPetLeftHangout
{
public:
	Class Actor*                                                 Pet;                                               // 0x0(0x8)
};


// Size 0x2
struct EventPetEnteredHangout
{
public:
};


// Size 0x1
struct EventPetSadnessEnd
{
public:
};


// Size 0x1
struct EventPetSadnessBegin
{
public:
};


// Size 0x8
struct EventPetInfoAssigned
{
public:
	Class ItemInfo*                                              PetInfo;                                           // 0x0(0x8)
};


// Size 0x8
struct EventPetOwnerAssigned
{
public:
	Class Actor*                                                 Owner;                                             // 0x0(0x8)
};


// Size 0x1
struct EventPetCustomisationComplete
{
public:
};


// Size 0x10
struct EventPetCustomisationReady
{
public:
};


// Size 0x20
struct EventWieldablePetPutOnPerch
{
public:
	Class Actor*                                                 Pet;                                               // 0x0(0x8)
	struct FName                                                 HangoutSpotName;                                   // 0x8(0x8)
};


// Size 0x8
struct EventPetDropped
{
public:
};


// Size 0xc
struct EventPetPickedUp
{
public:
	bool                                                         IsOnPerch;                                         // 0x0(0x1)
	char                                                         pad0x3_OHEZ5[0x3];                                 // 0x1(0x3)
};


// Size 0xc
struct EventPetReactBegun
{
public:
	struct FName                                                 ReactId;                                           // 0x0(0x8)
	byte                                                         ReactState;                                        // 0x8(0x1)
};


// Size 0x10
struct EventPetReactCancellation
{
public:
	Class Actor*                                                 ReactSource;                                       // 0x0(0x8)
	struct FName                                                 ReactId;                                           // 0x8(0x8)
};


// Size 0x10
struct EventPetReactRequest
{
public:
	Class Actor*                                                 ReactSource;                                       // 0x0(0x8)
	struct FName                                                 ReactId;                                           // 0x8(0x8)
};


// Size 0x8
struct RespawnPetEvent
{
public:
	Class Actor*                                                 PetOwner;                                          // 0x0(0x8)
};


// Size 0x8
struct EventPetEndPlay
{
public:
	Class Pawn*                                                  LinkedPet;                                         // 0x0(0x8)
};


// Size 0x10
struct EventPetSpawnedForShip
{
public:
	Class Pawn*                                                  LinkedPet;                                         // 0x0(0x8)
	Class Actor*                                                 LinkedShip;                                        // 0x8(0x8)
};


// Size 0x8
struct PetBaseTelemetryFragmentInput
{
public:
};


// Size 0x30
struct PetBaseTelemetryFragment
{
public:
	Struct FString                                               OwnerId;                                           // 0x0(0x10)
	Struct FString                                               PetPartId;                                         // 0x10(0x10)
	byte                                                         CurrentPetRepresentation;                          // 0x20(0x1)
	char                                                         pad0x3_WQ3YV[0x3];                                 // 0x21(0x3)
	Struct Vector                                                PetLocation;                                       // 0x24(0xc)
};


// Size 0x28
struct WieldablePetPutOnPerchTelemetryEvent
{
public:
	Struct FString                                               HangoutSpotName;                                   // 0x0(0x10)
	Struct FString                                               WieldingActorTelemetrySubjectId;                   // 0x18(0x10)
};


// Size 0x1
struct PetDismissedTelemetryEvent
{
public:
};


// Size 0x20
struct PetRefusedFoodTelemetryEvent
{
public:
	Struct FString                                               TryingToFeedPlayerId;                              // 0x0(0x10)
	Struct Guid                                                  FeedingInteractionId;                              // 0x10(0x10)
};


// Size 0x14
struct PetReactedToFoodTelemetryEvent
{
public:
	Struct Guid                                                  FeedingInteractionId;                              // 0x0(0x10)
	byte                                                         FeedingReaction;                                   // 0x10(0x1)
};


// Size 0x20
struct PetNotFedTelemetryEvent
{
public:
	Struct FString                                               IgnoringPlayerId;                                  // 0x0(0x10)
	Struct Guid                                                  FeedingInteractionId;                              // 0x10(0x10)
};


// Size 0x30
struct PetFedTelemetryEvent
{
public:
	Struct FString                                               FedWithItemId;                                     // 0x0(0x10)
	Struct FString                                               FeedingPlayerId;                                   // 0x10(0x10)
	Struct Guid                                                  FeedingInteractionId;                              // 0x20(0x10)
};


// Size 0x18
struct PetReactedTelemetryEvent
{
public:
	Struct FString                                               ReactId;                                           // 0x0(0x10)
	byte                                                         AnimationState;                                    // 0x10(0x1)
};


// Size 0x1
struct PetDroppedTelemetryEvent
{
public:
};


// Size 0x1
struct PetPickedUpTelemetryEvent
{
public:
	bool                                                         IsOnPerch;                                         // 0x0(0x1)
};


// Size 0x8
struct PetControllerSetTickOrderEvent
{
public:
	Class Actor*                                                 Actor;                                             // 0x0(0x8)
};


// Size 0x1
struct EventPetUGCBlockStateChanged
{
public:
	bool                                                         IsPetUGCBlocked;                                   // 0x0(0x1)
};


// Size 0xc
struct EventPerchHangoutSpotSetEnabledState
{
public:
};


// Size 0x50
struct EventHangoutSpotMadeAvailable
{
public:
};


// Size 0x50
struct EventHangoutSpotMadeUnavailable
{
public:
};


// Size 0x40
struct PetDespawnActionStateParams
{
public:
	float                                                        TakeOffHeight;                                     // 0x0(0x4)
	float                                                        TakeOffTime;                                       // 0x4(0x4)
	float                                                        TotalGhostShaderTime;                              // 0x8(0x4)
	float                                                        TimeToTriggerVFX;                                  // 0xc(0x4)
	Class Object*                                                DespawnVFX;                                        // 0x10(0x8)
	Struct LinearColor                                           DespawnVFXColour;                                  // 0x18(0x10)
	Class WwiseEvent*                                            DespawnSFX;                                        // 0x28(0x8)
	Class WwiseEvent*                                            StopDespawnSFX;                                    // 0x30(0x8)
	float                                                        TotalDespawningTime;                               // 0x38(0x4)
};


// Size 0x30
struct PetSpawnActionStateConstructionInfo
{
public:
};


// Size 0x40
struct PetSpawnActionStateParams
{
public:
	float                                                        LandingHeight;                                     // 0x0(0x4)
	float                                                        LandingTime;                                       // 0x4(0x4)
	float                                                        TotalGhostShaderTime;                              // 0x8(0x4)
	float                                                        TimeToTriggerVFX;                                  // 0xc(0x4)
	Class Object*                                                SpawnVFX;                                          // 0x10(0x8)
	Struct LinearColor                                           SpawnVFXColour;                                    // 0x18(0x10)
	Class WwiseEvent*                                            SpawnSFX;                                          // 0x28(0x8)
	Class WwiseEvent*                                            StopSpawnSFX;                                      // 0x30(0x8)
	float                                                        TotalSpawningTime;                                 // 0x38(0x4)
};


// Size 0x1
struct EventWieldablePetHungerStateUpdated
{
public:
	byte                                                         NewState;                                          // 0x0(0x1)
};


}