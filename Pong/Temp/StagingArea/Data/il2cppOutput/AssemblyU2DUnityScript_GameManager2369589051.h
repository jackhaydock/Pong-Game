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
// UnityEngine.Transform
struct Transform_t284553113;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_KeyCode2371581209.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2369589051  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GUISkin GameManager::skin_gui
	GUISkin_t2614611333 * ___skin_gui_4;
	// UnityEngine.Transform GameManager::trns_ball
	Transform_t284553113 * ___trns_ball_5;
	// System.Boolean GameManager::gui_menu
	bool ___gui_menu_6;
	// System.Boolean GameManager::game_mute
	bool ___game_mute_7;
	// UnityEngine.KeyCode GameManager::key_pause
	int32_t ___key_pause_8;
	// UnityEngine.KeyCode GameManager::key_reset
	int32_t ___key_reset_9;
	// System.String GameManager::str_pause
	String_t* ___str_pause_10;
	// System.String GameManager::str_mute
	String_t* ___str_mute_11;

public:
	inline static int32_t get_offset_of_skin_gui_4() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___skin_gui_4)); }
	inline GUISkin_t2614611333 * get_skin_gui_4() const { return ___skin_gui_4; }
	inline GUISkin_t2614611333 ** get_address_of_skin_gui_4() { return &___skin_gui_4; }
	inline void set_skin_gui_4(GUISkin_t2614611333 * value)
	{
		___skin_gui_4 = value;
		Il2CppCodeGenWriteBarrier(&___skin_gui_4, value);
	}

	inline static int32_t get_offset_of_trns_ball_5() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___trns_ball_5)); }
	inline Transform_t284553113 * get_trns_ball_5() const { return ___trns_ball_5; }
	inline Transform_t284553113 ** get_address_of_trns_ball_5() { return &___trns_ball_5; }
	inline void set_trns_ball_5(Transform_t284553113 * value)
	{
		___trns_ball_5 = value;
		Il2CppCodeGenWriteBarrier(&___trns_ball_5, value);
	}

	inline static int32_t get_offset_of_gui_menu_6() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___gui_menu_6)); }
	inline bool get_gui_menu_6() const { return ___gui_menu_6; }
	inline bool* get_address_of_gui_menu_6() { return &___gui_menu_6; }
	inline void set_gui_menu_6(bool value)
	{
		___gui_menu_6 = value;
	}

	inline static int32_t get_offset_of_game_mute_7() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___game_mute_7)); }
	inline bool get_game_mute_7() const { return ___game_mute_7; }
	inline bool* get_address_of_game_mute_7() { return &___game_mute_7; }
	inline void set_game_mute_7(bool value)
	{
		___game_mute_7 = value;
	}

	inline static int32_t get_offset_of_key_pause_8() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___key_pause_8)); }
	inline int32_t get_key_pause_8() const { return ___key_pause_8; }
	inline int32_t* get_address_of_key_pause_8() { return &___key_pause_8; }
	inline void set_key_pause_8(int32_t value)
	{
		___key_pause_8 = value;
	}

	inline static int32_t get_offset_of_key_reset_9() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___key_reset_9)); }
	inline int32_t get_key_reset_9() const { return ___key_reset_9; }
	inline int32_t* get_address_of_key_reset_9() { return &___key_reset_9; }
	inline void set_key_reset_9(int32_t value)
	{
		___key_reset_9 = value;
	}

	inline static int32_t get_offset_of_str_pause_10() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___str_pause_10)); }
	inline String_t* get_str_pause_10() const { return ___str_pause_10; }
	inline String_t** get_address_of_str_pause_10() { return &___str_pause_10; }
	inline void set_str_pause_10(String_t* value)
	{
		___str_pause_10 = value;
		Il2CppCodeGenWriteBarrier(&___str_pause_10, value);
	}

	inline static int32_t get_offset_of_str_mute_11() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___str_mute_11)); }
	inline String_t* get_str_mute_11() const { return ___str_mute_11; }
	inline String_t** get_address_of_str_mute_11() { return &___str_mute_11; }
	inline void set_str_mute_11(String_t* value)
	{
		___str_mute_11 = value;
		Il2CppCodeGenWriteBarrier(&___str_mute_11, value);
	}
};

struct GameManager_t2369589051_StaticFields
{
public:
	// System.Int32 GameManager::plyr_score_left
	int32_t ___plyr_score_left_2;
	// System.Int32 GameManager::plyr_score_right
	int32_t ___plyr_score_right_3;

public:
	inline static int32_t get_offset_of_plyr_score_left_2() { return static_cast<int32_t>(offsetof(GameManager_t2369589051_StaticFields, ___plyr_score_left_2)); }
	inline int32_t get_plyr_score_left_2() const { return ___plyr_score_left_2; }
	inline int32_t* get_address_of_plyr_score_left_2() { return &___plyr_score_left_2; }
	inline void set_plyr_score_left_2(int32_t value)
	{
		___plyr_score_left_2 = value;
	}

	inline static int32_t get_offset_of_plyr_score_right_3() { return static_cast<int32_t>(offsetof(GameManager_t2369589051_StaticFields, ___plyr_score_right_3)); }
	inline int32_t get_plyr_score_right_3() const { return ___plyr_score_right_3; }
	inline int32_t* get_address_of_plyr_score_right_3() { return &___plyr_score_right_3; }
	inline void set_plyr_score_right_3(int32_t value)
	{
		___plyr_score_right_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
