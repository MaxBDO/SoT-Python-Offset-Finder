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

// BlueprintGeneratedClass BP_SmallShipWheel.BP_SmallShipWheel_C
// 0x0000 (FullSize[0x0A41] - InheritedSize[0x0A41])
class ABP_SmallShipWheel_C : public ABP_Wheel_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmallShipWheel.BP_SmallShipWheel_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
