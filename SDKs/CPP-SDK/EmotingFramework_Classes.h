// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class EmoteCameraInterface: public Interface
{
public:
};


// Size 0x140
class EmoteCard: public Actor
{
public:
	Class MaterialInstanceDynamic*                               DynamicCardSelectionMaterialInstance;              // 0x3d0(0x8)
	Class StaticMeshComponent*                                   MeshComponent;                                     // 0x3d8(0x8)
	struct FName                                                 RandomCardParameterName;                           // 0x3e0(0x8)
	Struct Int32Range                                            RandomCardParameterRange;                          // 0x3e8(0x10)
};


// Size 0x118
class EmoteCoin: public Actor
{
public:
};


// Size 0x0
class EmotePropData: public DataAsset
{
public:
};


// Size 0x10
class EmoteRandomFromListAsset: public DataAsset
{
public:
	TArray<Struct EmoteData>                                     EmoteDataList;                                     // 0x28(0x10)
};


// Size 0x8
class EmotePropDiceData: public EmotePropData
{
public:
	byte                                                         DiceType;                                          // 0x28(0x1)
};


// Size 0x120
class EmoteDice: public Actor
{
public:
};


// Size 0x10
class EmoteIdListingAsset: public DataAsset
{
public:
	TArray<Struct FName>                                         EmoteIds;                                          // 0x28(0x10)
};


// Size 0x10
class EmotePropRandomObjectData: public EmotePropData
{
public:
	TArray<Struct EmotePropRandomObjectInfo>                     PossibleObjects;                                   // 0x28(0x10)
};


// Size 0x130
class EmoteRandomObject: public Actor
{
public:
	Class StaticMeshComponent*                                   MeshComponent;                                     // 0x3d0(0x8)
	Class MaterialInstanceDynamic*                               DynamicMaterialInstance;                           // 0x3d8(0x8)
};


// Size 0x8
class EmoteSettings: public DeveloperSettings
{
public:
	int                                                          NumPages;                                          // 0x38(0x4)
	int                                                          ExpandedAndCompactEmoteRadialNumPages;             // 0x3c(0x4)
};


// Size 0x0
class EmoteZoomInAnalogInputId: public AnalogInputId
{
public:
};


// Size 0x0
class EmoteZoomMouseAnalogInputId: public AnalogInputId
{
public:
};


// Size 0x0
class EmoteZoomOutAnalogInputId: public AnalogInputId
{
public:
};


}