// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CordRenderInterface: public Interface
{
public:
};


// Size 0x40 (Full Size[0x660] - InheritedSize[0x620]
class CordRenderComponent: public StaticMeshComponent
{
public:
	char                                                         pad0x8_642FG[0x8];                                 // 0x620(0x8)
	TArray<class MaterialInstanceDynamic*>                       CordMaterials;                                     // 0x628(0x10)
	float                                                        ThicknessCm;                                       // 0x638(0x4)
	char                                                         pad0x24_UKY8U[0x24];                               // 0x63c(0x24)
};


// Size 0x60 (Full Size[0x6c0] - InheritedSize[0x660]
class DynamicCordRenderComponent: public CordRenderComponent
{
public:
	float                                                        BoundsPadding;                                     // 0x658(0x4)
	char                                                         pad0x4_ZWE87[0x4];                                 // 0x65c(0x4)
	Class SceneComponent*                                        EndPointA;                                         // 0x660(0x8)
	Class SceneComponent*                                        EndPointB;                                         // 0x668(0x8)
	char                                                         pad0x50_ATKWL[0x50];                               // 0x670(0x50)
};


// Size 0x20 (Full Size[0x680] - InheritedSize[0x660]
class HarpoonRenderComponent: public CordRenderComponent
{
public:
	TArray<class MaterialInstanceDynamic*>                       HarpoonMaterials;                                  // 0x658(0x10)
	float                                                        LaunchAnimationDurationSecs;                       // 0x668(0x4)
	float                                                        HitAnimationDurationSecs;                          // 0x66c(0x4)
	float                                                        QuickRetractAnimationSpeed;                        // 0x670(0x4)
	char                                                         pad0xc_05MHX[0xc];                                 // 0x674(0xc)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TetherConstraintInterface: public Interface
{
public:
};


// Size 0x88 (Full Size[0x150] - InheritedSize[0xc8]
class DistanceJointComponent: public ActorComponent
{
public:
	char                                                         pad0x70_V04FH[0x70];                               // 0xc8(0x70)
	float                                                        MinDistance;                                       // 0x138(0x4)
	float                                                        MaxDistance;                                       // 0x13c(0x4)
	float                                                        SpringStiffness;                                   // 0x140(0x4)
	float                                                        SpringDamping;                                     // 0x144(0x4)
	bool                                                         ApplyAsSpring;                                     // 0x148(0x1)
	bool                                                         EnforceMinDistance;                                // 0x149(0x1)
	bool                                                         EnforceMaxDistance;                                // 0x14a(0x1)
	char                                                         pad0x5_BGTCK[0x5];                                 // 0x14b(0x5)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ShouldTetherInWorldSpaceInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TetherQueriableInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TetherCustomisationInterface: public TetherQueriableInterface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TetherInterface: public Interface
{
public:
};


// Size 0x140 (Full Size[0x508] - InheritedSize[0x3c8]
class Tether: public Actor
{
public:
	char                                                         pad0xf8_I1CSO[0xf8];                               // 0x3c8(0xf8)
	Class SceneComponent*                                        TetherPositionAnchorComponent;                     // 0x4c0(0x8)
	Class SphereComponent*                                       SourcePhysicsHandle;                               // 0x4c8(0x8)
	Class SphereComponent*                                       TargetPhysicsHandle;                               // 0x4d0(0x8)
	Class DistanceJointComponent*                                JointComponent;                                    // 0x4d8(0x8)
	Class Actor*                                                 SourceActor;                                       // 0x4e0(0x8)
	Class Actor*                                                 TargetActor;                                       // 0x4e8(0x8)
	float                                                        SlackCm;                                           // 0x4f0(0x4)
	float                                                        MaxLengthWhenGrowing;                              // 0x4f4(0x4)
	char                                                         pad0x8_FL6C8[0x8];                                 // 0x4f8(0x8)
	bool                                                         HasAttached;                                       // 0x500(0x1)
	bool                                                         HasSourceActor;                                    // 0x501(0x1)
	bool                                                         HasTargetActor;                                    // 0x502(0x1)
	bool                                                         IsSlackEnabled;                                    // 0x503(0x1)
	byte                                                         CurrentTetherMode;                                 // 0x504(0x1)
	char                                                         pad0x3_Q2493[0x3];                                 // 0x505(0x3)
};


// Size 0x60 (Full Size[0x128] - InheritedSize[0xc8]
class TetherCustomisationComponent: public ActorComponent
{
public:
	char                                                         pad0x8_XPG4G[0x8];                                 // 0xc8(0x8)
	Class SceneComponent*                                        ComponentToTetherTo;                               // 0xd0(0x8)
	char                                                         pad0x48_OC0F5[0x48];                               // 0xd8(0x48)
	float                                                        MassIntertiaScale;                                 // 0x120(0x4)
	bool                                                         CanBeTethered;                                     // 0x124(0x1)
	bool                                                         IsMassInertiaScalingEnabled;                       // 0x125(0x1)
	char                                                         pad0x2_QAWHL[0x2];                                 // 0x126(0x2)
};


// Size 0x8 (Full Size[0xd0] - InheritedSize[0xc8]
class TetherInWorldSpaceComponent: public ActorComponent
{
public:
};


}