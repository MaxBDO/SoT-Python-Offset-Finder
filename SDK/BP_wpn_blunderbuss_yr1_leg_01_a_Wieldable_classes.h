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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_wpn_blunderbuss_yr1_leg_01_a_Wieldable.BP_wpn_blunderbuss_yr1_leg_01_a_Wieldable_C
// 0x0000 (FullSize[0x0A60] - InheritedSize[0x0A60])
class ABP_wpn_blunderbuss_yr1_leg_01_a_Wieldable_C : public ABP_Blunderbuss_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_wpn_blunderbuss_yr1_leg_01_a_Wieldable.BP_wpn_blunderbuss_yr1_leg_01_a_Wieldable_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
