#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x8
struct TestFloatObject
{
public:
	float                                                        TestFloat1;                                        // 0x0(0x4)
	float                                                        TestFloat2;                                        // 0x4(0x4)
};


// Size 0x8
struct TestMessageDateTime
{
public:
	struct DateTime                                              DateTime;                                          // 0x0(0x8)
};


// Size 0x8
struct TestMessageUInt64
{
public:
	char                                                         pad0x8_V1LTV[0x8];                                 // 0x0(0x8)
};


// Size 0x28
struct TestSerializationObject
{
public:
	bool                                                         TestBool;                                          // 0x0(0x1)
	char                                                         pad0x3_FD99T[0x3];                                 // 0x1(0x3)
	int                                                          TestInt;                                           // 0x4(0x4)
	struct FString                                               TestString;                                        // 0x8(0x10)
	struct Guid                                                  TestGuid;                                          // 0x18(0x10)
};


// Size 0x50
struct TestUStructMapSerializationObject
{
public:
	char                                                         pad0x50_ELO6T[0x50];                               // 0x0(0x50)
};


// Size 0x1
struct TestEnumObject
{
public:
	char                                                         TestEnum;                                          // 0x0(0x1)
};


// Size 0x8
struct TestMessageInt64
{
public:
	char                                                         pad0x8_3PDTV[0x8];                                 // 0x0(0x8)
};


// Size 0x50
struct TestInt32MapSerializationObject
{
public:
	char                                                         pad0x50_5RDVH[0x50];                               // 0x0(0x50)
};


// Size 0x50
struct TestInvalidStringMapSerializationObject
{
public:
	char                                                         pad0x50_IM1OL[0x50];                               // 0x0(0x50)
};


// Size 0x50
struct TestStringMapSerializationObject
{
public:
	char                                                         pad0x50_NVTDA[0x50];                               // 0x0(0x50)
};


// Size 0x70
struct TestTextObject
{
public:
	struct FText                                                 TestText;                                          // 0x0(0x38)
	struct FText                                                 TestTextExport;                                    // 0x38(0x38)
};


// Size 0x8
struct TestMessageTimespan
{
public:
	struct Timespan                                              Timespan;                                          // 0x0(0x8)
};


// Size 0x18
struct JsonObjectWrapper
{
public:
	char                                                         pad0x18_CZHVD[0x18];                               // 0x0(0x18)
};


// Size 0x28
struct TestSerializationNestedObject
{
public:
	struct TestSerializationObject                               NestedObject;                                      // 0x0(0x28)
};


