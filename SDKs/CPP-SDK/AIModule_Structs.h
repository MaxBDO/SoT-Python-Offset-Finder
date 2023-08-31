// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x4
struct AIRequestID
{
public:
};


// Size 0x3c
struct AIStimulus
{
public:
	float                                                        Age;                                               // 0x0(0x4)
	float                                                        ExpirationAge;                                     // 0x4(0x4)
	float                                                        Strength;                                          // 0x8(0x4)
	Struct Vector                                                StimulusLocation;                                  // 0xc(0xc)
	Struct Vector                                                ReceiverLocation;                                  // 0x18(0xc)
	struct FName                                                 Tag;                                               // 0x24(0x8)
	char                                                         pad0xc_3GQTV[0xc];                                 // 0x2c(0xc)
	bool                                                         bSuccessfullySensed;                               // 0x38(0x1)
};


// Size 0x40
struct AIMoveRequest
{
public:
	Class Actor*                                                 GoalActor;                                         // 0x0(0x8)
};


// Size 0x8
struct PawnActionStack
{
public:
	Class PawnAction*                                            TopAction;                                         // 0x0(0x8)
};


// Size 0x18
struct PawnActionEvent
{
public:
	Class PawnAction*                                            Action;                                            // 0x0(0x8)
};


// Size 0x28
struct BlackboardKeySelector
{
public:
	TArray<class BlackboardKeyType*>                             AllowedTypes;                                      // 0x0(0x10)
	struct FName                                                 SelectedKeyName;                                   // 0x10(0x8)
	class                                                        SelectedKeyType;                                   // 0x18(0x8)
	byte                                                         SelectedKeyID;                                     // 0x20(0x1)
	char                                                         pad0x3_S50KK[0x3];                                 // 0x21(0x3)
	bool                                                         bNoneIsAllowedValue;                               // 0x24(0x1)
};


// Size 0x1
struct GenericTeamId
{
public:
	byte                                                         TeamID;                                            // 0x0(0x1)
};


// Size 0x30
struct AIDataProviderBoolValue
{
public:
	bool                                                         DefaultValue;                                      // 0x28(0x1)
};


// Size 0x28
struct AIDataProviderTypedValue
{
public:
	class                                                        PropertyType;                                      // 0x20(0x8)
};


// Size 0x20
struct AIDataProviderValue
{
public:
	Class Property*                                              CachedProperty;                                    // 0x8(0x8)
	Class AIDataProvider*                                        DataBinding;                                       // 0x10(0x8)
	struct FName                                                 DataField;                                         // 0x18(0x8)
};


// Size 0x30
struct AIDataProviderFloatValue
{
public:
	float                                                        DefaultValue;                                      // 0x28(0x4)
};


// Size 0x30
struct AIDataProviderIntValue
{
public:
	int                                                          DefaultValue;                                      // 0x28(0x4)
};


// Size 0x30
struct AIDataProviderStructValue
{
public:
};


// Size 0x10
struct CustomDataProviderObjectPropertySelector
{
public:
	class                                                        ObjectClass;                                       // 0x0(0x8)
	struct FName                                                 PropertyName;                                      // 0x8(0x8)
};


// Size 0xc
struct IgnoreActorInfo
{
public:
	float                                                        TimeRemaining;                                     // 0x8(0x4)
};


// Size 0x4
struct AISenseAffiliationFilter
{
public:
	bool                                                         bDetectEnemies;                                    // 0x0(0x1)
	bool                                                         bDetectNeutrals;                                   // 0x0(0x1)
	bool                                                         bDetectFriendlies;                                 // 0x0(0x1)
};


// Size 0x20
struct ActorPerceptionBlueprintInfo
{
public:
	Class Actor*                                                 Target;                                            // 0x0(0x8)
	TArray<struct LastSensedStimuli>                             LastSensedStimuli;                                 // 0x8(0x10)
	bool                                                         bIsHostile;                                        // 0x18(0x1)
};


