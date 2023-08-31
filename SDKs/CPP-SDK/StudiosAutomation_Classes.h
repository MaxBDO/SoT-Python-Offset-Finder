// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xc0 (Full Size[0x490] - InheritedSize[0x3d0]
class TestLevelScriptActor: public LevelScriptActor
{
public:
	char                                                         pad0x8_1AN5P[0x8];                                 // 0x3d0(0x8)
	byte                                                         Category;                                          // 0x3d8(0x1)
	byte                                                         Area;                                              // 0x3d9(0x1)
	bool                                                         VisualTest;                                        // 0x3da(0x1)
	bool                                                         RunInEditor;                                       // 0x3db(0x1)
	bool                                                         RunOnServer;                                       // 0x3dc(0x1)
	bool                                                         RequiresServices;                                  // 0x3dd(0x1)
	bool                                                         OptOutOfFixedFrameTime;                            // 0x3de(0x1)
	char                                                         pad0x1_DXW2T[0x1];                                 // 0x3df(0x1)
	TArray<struct AdditionalMetadata>                            AdditionalMetadata;                                // 0x3e0(0x10)
	byte                                                         CaptureType;                                       // 0x3f0(0x1)
	byte                                                         PlayModeOverride;                                  // 0x3f1(0x1)
	char                                                         pad0x2_75DEA[0x2];                                 // 0x3f2(0x2)
	float                                                        TestTimeout;                                       // 0x3f4(0x4)
	float                                                        TestPausedTimeout;                                 // 0x3f8(0x4)
	char                                                         pad0x4_8N7YY[0x4];                                 // 0x3fc(0x4)
	TArray<Str VerboseLogCategories>                             VerboseLogCategories;                              // 0x400(0x10)
	TArray<Int ClientsRunning>                                   ClientsRunning;                                    // 0x410(0x10)
	TArray<Int ClientIds>                                        ClientIds;                                         // 0x420(0x10)
	TArray<struct ClientPawns>                                   ClientPawns;                                       // 0x430(0x10)
	TArray<class Actor*>                                         SpawnedActors;                                     // 0x440(0x10)
	int                                                          NextSpawnedActorIndex;                             // 0x450(0x4)
	char                                                         pad0x3c_0LI5O[0x3c];                               // 0x454(0x3c)
};


// Size 0x0 (Full Size[0x3c8] - InheritedSize[0x3c8]
class ActorThatLogsErrorWhenTicked: public Actor
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AggregateAssetAudit: public Interface
{
public:
};


// Size 0x30 (Full Size[0x68] - InheritedSize[0x38]
class AssetAuditSettings: public DeveloperSettings
{
public:
	TArray<Str PathsToAuditOnSave>                               PathsToAuditOnSave;                                // 0x38(0x10)
	TArray<Assetclass TypesToIgnoreInFeatureToggleAudits>        TypesToIgnoreInFeatureToggleAudits;                // 0x48(0x10)
	TArray<Str AssetAuditorsLoadExceptionList>                   AssetAuditorsLoadExceptionList;                    // 0x58(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AutomationBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class AutomationLatentActionCallback: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class BPNamedObjectMock: public Object
{
public:
};


// Size 0x0 (Full Size[0x3c8] - InheritedSize[0x3c8]
class DummyReplicatedActor: public Actor
{
public:
};


// Size 0x0 (Full Size[0x4c0] - InheritedSize[0x4c0]
class MapFixtureTestGameMode: public GameMode
{
public:
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class ObjectWithSettableWorld: public Object
{
public:
	Class World*                                                 World;                                             // 0x28(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TestUObject: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class OtherTestUObject: public Object
{
public:
};


// Size 0x0 (Full Size[0x80] - InheritedSize[0x80]
class RunUnitTestsCommandlet: public Commandlet
{
public:
};


// Size 0x0 (Full Size[0x770] - InheritedSize[0x770]
class TestablePlayerController: public PlayerController
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TestablePlayerControllerInterface: public Interface
{
public:
};


// Size 0x20 (Full Size[0xe8] - InheritedSize[0xc8]
class TestablePlayerControllerComponent: public ActorComponent
{
public:
};


// Size 0x0 (Full Size[0x3c8] - InheritedSize[0x3c8]
class TestAbstractActor: public Actor
{
public:
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class TestSettings: public DeveloperSettings
{
public:
};


// Size 0x50 (Full Size[0x88] - InheritedSize[0x38]
class TextureAuditorSettings: public TestSettings
{
public:
	TArray<struct SpecificTexturesToNotAudit>                    SpecificTexturesToNotAudit;                        // 0x38(0x10)
	TArray<struct TextureDirectoriesToNotAudit>                  TextureDirectoriesToNotAudit;                      // 0x48(0x10)
	Struct TextureAuditorProperties                              DefaultTextureProperties;                          // 0x58(0x20)
	TArray<struct PerTextureGroupPropertiesOverrides>            PerTextureGroupPropertiesOverrides;                // 0x78(0x10)
};


}