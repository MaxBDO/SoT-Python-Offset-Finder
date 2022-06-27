// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class HasPlayerMysteriousNotesRadialContext: public RadialContextBase
{
public:
};


// Size 0x30
class LookingAtMysteriousNoteInputComponent: public LookingAtWieldableInputComponent
{
public:
};


// Size 0x0
class MysteriousNoteDesc: public ItemDesc
{
public:
};


// Size 0x10
class MysteriousNotesCompletionEventsModelDataAsset: public DataAsset
{
public:
	TArray<Struct MysteriousNotesCompletionEventsModel>          MysteriousNoteCompletionEvents;                    // 0x28(0x10)
};


// Size 0x48
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


// Size 0x0
class MysteriousNotesServiceInterface: public Interface
{
public:
};


// Size 0x150
class WieldableMysteriousNoteLayout: public DataAsset
{
public:
	Struct FText                                                 DefaultTitle;                                      // 0x28(0x38)
	Struct FText                                                 DefaultBody;                                       // 0x60(0x38)
	Struct WieldableMysteriousNoteLayoutItem                     DefaultNoteLayoutItem;                             // 0x98(0xd0)
	TArray<Struct WieldableMysteriousNoteLayoutItem>             NoteLayoutItems;                                   // 0x168(0x10)
};


// Size 0x10
class WieldableMysteriousNoteDataAsset: public DataAsset
{
public:
	class                                                        WieldableNoteDesc;                                 // 0x28(0x8)
	Class WieldableMysteriousNoteLayout*                         NoteLayout;                                        // 0x30(0x8)
};


// Size 0xc8
class MysteriousNotesService: public Actor
{
public:
	Class MysteriousNoteSettings*                                CachedNoteSettings;                                // 0x3f0(0x8)
	Class WieldableMysteriousNoteDataAsset*                      WieldableNoteDataAsset;                            // 0x3f8(0x8)
	Class MysteriousNotesCompletionEventsModelDataAsset*         CompletionEventsModelData;                         // 0x400(0x8)
};


// Size 0x0
class PlayerMysteriousNoteInterface: public Interface
{
public:
};


// Size 0x188
class PlayerMysteriousNoteComponent: public ActorComponent
{
public:
	Struct ClientNoteData                                        NoteData;                                          // 0xd0(0x18)
	bool                                                         BeenPossessed;                                     // 0xe8(0x1)
	bool                                                         CinematicPlayed;                                   // 0xe9(0x1)
};


// Size 0x1a0
class WieldableMysteriousNote: public SkeletalMeshWieldableItem
{
public:
	Class MaybeCompressedCanvasRenderTarget2D*                   RenderTarget;                                      // 0x790(0x8)
	int                                                          CanvasWidth;                                       // 0x798(0x4)
	int                                                          CanvasHeight;                                      // 0x79c(0x4)
	float                                                        FontScale;                                         // 0x7a0(0x4)
	Class WieldableMysteriousNoteLayout*                         NoteLayout;                                        // 0x800(0x8)
	Class UsableWieldableComponent*                              UsableWieldableComponent;                          // 0x808(0x8)
	Class InventoryItemComponent*                                InventoryItemComponent;                            // 0x810(0x8)
};


}