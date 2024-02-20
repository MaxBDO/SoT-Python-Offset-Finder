#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "MovieSceneCapture_Structs.h"


// Size 0x1b8 (Full Size[0x1e0] - InheritedSize[0x28]
class MovieSceneCapture: public Object
{
public:
	char                                                         pad0x10_KGUEL[0x10];                               // 0x28(0x10)
	struct CaptureProtocolID                                     CaptureType;                                       // 0x38(0x8)
	class MovieSceneCaptureProtocolSettings*                     ProtocolSettings;                                  // 0x40(0x8)
	struct MovieSceneCaptureSettings                             Settings;                                          // 0x48(0x50)
	bool                                                         bUseSeparateProcess;                               // 0x98(0x1)
	bool                                                         bCloseEditorWhenCaptureStarts;                     // 0x99(0x1)
	char                                                         pad0x6_CK50J[0x6];                                 // 0x9a(0x6)
	struct FString                                               AdditionalCommandLineArguments;                    // 0xa0(0x10)
	struct FString                                               InheritedCommandLineArguments;                     // 0xb0(0x10)
	char                                                         pad0x120_VJBSR[0x120];                             // 0xc0(0x120)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class MovieSceneCaptureProtocolSettings: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class MovieSceneCaptureInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class MovieSceneCaptureEnvironment: public Object
{
public:
};


// Size 0x20 (Full Size[0x200] - InheritedSize[0x1e0]
class LevelCapture: public MovieSceneCapture
{
public:
	bool                                                         bAutoStartCapture;                                 // 0x1e0(0x1)
	char                                                         pad0xb_LB5BN[0xb];                                 // 0x1e1(0xb)
	struct Guid                                                  PrerequisiteActorId;                               // 0x1ec(0x10)
	char                                                         pad0x4_02JBY[0x4];                                 // 0x1fc(0x4)
};


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class CompositionGraphCaptureSettings: public MovieSceneCaptureProtocolSettings
{
public:
	struct CompositionGraphCapturePasses                         IncludeRenderPasses;                               // 0x28(0x10)
	bool                                                         bCaptureFramesInHDR;                               // 0x38(0x1)
	char                                                         pad0x3_RCNYU[0x3];                                 // 0x39(0x3)
	int                                                          HDRCompressionQuality;                             // 0x3c(0x4)
	char                                                         CaptureGamut;                                      // 0x40(0x1)
	char                                                         pad0x7_UGTHC[0x7];                                 // 0x41(0x7)
	struct StringAssetReference                                  PostProcessingMaterial;                            // 0x48(0x10)
};


// Size 0x0 (Full Size[0x1e0] - InheritedSize[0x1e0]
class AutomatedLevelSequenceCapture: public MovieSceneCapture
{
public:
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class FrameGrabberProtocolSettings: public MovieSceneCaptureProtocolSettings
{
public:
	char                                                         pad0x8_TQ02E[0x8];                                 // 0x28(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class BmpImageCaptureSettings: public MovieSceneCaptureProtocolSettings
{
public:
};


// Size 0x8 (Full Size[0x38] - InheritedSize[0x30]
class ImageCaptureSettings: public FrameGrabberProtocolSettings
{
public:
	int                                                          CompressionQuality;                                // 0x30(0x4)
	char                                                         pad0x4_5HKAO[0x4];                                 // 0x34(0x4)
};


// Size 0x18 (Full Size[0x48] - InheritedSize[0x30]
class VideoCaptureSettings: public FrameGrabberProtocolSettings
{
public:
	bool                                                         bUseCompression;                                   // 0x30(0x1)
	char                                                         pad0x3_IODXD[0x3];                                 // 0x31(0x3)
	float                                                        CompressionQuality;                                // 0x34(0x4)
	struct FString                                               VideoCodec;                                        // 0x38(0x10)
};


