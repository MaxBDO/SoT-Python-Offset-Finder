// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RareGameServiceInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RareGameServiceProviderInterface: public Interface
{
public:
};


// Size 0x68 (Full Size[0x130] - InheritedSize[0xc8]
class RareGameServiceManagerComponent: public ActorComponent
{
public:
	char                                                         pad0x8_3BNBO[0x8];                                 // 0xc8(0x8)
	TArray<class Object*>                                        ReplicatedServices;                                // 0xd0(0x10)
	char                                                         pad0x40_7Q9AE[0x40];                               // 0xe0(0x40)
	TArray<struct RareGameServiceSpecification>                  ServiceSpecifications;                             // 0x120(0x10)
};


}