// Size 0x30
struct AIDamageEvent
{
public:
	float                                                        Amount;                                            // 0x0(0x4)
	Struct Vector                                                Location;                                          // 0x4(0xc)
	Struct Vector                                                HitLocation;                                       // 0x10(0xc)
	char                                                         pad0x4_0QEYI[0x4];                                 // 0x1c(0x4)
	Class Actor*                                                 DamagedActor;                                      // 0x20(0x8)
	Class Actor*                                                 Instigator;                                        // 0x28(0x8)
};


// Size 0x30
struct AINoiseEvent
{
public:
	Struct Vector                                                NoiseLocation;                                     // 0x4(0xc)
	float                                                        Loudness;                                          // 0x10(0x4)
	float                                                        MaxRange;                                          // 0x14(0x4)
	Class Actor*                                                 Instigator;                                        // 0x18(0x8)
	struct FName                                                 Tag;                                               // 0x20(0x8)
};


// Size 0x18
struct AIPredictionEvent
{
public:
	Class Actor*                                                 Requestor;                                         // 0x0(0x8)
	Class Actor*                                                 PredictedActor;                                    // 0x8(0x8)
};


// Size 0x18
struct AISightEvent
{
public:
	Class Actor*                                                 SeenActor;                                         // 0x8(0x8)
	Class Actor*                                                 Observer;                                          // 0x10(0x8)
};


// Size 0x38
struct AITeamStimulusEvent
{
public:
	Class Actor*                                                 Broadcaster;                                       // 0x28(0x8)
	Class Actor*                                                 Enemy;                                             // 0x30(0x8)
};


// Size 0x20
struct AITouchEvent
{
public:
	Class Actor*                                                 TouchReceiver;                                     // 0x10(0x8)
	Class Actor*                                                 OtherActor;                                        // 0x18(0x8)
};


// Size 0x30
struct BTCompositeChild
{
public:
	Class BTCompositeNode*                                       ChildComposite;                                    // 0x0(0x8)
	Class BTTaskNode*                                            ChildTask;                                         // 0x8(0x8)
	TArray<class BTDecorator*>                                   Decorators;                                        // 0x10(0x10)
	TArray<struct DecoratorOps>                                  DecoratorOps;                                      // 0x20(0x10)
};


// Size 0x4
struct BTDecoratorLogic
{
public:
	byte                                                         Operation;                                         // 0x0(0x1)
	char                                                         pad0x1_88AXQ[0x1];                                 // 0x1(0x1)
};


// Size 0x18
struct BehaviorTreeTemplateInfo
{
public:
	Class BehaviorTree*                                          Asset;                                             // 0x0(0x8)
	Class BTCompositeNode*                                       Template;                                          // 0x8(0x8)
};


// Size 0x18
struct BlackboardEntry
{
public:
	struct FName                                                 EntryName;                                         // 0x0(0x8)
	Class BlackboardKeyType*                                     KeyType;                                           // 0x8(0x8)
	bool                                                         bInstanceSynced;                                   // 0x10(0x1)
};


// Size 0xc
struct EnvBoolParam
{
public:
};


// Size 0xc
struct EnvBoolParam_DEPRECATED
{
public:
	bool                                                         Value;                                             // 0x0(0x1)
	char                                                         pad0x3_QTK4S[0x3];                                 // 0x1(0x3)
	struct FName                                                 ParamName;                                         // 0x4(0x8)
};


// Size 0xc
struct EnvIntParam
{
public:
};


// Size 0xc
struct EnvIntParam_DEPRECATED
{
public:
	int                                                          Value;                                             // 0x0(0x4)
	struct FName                                                 ParamName;                                         // 0x4(0x8)
};


// Size 0xc
struct EnvFloatParam
{
public:
};


// Size 0xc
struct EnvFloatParam_DEPRECATED
{
public:
	float                                                        Value;                                             // 0x0(0x4)
	struct FName                                                 ParamName;                                         // 0x4(0x8)
};


// Size 0x40
struct EnvQueryResult
{
public:
	class                                                        ItemType;                                          // 0x10(0x8)
	char                                                         pad0x14_668O0[0x14];                               // 0x18(0x14)
	int                                                          OptionIndex;                                       // 0x2c(0x4)
	int                                                          QueryID;                                           // 0x30(0x4)
};


