#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x60
struct RiggingSystemPulleyData
{
public:
	TArray<float>                                                AttachmentSag;                                     // 0x0(0x10)
	TArray<float>                                                AttachmentLength;                                  // 0x10(0x10)
	TArray<float>                                                Scale;                                             // 0x20(0x10)
	TArray<float>                                                ScaledOffset;                                      // 0x30(0x10)
	TArray<float>                                                ScaledRadius;                                      // 0x40(0x10)
	TArray<int>                                                  MeshIDs;                                           // 0x50(0x10)
};


// Size 0x8
struct RopeCatenaryLengthPair
{
public:
	float                                                        Taut;                                              // 0x0(0x4)
	float                                                        Catenary;                                          // 0x4(0x4)
};


// Size 0x10
struct PulleyVisualParams
{
public:
	class StaticMesh*                                            Mesh;                                              // 0x0(0x8)
	float                                                        Scale;                                             // 0x8(0x4)
	float                                                        Radius;                                            // 0xc(0x4)
};


// Size 0x20
struct RopeStyleParams
{
public:
	class StaticMesh*                                            Mesh;                                              // 0x0(0x8)
	class Texture2D*                                             DiffuseTexture;                                    // 0x8(0x8)
	class Texture2D*                                             NormalTexture;                                     // 0x10(0x8)
	int                                                          ShadowLOD;                                         // 0x18(0x4)
	char                                                         pad0x4_08BIC[0x4];                                 // 0x1c(0x4)
};


// Size 0x10
struct RopeCatenaryLengthParams
{
public:
	float                                                        MinTautLength;                                     // 0x0(0x4)
	float                                                        MaxTautLength;                                     // 0x4(0x4)
	float                                                        CatenaryScaleAtMinLength;                          // 0x8(0x4)
	float                                                        CatenaryScaleAtMaxLength;                          // 0xc(0x4)
};


// Size 0xc
struct RopeVisualParams
{
public:
	float                                                        Thickness;                                         // 0x0(0x4)
	float                                                        UVScale;                                           // 0x4(0x4)
	float                                                        Roughness;                                         // 0x8(0x4)
};


// Size 0x10
struct RiggingSystemLine
{
public:
	char                                                         pad0x10_6IV2C[0x10];                               // 0x0(0x10)
};


// Size 0x8
struct RopeCatenarySwingParams
{
public:
	float                                                        LengthForNeutralSwing;                             // 0x0(0x4)
	float                                                        LengthBias;                                        // 0x4(0x4)
};


// Size 0x8
struct RopeCatenaryDynamicsParams
{
public:
	float                                                        CatenaryToTautLengthRatioToConsiderCatenary;       // 0x0(0x4)
	bool                                                         ReactsToWind;                                      // 0x4(0x1)
	char                                                         pad0x3_L5Z67[0x3];                                 // 0x5(0x3)
};


// Size 0x8
struct RopeCatenarySlopeBlendParams
{
public:
	float                                                        MinSlopeForTautBlend;                              // 0x0(0x4)
	float                                                        MaxSlopeForTautBlend;                              // 0x4(0x4)
};


// Size 0x18
struct RopeCatenaryShapeParams
{
public:
	struct RopeCatenaryLengthParams                              Length;                                            // 0x0(0x10)
	struct RopeCatenarySlopeBlendParams                          Slope;                                             // 0x10(0x8)
};


// Size 0x14
struct RiggingSystemPulleyAttachmentParams
{
public:
	struct RopeVisualParams                                      Visuals;                                           // 0x0(0xc)
	float                                                        Length;                                            // 0xc(0x4)
	float                                                        Sag;                                               // 0x10(0x4)
};


// Size 0x54
struct InstancedRopeParams
{
public:
	struct Vector                                                Start;                                             // 0x0(0xc)
	struct Vector                                                End;                                               // 0xc(0xc)
	float                                                        Thickness;                                         // 0x18(0x4)
	float                                                        UVScale;                                           // 0x1c(0x4)
	float                                                        UVBase;                                            // 0x20(0x4)
	float                                                        UVOffset;                                          // 0x24(0x4)
	float                                                        Roughness;                                         // 0x28(0x4)
	struct RopeCatenaryShapeParams                               Shape;                                             // 0x2c(0x18)
	struct RopeCatenarySwingParams                               Swing;                                             // 0x44(0x8)
	struct RopeCatenaryDynamicsParams                            Dynamics;                                          // 0x4c(0x8)
};


// Size 0x50
struct RiggingSystemPulleyParams
{
public:
	struct SocketId                                              Anchor;                                            // 0x0(0x20)
	float                                                        OffsetFromAnchor;                                  // 0x20(0x4)
	char                                                         pad0x4_6SCJU[0x4];                                 // 0x24(0x4)
	struct PulleyVisualParams                                    Visuals;                                           // 0x28(0x10)
	struct RiggingSystemPulleyAttachmentParams                   AttachmentRope;                                    // 0x38(0x14)
	char                                                         pad0x4_I92DY[0x4];                                 // 0x4c(0x4)
};


// Size 0x78
struct RiggingSystemLineParams
{
public:
	struct SocketId                                              Start;                                             // 0x0(0x20)
	TArray<struct RiggingSystemPulleyParams>                     Pulleys;                                           // 0x20(0x10)
	struct SocketId                                              End;                                               // 0x30(0x20)
	struct RopeVisualParams                                      Visuals;                                           // 0x50(0xc)
	struct RopeCatenaryShapeParams                               Shape;                                             // 0x5c(0x18)
	char                                                         pad0x4_5ST21[0x4];                                 // 0x74(0x4)
};


// Size 0x18
struct RiggingSystemLineGroup
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	TArray<struct RiggingSystemLineParams>                       Lines;                                             // 0x8(0x10)
};


