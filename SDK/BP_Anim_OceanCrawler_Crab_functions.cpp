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
//		Name   -> Function BP_Anim_OceanCrawler_Crab.BP_Anim_OceanCrawler_Crab_C.AnimNotify_AttackCompleted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Anim_OceanCrawler_Crab_C::AnimNotify_AttackCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_OceanCrawler_Crab.BP_Anim_OceanCrawler_Crab_C.AnimNotify_AttackCompleted");

	UBP_Anim_OceanCrawler_Crab_C_AnimNotify_AttackCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Anim_OceanCrawler_Crab.BP_Anim_OceanCrawler_Crab_C.AnimNotify_NewAttack
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Anim_OceanCrawler_Crab_C::AnimNotify_NewAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_OceanCrawler_Crab.BP_Anim_OceanCrawler_Crab_C.AnimNotify_NewAttack");

	UBP_Anim_OceanCrawler_Crab_C_AnimNotify_NewAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Anim_OceanCrawler_Crab.BP_Anim_OceanCrawler_Crab_C.AnimNotify_StartingHitReact
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Anim_OceanCrawler_Crab_C::AnimNotify_StartingHitReact()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_OceanCrawler_Crab.BP_Anim_OceanCrawler_Crab_C.AnimNotify_StartingHitReact");

	UBP_Anim_OceanCrawler_Crab_C_AnimNotify_StartingHitReact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Anim_OceanCrawler_Crab.BP_Anim_OceanCrawler_Crab_C.ExecuteUbergraph_BP_Anim_OceanCrawler_Crab
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_OceanCrawler_Crab_C::ExecuteUbergraph_BP_Anim_OceanCrawler_Crab(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_OceanCrawler_Crab.BP_Anim_OceanCrawler_Crab_C.ExecuteUbergraph_BP_Anim_OceanCrawler_Crab");

	UBP_Anim_OceanCrawler_Crab_C_ExecuteUbergraph_BP_Anim_OceanCrawler_Crab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Anim_OceanCrawler_Crab_C::AfterRead()
{
	UOceanCrawlerAnimationInstance::AfterRead();

}

void UBP_Anim_OceanCrawler_Crab_C::BeforeDelete()
{
	UOceanCrawlerAnimationInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
