#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_KeyCode2371581209.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerControls
struct  PlayerControls_t3363872983  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.KeyCode PlayerControls::key_up
	int32_t ___key_up_2;
	// UnityEngine.KeyCode PlayerControls::key_down
	int32_t ___key_down_3;
	// System.Single PlayerControls::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_key_up_2() { return static_cast<int32_t>(offsetof(PlayerControls_t3363872983, ___key_up_2)); }
	inline int32_t get_key_up_2() const { return ___key_up_2; }
	inline int32_t* get_address_of_key_up_2() { return &___key_up_2; }
	inline void set_key_up_2(int32_t value)
	{
		___key_up_2 = value;
	}

	inline static int32_t get_offset_of_key_down_3() { return static_cast<int32_t>(offsetof(PlayerControls_t3363872983, ___key_down_3)); }
	inline int32_t get_key_down_3() const { return ___key_down_3; }
	inline int32_t* get_address_of_key_down_3() { return &___key_down_3; }
	inline void set_key_down_3(int32_t value)
	{
		___key_down_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(PlayerControls_t3363872983, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
