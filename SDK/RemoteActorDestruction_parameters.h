﻿#pragma once

// Name: SoT, Version: 2.3.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyExistingActors
struct URemoteActorDestructionInterface_DestroyExistingActors_Params
{
	TArray<class UClass*>                              ClassesToDestroy;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper)
};

// Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyActor
struct URemoteActorDestructionInterface_DestroyActor_Params
{
	struct FDestroyActorData                           DestroyActorData;                                          // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
