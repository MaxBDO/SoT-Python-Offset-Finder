#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x70
struct GameServiceMap
{
public:
	char                                                         pad0x70_C7OKA[0x70];                               // 0x0(0x70)
};


// Size 0x18
struct GameServiceCoordinatorUnit
{
public:
	class Object*                                                Service;                                           // 0x0(0x8)
	char                                                         pad0x10_MRQ0C[0x10];                               // 0x8(0x10)
};


// Size 0x20
struct GameServiceCoordinator
{
public:
	TArray<struct GameServiceCoordinatorUnit>                    Services;                                          // 0x0(0x10)
	char                                                         pad0x10_E06B2[0x10];                               // 0x10(0x10)
};


