// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x78
struct MovieScene3DTransformKeyStruct
{
public:
	Struct Vector                                                Location;                                          // 0x8(0xc)
	Struct Rotator                                               Rotation;                                          // 0x14(0xc)
	Struct Vector                                                Scale;                                             // 0x20(0xc)
};


// Size 0x30
struct MovieScene3DScaleKeyStruct
{
public:
	Struct Vector                                                Scale;                                             // 0x8(0xc)
};


// Size 0x30
struct MovieScene3DRotationKeyStruct
{
public:
	Struct Rotator                                               Rotation;                                          // 0x8(0xc)
};


// Size 0x30
struct MovieScene3DLocationKeyStruct
{
public:
	Struct Vector                                                Location;                                          // 0x8(0xc)
};


// Size 0x20
struct MovieSceneCameraAnimSectionData
{
public:
	Class CameraAnim*                                            CameraAnim;                                        // 0x0(0x8)
	float                                                        PlayRate;                                          // 0x8(0x4)
	float                                                        PlayScale;                                         // 0xc(0x4)
	float                                                        BlendInTime;                                       // 0x10(0x4)
	float                                                        BlendOutTime;                                      // 0x14(0x4)
	bool                                                         bLooping;                                          // 0x18(0x1)
};


// Size 0x20
struct MovieSceneCameraShakeSectionData
{
public:
	class                                                        ShakeClass;                                        // 0x0(0x8)
	float                                                        PlayScale;                                         // 0x8(0x4)
	byte                                                         PlaySpace;                                         // 0xc(0x1)
	char                                                         pad0x3_PPNB0[0x3];                                 // 0xd(0x3)
	Struct Rotator                                               UserDefinedPlaySpace;                              // 0x10(0xc)
};


// Size 0x58
struct MovieSceneColorKeyStruct
{
public:
	Struct LinearColor                                           Color;                                             // 0x8(0x10)
};


// Size 0x20
struct MovieSceneEventSectionData
{
public:
	TArray<Float KeyTimes>                                       KeyTimes;                                          // 0x0(0x10)
	TArray<struct KeyValues>                                     KeyValues;                                         // 0x10(0x10)
};


// Size 0x30
struct EventPayload
{
public:
	struct FName                                                 EventName;                                         // 0x0(0x8)
	bool                                                         IsSubtitleEvent;                                   // 0x8(0x1)
	char                                                         pad0x3_34UF3[0x3];                                 // 0x9(0x3)
	int                                                          ActorNumber;                                       // 0xc(0x4)
	int                                                          SubtitleIndex;                                     // 0x10(0x4)
	char                                                         pad0x4_E8DVK[0x4];                                 // 0x14(0x4)
	Struct MovieSceneEventParameters                             Parameters;                                        // 0x18(0x18)
};


// Size 0x18
struct MovieSceneEventParameters
{
public:
};


// Size 0x1f0
struct ColorParameterNameAndCurves
{
public:
	struct FName                                                 ParameterName;                                     // 0x0(0x8)
	int                                                          Index;                                             // 0x8(0x4)
	char                                                         pad0x4_0N0ID[0x4];                                 // 0xc(0x4)
	Struct RichCurve                                             RedCurve;                                          // 0x10(0x78)
	Struct RichCurve                                             GreenCurve;                                        // 0x88(0x78)
	Struct RichCurve                                             BlueCurve;                                         // 0x100(0x78)
	Struct RichCurve                                             AlphaCurve;                                        // 0x178(0x78)
};


// Size 0x178
struct VectorParameterNameAndCurves
{
public:
	struct FName                                                 ParameterName;                                     // 0x0(0x8)
	int                                                          Index;                                             // 0x8(0x4)
	char                                                         pad0x4_KRMT5[0x4];                                 // 0xc(0x4)
	Struct RichCurve                                             XCurve;                                            // 0x10(0x78)
	Struct RichCurve                                             YCurve;                                            // 0x88(0x78)
	Struct RichCurve                                             ZCurve;                                            // 0x100(0x78)
};


// Size 0x88
struct ScalarParameterNameAndCurve
{
public:
	struct FName                                                 ParameterName;                                     // 0x0(0x8)
	int                                                          Index;                                             // 0x8(0x4)
	char                                                         pad0x4_XLQPP[0x4];                                 // 0xc(0x4)
	Struct RichCurve                                             ParameterCurve;                                    // 0x10(0x78)
};


// Size 0x98
struct MovieSceneSkeletalAnimationParams
{
public:
	Class AnimSequenceBase*                                      Animation;                                         // 0x0(0x8)
	float                                                        StartOffset;                                       // 0x8(0x4)
	float                                                        EndOffset;                                         // 0xc(0x4)
	float                                                        PlayRate;                                          // 0x10(0x4)
	bool                                                         bReverse;                                          // 0x14(0x1)
	char                                                         pad0x3_2YTB6[0x3];                                 // 0x15(0x3)
	struct FName                                                 SlotName;                                          // 0x18(0x8)
	Struct RichCurve                                             Weight;                                            // 0x20(0x78)
};


