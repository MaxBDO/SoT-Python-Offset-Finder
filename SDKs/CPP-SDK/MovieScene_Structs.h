#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0xa0
struct MovieSceneSequenceHierarchy
{
public:
	char                                                         pad0xa0_ZWKXY[0xa0];                               // 0x0(0xa0)
};


// Size 0x10
struct MovieSceneTrackImplementation
{
public:
	char                                                         pad0x10_4VEL1[0x10];                               // 0x0(0x10)
};


// Size 0xa8
struct MovieSceneGenerationLedger
{
public:
	char                                                         pad0xa8_YTT5Y[0xa8];                               // 0x0(0xa8)
};


// Size 0x4
struct MovieSceneTrackIdentifier
{
public:
	char                                                         pad0x4_E996F[0x4];                                 // 0x0(0x4)
};


// Size 0x10
struct MovieSceneTrackLabels
{
public:
	TArray<String>                                               Strings;                                           // 0x0(0x10)
};


// Size 0x4
struct MovieSceneSequenceID
{
public:
	char                                                         pad0x4_HYHVS[0x4];                                 // 0x0(0x4)
};


// Size 0x38
struct MovieSceneTrackImplementationPtr
{
public:
	char                                                         pad0x38_LVEMQ[0x38];                               // 0x0(0x38)
};


// Size 0x48
struct MovieSceneSpawnable
{
public:
	bool                                                         IsCameraDockable;                                  // 0x0(0x1)
	char                                                         pad0x3_EV0IG[0x3];                                 // 0x1(0x3)
	struct Guid                                                  Guid;                                              // 0x4(0x10)
	char                                                         pad0x4_D5JEV[0x4];                                 // 0x14(0x4)
	struct FString                                               Name;                                              // 0x18(0x10)
	class Object*                                                ObjectTemplate;                                    // 0x28(0x8)
	TArray<struct Guid>                                          ChildPossessables;                                 // 0x30(0x10)
	char                                                         Ownership;                                         // 0x40(0x1)
	char                                                         pad0x7_0A4W9[0x7];                                 // 0x41(0x7)
};


// Size 0x1
struct MovieSceneExpansionState
{
public:
	bool                                                         bExpanded;                                         // 0x0(0x1)
};


// Size 0x70
struct MovieSceneEditorData
{
public:
	char                                                         pad0x50_P551N[0x50];                               // 0x0(0x50)
	struct FloatRange                                            WorkingRange;                                      // 0x50(0x10)
	struct FloatRange                                            ViewRange;                                         // 0x60(0x10)
};


// Size 0x1
struct MovieSceneTrackCompilationParams
{
public:
	bool                                                         bForEditorPreview;                                 // 0x0(0x1)
};


// Size 0x1
struct MovieSceneEmptyStruct
{
public:
	char                                                         pad0x1_JBZQG[0x1];                                 // 0x0(0x1)
};


// Size 0x220
struct CachedMovieSceneEvaluationTemplate
{
public:
	char                                                         pad0x220_H3HC4[0x220];                             // 0x0(0x220)
};


// Size 0x20
struct MovieSceneLegacyTrackInstanceTemplate
{
public:
	char                                                         pad0x18_YXTNH[0x18];                               // 0x0(0x18)
	class MovieSceneTrack*                                       Track;                                             // 0x18(0x8)
};


// Size 0x10
struct MovieSceneObjectBindingPtr
{
public:
	struct Guid                                                  Guid;                                              // 0x0(0x10)
};


// Size 0x8
struct SectionEvaluationData
{
public:
	int                                                          ImplIndex;                                         // 0x0(0x4)
	float                                                        ForcedTime;                                        // 0x4(0x4)
};


// Size 0x38
struct MovieSceneEvalTemplatePtr
{
public:
	char                                                         pad0x38_1Q568[0x38];                               // 0x0(0x38)
};


// Size 0x40
struct MovieSceneSegment
{
public:
	char                                                         pad0x40_NHZPD[0x40];                               // 0x0(0x40)
};


// Size 0x20
struct MovieScenePropertySectionData
{
public:
	struct FName                                                 PropertyName;                                      // 0x0(0x8)
	struct FString                                               PropertyPath;                                      // 0x8(0x10)
	struct FName                                                 FunctionName;                                      // 0x18(0x8)
};


