// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x50 (Full Size[0x418] - InheritedSize[0x3c8]
class FixedSplinePathingActor: public Actor
{
public:
	class SceneComponent*                                        Root;                                              // 0x3c8(0x8)
	class FakedBuoyancyComponent*                                FakedBuoyancyComponent;                            // 0x3d0(0x8)
	float                                                        Speed;                                             // 0x3d8(0x4)
	char                                                         pad0x4_YB9DJ[0x4];                                 // 0x3dc(0x4)
	class SplineComponent*                                       FollowingSpline;                                   // 0x3e0(0x8)
	bool                                                         CanTick;                                           // 0x3e8(0x1)
	char                                                         pad0x2f_U1PEP[0x2f];                               // 0x3e9(0x2f)
};


// Size 0xe8 (Full Size[0x4b0] - InheritedSize[0x3c8]
class SplinePathingActor: public Actor
{
public:
	char                                                         pad0x8_PF1UH[0x8];                                 // 0x3c8(0x8)
	struct ObjectMessagingDispatcher                             ObjectMessageDispatcher;                           // 0x3d0(0xa0)
	char                                                         pad0x10_2NE0J[0x10];                               // 0x470(0x10)
	class SceneComponent*                                        Root;                                              // 0x480(0x8)
	class SplineComponent*                                       Spline;                                            // 0x488(0x8)
	float                                                        Force;                                             // 0x490(0x4)
	float                                                        MaxVelocity;                                       // 0x494(0x4)
	float                                                        DistanceAlongSplineToTarget;                       // 0x498(0x4)
	int                                                          DistanceFromDestination;                           // 0x49c(0x4)
	char                                                         pad0x10_IV2PT[0x10];                               // 0x4a0(0x10)
};


}