// Size 0x40
struct EnvTraceData
{
public:
	int                                                          VersionNum;                                        // 0x0(0x4)
	char                                                         pad0x4_YBU1W[0x4];                                 // 0x4(0x4)
	class                                                        NavigationFilter;                                  // 0x8(0x8)
	struct FName                                                 OverrideNavMesh;                                   // 0x10(0x8)
	float                                                        ProjectDown;                                       // 0x18(0x4)
	float                                                        ProjectUp;                                         // 0x1c(0x4)
	float                                                        ExtentX;                                           // 0x20(0x4)
	float                                                        ExtentY;                                           // 0x24(0x4)
	float                                                        ExtentZ;                                           // 0x28(0x4)
	float                                                        PostProjectionVerticalOffset;                      // 0x2c(0x4)
	byte                                                         TraceChannel;                                      // 0x30(0x1)
	byte                                                         SerializedChannel;                                 // 0x31(0x1)
	byte                                                         TraceShape;                                        // 0x32(0x1)
	byte                                                         TraceMode;                                         // 0x33(0x1)
	bool                                                         bTraceComplex;                                     // 0x34(0x1)
	bool                                                         bOnlyBlockingHits;                                 // 0x34(0x1)
	bool                                                         bCanTraceOnNavMesh;                                // 0x34(0x1)
	bool                                                         bCanTraceOnGeometry;                               // 0x34(0x1)
	bool                                                         bCanDisableTrace;                                  // 0x34(0x1)
	bool                                                         bCanProjectDown;                                   // 0x34(0x1)
	char                                                         pad0x3_J3NUC[0x3];                                 // 0x35(0x3)
	bool                                                         bUseUpDownAsAbsoluteZStartAndEnd;                  // 0x38(0x1)
	bool                                                         bUseSourceZAsEnd;                                  // 0x39(0x1)
};


// Size 0x20
struct EnvDirection
{
public:
	class                                                        LineFrom;                                          // 0x0(0x8)
	class                                                        LineTo;                                            // 0x8(0x8)
	class                                                        Rotation;                                          // 0x10(0x8)
	byte                                                         DirMode;                                           // 0x18(0x1)
};


// Size 0x10
struct EnvNamedValue
{
public:
	struct FName                                                 ParamName;                                         // 0x0(0x8)
	byte                                                         ParamType;                                         // 0x8(0x1)
	char                                                         pad0x3_UVD3H[0x3];                                 // 0x9(0x3)
	float                                                        Value;                                             // 0xc(0x4)
};


// Size 0x20
struct CrowdAvoidanceSamplingPattern
{
public:
	TArray<Float Angles>                                         Angles;                                            // 0x0(0x10)
	TArray<Float Radii>                                          Radii;                                             // 0x10(0x10)
};


// Size 0x1c
struct CrowdAvoidanceConfig
{
public:
	float                                                        VelocityBias;                                      // 0x0(0x4)
	float                                                        DesiredVelocityWeight;                             // 0x4(0x4)
	float                                                        CurrentVelocityWeight;                             // 0x8(0x4)
	float                                                        SideBiasWeight;                                    // 0xc(0x4)
	float                                                        ImpactTimeWeight;                                  // 0x10(0x4)
	float                                                        ImpactTimeRange;                                   // 0x14(0x4)
	byte                                                         CustomPatternIdx;                                  // 0x18(0x1)
	byte                                                         AdaptiveDivisions;                                 // 0x19(0x1)
	byte                                                         AdaptiveRings;                                     // 0x1a(0x1)
	byte                                                         AdaptiveDepth;                                     // 0x1b(0x1)
};


// Size 0x290
struct EnvQueryInstanceCache
{
public:
	Class EnvQuery*                                              Template;                                          // 0x0(0x8)
};


// Size 0x170
struct EnvQueryRequest
{
public:
	Class EnvQuery*                                              QueryTemplate;                                     // 0x0(0x8)
	Class Object*                                                Owner;                                             // 0x8(0x8)
	Class World*                                                 World;                                             // 0x10(0x8)
};


}