// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xc0
class InstancedRopeComponent: public PrimitiveComponent
{
public:
	Class StaticMesh*                                            StaticMesh;                                        // 0x5b8(0x8)
	TArray<Struct InstancedRopeParams>                           Ropes;                                             // 0x5c0(0x10)
	int                                                          ShadowLOD;                                         // 0x5d0(0x4)
};


// Size 0x8
class MaterialExpressionRopeParameter: public MaterialExpression
{
public:
	byte                                                         RopeParameterType;                                 // 0x70(0x1)
};


// Size 0x150
class RiggingSystem: public Actor
{
public:
	Class SceneComponent*                                        Root;                                              // 0x3d0(0x8)
	Class InstancedRopeComponent*                                InstancedRopes;                                    // 0x3d8(0x8)
	TArray<Struct RiggingSystemLine>                             Lines;                                             // 0x3e0(0x10)
	TArray<Struct InstancedRopeParams>                           Ropes;                                             // 0x3f0(0x10)
	TArray<class PulleyInstances*>                               PulleyInstances;                                   // 0x400(0x10)
	Struct RiggingSystemPulleyData                               Pulleys;                                           // 0x410(0x60)
	TArray<Struct SocketId>                                      Sockets;                                           // 0x470(0x10)
	TArray<Float InitialMainRopeLengths>                         InitialMainRopeLengths;                            // 0x480(0x10)
};


// Size 0x40
class RiggingSystemComponent: public SceneComponent
{
public:
	Struct RopeStyleParams                                       RopeStyle;                                         // 0x2e0(0x20)
	TArray<Struct RiggingSystemLineGroup>                        LineGroups;                                        // 0x300(0x10)
	Class RiggingSystem*                                         Impl;                                              // 0x310(0x8)
};


// Size 0x0
class RopeCatenaryRenderComponent: public CordRenderComponent
{
public:
};


// Size 0x0
class RopeInterface: public Interface
{
public:
};


}