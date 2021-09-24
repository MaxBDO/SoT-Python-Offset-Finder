﻿// Name: SoT, Version: 2.3.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Shovel.BP_Shovel_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Shovel_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shovel.BP_Shovel_C.UserConstructionScript");

	ABP_Shovel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Shovel_C::AfterRead()
{
	AShovel::AfterRead();

	READ_PTR_FULL(UsableWieldable, UUsableWieldableComponent);
}

void ABP_Shovel_C::BeforeDelete()
{
	AShovel::BeforeDelete();

	DELE_PTR_FULL(UsableWieldable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
