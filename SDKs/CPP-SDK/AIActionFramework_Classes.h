// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AIActionActivity: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AIActionActivity_Idle: public AIActionActivity
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AIActionActivity_Quest: public AIActionActivity
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AIActionContextTag: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AIActionInstigatorInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AIActionRole: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AIActionSpotInterface: public Interface
{
public:
};


// Size 0x58 (Full Size[0x120] - InheritedSize[0xc8]
class AIActionSpotComponent: public ActorComponent
{
public:
	char                                                         pad0x8_HIRKQ[0x8];                                 // 0xc8(0x8)
	TArray<class Class*>                                         SupportedRoles;                                    // 0xd0(0x10)
	TArray<class Class*>                                         SupportedActivities;                               // 0xe0(0x10)
	TArray<class Class*>                                         ContextTags;                                       // 0xf0(0x10)
	class                                                        CustomAnimInstance;                                // 0x100(0x8)
	char                                                         pad0x18_Q6M6R[0x18];                               // 0x108(0x18)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AIActionSpotServiceInterface: public Interface
{
public:
};


// Size 0x68 (Full Size[0x90] - InheritedSize[0x28]
class AIActionSpotService: public Object
{
public:
};


}