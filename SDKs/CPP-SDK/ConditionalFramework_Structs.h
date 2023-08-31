// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
struct TargetedPayloadConditionBase
{
public:
	Struct ConditionContextPayloadSelectorInstance               PayloadSelector;                                   // 0x8(0x20)
};


// Size 0x8
struct ConditionBase
{
public:
};


// Size 0x20
struct ConditionContextPayloadSelectorInstance
{
public:
};


// Size 0x20
struct ConditionInstance
{
public:
};


// Size 0x18
struct ConditionContextPayloadSelectorBase
{
public:
	Struct ConditionContextPayloadTarget                         PayloadTarget;                                     // 0x8(0x10)
};


// Size 0x10
struct ConditionContextPayloadTarget
{
public:
	Class ScriptStruct*                                          PayloadStruct;                                     // 0x0(0x8)
	struct FName                                                 PayloadMember;                                     // 0x8(0x8)
};


// Size 0x18
struct AndCondition
{
public:
	TArray<struct Conditions>                                    Conditions;                                        // 0x8(0x10)
};


// Size 0x10
struct ConditionFromAsset
{
public:
	Class ConditionRootAsset*                                    ConditionAsset;                                    // 0x8(0x8)
};


// Size 0x18
struct IsFeatureEnabledCondition
{
public:
	Struct FeatureFlag                                           Feature;                                           // 0x8(0xc)
};


// Size 0x30
struct IsGameOnSpecificPlayModeCondition
{
public:
	byte                                                         TargetMode;                                        // 0x28(0x1)
};


// Size 0x30
struct IsGameOnSpecificPlayModeVariantCondition
{
public:
	byte                                                         TargetMode;                                        // 0x28(0x1)
};


// Size 0x38
struct IsObjectOfTypeCondition
{
public:
	TArray<Assetclass TargetObjectClasses>                       TargetObjectClasses;                               // 0x28(0x10)
};


// Size 0x48
struct IsSpecifiedActorCondition
{
public:
	Struct ConditionContextPayloadSelectorInstance               SpecifyingActorPayloadSelector;                    // 0x8(0x20)
	Struct ConditionContextPayloadSelectorInstance               TargetActorPayloadSelector;                        // 0x28(0x20)
};


// Size 0x28
struct NotCondition
{
public:
	Struct ConditionInstance                                     Condition;                                         // 0x8(0x20)
};


// Size 0x18
struct OrCondition
{
public:
	TArray<struct Conditions>                                    Conditions;                                        // 0x8(0x10)
};


// Size 0x8
struct ConditionContextPayloadBase
{
public:
};


// Size 0x10
struct WorldObjectConditionContextPayload
{
public:
	Class World*                                                 WorldObject;                                       // 0x8(0x8)
};


// Size 0x10
struct TargetConditionContextPayload
{
public:
	Class Actor*                                                 Target;                                            // 0x8(0x8)
};


// Size 0x10
struct InstigatorConditionContextPayload
{
public:
	Class Actor*                                                 Instigator;                                        // 0x8(0x8)
};


// Size 0x18
struct ConditionContextPayloadComponentOwnerSelector
{
public:
};


// Size 0x18
struct ConditionContextPayloadObjectSelector
{
public:
};


}