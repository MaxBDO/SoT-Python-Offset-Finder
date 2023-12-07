// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
struct Status
{
public:
	TArray<class Class*>                                         Type;                                              // 0x0(0x10)
	struct StatusDescriptor                                      Descriptor;                                        // 0x10(0x4)
	char                                                         pad0x4_36VMU[0x4];                                 // 0x14(0x4)
};


// Size 0x4
struct StatusDescriptor
{
public:
	float                                                        Intensity;                                         // 0x0(0x4)
};


// Size 0x20
struct DebugMenuStatusDefinition
{
public:
	struct FName                                                 Identifier;                                        // 0x0(0x8)
	struct Status                                                Status;                                            // 0x8(0x18)
};


// Size 0x50
struct ActiveStatusEffect
{
public:
	TArray<class Class*>                                         SourceStatus;                                      // 0x0(0x10)
	struct StatusDescriptor                                      Descriptor;                                        // 0x10(0x4)
	char                                                         pad0x4_1O36W[0x4];                                 // 0x14(0x4)
	TArray<class StatusResponse*>                                ResponseTemplates;                                 // 0x18(0x10)
	TArray<class StatusResponse*>                                InstancedResponses;                                // 0x28(0x10)
	bool                                                         ResponsesAreActive;                                // 0x38(0x1)
	char                                                         pad0x17_OSH8C[0x17];                               // 0x39(0x17)
};


// Size 0x18
struct FeatureToggledStatusResponseList
{
public:
	struct FName                                                 Feature;                                           // 0x0(0x8)
	TArray<class StatusResponseAsset*>                           ResponseAssets;                                    // 0x8(0x10)
};


// Size 0x28
struct EventAppliedStatusToTargets
{
public:
	TArray<class Class*>                                         StatusApplied;                                     // 0x0(0x10)
	TArray<class Actor*>                                         Targets;                                           // 0x10(0x10)
	class Actor*                                                 StatusSource;                                      // 0x20(0x8)
};


// Size 0x20
struct DelayedStatusEffect
{
public:
	struct Status                                                StatusEffect;                                      // 0x0(0x18)
	float                                                        InEffectTime;                                      // 0x18(0x4)
	char                                                         pad0x4_RM3TX[0x4];                                 // 0x1c(0x4)
};


// Size 0x18
struct StatusEffectPersistenceKey
{
public:
	struct Status                                                AppliedStatuses;                                   // 0x0(0x18)
};


// Size 0x18
struct ApplyStatusEvent
{
public:
	struct Status                                                StatusToApply;                                     // 0x0(0x18)
};


// Size 0x18
struct BuffedTargetData
{
public:
	char                                                         pad0x18_FCZYT[0x18];                               // 0x0(0x18)
};


// Size 0x1
struct EventStatusSuperSoakerEnded
{
public:
	char                                                         pad0x1_B4SQ9[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct EventStatusSuperSoakerStarted
{
public:
	char                                                         pad0x1_AOZNT[0x1];                                 // 0x0(0x1)
};


// Size 0x18
struct StatusDeactivatedEvent
{
public:
	struct Guid                                                  Id;                                                // 0x0(0x10)
	struct FName                                                 StatusName;                                        // 0x10(0x8)
};


// Size 0x18
struct StatusActivatedEvent
{
public:
	struct Guid                                                  Id;                                                // 0x0(0x10)
	struct FName                                                 StatusName;                                        // 0x10(0x8)
};


// Size 0x14
struct EventStatusMaterialEffectEnded
{
public:
	struct FName                                                 MaterialParamName;                                 // 0x0(0x8)
	struct FName                                                 CanShowMaterialParam;                              // 0x8(0x8)
	float                                                        FadeOutAcceleration;                               // 0x10(0x4)
};


// Size 0x30
struct EventStatusMaterialEffectStarted
{
public:
	struct FName                                                 MaterialParamName;                                 // 0x0(0x8)
	struct FName                                                 CanShowMaterialParam;                              // 0x8(0x8)
	struct FName                                                 TintParamName;                                     // 0x10(0x8)
	struct LinearColor                                           TintColor;                                         // 0x18(0x10)
	float                                                        TargetEffectStrength;                              // 0x28(0x4)
	float                                                        FadeInAcceleration;                                // 0x2c(0x4)
};


// Size 0xc
struct EventStatusScreenEffectEnded
{
public:
	struct FName                                                 MaterialParamName;                                 // 0x0(0x8)
	float                                                        FadeOutAcceleration;                               // 0x8(0x4)
};


// Size 0x8
struct EventStatusScreenSpaceParticleEffectEnded
{
public:
	class Object*                                                ParticleSystem;                                    // 0x0(0x8)
};


// Size 0x8
struct EventStatusScreenSpaceParticleEffectStarted
{
public:
	class Object*                                                ParticleSystem;                                    // 0x0(0x8)
};


// Size 0x28
struct EventStatusScreenEffectStarted
{
public:
	struct FName                                                 MaterialParamName;                                 // 0x0(0x8)
	struct FName                                                 TintParamName;                                     // 0x8(0x8)
	struct LinearColor                                           TintColor;                                         // 0x10(0x10)
	float                                                        TargetEffectStrength;                              // 0x20(0x4)
	float                                                        FadeInAcceleration;                                // 0x24(0x4)
};


// Size 0x1
struct EventExitedSurfaceMaterialStatusZone
{
public:
	char                                                         pad0x1_BQPXC[0x1];                                 // 0x0(0x1)
};


// Size 0x10
struct EventEnteredSurfaceMaterialStatusZone
{
public:
	char                                                         pad0x10_JLZMU[0x10];                               // 0x0(0x10)
};


}