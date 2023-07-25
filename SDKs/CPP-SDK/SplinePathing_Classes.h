// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28 (Full Size[0x3f0] - InheritedSize[0x3c8]
class FixedSplinePathingActor: public Actor
{
public:
	Class SceneComponent*                                        Root;                                              // 0x3c8(0x8)
	float                                                        Speed;                                             // 0x3d0(0x4)
	char                                                         pad0x4_IDVE9[0x4];                                 // 0x3d4(0x4)
	Class SplineComponent*                                       FollowingSpline;                                   // 0x3d8(0x8)
	bool                                                         CanTick;                                           // 0x3e0(0x1)
	char                                                         pad0xf_4J3MU[0xf];                                 // 0x3e1(0xf)
};


// Size 0xe8 (Full Size[0x4b0] - InheritedSize[0x3c8]
class SplinePathingActor: public Actor
{
public:
	char                                                         pad0x8_NWBV7[0x8];                                 // 0x3c8(0x8)
	Struct ObjectMessagingDispatcher                             ObjectMessageDispatcher;                           // 0x3d0(0xa0)
	TArray<class PrimitiveComponent*>                            PrimitiveActors;                                   // 0x470(0x10)
	Class SceneComponent*                                        Root;                                              // 0x480(0x8)
	Class SplineComponent*                                       Spline;                                            // 0x488(0x8)
	float                                                        Force;                                             // 0x490(0x4)
	float                                                        MaxVelocity;                                       // 0x494(0x4)
	float                                                        DistanceAlongSplineToTarget;                       // 0x498(0x4)
	int                                                          DistanceFromDestination;                           // 0x49c(0x4)
	char                                                         pad0x10_2U6Y5[0x10];                               // 0x4a0(0x10)
};


}