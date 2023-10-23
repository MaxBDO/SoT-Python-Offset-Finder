// Generated by dougthedruid on Discord
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
	char                                                         pad0x3_QGS27[0x3];                                 // 0x1(0x3)
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
	char                                                         pad0x4_1COYT[0x4];                                 // 0x2c(0x4)
	class ReviveSettings*                                        CachedReviveSettings;                              // 0x30(0x8)
};


// Size 0x20
struct ReviveEffectsValues
{
public:
	class MaterialInstanceDynamic*                               AstralCordPostProcessMID;                          // 0x0(0x8)
	char                                                         pad0x18_OM95R[0x18];                               // 0x8(0x18)
};


// Size 0x1
struct PlayerInReviveableStateTelemetryEvent
{
public:
	char                                                         pad0x1_0TUR6[0x1];                                 // 0x0(0x1)
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
	char                                                         pad0x30_DKMFS[0x30];                               // 0x0(0x30)
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
	char                                                         pad0x1_FMU1W[0x1];                                 // 0x0(0x1)
};


// Size 0x70
struct ReviveableActionStateConstructionInfo
{
public:
	char                                                         pad0x30_7Z0C2[0x30];                               // 0x0(0x30)
	class UClass*                                                ActionStateId;                                     // 0x30(0x8)
	struct DamageInstance                                        DamageInstance;                                    // 0x38(0x30)
	byte                                                         CharacterDeathType;                                // 0x68(0x1)
	byte                                                         CharacterType;                                     // 0x69(0x1)
	char                                                         pad0x6_YRXKR[0x6];                                 // 0x6a(0x6)
};


// Size 0x30
struct RevivedActionStateConstructionInfo
{
public:
	char                                                         pad0x30_AP6QF[0x30];                               // 0x0(0x30)
};


// Size 0x10
struct RevivedActionStateParams
{
public:
	float                                                        HealthRegained;                                    // 0x0(0x4)
	float                                                        ReviveDuration;                                    // 0x4(0x4)
	class WwiseEvent*                                            ReviveGaspAudio;                                   // 0x8(0x8)
};


// Size 0x1
struct ReviveableActionStateStarted
{
public:
	char                                                         pad0x1_GA9CP[0x1];                                 // 0x0(0x1)
};


// Size 0x8
struct EventCharacterDiedDuringReviving
{
public:
	class Character*                                             OwningCharacter;                                   // 0x0(0x8)
};


// Size 0x1
struct EventRevivePlayerActionStateLeft
{
public:
	char                                                         pad0x1_2CO92[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct EventRevivePlayerActionStateEntered
{
public:
	char                                                         pad0x1_0UR6W[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct EventCharacterFullyRevived
{
public:
	char                                                         pad0x1_A7YSX[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct ReviveEndedEarlyEvent
{
public:
	char                                                         pad0x1_W2X3P[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct EventRevivableRepresentationReturnedToBody
{
public:
	char                                                         pad0x1_BOVYQ[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct SuccessfulReviveEvent
{
public:
	char                                                         pad0x1_4MTYK[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct BeingRevivedStoppedEvent
{
public:
	char                                                         pad0x1_Q9GJJ[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct BeingRevivedStartedEvent
{
public:
	char                                                         pad0x1_PEHOC[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct RevivableCharacterGhostlyBodyEvaporateStarted
{
public:
	char                                                         pad0x1_7H024[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct RevivingWindowEnd
{
public:
	char                                                         pad0x1_PGZ4X[0x1];                                 // 0x0(0x1)
};


// Size 0x40
struct RevivingWindowStart
{
public:
	struct DamageInstance                                        DamageInstance;                                    // 0x0(0x30)
	byte                                                         CharacterDeathType;                                // 0x30(0x1)
	char                                                         pad0x7_0XAM6[0x7];                                 // 0x31(0x7)
	class Character*                                             RevivableCharacter;                                // 0x38(0x8)
};


// Size 0x60
struct RevivePlayerActionStateConstructionInfo
{
public:
	char                                                         pad0x30_VE59K[0x30];                               // 0x0(0x30)
	struct NetActorPtr                                           CharacterReviving;                                 // 0x30(0x14)
	struct NetSubObjectPtr                                       CharacterBeingRevived;                             // 0x44(0x14)
	class UClass*                                                InputID;                                           // 0x58(0x8)
};


}