// Size 0x60
struct MovieSceneVector4KeyStruct
{
public:
	Struct Vector4                                               Vector;                                            // 0x50(0x10)
};


// Size 0x48
struct MovieSceneVectorKeyStructBase
{
public:
};


// Size 0x58
struct MovieSceneVectorKeyStruct
{
public:
	Struct Vector                                                Vector;                                            // 0x48(0xc)
};


// Size 0x50
struct MovieSceneVector2DKeyStruct
{
public:
	Struct Vector2D                                              Vector;                                            // 0x48(0x8)
};


// Size 0x50
struct MovieSceneComponentMaterialSectionTemplate
{
public:
	int                                                          MaterialIndex;                                     // 0x48(0x4)
};


// Size 0x48
struct MovieSceneParameterSectionTemplate
{
public:
	TArray<struct Scalars>                                       Scalars;                                           // 0x18(0x10)
	TArray<struct Vectors>                                       Vectors;                                           // 0x28(0x10)
	TArray<struct Colors>                                        Colors;                                            // 0x38(0x10)
};


// Size 0x88
struct MovieSceneSpawnSectionTemplate
{
public:
	Struct IntegralCurve                                         Curve;                                             // 0x18(0x70)
};


// Size 0x38
struct MovieScene3DAttachSectionTemplate
{
public:
	Struct Guid                                                  AttachGuid;                                        // 0x18(0x10)
	struct FName                                                 AttachSocketName;                                  // 0x28(0x8)
	struct FName                                                 AttachComponentName;                               // 0x30(0x8)
};


// Size 0xa8
struct MovieScene3DPathSectionTemplate
{
public:
	Struct Guid                                                  PathGuid;                                          // 0x18(0x10)
	Struct RichCurve                                             TimingCurve;                                       // 0x28(0x78)
	byte                                                         FrontAxisEnum;                                     // 0xa0(0x1)
	byte                                                         UpAxisEnum;                                        // 0xa1(0x1)
	char                                                         pad0x2_DQYPG[0x2];                                 // 0xa2(0x2)
	bool                                                         bFollow;                                           // 0xa4(0x1)
	bool                                                         bReverse;                                          // 0xa4(0x1)
	bool                                                         bForceUpright;                                     // 0xa4(0x1)
};


// Size 0x450
struct MovieScene3DTransformSectionTemplate
{
public:
	Struct RichCurve                                             TranslationCurve;                                  // 0x18(0x78)
	char                                                         pad0xf0_1K3AI[0xf0];                               // 0x90(0xf0)
	Struct RichCurve                                             RotationCurve;                                     // 0x180(0x78)
	char                                                         pad0xf0_VMPFQ[0xf0];                               // 0x1f8(0xf0)
	Struct RichCurve                                             ScaleCurve;                                        // 0x2e8(0x78)
};


// Size 0xb8
struct MovieSceneActorReferenceSectionTemplate
{
public:
	Struct MovieScenePropertySectionData                         PropertyData;                                      // 0x18(0x20)
	Struct IntegralCurve                                         ActorGuidIndexCurve;                               // 0x38(0x70)
	TArray<struct ActorGuids>                                    ActorGuids;                                        // 0xa8(0x10)
};


// Size 0x130
struct MovieSceneAudioSectionTemplate
{
public:
	Struct MovieSceneAudioSectionTemplateData                    AudioData;                                         // 0x18(0x118)
};


// Size 0x118
struct MovieSceneAudioSectionTemplateData
{
public:
	Class SoundBase*                                             Sound;                                             // 0x0(0x8)
	float                                                        AudioStartOffset;                                  // 0x8(0x4)
	Struct FloatRange                                            AudioRange;                                        // 0xc(0x10)
	char                                                         pad0x4_2PVOM[0x4];                                 // 0x1c(0x4)
	Struct RichCurve                                             AudioPitchMultiplierCurve;                         // 0x20(0x78)
	Struct RichCurve                                             AudioVolumeCurve;                                  // 0x98(0x78)
	int                                                          RowIndex;                                          // 0x110(0x4)
};


// Size 0x18
struct MovieSceneAdditiveCameraAnimationTrackTemplate
{
public:
};


// Size 0x40
struct MovieSceneCameraShakeSectionTemplate
{
public:
	Struct MovieSceneCameraShakeSectionData                      SourceData;                                        // 0x18(0x20)
	float                                                        SectionStartTime;                                  // 0x38(0x4)
};


// Size 0x18
struct MovieSceneAdditiveCameraAnimationTemplate
{
public:
};


// Size 0x40
struct MovieSceneCameraAnimSectionTemplate
{
public:
	Struct MovieSceneCameraAnimSectionData                       SourceData;                                        // 0x18(0x20)
	float                                                        SectionStartTime;                                  // 0x38(0x4)
};


