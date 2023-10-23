// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class Interface: public Object
{
public:
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class GCObjectReferencer: public Object
{
public:
	char                                                         pad0x38_H6J53[0x38];                               // 0x28(0x38)
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class TextBuffer: public Object
{
public:
	char                                                         pad0x28_JM5M7[0x28];                               // 0x28(0x28)
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class Field: public Object
{
public:
	char                                                         pad0x8_OD7S4[0x8];                                 // 0x28(0x8)
};


// Size 0x58 (Full Size[0x88] - InheritedSize[0x30]
class Struct: public Field
{
public:
	char                                                         pad0x58_7DIWU[0x58];                               // 0x30(0x58)
};


// Size 0x10 (Full Size[0x98] - InheritedSize[0x88]
class ScriptStruct: public Struct
{
public:
	char                                                         pad0x10_XJ3VC[0x10];                               // 0x88(0x10)
};


// Size 0x58 (Full Size[0x80] - InheritedSize[0x28]
class Package: public Object
{
public:
	char                                                         pad0x58_94XJE[0x58];                               // 0x28(0x58)
};


// Size 0x138 (Full Size[0x1c0] - InheritedSize[0x88]
class Class: public Struct
{
public:
	char                                                         pad0x138_JY3Y3[0x138];                             // 0x88(0x138)
};


// Size 0x30 (Full Size[0xb8] - InheritedSize[0x88]
class Function: public Struct
{
public:
	char                                                         pad0x30_FUOAS[0x30];                               // 0x88(0x30)
};


// Size 0x0 (Full Size[0xb8] - InheritedSize[0xb8]
class DelegateFunction: public Function
{
public:
};


// Size 0x10 (Full Size[0xc8] - InheritedSize[0xb8]
class SparseDelegateFunction: public DelegateFunction
{
public:
	char                                                         pad0x10_JG2K7[0x10];                               // 0xb8(0x10)
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class PackageMap: public Object
{
public:
	char                                                         pad0x28_G5T9Z[0x28];                               // 0x28(0x28)
};


// Size 0x28 (Full Size[0x58] - InheritedSize[0x30]
class Enum: public Field
{
public:
	char                                                         pad0x28_XWMU0[0x28];                               // 0x30(0x28)
};


// Size 0x150 (Full Size[0x310] - InheritedSize[0x1c0]
class LinkerPlaceholderClass: public Class
{
public:
	char                                                         pad0x150_ETAMG[0x150];                             // 0x1c0(0x150)
};


// Size 0x60 (Full Size[0x88] - InheritedSize[0x28]
class LinkerPlaceholderExportObject: public Object
{
public:
	char                                                         pad0x60_NVWEJ[0x60];                               // 0x28(0x60)
};


// Size 0x150 (Full Size[0x208] - InheritedSize[0xb8]
class LinkerPlaceholderFunction: public Function
{
public:
	char                                                         pad0x150_9F4YR[0x150];                             // 0xb8(0x150)
};


// Size 0x50 (Full Size[0x78] - InheritedSize[0x28]
class MetaData: public Object
{
public:
	char                                                         pad0x50_TP8XB[0x50];                               // 0x28(0x50)
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class ObjectRedirector: public Object
{
public:
	char                                                         pad0x8_DMGY6[0x8];                                 // 0x28(0x8)
};


// Size 0x40 (Full Size[0x70] - InheritedSize[0x30]
class Property: public Field
{
public:
	char                                                         pad0x40_JR9DE[0x40];                               // 0x30(0x40)
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class NumericProperty: public Property
{
public:
};


// Size 0x8 (Full Size[0x78] - InheritedSize[0x70]
class ArrayProperty: public Property
{
public:
	char                                                         pad0x8_SC322[0x8];                                 // 0x70(0x8)
};


// Size 0x8 (Full Size[0x78] - InheritedSize[0x70]
class ObjectPropertyBase: public Property
{
public:
	char                                                         pad0x8_6M7AI[0x8];                                 // 0x70(0x8)
};


// Size 0x0 (Full Size[0x78] - InheritedSize[0x78]
class AssetObjectProperty: public ObjectPropertyBase
{
public:
};


// Size 0x8 (Full Size[0x80] - InheritedSize[0x78]
class AssetClassProperty: public AssetObjectProperty
{
public:
	char                                                         pad0x8_1NLBX[0x8];                                 // 0x78(0x8)
};


// Size 0x8 (Full Size[0x78] - InheritedSize[0x70]
class BoolProperty: public Property
{
public:
	char                                                         pad0x8_42EG1[0x8];                                 // 0x70(0x8)
};


// Size 0x8 (Full Size[0x78] - InheritedSize[0x70]
class ByteProperty: public NumericProperty
{
public:
	char                                                         pad0x8_AYJ0L[0x8];                                 // 0x70(0x8)
};


// Size 0x0 (Full Size[0x78] - InheritedSize[0x78]
class ObjectProperty: public ObjectPropertyBase
{
public:
};


// Size 0x8 (Full Size[0x80] - InheritedSize[0x78]
class ClassProperty: public ObjectProperty
{
public:
	char                                                         pad0x8_ITFAY[0x8];                                 // 0x78(0x8)
};


// Size 0x8 (Full Size[0x78] - InheritedSize[0x70]
class DelegateProperty: public Property
{
public:
	char                                                         pad0x8_CM8FC[0x8];                                 // 0x70(0x8)
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class DoubleProperty: public NumericProperty
{
public:
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class FloatProperty: public NumericProperty
{
public:
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class IntProperty: public NumericProperty
{
public:
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class Int16Property: public NumericProperty
{
public:
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class Int64Property: public NumericProperty
{
public:
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class Int8Property: public NumericProperty
{
public:
};


// Size 0x8 (Full Size[0x78] - InheritedSize[0x70]
class InterfaceProperty: public Property
{
public:
	char                                                         pad0x8_1Z0HL[0x8];                                 // 0x70(0x8)
};


// Size 0x0 (Full Size[0x78] - InheritedSize[0x78]
class LazyObjectProperty: public ObjectPropertyBase
{
public:
};


// Size 0x38 (Full Size[0xa8] - InheritedSize[0x70]
class MapProperty: public Property
{
public:
	char                                                         pad0x38_2YNMA[0x38];                               // 0x70(0x38)
};


// Size 0x8 (Full Size[0x78] - InheritedSize[0x70]
class MulticastDelegateProperty: public Property
{
public:
	char                                                         pad0x8_PGH0B[0x8];                                 // 0x70(0x8)
};


// Size 0x0 (Full Size[0x78] - InheritedSize[0x78]
class MulticastInlineDelegateProperty: public MulticastDelegateProperty
{
public:
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class NameProperty: public Property
{
public:
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class StrProperty: public Property
{
public:
};


// Size 0x8 (Full Size[0x78] - InheritedSize[0x70]
class StructProperty: public Property
{
public:
	char                                                         pad0x8_HX5OJ[0x8];                                 // 0x70(0x8)
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class UInt16Property: public NumericProperty
{
public:
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class UInt32Property: public NumericProperty
{
public:
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class UInt64Property: public NumericProperty
{
public:
};


// Size 0x0 (Full Size[0x78] - InheritedSize[0x78]
class WeakObjectProperty: public ObjectPropertyBase
{
public:
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class TextProperty: public Property
{
public:
};


// Size 0x0 (Full Size[0x0] - InheritedSize[0x0]
class Default__Class: public None
{
public:
};


}