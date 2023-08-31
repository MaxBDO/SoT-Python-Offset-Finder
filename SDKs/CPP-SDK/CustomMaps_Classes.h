// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class CustomMapDisplayObjectBase: public Object
{
public:
	Struct Guid                                                  Guid;                                              // 0x28(0x10)
};


// Size 0x30 (Full Size[0x8c0] - InheritedSize[0x890]
class CustomMap: public RenderToTextureMapBase
{
public:
	char                                                         pad0x8_4Z8DN[0x8];                                 // 0x890(0x8)
	Class Font*                                                  Font;                                              // 0x898(0x8)
	TArray<class CustomMapDisplayObjectBase*>                    DisplayItems;                                      // 0x8a0(0x10)
	char                                                         pad0x10_11PRX[0x10];                               // 0x8b0(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CustomMapCollectionInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class CustomMapDataTypeBase: public Object
{
public:
	Struct Guid                                                  Guid;                                              // 0x28(0x10)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class CustomMapData: public DataAsset
{
public:
	class                                                        CustomMapItemDescClass;                            // 0x28(0x8)
	Class Font*                                                  Font;                                              // 0x30(0x8)
	TArray<class CustomMapDataTypeBase*>                         MapDisplayItemList;                                // 0x38(0x10)
};


// Size 0x10 (Full Size[0x48] - InheritedSize[0x38]
class CustomMapDataTypePositional: public CustomMapDataTypeBase
{
public:
	Struct Vector2D                                              Position;                                          // 0x38(0x8)
	float                                                        Orientation;                                       // 0x40(0x4)
	char                                                         pad0x4_GHIT9[0x4];                                 // 0x44(0x4)
};


// Size 0x10 (Full Size[0x48] - InheritedSize[0x38]
class CustomMapDisplayObjectPositional: public CustomMapDisplayObjectBase
{
public:
	Struct Vector2D                                              Position;                                          // 0x38(0x8)
	float                                                        Orientation;                                       // 0x40(0x4)
	char                                                         pad0x4_2JLFK[0x4];                                 // 0x44(0x4)
};


// Size 0x90 (Full Size[0xd8] - InheritedSize[0x48]
class CustomMapDisplayObjectText: public CustomMapDisplayObjectPositional
{
public:
	Struct FText                                                 Text;                                              // 0x48(0x38)
	float                                                        FontScale;                                         // 0x80(0x4)
	bool                                                         StrikeThrough;                                     // 0x84(0x1)
	char                                                         pad0x3_2L0HH[0x3];                                 // 0x85(0x3)
	float                                                        StrikethroughThickness;                            // 0x88(0x4)
	char                                                         pad0x4c_RGMOW[0x4c];                               // 0x8c(0x4c)
};


// Size 0x48 (Full Size[0x90] - InheritedSize[0x48]
class CustomMapDataTypeText: public CustomMapDataTypePositional
{
public:
	Struct FText                                                 Text;                                              // 0x48(0x38)
	float                                                        FontScale;                                         // 0x80(0x4)
	bool                                                         StrikeThrough;                                     // 0x84(0x1)
	char                                                         pad0x3_MUK1U[0x3];                                 // 0x85(0x3)
	float                                                        StrikethroughThickness;                            // 0x88(0x4)
	char                                                         pad0x4_3BD39[0x4];                                 // 0x8c(0x4)
};


// Size 0x8 (Full Size[0x40] - InheritedSize[0x38]
class CustomMapSettings: public DeveloperSettings
{
public:
	class                                                        CustomMapItemDescClass;                            // 0x38(0x8)
};


}