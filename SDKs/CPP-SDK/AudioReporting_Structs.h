#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x28
struct EventReactionDesc
{
public:
	class UClass*                                                ReactionType;                                      // 0x0(0x8)
	int                                                          Priority;                                          // 0x8(0x4)
	float                                                        MinDuration;                                       // 0xc(0x4)
	float                                                        MaxDuration;                                       // 0x10(0x4)
	char                                                         pad0x4_AX4OH[0x4];                                 // 0x14(0x4)
	TArray<class WwiseEvent*>                                    TriggerEvents;                                     // 0x18(0x10)
};


// Size 0x10
struct ActiveAudioReaction
{
public:
	class AudioReportReaction*                                   Reaction;                                          // 0x0(0x8)
	char                                                         pad0x8_Z561L[0x8];                                 // 0x8(0x8)
};


