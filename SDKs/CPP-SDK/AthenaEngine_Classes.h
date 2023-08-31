// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ForceFeedbackCondition: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AthenaEngineInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AthenaGameStateInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class BoxedRpcDispatcherInterface: public Interface
{
public:
};


// Size 0x8 (Full Size[0xd0] - InheritedSize[0xc8]
class BoxedRpcDispatcherComponent: public ActorComponent
{
public:
};


// Size 0x130 (Full Size[0x5e0] - InheritedSize[0x4b0]
class DynamicColourPointLightComponent: public PointLightComponent
{
public:
	Struct RuntimeFloatCurve                                     ActivationCurve;                                   // 0x4a8(0x80)
	Struct RuntimeFloatCurve                                     DeactivationCurve;                                 // 0x528(0x80)
	char                                                         pad0x38_KTZYL[0x38];                               // 0x5a8(0x38)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class EmptyObject: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class GameInstanceSessionIdProviderInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class NestedWorldRootDataAsset: public DataAsset
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class OnlinePlayerPermissionsRetrieverInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class PersistentAssetCollectionDataAsset: public DataAsset
{
public:
	TArray<class Object*>                                        Assets;                                            // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PlayModeHelpers: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PlayModeInterface: public Interface
{
public:
};


// Size 0x40 (Full Size[0x108] - InheritedSize[0xc8]
class PrimitiveCollisionExtentAdjustOverTimeComponent: public ActorComponent
{
public:
	float                                                        DelayBeforeExtentAdjustment;                       // 0xc8(0x4)
	char                                                         pad0x2c_71F52[0x2c];                               // 0xcc(0x2c)
	Class World*                                                 CachedWorld;                                       // 0xf8(0x8)
	char                                                         pad0x8_G5EFF[0x8];                                 // 0x100(0x8)
};


// Size 0x30 (Full Size[0x138] - InheritedSize[0x108]
class BoxCollisionExtentAdjustOverTimeComponent: public PrimitiveCollisionExtentAdjustOverTimeComponent
{
public:
	bool                                                         ShouldAdjustBoxExtentX;                            // 0x108(0x1)
	char                                                         pad0x3_R0C3X[0x3];                                 // 0x109(0x3)
	float                                                        PostAdjustmentBoxExtentX;                          // 0x10c(0x4)
	bool                                                         ShouldAdjustBoxExtentY;                            // 0x110(0x1)
	char                                                         pad0x3_7Q2OX[0x3];                                 // 0x111(0x3)
	float                                                        PostAdjustmentBoxExtentY;                          // 0x114(0x4)
	bool                                                         ShouldAdjustBoxExtentZ;                            // 0x118(0x1)
	char                                                         pad0x3_CUSQN[0x3];                                 // 0x119(0x3)
	float                                                        PostAdjustmentBoxExtentZ;                          // 0x11c(0x4)
	Struct Vector                                                ServerSizeScale;                                   // 0x120(0xc)
	char                                                         pad0x4_R1EC3[0x4];                                 // 0x12c(0x4)
	Class BoxComponent*                                          BoxCollisionToAdjust;                              // 0x130(0x8)
};


// Size 0x18 (Full Size[0x120] - InheritedSize[0x108]
class SphereCollisionExtentAdjustOverTimeComponent: public PrimitiveCollisionExtentAdjustOverTimeComponent
{
public:
	bool                                                         ShouldAdjustSphereRadius;                          // 0x108(0x1)
	char                                                         pad0x3_K4JGR[0x3];                                 // 0x109(0x3)
	float                                                        PostAdjustmentSphereRadius;                        // 0x10c(0x4)
	float                                                        ServerSizeScale;                                   // 0x110(0x4)
	char                                                         pad0x4_PRJOL[0x4];                                 // 0x114(0x4)
	Class SphereComponent*                                       SphereCollisionToAdjust;                           // 0x118(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ResourceProviderInterface: public Interface
{
public:
};


// Size 0x30 (Full Size[0xf8] - InheritedSize[0xc8]
class RotateMeshToActorComponent: public ActorComponent
{
public:
	Class MeshComponent*                                         MeshToRotate;                                      // 0xc8(0x8)
	Class Actor*                                                 ActorToRotateTo;                                   // 0xd0(0x8)
	float                                                        CloseProximityRadius;                              // 0xd8(0x4)
	bool                                                         Use2DDistanceForCloseProximityRadius;              // 0xdc(0x1)
	bool                                                         WhenInCloseProximityKeepLastYaw;                   // 0xdd(0x1)
	char                                                         pad0x2_ZHKGB[0x2];                                 // 0xde(0x2)
	float                                                        RotationSpeed;                                     // 0xe0(0x4)
	bool                                                         PreventPitchModification;                          // 0xe4(0x1)
	char                                                         pad0x3_0RQL3[0x3];                                 // 0xe5(0x3)
	float                                                        MaxPitch;                                          // 0xe8(0x4)
	float                                                        CloseProximityYawRotation;                         // 0xec(0x4)
	char                                                         pad0x8_X2XS0[0x8];                                 // 0xf0(0x8)
};


// Size 0x0 (Full Size[0xf8] - InheritedSize[0xf8]
class RotateMeshToLocalPlayerComponent: public RotateMeshToActorComponent
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ServicesStampIdInterface: public Interface
{
public:
};


// Size 0x30 (Full Size[0xf8] - InheritedSize[0xc8]
class SkeletalMeshAggregateTickComponent: public ActorComponent
{
public:
	Class SkeletalMeshComponent*                                 Mesh;                                              // 0xc8(0x8)
	char                                                         pad0x28_C659A[0x28];                               // 0xd0(0x28)
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class StringToAssetClassMap: public DataAsset
{
public:
	TArray<struct StringAssetClassPairs>                         StringAssetClassPairs;                             // 0x28(0x10)
	char                                                         pad0x18_UFZ3A[0x18];                               // 0x38(0x18)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class SyncedRandomRetrievalInterface: public Interface
{
public:
};


}