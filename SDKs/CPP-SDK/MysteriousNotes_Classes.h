#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "MysteriousNotes_Structs.h"


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class MysteriousNotesCompletionEventsModelDataAsset: public DataAsset
{
public:
	TArray<struct MysteriousNotesCompletionEventsModel>          MysteriousNoteCompletionEvents;                    // 0x28(0x10)
};


// Size 0x98 (Full Size[0x460] - InheritedSize[0x3c8]
class MysteriousNotesService: public Actor
{
public:
	char                                                         pad0x28_TGK9A[0x28];                               // 0x3c8(0x28)
	class MysteriousNoteSettings*                                CachedNoteSettings;                                // 0x3f0(0x8)
	class WieldableMysteriousNoteDataAsset*                      WieldableNoteDataAsset;                            // 0x3f8(0x8)
	class MysteriousNotesCompletionEventsModelDataAsset*         CompletionEventsModelData;                         // 0x400(0x8)
	char                                                         pad0x58_S002M[0x58];                               // 0x408(0x58)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PlayerMysteriousNoteInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class HasPlayerMysteriousNotesRadialContext: public RadialContextBase
{
public:
};


// Size 0x1a0 (Full Size[0x268] - InheritedSize[0xc8]
class PlayerMysteriousNoteComponent: public ActorComponent
{
public:
	char                                                         pad0x8_ZGDZK[0x8];                                 // 0xc8(0x8)
	bool                                                         CinematicPlayed;                                   // 0xd0(0x1)
	char                                                         pad0xef_G7A8S[0xef];                               // 0xd1(0xef)
	struct ClientNoteData                                        NoteData;                                          // 0x1c0(0x18)
	bool                                                         BeenPossessed;                                     // 0x1d8(0x1)
	char                                                         pad0x8f_ATZ0B[0x8f];                               // 0x1d9(0x8f)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class WieldableMysteriousNoteDataAsset: public DataAsset
{
public:
	class UClass*                                                WieldableNoteDesc;                                 // 0x28(0x8)
	class WieldableMysteriousNoteLayout*                         NoteLayout;                                        // 0x30(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class MysteriousNotesServiceInterface: public Interface
{
public:
};


// Size 0x160 (Full Size[0x188] - InheritedSize[0x28]
class WieldableMysteriousNoteLayout: public DataAsset
{
public:
	struct FText                                                 DefaultTitle;                                      // 0x28(0x38)
	struct FText                                                 DefaultBody;                                       // 0x60(0x38)
	struct WieldableMysteriousNoteLayoutItem                     DefaultNoteLayoutItem;                             // 0x98(0xe0)
	TArray<struct WieldableMysteriousNoteLayoutItem>             NoteLayoutItems;                                   // 0x178(0x10)
};


// Size 0x1a0 (Full Size[0x980] - InheritedSize[0x7e0]
class WieldableMysteriousNote: public SkeletalMeshWieldableItem
{
public:
	char                                                         pad0x10_FDVPE[0x10];                               // 0x7e0(0x10)
	class MaybeCompressedCanvasRenderTarget2D*                   RenderTarget;                                      // 0x7f0(0x8)
	int                                                          CanvasWidth;                                       // 0x7f8(0x4)
	int                                                          CanvasHeight;                                      // 0x7fc(0x4)
	float                                                        FontScale;                                         // 0x800(0x4)
	char                                                         pad0x5c_3HEQW[0x5c];                               // 0x804(0x5c)
	class WieldableMysteriousNoteLayout*                         NoteLayout;                                        // 0x860(0x8)
	class UsableWieldableComponent*                              UsableWieldableComponent;                          // 0x868(0x8)
	class InventoryItemComponent*                                InventoryItemComponent;                            // 0x870(0x8)
	char                                                         pad0x108_M28DU[0x108];                             // 0x878(0x108)
};


// Size 0x0 (Full Size[0x120] - InheritedSize[0x120]
class MysteriousNoteDesc: public ItemDesc
{
public:
};


// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class MysteriousNoteSettings: public Object
{
public:
	int                                                          LookAheadInMinutes;                                // 0x28(0x4)
	float                                                        RequestTimeout;                                    // 0x2c(0x4)
	struct StringAssetReference                                  MysteriousNotesCompletionStringsAsset;             // 0x30(0x10)
	struct StringAssetReference                                  WieldableNoteDataAsset;                            // 0x40(0x10)
	struct StringAssetReference                                  Image;                                             // 0x50(0x10)
	struct StringAssetReference                                  NotificationBackground;                            // 0x60(0x10)
};


// Size 0x30 (Full Size[0x2d0] - InheritedSize[0x2a0]
class LookingAtMysteriousNoteInputComponent: public LookingAtWieldableInputComponent
{
public:
	char                                                         pad0x30_IXIG7[0x30];                               // 0x2a0(0x30)
};


