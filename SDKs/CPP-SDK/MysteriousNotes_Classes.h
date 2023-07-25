// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class HasPlayerMysteriousNotesRadialContext: public RadialContextBase
{
public:
};


// Size 0x30 (Full Size[0x2d0] - InheritedSize[0x2a0]
class LookingAtMysteriousNoteInputComponent: public LookingAtWieldableInputComponent
{
public:
};


// Size 0x0 (Full Size[0x120] - InheritedSize[0x120]
class MysteriousNoteDesc: public ItemDesc
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class MysteriousNotesCompletionEventsModelDataAsset: public DataAsset
{
public:
	TArray<struct MysteriousNoteCompletionEvents>                MysteriousNoteCompletionEvents;                    // 0x28(0x10)
};


// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class MysteriousNoteSettings: public Object
{
public:
	int                                                          LookAheadInMinutes;                                // 0x28(0x4)
	float                                                        RequestTimeout;                                    // 0x2c(0x4)
	Struct StringAssetReference                                  MysteriousNotesCompletionStringsAsset;             // 0x30(0x10)
	Struct StringAssetReference                                  WieldableNoteDataAsset;                            // 0x40(0x10)
	Struct StringAssetReference                                  Image;                                             // 0x50(0x10)
	Struct StringAssetReference                                  NotificationBackground;                            // 0x60(0x10)
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
	Struct FText                                                 DefaultTitle;                                      // 0x28(0x38)
	Struct FText                                                 DefaultBody;                                       // 0x60(0x38)
	Struct WieldableMysteriousNoteLayoutItem                     DefaultNoteLayoutItem;                             // 0x98(0xe0)
	TArray<struct NoteLayoutItems>                               NoteLayoutItems;                                   // 0x178(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class WieldableMysteriousNoteDataAsset: public DataAsset
{
public:
	class                                                        WieldableNoteDesc;                                 // 0x28(0x8)
	Class WieldableMysteriousNoteLayout*                         NoteLayout;                                        // 0x30(0x8)
};


// Size 0xc8 (Full Size[0x490] - InheritedSize[0x3c8]
class MysteriousNotesService: public Actor
{
public:
	char                                                         pad0x28_DQV3X[0x28];                               // 0x3c8(0x28)
	Class MysteriousNoteSettings*                                CachedNoteSettings;                                // 0x3f0(0x8)
	Class WieldableMysteriousNoteDataAsset*                      WieldableNoteDataAsset;                            // 0x3f8(0x8)
	Class MysteriousNotesCompletionEventsModelDataAsset*         CompletionEventsModelData;                         // 0x400(0x8)
	char                                                         pad0x88_79M33[0x88];                               // 0x408(0x88)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PlayerMysteriousNoteInterface: public Interface
{
public:
};


// Size 0x1a0 (Full Size[0x268] - InheritedSize[0xc8]
class PlayerMysteriousNoteComponent: public ActorComponent
{
public:
	char                                                         pad0x8_Q9B3T[0x8];                                 // 0xc8(0x8)
	bool                                                         CinematicPlayed;                                   // 0xd0(0x1)
	char                                                         pad0xef_LBKIO[0xef];                               // 0xd1(0xef)
	Struct ClientNoteData                                        NoteData;                                          // 0x1c0(0x18)
	bool                                                         BeenPossessed;                                     // 0x1d8(0x1)
	char                                                         pad0x8f_HDAL8[0x8f];                               // 0x1d9(0x8f)
};


// Size 0x1a0 (Full Size[0x980] - InheritedSize[0x7e0]
class WieldableMysteriousNote: public SkeletalMeshWieldableItem
{
public:
	char                                                         pad0x10_PHEYL[0x10];                               // 0x7e0(0x10)
	Class MaybeCompressedCanvasRenderTarget2D*                   RenderTarget;                                      // 0x7f0(0x8)
	int                                                          CanvasWidth;                                       // 0x7f8(0x4)
	int                                                          CanvasHeight;                                      // 0x7fc(0x4)
	float                                                        FontScale;                                         // 0x800(0x4)
	char                                                         pad0x5c_H5PD5[0x5c];                               // 0x804(0x5c)
	Class WieldableMysteriousNoteLayout*                         NoteLayout;                                        // 0x860(0x8)
	Class UsableWieldableComponent*                              UsableWieldableComponent;                          // 0x868(0x8)
	Class InventoryItemComponent*                                InventoryItemComponent;                            // 0x870(0x8)
	char                                                         pad0x108_U34F6[0x108];                             // 0x878(0x108)
};


}