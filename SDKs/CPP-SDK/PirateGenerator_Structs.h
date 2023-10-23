// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x14
struct IPGBlendShape
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	struct FName                                                 NodeName;                                          // 0x8(0x8)
	float                                                        Value;                                             // 0x10(0x4)
};


// Size 0x20
struct PirateGeneratorAdditionalBakeInfo
{
public:
	TArray<class ParticleSystem*>                                VFXParticles;                                      // 0x0(0x10)
	TArray<struct FName>                                         VFXSockets;                                        // 0x10(0x10)
};


// Size 0x80
struct PirateDescription
{
public:
	byte                                                         Type;                                              // 0x0(0x1)
	char                                                         pad0x3_FTBTZ[0x3];                                 // 0x1(0x3)
	int                                                          Version;                                           // 0x4(0x4)
	byte                                                         Gender;                                            // 0x8(0x1)
	byte                                                         Ethnicity;                                         // 0x9(0x1)
	char                                                         pad0x2_8W7QJ[0x2];                                 // 0xa(0x2)
	struct RadialCoordinate                                      BodyShapeCoordinate;                               // 0xc(0x8)
	char                                                         pad0x4_0ID4X[0x4];                                 // 0x14(0x4)
	TArray<struct IPGBlendShape>                                 BlendShapes;                                       // 0x18(0x10)
	TArray<struct IPGDynamicSlider>                              DynamicSliders;                                    // 0x28(0x10)
	int                                                          Seed;                                              // 0x38(0x4)
	char                                                         pad0x4_G43R8[0x4];                                 // 0x3c(0x4)
	TArray<struct FName>                                         Items;                                             // 0x40(0x10)
	TArray<struct FName>                                         TextureReferences;                                 // 0x50(0x10)
	TArray<struct FName>                                         MaterialReferences;                                // 0x60(0x10)
	TArray<struct IPGScalarParameter>                            ScalarParameters;                                  // 0x70(0x10)
};


// Size 0xc
struct IPGScalarParameter
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	float                                                        Value;                                             // 0x8(0x4)
};


// Size 0x8
struct IPGDynamicSlider
{
public:
	int                                                          AffectedPriority;                                  // 0x0(0x4)
	float                                                        Value;                                             // 0x4(0x4)
};


// Size 0x8
struct RadialCoordinate
{
public:
	float                                                        NormalizedAngle;                                   // 0x0(0x4)
	float                                                        RadialDistance;                                    // 0x4(0x4)
};


// Size 0xc
struct WardrobeOutfitCategoryBias
{
public:
	struct FName                                                 CategoryName;                                      // 0x0(0x8)
	float                                                        EmptyProbability;                                  // 0x8(0x4)
};


// Size 0x50
struct WardrobeOutfitResult
{
public:
	TArray<class SkeletalMesh*>                                  Meshes;                                            // 0x0(0x10)
	TArray<struct IPGScalarParameter>                            ScalarParameters;                                  // 0x10(0x10)
	TArray<struct FName>                                         MaterialReferences;                                // 0x20(0x10)
	TArray<class ParticleSystem*>                                VFXParticles;                                      // 0x30(0x10)
	TArray<struct FName>                                         VFXSockets;                                        // 0x40(0x10)
};


// Size 0x10
struct ClothingCreatorSlotItemConfig
{
public:
	TArray<struct ClothingCreatorSlotItem>                       Items;                                             // 0x0(0x10)
};


// Size 0x50
struct ClothingCreatorSlotItem
{
public:
	struct FString                                               Name;                                              // 0x0(0x10)
	struct FString                                               DisplayName;                                       // 0x10(0x10)
	struct FString                                               Description;                                       // 0x20(0x10)
	struct FString                                               Category;                                          // 0x30(0x10)
	TArray<Str Slots>                                            Slots;                                             // 0x40(0x10)
};


