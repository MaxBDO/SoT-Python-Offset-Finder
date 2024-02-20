#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "CommunityEmissary_Structs.h"


// Size 0x30 (Full Size[0x650] - InheritedSize[0x620]
class CommunityEmissaryFlagComponent: public StaticMeshComponent
{
public:
	class CommunityEmissaryFlagData*                             CommunityEmissaryDataAsset;                        // 0x620(0x8)
	char                                                         pad0x18_V3LW9[0x18];                               // 0x628(0x18)
	int                                                          ActiveFlagDataIndex;                               // 0x640(0x4)
	char                                                         pad0xc_FN2AO[0xc];                                 // 0x644(0xc)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class CommunityEmissaryFlagData: public DataAsset
{
public:
	TArray<struct CommunityFlagGradeData>                        GradeData;                                         // 0x28(0x10)
};


