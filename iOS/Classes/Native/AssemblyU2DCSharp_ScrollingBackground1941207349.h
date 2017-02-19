#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollingBackground
struct  ScrollingBackground_t1941207349  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ScrollingBackground::backgroundSize
	float ___backgroundSize_2;
	// UnityEngine.Transform ScrollingBackground::cameraTranform
	Transform_t3275118058 * ___cameraTranform_3;
	// UnityEngine.Transform[] ScrollingBackground::layers
	TransformU5BU5D_t3764228911* ___layers_4;
	// System.Single ScrollingBackground::viewZone
	float ___viewZone_5;
	// System.Int32 ScrollingBackground::leftIndex
	int32_t ___leftIndex_6;
	// System.Int32 ScrollingBackground::rightIndex
	int32_t ___rightIndex_7;

public:
	inline static int32_t get_offset_of_backgroundSize_2() { return static_cast<int32_t>(offsetof(ScrollingBackground_t1941207349, ___backgroundSize_2)); }
	inline float get_backgroundSize_2() const { return ___backgroundSize_2; }
	inline float* get_address_of_backgroundSize_2() { return &___backgroundSize_2; }
	inline void set_backgroundSize_2(float value)
	{
		___backgroundSize_2 = value;
	}

	inline static int32_t get_offset_of_cameraTranform_3() { return static_cast<int32_t>(offsetof(ScrollingBackground_t1941207349, ___cameraTranform_3)); }
	inline Transform_t3275118058 * get_cameraTranform_3() const { return ___cameraTranform_3; }
	inline Transform_t3275118058 ** get_address_of_cameraTranform_3() { return &___cameraTranform_3; }
	inline void set_cameraTranform_3(Transform_t3275118058 * value)
	{
		___cameraTranform_3 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTranform_3, value);
	}

	inline static int32_t get_offset_of_layers_4() { return static_cast<int32_t>(offsetof(ScrollingBackground_t1941207349, ___layers_4)); }
	inline TransformU5BU5D_t3764228911* get_layers_4() const { return ___layers_4; }
	inline TransformU5BU5D_t3764228911** get_address_of_layers_4() { return &___layers_4; }
	inline void set_layers_4(TransformU5BU5D_t3764228911* value)
	{
		___layers_4 = value;
		Il2CppCodeGenWriteBarrier(&___layers_4, value);
	}

	inline static int32_t get_offset_of_viewZone_5() { return static_cast<int32_t>(offsetof(ScrollingBackground_t1941207349, ___viewZone_5)); }
	inline float get_viewZone_5() const { return ___viewZone_5; }
	inline float* get_address_of_viewZone_5() { return &___viewZone_5; }
	inline void set_viewZone_5(float value)
	{
		___viewZone_5 = value;
	}

	inline static int32_t get_offset_of_leftIndex_6() { return static_cast<int32_t>(offsetof(ScrollingBackground_t1941207349, ___leftIndex_6)); }
	inline int32_t get_leftIndex_6() const { return ___leftIndex_6; }
	inline int32_t* get_address_of_leftIndex_6() { return &___leftIndex_6; }
	inline void set_leftIndex_6(int32_t value)
	{
		___leftIndex_6 = value;
	}

	inline static int32_t get_offset_of_rightIndex_7() { return static_cast<int32_t>(offsetof(ScrollingBackground_t1941207349, ___rightIndex_7)); }
	inline int32_t get_rightIndex_7() const { return ___rightIndex_7; }
	inline int32_t* get_address_of_rightIndex_7() { return &___rightIndex_7; }
	inline void set_rightIndex_7(int32_t value)
	{
		___rightIndex_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
