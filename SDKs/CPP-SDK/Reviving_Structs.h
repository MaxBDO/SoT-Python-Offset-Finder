// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x38
struct ModeSpecificReviveSettings
{
public:
	byte                                                         AssociatedPlaymode;                                // 0x0(0x1)
	float                                                        DeathCameraBlackFadeDelay;                         // 0x4(0x4)
	float                                                        DeathCameraBlackFadeDuration;                      // 0x8(0x4)
	float                                                        DeathCameraBlackFadeEventClientTimeout;            // 0xc(0x4)
	float                                                        DeathCameraBlackFadeEventServerTimeout;            // 0x10(0x4)
	float                                                        DelayBeforeEvaporate;                              // 0x14(0x4)
	float                                                        EvaporateDuration;                                 // 0x18(0x4)
	float                                                        DeathCameraStartDelay;                             // 0x1c(0x4)
	float                                                        ReviveWindowDuration;                              // 0x20(0x4)
	float                                                        GhostFadeDuration;                                 // 0x24(0x4)
	float                                                        AutoGiveUpDuration;                                // 0x28(0x4)
	Class ReviveSettings*                                        CachedReviveSettings;                              // 0x30(0x8)
};


// Size 0x20
struct ReviveEffectsValues
{
public:
	Class MaterialInstanceDynamic*                               AstralCordPostProcessMID;                          // 0x0(0x8)
};


// Size 0x1
struct PlayerInReviveableStateTelemetryEvent
{
public:
};


// Size 0x1
struct PlayerRevivalTelemetryEvent
{
public:
	bool                                                         Success;                                           // 0x0(0x1)
};


// Size 0x30
struct PostReviveLocomotionActionStateConstructionInfo
{
public:
};


// Size 0x1
struct EventRevivableRepresentationSpawnCompleted
{
public:
	bool                                                         FromSwimming;                                      // 0x0(0x1)
};


// Size 0x1
struct EventRevivableRepresentationSpawnStarted
{
public:
};


// Size 0x68
struct ReviveableActionStateConstructionInfo
{
public:
	class                                                        ActionStateId;                                     // 0x30(0x8)
	Struct DamageInstance                                        DamageInstance;                                    // 0x38(0x28)
	byte                                                         CharacterDeathType;                                // 0x60(0x1)
	byte                                                         CharacterType;                                     // 0x61(0x1)
};


// Size 0x30
struct RevivedActionStateConstructionInfo
{
public:
};


// Size 0x10
struct RevivedActionStateParams
{
public:
	float                                                        HealthRegained;                                    // 0x0(0x4)
	float                                                        ReviveDuration;                                    // 0x4(0x4)
	Class WwiseEvent*                                            ReviveGaspAudio;                                   // 0x8(0x8)
};


// Size 0x1
struct ReviveableActionStateStarted
{
public:
};


// Size 0x8
struct EventCharacterDiedDuringReviving
{
public:
	Class Character*                                             OwningCharacter;                                   // 0x0(0x8)
};


// Size 0x1
struct EventRevivePlayerActionStateLeft
{
public:
};


// Size 0x1
struct EventRevivePlayerActionStateEntered
{
public:
};


// Size 0x1
struct EventCharacterFullyRevived
{
public:
};


// Size 0x1
struct ReviveEndedEarlyEvent
{
public:
};


// Size 0x1
struct EventRevivableRepresentationReturnedToBody
{
public:
};


// Size 0x1
struct SuccessfulReviveEvent
{
public:
};


// Size 0x1
struct BeingRevivedStoppedEvent
{
public:
};


// Size 0x1
struct BeingRevivedStartedEvent
{
public:
};


// Size 0x1
struct RevivableCharacterGhostlyBodyEvaporateStarted
{
public:
};


// Size 0x1
struct RevivingWindowEnd
{
public:
};


// Size 0x38
struct RevivingWindowStart
{
public:
	Struct DamageInstance                                        DamageInstance;                                    // 0x0(0x28)
	byte                                                         CharacterDeathType;                                // 0x28(0x1)
	Class Character*                                             RevivableCharacter;                                // 0x30(0x8)
};


// Size 0x60
struct RevivePlayerActionStateConstructionInfo
{
public:
	Struct NetActorPtr                                           CharacterReviving;                                 // 0x30(0x14)
	Struct NetSubObjectPtr                                       CharacterBeingRevived;                             // 0x44(0x14)
	class                                                        InputID;                                           // 0x58(0x8)
};


}