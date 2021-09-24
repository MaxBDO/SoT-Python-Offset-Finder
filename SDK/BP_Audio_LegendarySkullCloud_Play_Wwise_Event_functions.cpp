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
//		Name   -> Function BP_Audio_LegendarySkullCloud_Play_Wwise_Event.BP_Audio_LegendarySkullCloud_Play_Wwise_Event_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Audio_LegendarySkullCloud_Play_Wwise_Event_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_LegendarySkullCloud_Play_Wwise_Event.BP_Audio_LegendarySkullCloud_Play_Wwise_Event_C.UserConstructionScript");

	ABP_Audio_LegendarySkullCloud_Play_Wwise_Event_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Audio_LegendarySkullCloud_Play_Wwise_Event.BP_Audio_LegendarySkullCloud_Play_Wwise_Event_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_Audio_LegendarySkullCloud_Play_Wwise_Event_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_LegendarySkullCloud_Play_Wwise_Event.BP_Audio_LegendarySkullCloud_Play_Wwise_Event_C.ReceiveBeginPlay");

	ABP_Audio_LegendarySkullCloud_Play_Wwise_Event_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Audio_LegendarySkullCloud_Play_Wwise_Event.BP_Audio_LegendarySkullCloud_Play_Wwise_Event_C.ExecuteUbergraph_BP_Audio_LegendarySkullCloud_Play_Wwise_Event
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Audio_LegendarySkullCloud_Play_Wwise_Event_C::ExecuteUbergraph_BP_Audio_LegendarySkullCloud_Play_Wwise_Event(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_LegendarySkullCloud_Play_Wwise_Event.BP_Audio_LegendarySkullCloud_Play_Wwise_Event_C.ExecuteUbergraph_BP_Audio_LegendarySkullCloud_Play_Wwise_Event");

	ABP_Audio_LegendarySkullCloud_Play_Wwise_Event_C_ExecuteUbergraph_BP_Audio_LegendarySkullCloud_Play_Wwise_Event_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Audio_LegendarySkullCloud_Play_Wwise_Event_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(LegendaryHornEvent, UWwiseEvent);
}

void ABP_Audio_LegendarySkullCloud_Play_Wwise_Event_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(LegendaryHornEvent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
