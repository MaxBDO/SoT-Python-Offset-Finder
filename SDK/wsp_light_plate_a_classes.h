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

// BlueprintGeneratedClass wsp_light_plate_a.wsp_light_plate_a_C
// 0x0008 (FullSize[0x03E8] - InheritedSize[0x03E0])
class Awsp_light_plate_a_C : public AStaticMeshActor
{
public:
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass wsp_light_plate_a.wsp_light_plate_a_C");
		return ptr;
	}



	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
