// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x58 (Full Size[0x420] - InheritedSize[0x3c8]
class ShipBumperZone: public Actor
{
public:
	bool                                                         UseInverseRightVector;                             // 0x3c8(0x1)
	char                                                         pad0x2f_O3PJV[0x2f];                               // 0x3c9(0x2f)
	Class BoxComponent*                                          BumperZoneComponent;                               // 0x3f8(0x8)
	Class SphereComponent*                                       DistanceRadiusComponent;                           // 0x400(0x8)
	bool                                                         ApplyAngularImpulse;                               // 0x408(0x1)
	char                                                         pad0x3_5GB9M[0x3];                                 // 0x409(0x3)
	float                                                        AngularImpulse;                                    // 0x40c(0x4)
	bool                                                         OverrideWheelControl;                              // 0x410(0x1)
	bool                                                         ApplyWheelTurbulence;                              // 0x411(0x1)
	char                                                         pad0x2_E34MO[0x2];                                 // 0x412(0x2)
	float                                                        MinWheelTurbulence;                                // 0x414(0x4)
	float                                                        MaxWheelTurbulence;                                // 0x418(0x4)
	char                                                         pad0x4_9HWDZ[0x4];                                 // 0x41c(0x4)
};


}