// Size 0x28
struct MovieSceneSequencePlaybackSettings
{
public:
	int                                                          LoopCount;                                         // 0x0(0x4)
	float                                                        PlayRate;                                          // 0x4(0x4)
	bool                                                         bRandomStartTime;                                  // 0x8(0x1)
	char                                                         pad0x3_0PVX0[0x3];                                 // 0x9(0x3)
	float                                                        StartTime;                                         // 0xc(0x4)
	bool                                                         bRestoreState;                                     // 0x10(0x1)
	char                                                         pad0x7_IM0V5[0x7];                                 // 0x11(0x7)
	char                                                         pad0x10_358G6[0x10];                               // 0x18(0x10)
};


// Size 0x18
struct MovieSceneSequenceCachedSignature
{
public:
	char                                                         pad0x8_2O8E1[0x8];                                 // 0x0(0x8)
	struct Guid                                                  CachedSignature;                                   // 0x8(0x10)
};


// Size 0x38
struct MovieScenePossessable
{
public:
	struct Guid                                                  Guid;                                              // 0x0(0x10)
	struct FString                                               Name;                                              // 0x10(0x10)
	class UClass*                                                PossessedObjectClass;                              // 0x20(0x8)
	struct Guid                                                  ParentGuid;                                        // 0x28(0x10)
};


// Size 0x10
struct MovieSceneSectionParameters
{
public:
	float                                                        StartOffset;                                       // 0x0(0x4)
	float                                                        TimeScale;                                         // 0x4(0x4)
	float                                                        PrerollTime;                                       // 0x8(0x4)
	float                                                        PostrollTime;                                      // 0xc(0x4)
};


// Size 0x10
struct MovieSceneEvaluationGroupLUTIndex
{
public:
	bool                                                         bRequiresImmediateFlush;                           // 0x0(0x1)
	char                                                         pad0x3_E5DGH[0x3];                                 // 0x1(0x3)
	int                                                          LUTOffset;                                         // 0x4(0x4)
	int                                                          NumInitPtrs;                                       // 0x8(0x4)
	int                                                          NumEvalPtrs;                                       // 0xc(0x4)
};


// Size 0x8
struct MovieSceneKeyStruct
{
public:
	char                                                         pad0x8_1ADT2[0x8];                                 // 0x0(0x8)
};


// Size 0x18
struct MovieSceneEvalTemplate
{
public:
	char                                                         pad0x10_DV4TI[0x10];                               // 0x0(0x10)
	char                                                         CompletionMode;                                    // 0x10(0x1)
	char                                                         pad0x7_R7QXB[0x7];                                 // 0x11(0x7)
};


// Size 0x10
struct MovieSceneEvalTemplateBase
{
public:
	char                                                         pad0x10_GLYSE[0x10];                               // 0x0(0x10)
};


// Size 0x8
struct MovieSceneSequenceTransform
{
public:
	float                                                        TimeScale;                                         // 0x0(0x4)
	float                                                        Offset;                                            // 0x4(0x4)
};


// Size 0x4
struct MovieSceneTrackEvalOptions
{
public:
	bool                                                         bCanEvaluateNearestSection;                        // 0x0(0x1)
	bool                                                         bEvaluateNearestSection;                           // 0x0(0x1)
	bool                                                         bEvaluateInPreroll;                                // 0x0(0x1)
	bool                                                         bEvaluateInPostroll;                               // 0x0(0x1)
	char                                                         pad0x3_93H8B[0x3];                                 // 0x1(0x3)
};


// Size 0xc
struct MovieSceneEvaluationFieldSegmentPtr
{
public:
	char                                                         pad0x8_YI3ZX[0x8];                                 // 0x0(0x8)
	int                                                          SegmentIndex;                                      // 0x8(0x4)
};


// Size 0x30
struct MovieSceneBinding
{
public:
	struct Guid                                                  ObjectGuid;                                        // 0x0(0x10)
	struct FString                                               BindingName;                                       // 0x10(0x10)
	TArray<class MovieSceneTrack*>                               Tracks;                                            // 0x20(0x10)
};


// Size 0x2
struct MovieSceneSectionEvalOptions
{
public:
	bool                                                         bCanEditCompletionMode;                            // 0x0(0x1)
	char                                                         CompletionMode;                                    // 0x1(0x1)
};


