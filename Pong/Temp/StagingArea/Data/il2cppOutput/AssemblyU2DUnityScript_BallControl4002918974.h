#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUISkin
struct GUISkin_t2614611333;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallControl
struct  BallControl_t4002918974  : public MonoBehaviour_t3012272455
{
public:
	// System.Single BallControl::ball_speed
	float ___ball_speed_2;
	// System.Single BallControl::ball_pitch
	float ___ball_pitch_3;
	// System.Single BallControl::vel_corr1
	float ___vel_corr1_4;
	// System.Single BallControl::vel_corr2
	float ___vel_corr2_5;
	// UnityEngine.GUISkin BallControl::skin_gui
	GUISkin_t2614611333 * ___skin_gui_6;
	// System.String BallControl::ball_time
	String_t* ___ball_time_7;

public:
	inline static int32_t get_offset_of_ball_speed_2() { return static_cast<int32_t>(offsetof(BallControl_t4002918974, ___ball_speed_2)); }
	inline float get_ball_speed_2() const { return ___ball_speed_2; }
	inline float* get_address_of_ball_speed_2() { return &___ball_speed_2; }
	inline void set_ball_speed_2(float value)
	{
		___ball_speed_2 = value;
	}

	inline static int32_t get_offset_of_ball_pitch_3() { return static_cast<int32_t>(offsetof(BallControl_t4002918974, ___ball_pitch_3)); }
	inline float get_ball_pitch_3() const { return ___ball_pitch_3; }
	inline float* get_address_of_ball_pitch_3() { return &___ball_pitch_3; }
	inline void set_ball_pitch_3(float value)
	{
		___ball_pitch_3 = value;
	}

	inline static int32_t get_offset_of_vel_corr1_4() { return static_cast<int32_t>(offsetof(BallControl_t4002918974, ___vel_corr1_4)); }
	inline float get_vel_corr1_4() const { return ___vel_corr1_4; }
	inline float* get_address_of_vel_corr1_4() { return &___vel_corr1_4; }
	inline void set_vel_corr1_4(float value)
	{
		___vel_corr1_4 = value;
	}

	inline static int32_t get_offset_of_vel_corr2_5() { return static_cast<int32_t>(offsetof(BallControl_t4002918974, ___vel_corr2_5)); }
	inline float get_vel_corr2_5() const { return ___vel_corr2_5; }
	inline float* get_address_of_vel_corr2_5() { return &___vel_corr2_5; }
	inline void set_vel_corr2_5(float value)
	{
		___vel_corr2_5 = value;
	}

	inline static int32_t get_offset_of_skin_gui_6() { return static_cast<int32_t>(offsetof(BallControl_t4002918974, ___skin_gui_6)); }
	inline GUISkin_t2614611333 * get_skin_gui_6() const { return ___skin_gui_6; }
	inline GUISkin_t2614611333 ** get_address_of_skin_gui_6() { return &___skin_gui_6; }
	inline void set_skin_gui_6(GUISkin_t2614611333 * value)
	{
		___skin_gui_6 = value;
		Il2CppCodeGenWriteBarrier(&___skin_gui_6, value);
	}

	inline static int32_t get_offset_of_ball_time_7() { return static_cast<int32_t>(offsetof(BallControl_t4002918974, ___ball_time_7)); }
	inline String_t* get_ball_time_7() const { return ___ball_time_7; }
	inline String_t** get_address_of_ball_time_7() { return &___ball_time_7; }
	inline void set_ball_time_7(String_t* value)
	{
		___ball_time_7 = value;
		Il2CppCodeGenWriteBarrier(&___ball_time_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
