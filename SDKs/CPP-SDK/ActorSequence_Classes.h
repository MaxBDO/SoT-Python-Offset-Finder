// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28 (Full Size[0x2d0] - InheritedSize[0x2a8]
class ActorSequence: public MovieSceneSequence
{
public:
	Class MovieScene*                                            MovieScene;                                        // 0x2a8(0x8)
	Struct ActorSequenceObjectReferenceMap                       ObjectReferences;                                  // 0x2b0(0x20)
};


// Size 0x40 (Full Size[0x108] - InheritedSize[0xc8]
class ActorSequenceComponent: public ActorComponent
{
public:
	Struct MovieSceneSequencePlaybackSettings                    PlaybackSettings;                                  // 0xc8(0x28)
	Class ActorSequence*                                         Sequence;                                          // 0xf0(0x8)
	Class ActorSequencePlayer*                                   SequencePlayer;                                    // 0xf8(0x8)
	bool                                                         bAutoPlay;                                         // 0x100(0x1)
	char                                                         pad0x7_DJ6XL[0x7];                                 // 0x101(0x7)
};


// Size 0x0 (Full Size[0x608] - InheritedSize[0x608]
class ActorSequencePlayer: public MovieSceneSequencePlayer
{
public:
};


}