// Size 0x1c
struct MovieSceneBindingOverrideData
{
public:
	struct MovieSceneObjectBindingPtr                            ObjectBindingId;                                   // 0x0(0x10)
	bool                                                         bOverridesDefault;                                 // 0x18(0x1)
	char                                                         pad0x3_3Q0ZV[0x3];                                 // 0x19(0x3)
};


// Size 0x18
struct MovieSceneSequenceHierarchyNode
{
public:
	struct MovieSceneSequenceID                                  ParentID;                                          // 0x0(0x4)
	char                                                         pad0x4_YQYIB[0x4];                                 // 0x4(0x4)
	TArray<struct MovieSceneSequenceID>                          Children;                                          // 0x8(0x10)
};


// Size 0x28
struct MovieSceneSubSequenceData
{
public:
	class MovieSceneSequence*                                    Sequence;                                          // 0x0(0x8)
	struct MovieSceneSequenceTransform                           RootToSequenceTransform;                           // 0x8(0x8)
	struct Guid                                                  SourceSequenceSignature;                           // 0x10(0x10)
	struct MovieSceneSequenceID                                  DeterministicSequenceID;                           // 0x20(0x4)
	char                                                         pad0x4_VWI5P[0x4];                                 // 0x24(0x4)
};


// Size 0x80
struct MovieSceneEvaluationTrack
{
public:
	struct Guid                                                  ObjectBindingId;                                   // 0x0(0x10)
	char                                                         EvaluationMethod;                                  // 0x12(0x1)
	char                                                         pad0x5_5WVX3[0x5];                                 // 0x13(0x5)
	TArray<struct MovieSceneSegment>                             Segments;                                          // 0x18(0x10)
	TArray<struct MovieSceneEvalTemplatePtr>                     ChildTemplates;                                    // 0x28(0x10)
	struct MovieSceneTrackImplementationPtr                      TrackTemplate;                                     // 0x38(0x38)
	struct FName                                                 EvaluationGroup;                                   // 0x70(0x8)
	bool                                                         bEvaluateInPreroll;                                // 0x78(0x1)
	bool                                                         bEvaluateInPostroll;                               // 0x78(0x1)
	char                                                         pad0x7_SA9KY[0x7];                                 // 0x79(0x7)
};


// Size 0x20
struct MovieSceneEvaluationGroup
{
public:
	TArray<struct MovieSceneEvaluationGroupLUTIndex>             LUTIndices;                                        // 0x0(0x10)
	TArray<struct MovieSceneEvaluationFieldSegmentPtr>           SegmentPtrLUT;                                     // 0x10(0x10)
};


// Size 0x10
struct MovieSceneEvaluationMetaData
{
public:
	TArray<struct MovieSceneSequenceID>                          ActiveSequences;                                   // 0x0(0x10)
};


// Size 0x8
struct MovieSceneEvaluationFieldTrackPtr
{
public:
	struct MovieSceneSequenceID                                  SequenceID;                                        // 0x0(0x4)
	struct MovieSceneTrackIdentifier                             TrackIdentifier;                                   // 0x4(0x4)
};


// Size 0x30
struct MovieSceneEvaluationField
{
public:
	TArray<struct FloatRange>                                    Ranges;                                            // 0x0(0x10)
	TArray<struct MovieSceneEvaluationGroup>                     Groups;                                            // 0x10(0x10)
	TArray<struct MovieSceneEvaluationMetaData>                  MetaData;                                          // 0x20(0x10)
};


// Size 0x220
struct MovieSceneEvaluationTemplate
{
public:
	char                                                         pad0xa0_KNZY2[0xa0];                               // 0x0(0xa0)
	struct MovieSceneEvaluationField                             EvaluationField;                                   // 0xa0(0x30)
	struct MovieSceneSequenceHierarchy                           Hierarchy;                                         // 0xd0(0xa0)
	struct MovieSceneGenerationLedger                            Ledger;                                            // 0x170(0xa8)
	bool                                                         bHasLegacyTrackInstances;                          // 0x218(0x1)
	bool                                                         bKeepStaleTracks;                                  // 0x218(0x1)
	char                                                         pad0x7_LC9ZB[0x7];                                 // 0x219(0x7)
};