// Size 0x60
struct IPGTestClass
{
public:
	struct FName                                                 StringTest;                                        // 0x0(0x8)
	float                                                        FloatTest;                                         // 0x8(0x4)
	int                                                          IntTest;                                           // 0xc(0x4)
	byte                                                         EnumTest;                                          // 0x10(0x1)
	char                                                         pad0x3_Y27K7[0x3];                                 // 0x11(0x3)
	struct IPGTestSimpleType                                     ObjectTest;                                        // 0x14(0xc)
	struct IPGTestSimpleType                                     ObjectNoneTest;                                    // 0x20(0xc)
	char                                                         pad0x4_YTZNF[0x4];                                 // 0x2c(0x4)
	TArray<struct IPGTestSimpleType>                             VectorTest;                                        // 0x30(0x10)
	TArray<struct FName>                                         StrVectorTest;                                     // 0x40(0x10)
	TArray<Byte EnumVectorTest>                                  EnumVectorTest;                                    // 0x50(0x10)
};


// Size 0xc
struct IPGTestSimpleType
{
public:
	struct FName                                                 StringTest;                                        // 0x0(0x8)
	int                                                          IntTest;                                           // 0x8(0x4)
};


// Size 0x78
struct Config
{
public:
	struct IPGData                                               IPG;                                               // 0x0(0x48)
	struct FName                                                 MaleBaseShape;                                     // 0x48(0x8)
	struct FName                                                 FemaleBaseShape;                                   // 0x50(0x8)
	struct IPGBodyShapes                                         BodyShapes;                                        // 0x58(0x20)
};


// Size 0x20
struct IPGBodyShapes
{
public:
	TArray<struct IPGBodyShape>                                  Male;                                              // 0x0(0x10)
	TArray<struct IPGBodyShape>                                  Female;                                            // 0x10(0x10)
};


// Size 0xc
struct IPGBodyShape
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	float                                                        NormalizedWheelAngle;                              // 0x8(0x4)
};


// Size 0x48
struct IPGData
{
public:
	TArray<struct IPGDynamicSliderName>                          DynamicSliderNames;                                // 0x0(0x10)
	TArray<struct IPGBlendingMethod>                             BlendingMethods;                                   // 0x10(0x10)
	TArray<struct IPGSetGroup>                                   Groups;                                            // 0x20(0x10)
	int                                                          CurrentVersion;                                    // 0x30(0x4)
	char                                                         pad0x4_1MATZ[0x4];                                 // 0x34(0x4)
	TArray<struct IPGSetsData>                                   Versions;                                          // 0x38(0x10)
};


// Size 0x18
struct IPGSetsData
{
public:
	int                                                          Version;                                           // 0x0(0x4)
	char                                                         pad0x4_XYPWZ[0x4];                                 // 0x4(0x4)
	TArray<struct IPGSetData>                                    Sets;                                              // 0x8(0x10)
};


// Size 0x20
struct IPGSetData
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	byte                                                         Gender;                                            // 0x8(0x1)
	byte                                                         Ethnicity;                                         // 0x9(0x1)
	char                                                         pad0x2_YW5C0[0x2];                                 // 0xa(0x2)
	int                                                          Priority;                                          // 0xc(0x4)
	TArray<struct IPGBlendNode>                                  Nodes;                                             // 0x10(0x10)
};


// Size 0x18
struct IPGBlendNode
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	TArray<struct IPGBlendRange>                                 Ranges;                                            // 0x8(0x10)
};


// Size 0x28
struct IPGBlendRange
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	float                                                        Min;                                               // 0x8(0x4)
	float                                                        Max;                                               // 0xc(0x4)
	float                                                        Env;                                               // 0x10(0x4)
	char                                                         pad0x4_SVK3V[0x4];                                 // 0x14(0x4)
	TArray<struct IPGCompatibleSet>                              Compatibility;                                     // 0x18(0x10)
};


