// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ActorOfInterestBlueprintFunctionLibrary: public Object
{
public:
};


// Size 0x20 (Full Size[0xe8] - InheritedSize[0xc8]
class ActorOfInterestComponent: public ActorComponent
{
public:
	class                                                        ActorOfInterestId;                                 // 0xc8(0x8)
	char                                                         pad0x18_QH21B[0x18];                               // 0xd0(0x18)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ActorOfInterestId: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ActorOfInterestServiceInterface: public Interface
{
public:
};


// Size 0x100 (Full Size[0x4c8] - InheritedSize[0x3c8]
class ActorOfInterestService: public Actor
{
public:
	char                                                         pad0x60_AJ0S6[0x60];                               // 0x3c8(0x60)
	Struct ObjectMessagingDispatcher                             EventDispatcher;                                   // 0x428(0xa0)
};


}