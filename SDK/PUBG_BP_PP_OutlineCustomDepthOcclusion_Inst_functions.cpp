// PlayerUnknown's Battlegrounds (2.6.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PP_OutlineCustomDepthOcclusion_Inst_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PP_OutlineCustomDepthOcclusion_Inst.BP_PP_OutlineCustomDepthOcclusion_Inst_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PP_OutlineCustomDepthOcclusion_Inst_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PP_OutlineCustomDepthOcclusion_Inst.BP_PP_OutlineCustomDepthOcclusion_Inst_C.UserConstructionScript");

	ABP_PP_OutlineCustomDepthOcclusion_Inst_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
