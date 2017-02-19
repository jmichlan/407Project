#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// Scroller
struct Scroller_t2879750794;
// UnityEngine.Renderer
struct Renderer_t257310565;
// System.Object
struct Il2CppObject;
// ScrollingBackground
struct ScrollingBackground_t1941207349;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_Scroller2879750794.h"
#include "AssemblyU2DCSharp_Scroller2879750794MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer257310565MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time31991979MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material193706927MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer257310565.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector22243707579MethodDeclarations.h"
#include "AssemblyU2DCSharp_ScrollingBackground1941207349.h"
#include "AssemblyU2DCSharp_ScrollingBackground1941207349MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera189460977MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m4109961936(__this, method) ((  Il2CppObject * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t257310565_m772028041(__this, method) ((  Renderer_t257310565 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Scroller::.ctor()
extern "C"  void Scroller__ctor_m1503647229 (Scroller_t2879750794 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scroller::Update()
extern const MethodInfo* Component_GetComponent_TisRenderer_t257310565_m772028041_MethodInfo_var;
extern const uint32_t Scroller_Update_m1945225452_MetadataUsageId;
extern "C"  void Scroller_Update_m1945225452 (Scroller_t2879750794 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scroller_Update_m1945225452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer_t257310565 * L_0 = Component_GetComponent_TisRenderer_t257310565_m772028041(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t257310565_m772028041_MethodInfo_var);
		NullCheck(L_0);
		Material_t193706927 * L_1 = Renderer_get_material_m2553789785(L_0, /*hidden argument*/NULL);
		float L_2 = Time_get_time_m2216684562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = __this->get_speed_2();
		Vector2_t2243707579  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3067419446(&L_4, ((float)((float)L_2*(float)L_3)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Material_set_mainTextureOffset_m3533368774(L_1, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScrollingBackground::.ctor()
extern "C"  void ScrollingBackground__ctor_m1591963850 (ScrollingBackground_t1941207349 * __this, const MethodInfo* method)
{
	{
		__this->set_viewZone_5((10.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScrollingBackground::Start()
extern Il2CppClass* TransformU5BU5D_t3764228911_il2cpp_TypeInfo_var;
extern const uint32_t ScrollingBackground_Start_m1312876858_MetadataUsageId;
extern "C"  void ScrollingBackground_Start_m1312876858 (ScrollingBackground_t1941207349 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScrollingBackground_Start_m1312876858_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Camera_t189460977 * L_0 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(L_0, /*hidden argument*/NULL);
		__this->set_cameraTranform_3(L_1);
		Transform_t3275118058 * L_2 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Transform_get_childCount_m881385315(L_2, /*hidden argument*/NULL);
		__this->set_layers_4(((TransformU5BU5D_t3764228911*)SZArrayNew(TransformU5BU5D_t3764228911_il2cpp_TypeInfo_var, (uint32_t)L_3)));
		V_0 = 0;
		goto IL_005c;
	}

IL_002d:
	{
		TransformU5BU5D_t3764228911* L_4 = __this->get_layers_4();
		int32_t L_5 = V_0;
		Transform_t3275118058 * L_6 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Transform_t3275118058 * L_8 = Transform_GetChild_m3838588184(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Transform_t3275118058 *)L_8);
		__this->set_leftIndex_6(0);
		TransformU5BU5D_t3764228911* L_9 = __this->get_layers_4();
		NullCheck(L_9);
		__this->set_rightIndex_7(((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_9)->max_length))))-(int32_t)1)));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_11 = V_0;
		Transform_t3275118058 * L_12 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = Transform_get_childCount_m881385315(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_002d;
		}
	}
	{
		return;
	}
}
// System.Void ScrollingBackground::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern const uint32_t ScrollingBackground_Update_m3436025693_MetadataUsageId;
extern "C"  void ScrollingBackground_Update_m3436025693 (ScrollingBackground_t1941207349 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScrollingBackground_Update_m3436025693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)97), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ScrollingBackground_ScrollLeft_m1234311044(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		ScrollingBackground_ScrollRight_m3227407425(__this, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void ScrollingBackground::ScrollLeft()
extern "C"  void ScrollingBackground_ScrollLeft_m1234311044 (ScrollingBackground_t1941207349 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_rightIndex_7();
		V_0 = L_0;
		TransformU5BU5D_t3764228911* L_1 = __this->get_layers_4();
		int32_t L_2 = __this->get_rightIndex_7();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Transform_t3275118058 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Vector3_t2243707580  L_5 = Vector3_get_right_m1884123822(NULL /*static, unused*/, /*hidden argument*/NULL);
		TransformU5BU5D_t3764228911* L_6 = __this->get_layers_4();
		int32_t L_7 = __this->get_leftIndex_6();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Transform_t3275118058 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Vector3_t2243707580  L_10 = Transform_get_position_m1104419803(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = (&V_1)->get_x_1();
		float L_12 = __this->get_backgroundSize_2();
		Vector3_t2243707580  L_13 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_5, ((float)((float)L_11-(float)L_12)), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_m2469242620(L_4, L_13, /*hidden argument*/NULL);
		int32_t L_14 = __this->get_rightIndex_7();
		__this->set_leftIndex_6(L_14);
		int32_t L_15 = __this->get_rightIndex_7();
		__this->set_rightIndex_7(((int32_t)((int32_t)L_15-(int32_t)1)));
		int32_t L_16 = __this->get_rightIndex_7();
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007a;
		}
	}
	{
		TransformU5BU5D_t3764228911* L_17 = __this->get_layers_4();
		NullCheck(L_17);
		__this->set_rightIndex_7(((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_17)->max_length))))-(int32_t)1)));
	}

IL_007a:
	{
		return;
	}
}
// System.Void ScrollingBackground::ScrollRight()
extern "C"  void ScrollingBackground_ScrollRight_m3227407425 (ScrollingBackground_t1941207349 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_rightIndex_7();
		V_0 = L_0;
		TransformU5BU5D_t3764228911* L_1 = __this->get_layers_4();
		int32_t L_2 = __this->get_leftIndex_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Transform_t3275118058 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Vector3_t2243707580  L_5 = Vector3_get_right_m1884123822(NULL /*static, unused*/, /*hidden argument*/NULL);
		TransformU5BU5D_t3764228911* L_6 = __this->get_layers_4();
		int32_t L_7 = __this->get_rightIndex_7();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Transform_t3275118058 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Vector3_t2243707580  L_10 = Transform_get_position_m1104419803(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = (&V_1)->get_x_1();
		float L_12 = __this->get_backgroundSize_2();
		Vector3_t2243707580  L_13 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_5, ((float)((float)L_11-(float)L_12)), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_m2469242620(L_4, L_13, /*hidden argument*/NULL);
		int32_t L_14 = __this->get_leftIndex_6();
		__this->set_rightIndex_7(L_14);
		int32_t L_15 = __this->get_leftIndex_6();
		__this->set_leftIndex_6(((int32_t)((int32_t)L_15-(int32_t)1)));
		int32_t L_16 = __this->get_leftIndex_6();
		TransformU5BU5D_t3764228911* L_17 = __this->get_layers_4();
		NullCheck(L_17);
		if ((!(((uint32_t)L_16) == ((uint32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_17)->max_length))))))))
		{
			goto IL_0078;
		}
	}
	{
		__this->set_leftIndex_6(0);
	}

IL_0078:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
