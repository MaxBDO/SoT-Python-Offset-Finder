#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "PlayerLootMarkerFramework_Structs.h"


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PlayerLootMarkerServiceInterface: public Interface
{
public:
};


// Size 0x178 (Full Size[0x540] - InheritedSize[0x3c8]
class PlayerLootMarkerService: public Actor
{
public:
	char                                                         pad0x8_3YQQK[0x8];                                 // 0x3c8(0x8)
	class PlayerLootMarkerServiceParams*                         Params;                                            // 0x3d0(0x8)
	char                                                         pad0x20_312SO[0x20];                               // 0x3d8(0x20)
	TArray<uintptr_t>                                            ShortRangeMarkers;                                 // 0x3f8(0x10)
	char                                                         pad0x118_XW6TK[0x118];                             // 0x408(0x118)
	TArray<struct PlayerLootMarkerWorldEdgeBatchData>            BatchData;                                         // 0x520(0x10)
	char                                                         pad0x10_OHNQG[0x10];                               // 0x530(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class PlayerLootMarkerServiceParams: public DataAsset
{
public:
	class ShortRangeMarkerDataAsset*                             MarkerDataAsset;                                   // 0x28(0x8)
	float                                                        JettisonMaxMarkerDistance;                         // 0x30(0x4)
	char                                                         pad0x4_9J7W0[0x4];                                 // 0x34(0x4)
};


