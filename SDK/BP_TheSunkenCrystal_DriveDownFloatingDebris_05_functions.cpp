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
//		Name   -> Function BP_TheSunkenCrystal_DriveDownFloatingDebris_05.BP_TheSunkenCrystal_DriveDownFloatingDebris_05_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TheSunkenCrystal_DriveDownFloatingDebris_05_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TheSunkenCrystal_DriveDownFloatingDebris_05.BP_TheSunkenCrystal_DriveDownFloatingDebris_05_C.UserConstructionScript");

	ABP_TheSunkenCrystal_DriveDownFloatingDebris_05_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_TheSunkenCrystal_DriveDownFloatingDebris_05_C::AfterRead()
{
	ABuoyantStorageContainer::AfterRead();

	READ_PTR_FULL(StaticMeshMemoryConstraint5, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint4, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint3, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint2, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint1, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(Sphere, USphereComponent);
	READ_PTR_FULL(TelemetrySubject, UTelemetrySubjectComponent);
}

void ABP_TheSunkenCrystal_DriveDownFloatingDebris_05_C::BeforeDelete()
{
	ABuoyantStorageContainer::BeforeDelete();

	DELE_PTR_FULL(StaticMeshMemoryConstraint5);
	DELE_PTR_FULL(StaticMeshMemoryConstraint4);
	DELE_PTR_FULL(StaticMeshMemoryConstraint3);
	DELE_PTR_FULL(StaticMeshMemoryConstraint2);
	DELE_PTR_FULL(StaticMeshMemoryConstraint1);
	DELE_PTR_FULL(StaticMeshMemoryConstraint);
	DELE_PTR_FULL(Sphere);
	DELE_PTR_FULL(TelemetrySubject);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
