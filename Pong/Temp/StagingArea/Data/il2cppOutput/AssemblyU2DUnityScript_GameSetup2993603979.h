#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t262790558;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameSetup
struct  GameSetup_t2993603979  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Camera GameSetup::cam_main
	Camera_t3533968274 * ___cam_main_2;
	// UnityEngine.BoxCollider2D GameSetup::wall_top
	BoxCollider2D_t262790558 * ___wall_top_3;
	// UnityEngine.BoxCollider2D GameSetup::wall_bottom
	BoxCollider2D_t262790558 * ___wall_bottom_4;
	// UnityEngine.BoxCollider2D GameSetup::wall_left
	BoxCollider2D_t262790558 * ___wall_left_5;
	// UnityEngine.BoxCollider2D GameSetup::wall_right
	BoxCollider2D_t262790558 * ___wall_right_6;
	// UnityEngine.Transform GameSetup::plyr_left
	Transform_t284553113 * ___plyr_left_7;
	// UnityEngine.Transform GameSetup::plyr_right
	Transform_t284553113 * ___plyr_right_8;

public:
	inline static int32_t get_offset_of_cam_main_2() { return static_cast<int32_t>(offsetof(GameSetup_t2993603979, ___cam_main_2)); }
	inline Camera_t3533968274 * get_cam_main_2() const { return ___cam_main_2; }
	inline Camera_t3533968274 ** get_address_of_cam_main_2() { return &___cam_main_2; }
	inline void set_cam_main_2(Camera_t3533968274 * value)
	{
		___cam_main_2 = value;
		Il2CppCodeGenWriteBarrier(&___cam_main_2, value);
	}

	inline static int32_t get_offset_of_wall_top_3() { return static_cast<int32_t>(offsetof(GameSetup_t2993603979, ___wall_top_3)); }
	inline BoxCollider2D_t262790558 * get_wall_top_3() const { return ___wall_top_3; }
	inline BoxCollider2D_t262790558 ** get_address_of_wall_top_3() { return &___wall_top_3; }
	inline void set_wall_top_3(BoxCollider2D_t262790558 * value)
	{
		___wall_top_3 = value;
		Il2CppCodeGenWriteBarrier(&___wall_top_3, value);
	}

	inline static int32_t get_offset_of_wall_bottom_4() { return static_cast<int32_t>(offsetof(GameSetup_t2993603979, ___wall_bottom_4)); }
	inline BoxCollider2D_t262790558 * get_wall_bottom_4() const { return ___wall_bottom_4; }
	inline BoxCollider2D_t262790558 ** get_address_of_wall_bottom_4() { return &___wall_bottom_4; }
	inline void set_wall_bottom_4(BoxCollider2D_t262790558 * value)
	{
		___wall_bottom_4 = value;
		Il2CppCodeGenWriteBarrier(&___wall_bottom_4, value);
	}

	inline static int32_t get_offset_of_wall_left_5() { return static_cast<int32_t>(offsetof(GameSetup_t2993603979, ___wall_left_5)); }
	inline BoxCollider2D_t262790558 * get_wall_left_5() const { return ___wall_left_5; }
	inline BoxCollider2D_t262790558 ** get_address_of_wall_left_5() { return &___wall_left_5; }
	inline void set_wall_left_5(BoxCollider2D_t262790558 * value)
	{
		___wall_left_5 = value;
		Il2CppCodeGenWriteBarrier(&___wall_left_5, value);
	}

	inline static int32_t get_offset_of_wall_right_6() { return static_cast<int32_t>(offsetof(GameSetup_t2993603979, ___wall_right_6)); }
	inline BoxCollider2D_t262790558 * get_wall_right_6() const { return ___wall_right_6; }
	inline BoxCollider2D_t262790558 ** get_address_of_wall_right_6() { return &___wall_right_6; }
	inline void set_wall_right_6(BoxCollider2D_t262790558 * value)
	{
		___wall_right_6 = value;
		Il2CppCodeGenWriteBarrier(&___wall_right_6, value);
	}

	inline static int32_t get_offset_of_plyr_left_7() { return static_cast<int32_t>(offsetof(GameSetup_t2993603979, ___plyr_left_7)); }
	inline Transform_t284553113 * get_plyr_left_7() const { return ___plyr_left_7; }
	inline Transform_t284553113 ** get_address_of_plyr_left_7() { return &___plyr_left_7; }
	inline void set_plyr_left_7(Transform_t284553113 * value)
	{
		___plyr_left_7 = value;
		Il2CppCodeGenWriteBarrier(&___plyr_left_7, value);
	}

	inline static int32_t get_offset_of_plyr_right_8() { return static_cast<int32_t>(offsetof(GameSetup_t2993603979, ___plyr_right_8)); }
	inline Transform_t284553113 * get_plyr_right_8() const { return ___plyr_right_8; }
	inline Transform_t284553113 ** get_address_of_plyr_right_8() { return &___plyr_right_8; }
	inline void set_plyr_right_8(Transform_t284553113 * value)
	{
		___plyr_right_8 = value;
		Il2CppCodeGenWriteBarrier(&___plyr_right_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
