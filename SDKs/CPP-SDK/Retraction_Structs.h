#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0xc
struct EventItemProxyMovedFromSlot
{
public:
	struct Vector                                                ItemLocation;                                      // 0x0(0xc)
};


// Size 0x8
struct EventAttachedRetractableToItemProxy
{
public:
	class Actor*                                                 Item;                                              // 0x0(0x8)
};


// Size 0x3
struct RetractorOrientationAdjustmentFlags
{
public:
	bool                                                         AdjustPitch;                                       // 0x0(0x1)
	bool                                                         AdjustRoll;                                        // 0x1(0x1)
	bool                                                         AdjustYaw;                                         // 0x2(0x1)
};


