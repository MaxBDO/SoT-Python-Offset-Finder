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
//		Name   -> Function BP_PromptActor_EmissaryActivated_AF.BP_PromptActor_EmissaryActivated_AF_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PromptActor_EmissaryActivated_AF_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_EmissaryActivated_AF.BP_PromptActor_EmissaryActivated_AF_C.UserConstructionScript");

	ABP_PromptActor_EmissaryActivated_AF_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptActor_EmissaryActivated_AF.BP_PromptActor_EmissaryActivated_AF_C.ReceiveEndPlay
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActor_EmissaryActivated_AF_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_EmissaryActivated_AF.BP_PromptActor_EmissaryActivated_AF_C.ReceiveEndPlay");

	ABP_PromptActor_EmissaryActivated_AF_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptActor_EmissaryActivated_AF.BP_PromptActor_EmissaryActivated_AF_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_PromptActor_EmissaryActivated_AF_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_EmissaryActivated_AF.BP_PromptActor_EmissaryActivated_AF_C.ReceiveBeginPlay");

	ABP_PromptActor_EmissaryActivated_AF_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PromptActor_EmissaryActivated_AF.BP_PromptActor_EmissaryActivated_AF_C.ExecuteUbergraph_BP_PromptActor_EmissaryActivated_AF
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PromptActor_EmissaryActivated_AF_C::ExecuteUbergraph_BP_PromptActor_EmissaryActivated_AF(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PromptActor_EmissaryActivated_AF.BP_PromptActor_EmissaryActivated_AF_C.ExecuteUbergraph_BP_PromptActor_EmissaryActivated_AF");

	ABP_PromptActor_EmissaryActivated_AF_C_ExecuteUbergraph_BP_PromptActor_EmissaryActivated_AF_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_PromptActor_EmissaryActivated_AF_C::AfterRead()
{
	ABP_PromptActorBase_C::AfterRead();

	READ_PTR_FULL(PromptCoordinatorEmissaryActivated, UBP_Prompt_EmissaryActivated_C);
	READ_PTR_FULL(PromptCounterAccessKey, UClass);
	READ_PTR_FULL(Company, UClass);
}

void ABP_PromptActor_EmissaryActivated_AF_C::BeforeDelete()
{
	ABP_PromptActorBase_C::BeforeDelete();

	DELE_PTR_FULL(PromptCoordinatorEmissaryActivated);
	DELE_PTR_FULL(PromptCounterAccessKey);
	DELE_PTR_FULL(Company);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
