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
//		Name   -> Function BP_FishingFish_StormFish_05_Colour_05_Twilight.BP_FishingFish_StormFish_05_Colour_05_Twilight_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FishingFish_StormFish_05_Colour_05_Twilight_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FishingFish_StormFish_05_Colour_05_Twilight.BP_FishingFish_StormFish_05_Colour_05_Twilight_C.UserConstructionScript");

	ABP_FishingFish_StormFish_05_Colour_05_Twilight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FishingFish_StormFish_05_Colour_05_Twilight_C::AfterRead()
{
	ABP_FishingFish_StormFish_05_C::AfterRead();

}

void ABP_FishingFish_StormFish_05_Colour_05_Twilight_C::BeforeDelete()
{
	ABP_FishingFish_StormFish_05_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
