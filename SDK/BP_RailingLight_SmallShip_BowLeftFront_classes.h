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

// BlueprintGeneratedClass BP_RailingLight_SmallShip_BowLeftFront.BP_RailingLight_SmallShip_BowLeftFront_C
// 0x0000 (FullSize[0x0749] - InheritedSize[0x0749])
class ABP_RailingLight_SmallShip_BowLeftFront_C : public ABP_InteractableShipRailingLight_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_RailingLight_SmallShip_BowLeftFront.BP_RailingLight_SmallShip_BowLeftFront_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
