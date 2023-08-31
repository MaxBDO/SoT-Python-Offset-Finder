// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class DrawDebugServiceInterface: public Interface
{
public:
};


// Size 0xf8 (Full Size[0x4c0] - InheritedSize[0x3c8]
class DrawDebugService: public Actor
{
public:
	char                                                         pad0x8_EWJDQ[0x8];                                 // 0x3c8(0x8)
	TArray<struct MessagesReplicated>                            MessagesReplicated;                                // 0x3d0(0x10)
	TArray<struct SpheresReplicated>                             SpheresReplicated;                                 // 0x3e0(0x10)
	TArray<struct BoxesReplicated>                               BoxesReplicated;                                   // 0x3f0(0x10)
	TArray<struct CapsulesReplicated>                            CapsulesReplicated;                                // 0x400(0x10)
	TArray<struct LinesReplicated>                               LinesReplicated;                                   // 0x410(0x10)
	TArray<struct SectorsReplicated>                             SectorsReplicated;                                 // 0x420(0x10)
	TArray<struct StringsReplicated>                             StringsReplicated;                                 // 0x430(0x10)
	bool                                                         IsDrawDebugActive;                                 // 0x440(0x1)
	char                                                         pad0x7f_91N52[0x7f];                               // 0x441(0x7f)
};


// Size 0x10 (Full Size[0x3d8] - InheritedSize[0x3c8]
class ShippingDebugActorSphereCollection: public Actor
{
public:
	TArray<struct SphereList>                                    SphereList;                                        // 0x3c8(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TickableDebugDrawingServiceInterface: public Interface
{
public:
};


// Size 0x28 (Full Size[0x3f0] - InheritedSize[0x3c8]
class Videprinter: public Actor
{
public:
	TArray<Str OutputRingBuffer>                                 OutputRingBuffer;                                  // 0x3c8(0x10)
	int                                                          AddAt;                                             // 0x3d8(0x4)
	struct FName                                                 Id;                                                // 0x3dc(0x8)
	char                                                         pad0xc_3HL2T[0xc];                                 // 0x3e4(0xc)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class VideprinterServiceInterface: public Interface
{
public:
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class VideprinterService: public Object
{
public:
	char                                                         pad0x8_1NIBL[0x8];                                 // 0x28(0x8)
	TArray<class Videprinter*>                                   Videprinters;                                      // 0x30(0x10)
};


}