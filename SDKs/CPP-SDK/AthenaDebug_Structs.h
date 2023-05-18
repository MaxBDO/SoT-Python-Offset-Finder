// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x30
struct DrawDebugItemString
{
public:
	struct FName                                                 GroupName;                                         // 0x0(0x8)
	bool                                                         ReplaceInGroup;                                    // 0x8(0x1)
	char                                                         pad0x7_00KSH[0x7];                                 // 0x9(0x7)
	Struct FString                                               String;                                            // 0x10(0x10)
	Struct Color                                                 Colour;                                            // 0x20(0x4)
	Struct Vector                                                StringPos;                                         // 0x24(0xc)
};


// Size 0x28
struct DrawDebugItemMessage
{
public:
	struct FName                                                 GroupName;                                         // 0x0(0x8)
	bool                                                         ReplaceInGroup;                                    // 0x8(0x1)
	char                                                         pad0x7_SI5FY[0x7];                                 // 0x9(0x7)
	Struct FString                                               Message;                                           // 0x10(0x10)
	Struct Color                                                 Colour;                                            // 0x20(0x4)
};


// Size 0x48
struct DrawDebugItemSector
{
public:
	struct FName                                                 GroupName;                                         // 0x0(0x8)
	bool                                                         ReplaceInGroup;                                    // 0x8(0x1)
	char                                                         pad0x3_PM5W9[0x3];                                 // 0x9(0x3)
	float                                                        RotationAngle;                                     // 0xc(0x4)
	Struct Vector                                                Centre;                                            // 0x10(0xc)
	float                                                        SectorAngle;                                       // 0x1c(0x4)
	float                                                        Radius;                                            // 0x20(0x4)
	Struct Color                                                 Colour;                                            // 0x24(0x4)
	Struct Vector                                                ZeroAngleVector;                                   // 0x28(0xc)
	Struct Vector                                                RotationAxis;                                      // 0x34(0xc)
	float                                                        SubAngles;                                         // 0x40(0x4)
	float                                                        Thickness;                                         // 0x44(0x4)
};


// Size 0x2c
struct DrawDebugItemLine
{
public:
	struct FName                                                 GroupName;                                         // 0x0(0x8)
	bool                                                         ReplaceInGroup;                                    // 0x8(0x1)
	char                                                         pad0x3_OVNJN[0x3];                                 // 0x9(0x3)
	Struct Vector                                                LineStart;                                         // 0xc(0xc)
	Struct Vector                                                LineEnd;                                           // 0x18(0xc)
	Struct Color                                                 Colour;                                            // 0x24(0x4)
	float                                                        Thickness;                                         // 0x28(0x4)
};


// Size 0x40
struct DrawDebugItemCapsule
{
public:
	struct FName                                                 GroupName;                                         // 0x0(0x8)
	bool                                                         ReplaceInGroup;                                    // 0x8(0x1)
	char                                                         pad0x3_SR9K5[0x3];                                 // 0x9(0x3)
	Struct Vector                                                CentrePos;                                         // 0xc(0xc)
	float                                                        HalfHeight;                                        // 0x18(0x4)
	float                                                        Radius;                                            // 0x1c(0x4)
	Struct Quat                                                  Rotation;                                          // 0x20(0x10)
	Struct Color                                                 Colour;                                            // 0x30(0x4)
};


// Size 0x50
struct DrawDebugItemBox
{
public:
	struct FName                                                 GroupName;                                         // 0x0(0x8)
	bool                                                         ReplaceInGroup;                                    // 0x8(0x1)
	char                                                         pad0x3_UWQGO[0x3];                                 // 0x9(0x3)
	Struct Vector                                                CentrePos;                                         // 0xc(0xc)
	Struct Vector                                                Box;                                               // 0x18(0xc)
	char                                                         pad0xc_J1PV1[0xc];                                 // 0x24(0xc)
	Struct Quat                                                  Rotation;                                          // 0x30(0x10)
	Struct Color                                                 Colour;                                            // 0x40(0x4)
};


// Size 0x20
struct DrawDebugItemSphere
{
public:
	struct FName                                                 GroupName;                                         // 0x0(0x8)
	bool                                                         ReplaceInGroup;                                    // 0x8(0x1)
	char                                                         pad0x3_BZGEN[0x3];                                 // 0x9(0x3)
	Struct Vector                                                CentrePos;                                         // 0xc(0xc)
	float                                                        Radius;                                            // 0x18(0x4)
	Struct Color                                                 Colour;                                            // 0x1c(0x4)
};


// Size 0x18
struct SphereData
{
public:
	Struct Vector                                                Location;                                          // 0x0(0xc)
	float                                                        Radius;                                            // 0xc(0x4)
	int                                                          Segments;                                          // 0x10(0x4)
	Struct Color                                                 Colour;                                            // 0x14(0x4)
};


}