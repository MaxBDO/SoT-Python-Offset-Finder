// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xc8
struct StructSerializerTestStruct
{
public:
	Struct StructSerializerNumericTestStruct                     Numerics;                                          // 0x0(0x30)
	Struct StructSerializerBooleanTestStruct                     Booleans;                                          // 0x30(0x8)
	Struct StructSerializerObjectTestStruct                      Objects;                                           // 0x38(0x10)
	Struct StructSerializerBuiltinTestStruct                     Builtins;                                          // 0x48(0x40)
	Struct StructSerializerArrayTestStruct                       Arrays;                                            // 0x88(0x40)
};


// Size 0x40
struct StructSerializerArrayTestStruct
{
public:
	TArray<Int Int32Array>                                       Int32Array;                                        // 0x0(0x10)
	int                                                          StaticSingleElement;                               // 0x10(0x4)
	int                                                          StaticInt32Array;                                  // 0x14(0x4)
	char                                                         pad0x8_HE2D1[0x8];                                 // 0x18(0x8)
	float                                                        StaticFloatArray;                                  // 0x20(0x4)
	char                                                         pad0xc_FPCJU[0xc];                                 // 0x24(0xc)
	TArray<struct VectorArray>                                   VectorArray;                                       // 0x30(0x10)
};


// Size 0x40
struct StructSerializerBuiltinTestStruct
{
public:
	Struct Guid                                                  Guid;                                              // 0x0(0x10)
	struct FName                                                 Name;                                              // 0x10(0x8)
	Struct FString                                               String;                                            // 0x18(0x10)
	Struct Rotator                                               Rotator;                                           // 0x28(0xc)
	Struct Vector                                                Vector;                                            // 0x34(0xc)
};


// Size 0x10
struct StructSerializerObjectTestStruct
{
public:
	class                                                        Class;                                             // 0x0(0x8)
	Class Object*                                                ObjectPtr;                                         // 0x8(0x8)
};


// Size 0x8
struct StructSerializerBooleanTestStruct
{
public:
	bool                                                         BoolFalse;                                         // 0x0(0x1)
	bool                                                         BoolTrue;                                          // 0x1(0x1)
	char                                                         pad0x2_JOGBW[0x2];                                 // 0x2(0x2)
};


// Size 0x30
struct StructSerializerNumericTestStruct
{
public:
	int                                                          Int32;                                             // 0x4(0x4)
	byte                                                         UInt8;                                             // 0x10(0x1)
	char                                                         pad0x1_1PY4B[0x1];                                 // 0x11(0x1)
	float                                                        Float;                                             // 0x20(0x4)
	char                                                         pad0x4_K2UG4[0x4];                                 // 0x24(0x4)
	double                                                       Double;                                            // 0x28(0x8)
};


}