// Size 0x28
struct MovieSceneCameraCutSectionTemplate
{
public:
	Struct Guid                                                  CameraGuid;                                        // 0x18(0x10)
};


// Size 0x210
struct MovieSceneColorSectionTemplate
{
public:
	struct FName                                                 PropertyName;                                      // 0x18(0x8)
	Struct FString                                               PropertyPath;                                      // 0x20(0x10)
	Struct RichCurve                                             Curves;                                            // 0x30(0x78)
};


// Size 0x40
struct MovieSceneEventSectionTemplate
{
public:
	Struct MovieSceneEventSectionData                            EventData;                                         // 0x18(0x20)
	bool                                                         bFireEventsWhenForwards;                           // 0x38(0x1)
	bool                                                         bFireEventsWhenBackwards;                          // 0x38(0x1)
};


// Size 0xa8
struct MovieSceneFadeSectionTemplate
{
public:
	Struct RichCurve                                             FadeCurve;                                         // 0x18(0x78)
	Struct LinearColor                                           FadeColor;                                         // 0x90(0x10)
	bool                                                         bFadeAudio;                                        // 0xa0(0x1)
};


// Size 0x18
struct MovieSceneLevelVisibilitySharedTrack
{
public:
};


// Size 0x30
struct MovieSceneLevelVisibilitySectionTemplate
{
public:
	byte                                                         Visibility;                                        // 0x18(0x1)
	char                                                         pad0x7_BJMPP[0x7];                                 // 0x19(0x7)
	TArray<struct FName>                                         LevelNames;                                        // 0x20(0x10)
};


// Size 0x48
struct MovieSceneParticleParameterSectionTemplate
{
public:
};


// Size 0x88
struct MovieSceneParticleSectionTemplate
{
public:
	Struct IntegralCurve                                         ParticleKeys;                                      // 0x18(0x70)
};


// Size 0x220
struct MovieSceneVectorPropertySectionTemplate
{
public:
	Struct MovieScenePropertySectionData                         PropertyData;                                      // 0x18(0x20)
	Struct RichCurve                                             ComponentCurves;                                   // 0x38(0x78)
	char                                                         pad0x168_63S9K[0x168];                             // 0xb0(0x168)
	int                                                          NumChannelsUsed;                                   // 0x218(0x4)
};


// Size 0xb0
struct MovieSceneStringPropertySectionTemplate
{
public:
	Struct MovieScenePropertySectionData                         PropertyData;                                      // 0x18(0x20)
	Struct StringCurve                                           StringCurve;                                       // 0x38(0x78)
};


// Size 0xa8
struct MovieSceneIntegerPropertySectionTemplate
{
public:
	Struct MovieScenePropertySectionData                         PropertyData;                                      // 0x18(0x20)
	Struct IntegralCurve                                         IntegerCurve;                                      // 0x38(0x70)
};


// Size 0xa8
struct MovieSceneEnumPropertySectionTemplate
{
public:
	Struct MovieScenePropertySectionData                         PropertyData;                                      // 0x18(0x20)
	Struct IntegralCurve                                         EnumCurve;                                         // 0x38(0x70)
};


// Size 0xa8
struct MovieSceneBytePropertySectionTemplate
{
public:
	Struct MovieScenePropertySectionData                         PropertyData;                                      // 0x18(0x20)
	Struct IntegralCurve                                         ByteCurve;                                         // 0x38(0x70)
};


// Size 0xb0
struct MovieSceneFloatPropertySectionTemplate
{
public:
	Struct MovieScenePropertySectionData                         PropertyData;                                      // 0x18(0x20)
	Struct RichCurve                                             FloatCurve;                                        // 0x38(0x78)
};


// Size 0xa8
struct MovieSceneBoolPropertySectionTemplate
{
public:
	Struct MovieScenePropertySectionData                         PropertyData;                                      // 0x18(0x20)
	Struct IntegralCurve                                         BoolCurve;                                         // 0x38(0x70)
};


// Size 0x18
struct MovieSceneSkeletalAnimationSharedTrack
{
public:
};


// Size 0xc0
struct MovieSceneSkeletalAnimationSectionTemplate
{
public:
	Struct MovieSceneSkeletalAnimationSectionTemplateParameters  Params;                                            // 0x18(0xa0)
	byte                                                         AnimationSubtype;                                  // 0xb8(0x1)
};


// Size 0xa0
struct MovieSceneSkeletalAnimationSectionTemplateParameters
{
public:
	float                                                        SectionStartTime;                                  // 0x98(0x4)
	float                                                        SectionEndTime;                                    // 0x9c(0x4)
};


// Size 0x90
struct MovieSceneSlomoSectionTemplate
{
public:
	Struct RichCurve                                             SlomoCurve;                                        // 0x18(0x78)
};


// Size 0xb0
struct MovieSceneVisibilitySectionTemplate
{
public:
	bool                                                         bTemporarilyHiddenInGame;                          // 0xa8(0x1)
};


}