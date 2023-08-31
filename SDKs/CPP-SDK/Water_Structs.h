// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
struct WaterInformation
{
public:
	class                                                        WaterType;                                         // 0x0(0x8)
	bool                                                         CanSwim;                                           // 0x8(0x1)
};


// Size 0x130
struct WaterBuoyancy
{
public:
	Class PrimitiveComponent*                                    PrimitiveComponent;                                // 0x0(0x8)
	float                                                        OverallBuyoancyScalar;                             // 0x8(0x4)
	float                                                        DampingPerSample;                                  // 0xc(0x4)
	float                                                        AdditionalAngularDampingWhenSubmerged;             // 0x10(0x4)
	char                                                         pad0x4_SKX3N[0x4];                                 // 0x14(0x4)
	TArray<struct VolumeSamples>                                 VolumeSamples;                                     // 0x18(0x10)
	TArray<struct DragSamples>                                   DragSamples;                                       // 0x28(0x10)
	Class CurveFloat*                                            BuyoancySampleZSpeedVSDampeningScalar;             // 0x38(0x8)
	float                                                        QuadSubmersionTestSampleResolution;                // 0x40(0x4)
};


// Size 0x90
struct BuoyancyDragSample
{
public:
	Struct Vector                                                Offset;                                            // 0x0(0xc)
	Struct Vector                                                Normal;                                            // 0xc(0xc)
	Struct Vector                                                Tangent;                                           // 0x18(0xc)
	float                                                        Radius;                                            // 0x24(0x4)
	float                                                        DragCoefficient;                                   // 0x28(0x4)
	byte                                                         Type;                                              // 0x2c(0x1)
};


// Size 0x58
struct BuoyancyVolumeSample
{
public:
	Struct Vector                                                Offset;                                            // 0x0(0xc)
	float                                                        Radius;                                            // 0xc(0x4)
	byte                                                         Type;                                              // 0x10(0x1)
	bool                                                         bRelevantForSubmersionVolumeCalculation;           // 0x11(0x1)
	char                                                         pad0x2_Q1BV3[0x2];                                 // 0x12(0x2)
	float                                                        Scalar;                                            // 0x14(0x4)
	float                                                        DampingScalar;                                     // 0x18(0x4)
	char                                                         pad0x4_1VMY1[0x4];                                 // 0x1c(0x4)
	Class CurveFloat*                                            DistUnderwaterVSBuoyancyForce;                     // 0x20(0x8)
	Class CurveFloat*                                            DistUnderwaterVSBuoyancyForceSecondary;            // 0x28(0x8)
	Class CurveFloat*                                            DistUnderwaterVSBuoyancyForceTertiary;             // 0x30(0x8)
	Class CurveFloat*                                            FakeZOffsetGeneratorCurve;                         // 0x38(0x8)
	float                                                        FakeZOffsetAmp;                                    // 0x40(0x4)
	float                                                        FakeZOffsetGeneratorTimeScale;                     // 0x44(0x4)
};


// Size 0x68
struct BuoyancySampleMovement
{
public:
	TArray<struct Configurations>                                Configurations;                                    // 0x0(0x10)
	char                                                         pad0x40_GEEYP[0x40];                               // 0x10(0x40)
	Class CurveFloat*                                            BuoyancyScalarCurve;                               // 0x50(0x8)
	Class CurveFloat*                                            ProbeMovementCurve;                                // 0x58(0x8)
};


// Size 0x38
struct BuoyancySampleMovementConfiguration
{
public:
	Class CurveVector*                                           CenterOfMassOffsetCurve;                           // 0x0(0x8)
	TArray<struct SampleMoveData>                                SampleMoveData;                                    // 0x8(0x10)
	float                                                        OverallBuoyancyScalar;                             // 0x18(0x4)
	char                                                         pad0x4_5LFT0[0x4];                                 // 0x1c(0x4)
	Class CurveFloat*                                            OverallBuoyancyScalarBlendCurve;                   // 0x20(0x8)
	Class CurveFloat*                                            ProbeMovementBlendCurve;                           // 0x28(0x8)
	float                                                        Duration;                                          // 0x30(0x4)
};