// Size 0x8
struct IPGCompatibleSet
{
public:
	struct FName                                                 SetName;                                           // 0x0(0x8)
};


// Size 0x8
struct IPGSetGroup
{
public:
	int                                                          Priority;                                          // 0x0(0x4)
	byte                                                         Mode;                                              // 0x4(0x1)
	char                                                         pad0x3_XNEON[0x3];                                 // 0x5(0x3)
};


// Size 0x10
struct IPGBlendingMethod
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	float                                                        Probability;                                       // 0x8(0x4)
	byte                                                         BlendType;                                         // 0xc(0x1)
	char                                                         pad0x3_609BO[0x3];                                 // 0xd(0x3)
};


// Size 0xc
struct IPGDynamicSliderName
{
public:
	int                                                          AffectedPriority;                                  // 0x0(0x4)
	struct FName                                                 Name;                                              // 0x4(0x8)
};


// Size 0x20
struct WardrobeConfig
{
public:
	TArray<struct ClothingSlot>                                  Slots;                                             // 0x0(0x10)
	TArray<struct FName>                                         Priority;                                          // 0x10(0x10)
};


// Size 0x20
struct ClothingSlot
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	TArray<struct FName>                                         Tags;                                              // 0x8(0x10)
	byte                                                         Type;                                              // 0x18(0x1)
	char                                                         pad0x7_0TK0X[0x7];                                 // 0x19(0x7)
};


// Size 0x50
struct Outfit
{
public:
	TArray<struct FName>                                         PartNames;                                         // 0x0(0x10)
	TArray<struct FName>                                         FreeSlots;                                         // 0x10(0x10)
	TArray<struct IPGScalarParameter>                            ScalarParameters;                                  // 0x20(0x10)
	TArray<struct FName>                                         MaterialReferences;                                // 0x30(0x10)
	TArray<struct ClothingVFX>                                   VFXs;                                              // 0x40(0x10)
};


// Size 0x28
struct ClothingVFX
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	TArray<struct FName>                                         Sockets;                                           // 0x8(0x10)
	TArray<struct FName>                                         Slots;                                             // 0x18(0x10)
};


// Size 0x88
struct ClothingItem
{
public:
	struct FName                                                 Type;                                              // 0x0(0x8)
	struct FName                                                 Name;                                              // 0x8(0x8)
	TArray<Byte CompatiblePirateTypes>                           CompatiblePirateTypes;                             // 0x10(0x10)
	TArray<struct FName>                                         Variants;                                          // 0x20(0x10)
	TArray<struct FName>                                         NewSlots;                                          // 0x30(0x10)
	struct FName                                                 Parent;                                            // 0x40(0x8)
	TArray<struct ClothingPart>                                  Parts;                                             // 0x48(0x10)
	TArray<struct ClothingVFX>                                   VFXs;                                              // 0x58(0x10)
	TArray<struct IPGScalarParameter>                            ScalarParameters;                                  // 0x68(0x10)
	TArray<struct FName>                                         MaterialReferences;                                // 0x78(0x10)
};


// Size 0x20
struct ClothingPart
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	TArray<struct FName>                                         Slots;                                             // 0x8(0x10)
	byte                                                         Gender;                                            // 0x18(0x1)
	byte                                                         PartType;                                          // 0x19(0x1)
	char                                                         pad0x6_KD7WA[0x6];                                 // 0x1a(0x6)
};


// Size 0x10
struct AnimationSwitchEntry
{
public:
	struct FName                                                 BodyShape;                                         // 0x0(0x8)
	class UClass*                                                AnimSetDataId;                                     // 0x8(0x8)
};


// Size 0x30
struct BlendedSubMeshSpecification
{
public:
	class SkeletalMesh*                                          Mesh;                                              // 0x0(0x8)
	float                                                        BaseMeshWeight;                                    // 0x8(0x4)
	char                                                         pad0x4_QTG6E[0x4];                                 // 0xc(0x4)
	TArray<class MeshPatchAsset*>                                MeshPatchAssets;                                   // 0x10(0x10)
	TArray<Float MeshPatchAssetWeights>                          MeshPatchAssetWeights;                             // 0x20(0x10)
};


