// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
struct JsonObjectWrapper
{
public:
};


// Size 0x70
struct TestTextObject
{
public:
	Struct FText                                                 TestText;                                          // 0x0(0x38)
	Struct FText                                                 TestTextExport;                                    // 0x38(0x38)
};


// Size 0x8
struct TestFloatObject
{
public:
	float                                                        TestFloat1;                                        // 0x0(0x4)
	float                                                        TestFloat2;                                        // 0x4(0x4)
};


// Size 0x1
struct TestEnumObject
{
public:
	byte                                                         TestEnum;                                          // 0x0(0x1)
};


// Size 0x8
struct TestMessageTimespan
{
public:
	Struct Timespan                                              Timespan;                                          // 0x0(0x8)
};


// Size 0x8
struct TestMessageDateTime
{
public:
	Struct DateTime                                              DateTime;                                          // 0x0(0x8)
};


// Size 0x28
struct TestSerializationNestedObject
{
public:
	Struct TestSerializationObject                               NestedObject;                                      // 0x0(0x28)
};


// Size 0x28
struct TestSerializationObject
{
public:
	bool                                                         TestBool;                                          // 0x0(0x1)
	char                                                         pad0x3_T99K7[0x3];                                 // 0x1(0x3)
	int                                                          TestInt;                                           // 0x4(0x4)
	Struct FString                                               TestString;                                        // 0x8(0x10)
	Struct Guid                                                  TestGuid;                                          // 0x18(0x10)
};


// Size 0x8
struct TestMessageUInt64
{
public:
};


// Size 0x8
struct TestMessageInt64
{
public:
};


// Size 0x50
struct TestUStructMapSerializationObject
{
public:
};


// Size 0x50
struct TestInt32MapSerializationObject
{
public:
};


// Size 0x50
struct TestInvalidStringMapSerializationObject
{
public:
};


// Size 0x50
struct TestStringMapSerializationObject
{
public:
};


}