// Size 0x18
struct BuoyancySampleMovementConfigurationEntry
{
public:
	Struct Vector                                                SampleOffset;                                      // 0x0(0xc)
	char                                                         pad0x4_5F3YS[0x4];                                 // 0xc(0x4)
	Class CurveFloat*                                            BuoyancyScaleCurve;                                // 0x10(0x8)
};


// Size 0x10
struct EventCurrentWaterPlaneChange
{
public:
	Class BaseWaterComponent*                                    FormerWaterPlane;                                  // 0x0(0x8)
	Class BaseWaterComponent*                                    NewWaterPlane;                                     // 0x8(0x8)
};


// Size 0x1
struct EventLeftWaterExclusionZone
{
public:
};


// Size 0x1
struct EventEnteredWaterExclusionZone
{
public:
};


// Size 0x1c
struct FFTWaterQueryResult
{
public:
	float                                                        Height;                                            // 0x0(0x4)
	Struct Vector2D                                              Choppiness;                                        // 0x4(0x8)
	Struct Vector                                                Normal;                                            // 0xc(0xc)
	byte                                                         WaterQueryResult;                                  // 0x18(0x1)
};


// Size 0x18
struct WaterSplashProbesContainer
{
public:
	TArray<struct Probes>                                        Probes;                                            // 0x0(0x10)
	float                                                        ProbeSamplingTime;                                 // 0x10(0x4)
};


// Size 0xd8
struct WaterSplashProbe
{
public:
	Struct FString                                               ProbeDebugName;                                    // 0x8(0x10)
	Struct Vector                                                LocalOffset;                                       // 0x18(0xc)
	float                                                        Height;                                            // 0x24(0x4)
	float                                                        Pitch;                                             // 0x28(0x4)
	float                                                        Yaw;                                               // 0x2c(0x4)
	float                                                        Roll;                                              // 0x30(0x4)
	float                                                        RateOfChangeThreshold;                             // 0x34(0x4)
	Struct Vector                                                LocalOffsetAdjustment;                             // 0x38(0xc)
	float                                                        LocalOffsetAdjustmentDuration;                     // 0x44(0x4)
	byte                                                         Type;                                              // 0x48(0x1)
	byte                                                         WaterHeightType;                                   // 0x49(0x1)
	char                                                         pad0x2_L68OI[0x2];                                 // 0x4a(0x2)
	float                                                        StaticWaterHeightValue;                            // 0x4c(0x4)
};


// Size 0x128
struct SplashProbe
{
public:
	Struct WaterSplashProbe                                      Probe;                                             // 0x8(0xd8)
	float                                                        ProbeSamplingTime;                                 // 0xe0(0x4)
	float                                                        TimeBetweenProbeVfx;                               // 0xe4(0x4)
	Class Object*                                                ParticleSystem;                                    // 0xe8(0x8)
	byte                                                         UnderwaterUsage;                                   // 0xf0(0x1)
	bool                                                         SpawnAttached;                                     // 0xf1(0x1)
	bool                                                         AttachToWaterSurface;                              // 0xf2(0x1)
	byte                                                         SplashAttachType;                                  // 0xf3(0x1)
	Struct Vector                                                VfxSpawnOffset;                                    // 0xf4(0xc)
	bool                                                         Enabled;                                           // 0x100(0x1)
	char                                                         pad0x7_3DPWH[0x7];                                 // 0x101(0x7)
	Class ParticleSystemComponent*                               CurrentlyPlayingVFX;                               // 0x108(0x8)
};


// Size 0x70
struct WaterSpout
{
public:
	Struct Transform                                             SpoutLocatorTransform;                             // 0x0(0x30)
	Class ParticleSystemComponent*                               SpoutParticleSystem;                               // 0x30(0x8)
	Class ParticleSystemComponent*                               SplashParticleSystem;                              // 0x38(0x8)
};


}