// Size 0x18
struct MaterialReferencesEntry
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	TArray<struct MaterialReferenceEntry>                        References;                                        // 0x8(0x10)
};


// Size 0x18
struct MaterialReferenceEntry
{
public:
	bool                                                         bCopyParametersAcross;                             // 0x0(0x1)
	bool                                                         bReplaceAll;                                       // 0x1(0x1)
	char                                                         pad0x6_3N10Q[0x6];                                 // 0x2(0x6)
	class MaterialInterface*                                     FromMaterial;                                      // 0x8(0x8)
	class MaterialInstanceConstant*                              ToMaterial;                                        // 0x10(0x8)
};


// Size 0x18
struct PirateGeneratorTextureReference
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	TArray<struct FName>                                         References;                                        // 0x8(0x10)
};


// Size 0x18
struct MeshPatchEntry
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	struct StringAssetReference                                  Reference;                                         // 0x8(0x10)
};


// Size 0x18
struct ColorTextureSwitchSeedEntry
{
public:
	struct FName                                                 ReferenceName;                                     // 0x0(0x8)
	struct LinearColor                                           Color;                                             // 0x8(0x10)
};


// Size 0x18
struct TextureSwitchItemEntry
{
public:
	struct FName                                                 ItemName;                                          // 0x0(0x8)
	struct StringAssetReference                                  Texture;                                           // 0x8(0x10)
};


// Size 0x18
struct TextureSwitchBodyShapeEntry
{
public:
	struct FName                                                 BodyShape;                                         // 0x0(0x8)
	struct StringAssetReference                                  Texture;                                           // 0x8(0x10)
};


// Size 0x18
struct TextureSwitchEthnicityEntry
{
public:
	byte                                                         Ethnicity;                                         // 0x0(0x1)
	char                                                         pad0x7_T9Y2O[0x7];                                 // 0x1(0x7)
	struct StringAssetReference                                  Texture;                                           // 0x8(0x10)
};


// Size 0x18
struct TextureSwitchGenderEntry
{
public:
	byte                                                         Gender;                                            // 0x0(0x1)
	char                                                         pad0x7_THET8[0x7];                                 // 0x1(0x7)
	struct StringAssetReference                                  Texture;                                           // 0x8(0x10)
};


// Size 0x18
struct TextureSwitchSeedEntry
{
public:
	struct FName                                                 ReferenceName;                                     // 0x0(0x8)
	struct StringAssetReference                                  Texture;                                           // 0x8(0x10)
};


// Size 0x58
struct TextureSwitchParameters
{
public:
	char                                                         pad0x8_CC5OV[0x8];                                 // 0x0(0x8)
	bool                                                         bAsync;                                            // 0x8(0x1)
	bool                                                         bHighPriority;                                     // 0x9(0x1)
	char                                                         pad0x2_H524N[0x2];                                 // 0xa(0x2)
	int                                                          Seed;                                              // 0xc(0x4)
	byte                                                         SelectedGender;                                    // 0x10(0x1)
	byte                                                         SelectedEthnicity;                                 // 0x11(0x1)
	char                                                         pad0x2_CXFSD[0x2];                                 // 0x12(0x2)
	struct FName                                                 SelectedBodyShape;                                 // 0x14(0x8)
	char                                                         pad0x4_5KK2Z[0x4];                                 // 0x1c(0x4)
	TArray<struct FName>                                         SelectedItems;                                     // 0x20(0x10)
	TArray<struct FName>                                         SelectedReferences;                                // 0x30(0x10)
	char                                                         pad0x18_UMBAD[0x18];                               // 0x40(0x18)
};


}