#pragma once

// PlayerUnknown's Battlegrounds (2.6.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Item_Heal_FirstAid_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Item_Heal_FirstAid.Item_Heal_FirstAid_C
// 0x0004 (0x020C - 0x0208)
class UItem_Heal_FirstAid_C : public UInstantHealItem
{
public:
	int                                                PrintTime;                                                // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Heal_FirstAid.Item_Heal_FirstAid_C");
		return ptr;
	}


	void PrintCastingTime();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
