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
	char                                                         pad0x8_U6C9D[0x8];                                 // 0x0(0x8)
	struct ConditionContextPayloadSelectorInstance               PayloadSelector;                                   // 0x8(0x20)
};


// Size 0x8
struct ConditionBase
{
public:
	char                                                         pad0x8_0KHWX[0x8];                                 // 0x0(0x8)
};


// Size 0x20
struct ConditionContextPayloadSelectorInstance
{
public:
	char                                                         pad0x20_VVEOQ[0x20];                               // 0x0(0x20)
};


// Size 0x20
struct ConditionInstance
{
public:
	char                                                         pad0x20_6DE1A[0x20];                               // 0x0(0x20)
};


// Size 0x18
struct ConditionContextPayloadSelectorBase
{
public:
	char                                                         pad0x8_G7ZCU[0x8];                                 // 0x0(0x8)
	struct ConditionContextPayloadTarget                         PayloadTarget;                                     // 0x8(0x10)
};


// Size 0x10
struct ConditionContextPayloadTarget
{
public:
	class ScriptStruct*                                          PayloadStruct;                                     // 0x0(0x8)
	struct FName                                                 PayloadMember;                                     // 0x8(0x8)
};


// Size 0x18
struct AndCondition
{
public:
	char                                                         pad0x8_QNM8J[0x8];                                 // 0x0(0x8)
	TArray<struct ConditionInstance>                             Conditions;                                        // 0x8(0x10)
};


// Size 0x10
struct ConditionFromAsset
{
public:
	char                                                         pad0x8_VTOSU[0x8];                                 // 0x0(0x8)
	class ConditionRootAsset*                                    ConditionAsset;                                    // 0x8(0x8)
};


// Size 0x18
struct IsFeatureEnabledCondition
{
public:
	char                                                         pad0x8_ZC8LL[0x8];                                 // 0x0(0x8)
	struct FeatureFlag                                           Feature;                                           // 0x8(0xc)
	char                                                         pad0x4_1XO3M[0x4];                                 // 0x14(0x4)
};


// Size 0x30
struct IsGameOnSpecificPlayModeCondition
{
public:
	char                                                         pad0x28_8L8QQ[0x28];                               // 0x0(0x28)
	byte                                                         TargetMode;                                        // 0x28(0x1)
	char                                                         pad0x7_D19TM[0x7];                                 // 0x29(0x7)
};


// Size 0x30
struct IsGameOnSpecificPlayModeVariantCondition
{
public:
	char                                                         pad0x28_AYY0S[0x28];                               // 0x0(0x28)
	byte                                                         TargetMode;                                        // 0x28(0x1)
	char                                                         pad0x7_RMWXY[0x7];                                 // 0x29(0x7)
};


// Size 0x38
struct IsObjectOfTypeCondition
{
public:
	char                                                         pad0x28_VPAY8[0x28];                               // 0x0(0x28)
	TArray<Assetclass TargetObjectClasses>                       TargetObjectClasses;                               // 0x28(0x10)
};


// Size 0x48
struct IsSpecifiedActorCondition
{
public:
	char                                                         pad0x8_FF79M[0x8];                                 // 0x0(0x8)
	struct ConditionContextPayloadSelectorInstance               SpecifyingActorPayloadSelector;                    // 0x8(0x20)
	struct ConditionContextPayloadSelectorInstance               TargetActorPayloadSelector;                        // 0x28(0x20)
};


// Size 0x28
struct NotCondition
{
public:
	char                                                         pad0x8_DZNEF[0x8];                                 // 0x0(0x8)
	struct ConditionInstance                                     Condition;                                         // 0x8(0x20)
};


// Size 0x18
struct OrCondition
{
public:
	char                                                         pad0x8_L79M5[0x8];                                 // 0x0(0x8)
	TArray<struct ConditionInstance>                             Conditions;                                        // 0x8(0x10)
};


// Size 0x8
struct ConditionContextPayloadBase
{
public:
	char                                                         pad0x8_7LX2L[0x8];                                 // 0x0(0x8)
};


// Size 0x10
struct WorldObjectConditionContextPayload
{
public:
	char                                                         pad0x8_K5JMX[0x8];                                 // 0x0(0x8)
	class World*                                                 WorldObject;                                       // 0x8(0x8)
};


// Size 0x10
struct TargetConditionContextPayload
{
public:
	char                                                         pad0x8_7GCNE[0x8];                                 // 0x0(0x8)
	class Actor*                                                 Target;                                            // 0x8(0x8)
};


// Size 0x10
struct InstigatorConditionContextPayload
{
public:
	char                                                         pad0x8_X6D6V[0x8];                                 // 0x0(0x8)
	class Actor*                                                 Instigator;                                        // 0x8(0x8)
};


// Size 0x18
struct ConditionContextPayloadComponentOwnerSelector
{
public:
	char                                                         pad0x18_UXXLT[0x18];                               // 0x0(0x18)
};


// Size 0x18
struct ConditionContextPayloadObjectSelector
{
public:
	char                                                         pad0x18_Y0ITS[0x18];                               // 0x0(0x18)
};


}