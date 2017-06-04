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

// BallControl
struct BallControl_t4002918974;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t3632243084;
// System.Object
struct Il2CppObject;
// UnityEngine.Collision2D
struct Collision2D_t452810033;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// BallControl/$ball_reset$32
struct U24ball_resetU2432_t3416395376;
// System.Collections.Generic.IEnumerator`1<UnityEngine.WaitForSeconds>
struct IEnumerator_1_t2774239688;
// BallControl/$ball_reset$32/$
struct U24_t37;
// BallControl/$Start$29
struct U24StartU2429_t737531405;
// BallControl/$Start$29/$
struct U24_t36;
// GameManager
struct GameManager_t2369589051;
// System.String
struct String_t;
// GameSetup
struct GameSetup_t2993603979;
// PlayerControls
struct PlayerControls_t3363872983;
// SideWalls
struct SideWalls_t147568818;
// UnityEngine.Collider2D
struct Collider2D_t1890038195;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DUnityScript_BallControl4002918974.h"
#include "AssemblyU2DUnityScript_BallControl4002918974MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "mscorlib_System_Single958209021.h"
#include "AssemblyU2DUnityScript_BallControl_U24StartU2429737531405MethodDeclarations.h"
#include "AssemblyU2DUnityScript_BallControl_U24StartU2429737531405.h"
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D3632243084MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Rigidbody2D3632243084.h"
#include "UnityEngine_UnityEngine_Component2126946602.h"
#include "AssemblyU2DUnityScript_BallControl_U24ball_resetU23416395376MethodDeclarations.h"
#include "AssemblyU2DUnityScript_BallControl_U24ball_resetU23416395376.h"
#include "UnityEngine_UnityEngine_GUI1522956648MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color1588175760MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUISkin2614611333MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Screen3994030297MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIStyle1006925219MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rect1525428817MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUISkin2614611333.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_GUIStyle1006925219.h"
#include "mscorlib_System_Int322847414787.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Random3963434288MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector23525329788MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collision2D452810033.h"
#include "UnityEngine_UnityEngine_Collision2D452810033MethodDeclarations.h"
#include "mscorlib_System_String968488902MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSource3628549054MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider2D1890038195.h"
#include "mscorlib_System_Boolean211005341.h"
#include "UnityEngine_UnityEngine_AudioSource3628549054.h"
#include "Boo_Lang_Boo_Lang_GenericGenerator_1_gen2359605680MethodDeclarations.h"
#include "AssemblyU2DUnityScript_BallControl_U24ball_resetU2432_U2436MethodDeclarations.h"
#include "AssemblyU2DUnityScript_BallControl_U24ball_resetU2432_U2436.h"
#include "Boo_Lang_Boo_Lang_GenericGeneratorEnumerator_1_gen1056199668MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WaitForSeconds1291133240MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "Boo_Lang_Boo_Lang_GenericGeneratorEnumerator_1_gen1056199668.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_WaitForSeconds1291133240.h"
#include "AssemblyU2DUnityScript_BallControl_U24StartU2429_U2436MethodDeclarations.h"
#include "AssemblyU2DUnityScript_BallControl_U24StartU2429_U2436.h"
#include "UnityEngine_UnityEngine_Coroutine2246592261.h"
#include "AssemblyU2DUnityScript_GameManager2369589051.h"
#include "AssemblyU2DUnityScript_GameManager2369589051MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject4012695102MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Input1593691127MethodDeclarations.h"
#include "UnityEngine_UnityEngine_KeyCode2371581209.h"
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices2273795202MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioListener1735598807MethodDeclarations.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Time1525492538MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Application450040189MethodDeclarations.h"
#include "AssemblyU2DUnityScript_GameSetup2993603979.h"
#include "AssemblyU2DUnityScript_GameSetup2993603979MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera3533968274MethodDeclarations.h"
#include "UnityEngine_UnityEngine_BoxCollider2D262790558MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider2D1890038195MethodDeclarations.h"
#include "UnityEngine_UnityEngine_BoxCollider2D262790558.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "AssemblyU2DUnityScript_PlayerControls3363872983.h"
#include "AssemblyU2DUnityScript_PlayerControls3363872983MethodDeclarations.h"
#include "AssemblyU2DUnityScript_SideWalls147568818.h"
#include "AssemblyU2DUnityScript_SideWalls147568818MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3878351788MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t2126946602 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(__this, method) ((  Rigidbody2D_t3632243084 * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t3628549054_m3320421034(__this, method) ((  AudioSource_t3628549054 * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BallControl::.ctor()
extern "C"  void BallControl__ctor_m1650203736 (BallControl_t4002918974 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		__this->set_ball_speed_2((((float)((float)((int32_t)100)))));
		__this->set_ball_pitch_3((((float)((float)1))));
		__this->set_vel_corr1_4((((float)((float)((int32_t)18)))));
		__this->set_vel_corr2_5((((float)((float)((int32_t)18)))));
		return;
	}
}
// System.Collections.IEnumerator BallControl::Start()
extern Il2CppClass* U24StartU2429_t737531405_il2cpp_TypeInfo_var;
extern const uint32_t BallControl_Start_m2471976682_MetadataUsageId;
extern "C"  Il2CppObject * BallControl_Start_m2471976682 (BallControl_t4002918974 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BallControl_Start_m2471976682_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		U24StartU2429_t737531405 * L_0 = (U24StartU2429_t737531405 *)il2cpp_codegen_object_new(U24StartU2429_t737531405_il2cpp_TypeInfo_var);
		U24StartU2429__ctor_m407278618(L_0, __this, /*hidden argument*/NULL);
		Il2CppObject* L_1 = U24StartU2429_GetEnumerator_m1133732266(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void BallControl::Update()
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var;
extern const uint32_t BallControl_Update_m1343570357_MetadataUsageId;
extern "C"  void BallControl_Update_m1343570357 (BallControl_t4002918974 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BallControl_Update_m1343570357_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t3525329788  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector2_t3525329788  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector2_t3525329788  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector2_t3525329788  V_7;
	memset(&V_7, 0, sizeof(V_7));
	float V_8 = 0.0f;
	Vector2_t3525329788  V_9;
	memset(&V_9, 0, sizeof(V_9));
	{
		Rigidbody2D_t3632243084 * L_0 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_1 = Rigidbody2D_get_velocity_m416159605(L_0, /*hidden argument*/NULL);
		V_5 = L_1;
		float L_2 = (&V_5)->get_x_0();
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = __this->get_vel_corr1_4();
		if ((((float)L_3) >= ((float)L_4)))
		{
			goto IL_00b4;
		}
	}
	{
		float L_5 = V_0;
		float L_6 = __this->get_vel_corr1_4();
		if ((((float)L_5) <= ((float)((-L_6)))))
		{
			goto IL_00b4;
		}
	}
	{
		float L_7 = V_0;
		if ((((float)L_7) == ((float)(((float)((float)0))))))
		{
			goto IL_00b4;
		}
	}
	{
		float L_8 = V_0;
		if ((((float)L_8) <= ((float)(((float)((float)0))))))
		{
			goto IL_007a;
		}
	}
	{
		float L_9 = __this->get_vel_corr2_5();
		float L_10 = L_9;
		V_1 = L_10;
		Rigidbody2D_t3632243084 * L_11 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_12 = Rigidbody2D_get_velocity_m416159605(L_11, /*hidden argument*/NULL);
		Vector2_t3525329788  L_13 = L_12;
		V_2 = L_13;
		float L_14 = V_1;
		float L_15 = L_14;
		V_6 = L_15;
		(&V_2)->set_x_0(L_15);
		float L_16 = V_6;
		Rigidbody2D_t3632243084 * L_17 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_18 = V_2;
		Vector2_t3525329788  L_19 = L_18;
		V_7 = L_19;
		Rigidbody2D_set_velocity_m100625302(L_17, L_19, /*hidden argument*/NULL);
		Vector2_t3525329788  L_20 = V_7;
		goto IL_00b4;
	}

IL_007a:
	{
		float L_21 = __this->get_vel_corr2_5();
		float L_22 = ((-L_21));
		V_3 = L_22;
		Rigidbody2D_t3632243084 * L_23 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_24 = Rigidbody2D_get_velocity_m416159605(L_23, /*hidden argument*/NULL);
		Vector2_t3525329788  L_25 = L_24;
		V_4 = L_25;
		float L_26 = V_3;
		float L_27 = L_26;
		V_8 = L_27;
		(&V_4)->set_x_0(L_27);
		float L_28 = V_8;
		Rigidbody2D_t3632243084 * L_29 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_30 = V_4;
		Vector2_t3525329788  L_31 = L_30;
		V_9 = L_31;
		Rigidbody2D_set_velocity_m100625302(L_29, L_31, /*hidden argument*/NULL);
		Vector2_t3525329788  L_32 = V_9;
	}

IL_00b4:
	{
		return;
	}
}
// System.Collections.IEnumerator BallControl::ball_reset()
extern Il2CppClass* U24ball_resetU2432_t3416395376_il2cpp_TypeInfo_var;
extern const uint32_t BallControl_ball_reset_m2144959113_MetadataUsageId;
extern "C"  Il2CppObject * BallControl_ball_reset_m2144959113 (BallControl_t4002918974 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BallControl_ball_reset_m2144959113_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		U24ball_resetU2432_t3416395376 * L_0 = (U24ball_resetU2432_t3416395376 *)il2cpp_codegen_object_new(U24ball_resetU2432_t3416395376_il2cpp_TypeInfo_var);
		U24ball_resetU2432__ctor_m4237008773(L_0, __this, /*hidden argument*/NULL);
		Il2CppObject* L_1 = U24ball_resetU2432_GetEnumerator_m2635347631(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void BallControl::OnGUI()
extern Il2CppClass* GUI_t1522956648_il2cpp_TypeInfo_var;
extern const uint32_t BallControl_OnGUI_m1145602386_MetadataUsageId;
extern "C"  void BallControl_OnGUI_m1145602386 (BallControl_t4002918974 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BallControl_OnGUI_m1145602386_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUISkin_t2614611333 * L_0 = __this->get_skin_gui_6();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1522956648_il2cpp_TypeInfo_var);
		GUI_set_skin_m1213959601(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Color_t1588175760  L_1 = Color_get_black_m1687201969(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUI_set_color_m2304110692(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		GUISkin_t2614611333 * L_2 = GUI_get_skin_m4001454842(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUIStyle_t1006925219 * L_3 = GUISkin_get_label_m3553254700(L_2, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_m1504859443(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUIStyle_set_fontSize_m3621764235(L_3, ((int32_t)((int32_t)L_4/(int32_t)((int32_t)20))), /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_width_m3080333084(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_m1504859443(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t1525428817  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Rect__ctor_m3291325233(&L_7, (((float)((float)((int32_t)((int32_t)L_5/(int32_t)2))))), (((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)L_6/(int32_t)2))+(int32_t)2))))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		String_t* L_8 = __this->get_ball_time_7();
		GUI_Label_m1483857617(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallControl::ball_start()
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var;
extern const uint32_t BallControl_ball_start_m1803036462_MetadataUsageId;
extern "C"  void BallControl_ball_start_m1803036462 (BallControl_t4002918974 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BallControl_ball_start_m1803036462_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = Random_Range_m75452833(NULL /*static, unused*/, 0, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		Rigidbody2D_t3632243084 * L_2 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		float L_3 = __this->get_ball_speed_2();
		int32_t L_4 = Random_Range_m75452833(NULL /*static, unused*/, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		Vector2_t3525329788  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector2__ctor_m1517109030(&L_5, L_3, (((float)((float)L_4))), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m312397382(L_2, L_5, /*hidden argument*/NULL);
		goto IL_0055;
	}

IL_0034:
	{
		Rigidbody2D_t3632243084 * L_6 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		float L_7 = __this->get_ball_speed_2();
		int32_t L_8 = Random_Range_m75452833(NULL /*static, unused*/, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		Vector2_t3525329788  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector2__ctor_m1517109030(&L_9, ((-L_7)), (((float)((float)L_8))), /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m312397382(L_6, L_9, /*hidden argument*/NULL);
	}

IL_0055:
	{
		return;
	}
}
// System.Void BallControl::OnCollisionEnter2D(UnityEngine.Collision2D)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t3628549054_m3320421034_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2393081601;
extern const uint32_t BallControl_OnCollisionEnter2D_m55393474_MetadataUsageId;
extern "C"  void BallControl_OnCollisionEnter2D_m55393474 (BallControl_t4002918974 * __this, Collision2D_t452810033 * ___inf_coll0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BallControl_OnCollisionEnter2D_m55393474_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Vector2_t3525329788  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t3525329788  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector2_t3525329788  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector2_t3525329788  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector2_t3525329788  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector2_t3525329788  V_8;
	memset(&V_8, 0, sizeof(V_8));
	{
		int32_t L_0 = Random_Range_m75452833(NULL /*static, unused*/, ((int32_t)-2), 2, /*hidden argument*/NULL);
		V_0 = L_0;
		Collision2D_t452810033 * L_1 = ___inf_coll0;
		Collider2D_t1890038195 * L_2 = Collision2D_get_collider_m4116040666(L_1, /*hidden argument*/NULL);
		String_t* L_3 = Component_get_tag_m217485006(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_3, _stringLiteral2393081601, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00ef;
		}
	}
	{
		Rigidbody2D_t3632243084 * L_5 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_6 = Rigidbody2D_get_velocity_m416159605(L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = (&V_3)->get_y_1();
		Collision2D_t452810033 * L_8 = ___inf_coll0;
		Collider2D_t1890038195 * L_9 = Collision2D_get_collider_m4116040666(L_8, /*hidden argument*/NULL);
		Rigidbody2D_t3632243084 * L_10 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(L_9, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_11 = Rigidbody2D_get_velocity_m416159605(L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		float L_12 = (&V_4)->get_y_1();
		int32_t L_13 = V_0;
		float L_14 = ((float)((float)((float)((float)((float)((float)L_7/(float)(((float)((float)2)))))+(float)((float)((float)L_12/(float)(((float)((float)3)))))))+(float)(((float)((float)L_13)))));
		V_1 = L_14;
		Rigidbody2D_t3632243084 * L_15 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_16 = Rigidbody2D_get_velocity_m416159605(L_15, /*hidden argument*/NULL);
		Vector2_t3525329788  L_17 = L_16;
		V_2 = L_17;
		float L_18 = V_1;
		float L_19 = L_18;
		V_5 = L_19;
		(&V_2)->set_y_1(L_19);
		float L_20 = V_5;
		Rigidbody2D_t3632243084 * L_21 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_22 = V_2;
		Vector2_t3525329788  L_23 = L_22;
		V_6 = L_23;
		Rigidbody2D_set_velocity_m100625302(L_21, L_23, /*hidden argument*/NULL);
		Vector2_t3525329788  L_24 = V_6;
		AudioSource_t3628549054 * L_25 = Component_GetComponent_TisAudioSource_t3628549054_m3320421034(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3628549054_m3320421034_MethodInfo_var);
		float L_26 = __this->get_ball_pitch_3();
		float L_27 = Random_Range_m3362417303(NULL /*static, unused*/, (-0.1f), (0.1f), /*hidden argument*/NULL);
		Rigidbody2D_t3632243084 * L_28 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_29 = Rigidbody2D_get_velocity_m416159605(L_28, /*hidden argument*/NULL);
		V_7 = L_29;
		float L_30 = Vector2_get_magnitude_m1987058139((&V_7), /*hidden argument*/NULL);
		Collision2D_t452810033 * L_31 = ___inf_coll0;
		Collider2D_t1890038195 * L_32 = Collision2D_get_collider_m4116040666(L_31, /*hidden argument*/NULL);
		Rigidbody2D_t3632243084 * L_33 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(L_32, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_34 = Rigidbody2D_get_velocity_m416159605(L_33, /*hidden argument*/NULL);
		V_8 = L_34;
		float L_35 = Vector2_get_magnitude_m1987058139((&V_8), /*hidden argument*/NULL);
		AudioSource_set_pitch_m1518407234(L_25, ((float)((float)((float)((float)L_26+(float)L_27))+(float)((float)((float)((float)((float)((float)((float)L_30/(float)(((float)((float)2)))))+(float)((float)((float)L_35/(float)(((float)((float)3)))))))/(float)(((float)((float)((int32_t)20)))))))), /*hidden argument*/NULL);
		AudioSource_t3628549054 * L_36 = Component_GetComponent_TisAudioSource_t3628549054_m3320421034(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3628549054_m3320421034_MethodInfo_var);
		AudioSource_Play_m1360558992(L_36, /*hidden argument*/NULL);
	}

IL_00ef:
	{
		return;
	}
}
// System.Void BallControl::Main()
extern "C"  void BallControl_Main_m661463397 (BallControl_t4002918974 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void BallControl/$ball_reset$32::.ctor(BallControl)
extern const MethodInfo* GenericGenerator_1__ctor_m1086344373_MethodInfo_var;
extern const uint32_t U24ball_resetU2432__ctor_m4237008773_MetadataUsageId;
extern "C"  void U24ball_resetU2432__ctor_m4237008773 (U24ball_resetU2432_t3416395376 * __this, BallControl_t4002918974 * ___self_0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U24ball_resetU2432__ctor_m4237008773_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GenericGenerator_1__ctor_m1086344373(__this, /*hidden argument*/GenericGenerator_1__ctor_m1086344373_MethodInfo_var);
		BallControl_t4002918974 * L_0 = ___self_0;
		__this->set_U24self_U2442_0(L_0);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.WaitForSeconds> BallControl/$ball_reset$32::GetEnumerator()
extern Il2CppClass* U24_t37_il2cpp_TypeInfo_var;
extern const uint32_t U24ball_resetU2432_GetEnumerator_m2635347631_MetadataUsageId;
extern "C"  Il2CppObject* U24ball_resetU2432_GetEnumerator_m2635347631 (U24ball_resetU2432_t3416395376 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U24ball_resetU2432_GetEnumerator_m2635347631_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		BallControl_t4002918974 * L_0 = __this->get_U24self_U2442_0();
		U24_t37 * L_1 = (U24_t37 *)il2cpp_codegen_object_new(U24_t37_il2cpp_TypeInfo_var);
		U24__ctor_m3023674330(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void BallControl/$ball_reset$32/$::.ctor(BallControl)
extern const MethodInfo* GenericGeneratorEnumerator_1__ctor_m3634585745_MethodInfo_var;
extern const uint32_t U24__ctor_m3023674330_MetadataUsageId;
extern "C"  void U24__ctor_m3023674330 (U24_t37 * __this, BallControl_t4002918974 * ___self_0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U24__ctor_m3023674330_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GenericGeneratorEnumerator_1__ctor_m3634585745(__this, /*hidden argument*/GenericGeneratorEnumerator_1__ctor_m3634585745_MethodInfo_var);
		BallControl_t4002918974 * L_0 = ___self_0;
		__this->set_U24self_U2441_10(L_0);
		return;
	}
}
// System.Boolean BallControl/$ball_reset$32/$::MoveNext()
extern Il2CppClass* WaitForSeconds_t1291133240_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var;
extern const MethodInfo* GenericGeneratorEnumerator_1_Yield_m4040456012_MethodInfo_var;
extern const MethodInfo* GenericGeneratorEnumerator_1_YieldDefault_m289716250_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral51;
extern Il2CppCodeGenString* _stringLiteral50;
extern Il2CppCodeGenString* _stringLiteral49;
extern const uint32_t U24_MoveNext_m113100940_MetadataUsageId;
extern "C"  bool U24_MoveNext_m113100940 (U24_t37 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U24_MoveNext_m113100940_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t3525329788  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector2_t3525329788  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	Vector2_t3525329788  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector2_t3525329788  V_7;
	memset(&V_7, 0, sizeof(V_7));
	int32_t V_8 = 0;
	Vector3_t3525329789  V_9;
	memset(&V_9, 0, sizeof(V_9));
	float V_10 = 0.0f;
	Vector3_t3525329789  V_11;
	memset(&V_11, 0, sizeof(V_11));
	int32_t V_12 = 0;
	Vector3_t3525329789  V_13;
	memset(&V_13, 0, sizeof(V_13));
	float V_14 = 0.0f;
	Vector3_t3525329789  V_15;
	memset(&V_15, 0, sizeof(V_15));
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ((GenericGeneratorEnumerator_1_t1056199668 *)__this)->get__state_1();
		if (L_0 == 0)
		{
			goto IL_001f;
		}
		if (L_0 == 1)
		{
			goto IL_0220;
		}
		if (L_0 == 2)
		{
			goto IL_01b1;
		}
		if (L_0 == 3)
		{
			goto IL_01d7;
		}
		if (L_0 == 4)
		{
			goto IL_01fd;
		}
	}

IL_001f:
	{
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->set_U24U245U2433_2(L_1);
		int32_t L_2 = V_0;
		BallControl_t4002918974 * L_3 = __this->get_U24self_U2441_10();
		Rigidbody2D_t3632243084 * L_4 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(L_3, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_5 = Rigidbody2D_get_velocity_m416159605(L_4, /*hidden argument*/NULL);
		Vector2_t3525329788  L_6 = L_5;
		V_1 = L_6;
		__this->set_U24U246U2434_3(L_6);
		Vector2_t3525329788  L_7 = V_1;
		Vector2_t3525329788 * L_8 = __this->get_address_of_U24U246U2434_3();
		int32_t L_9 = __this->get_U24U245U2433_2();
		float L_10 = (((float)((float)L_9)));
		V_2 = L_10;
		L_8->set_x_0(L_10);
		float L_11 = V_2;
		BallControl_t4002918974 * L_12 = __this->get_U24self_U2441_10();
		Rigidbody2D_t3632243084 * L_13 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(L_12, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_14 = __this->get_U24U246U2434_3();
		Vector2_t3525329788  L_15 = L_14;
		V_3 = L_15;
		Rigidbody2D_set_velocity_m100625302(L_13, L_15, /*hidden argument*/NULL);
		Vector2_t3525329788  L_16 = V_3;
		int32_t L_17 = 0;
		V_4 = L_17;
		__this->set_U24U247U2435_4(L_17);
		int32_t L_18 = V_4;
		BallControl_t4002918974 * L_19 = __this->get_U24self_U2441_10();
		Rigidbody2D_t3632243084 * L_20 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(L_19, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_21 = Rigidbody2D_get_velocity_m416159605(L_20, /*hidden argument*/NULL);
		Vector2_t3525329788  L_22 = L_21;
		V_5 = L_22;
		__this->set_U24U248U2436_5(L_22);
		Vector2_t3525329788  L_23 = V_5;
		Vector2_t3525329788 * L_24 = __this->get_address_of_U24U248U2436_5();
		int32_t L_25 = __this->get_U24U247U2435_4();
		float L_26 = (((float)((float)L_25)));
		V_6 = L_26;
		L_24->set_y_1(L_26);
		float L_27 = V_6;
		BallControl_t4002918974 * L_28 = __this->get_U24self_U2441_10();
		Rigidbody2D_t3632243084 * L_29 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(L_28, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_30 = __this->get_U24U248U2436_5();
		Vector2_t3525329788  L_31 = L_30;
		V_7 = L_31;
		Rigidbody2D_set_velocity_m100625302(L_29, L_31, /*hidden argument*/NULL);
		Vector2_t3525329788  L_32 = V_7;
		int32_t L_33 = 0;
		V_8 = L_33;
		__this->set_U24U249U2437_6(L_33);
		int32_t L_34 = V_8;
		BallControl_t4002918974 * L_35 = __this->get_U24self_U2441_10();
		Transform_t284553113 * L_36 = Component_get_transform_m4257140443(L_35, /*hidden argument*/NULL);
		Vector3_t3525329789  L_37 = Transform_get_position_m2211398607(L_36, /*hidden argument*/NULL);
		Vector3_t3525329789  L_38 = L_37;
		V_9 = L_38;
		__this->set_U24U2410U2438_7(L_38);
		Vector3_t3525329789  L_39 = V_9;
		Vector3_t3525329789 * L_40 = __this->get_address_of_U24U2410U2438_7();
		int32_t L_41 = __this->get_U24U249U2437_6();
		float L_42 = (((float)((float)L_41)));
		V_10 = L_42;
		L_40->set_x_0(L_42);
		float L_43 = V_10;
		BallControl_t4002918974 * L_44 = __this->get_U24self_U2441_10();
		Transform_t284553113 * L_45 = Component_get_transform_m4257140443(L_44, /*hidden argument*/NULL);
		Vector3_t3525329789  L_46 = __this->get_U24U2410U2438_7();
		Vector3_t3525329789  L_47 = L_46;
		V_11 = L_47;
		Transform_set_position_m3111394108(L_45, L_47, /*hidden argument*/NULL);
		Vector3_t3525329789  L_48 = V_11;
		int32_t L_49 = 0;
		V_12 = L_49;
		__this->set_U24U2411U2439_8(L_49);
		int32_t L_50 = V_12;
		BallControl_t4002918974 * L_51 = __this->get_U24self_U2441_10();
		Transform_t284553113 * L_52 = Component_get_transform_m4257140443(L_51, /*hidden argument*/NULL);
		Vector3_t3525329789  L_53 = Transform_get_position_m2211398607(L_52, /*hidden argument*/NULL);
		Vector3_t3525329789  L_54 = L_53;
		V_13 = L_54;
		__this->set_U24U2412U2440_9(L_54);
		Vector3_t3525329789  L_55 = V_13;
		Vector3_t3525329789 * L_56 = __this->get_address_of_U24U2412U2440_9();
		int32_t L_57 = __this->get_U24U2411U2439_8();
		float L_58 = (((float)((float)L_57)));
		V_14 = L_58;
		L_56->set_y_1(L_58);
		float L_59 = V_14;
		BallControl_t4002918974 * L_60 = __this->get_U24self_U2441_10();
		Transform_t284553113 * L_61 = Component_get_transform_m4257140443(L_60, /*hidden argument*/NULL);
		Vector3_t3525329789  L_62 = __this->get_U24U2412U2440_9();
		Vector3_t3525329789  L_63 = L_62;
		V_15 = L_63;
		Transform_set_position_m3111394108(L_61, L_63, /*hidden argument*/NULL);
		Vector3_t3525329789  L_64 = V_15;
		BallControl_t4002918974 * L_65 = __this->get_U24self_U2441_10();
		L_65->set_ball_time_7(_stringLiteral51);
		WaitForSeconds_t1291133240 * L_66 = (WaitForSeconds_t1291133240 *)il2cpp_codegen_object_new(WaitForSeconds_t1291133240_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_66, (0.8f), /*hidden argument*/NULL);
		bool L_67 = GenericGeneratorEnumerator_1_Yield_m4040456012(__this, 2, L_66, /*hidden argument*/GenericGeneratorEnumerator_1_Yield_m4040456012_MethodInfo_var);
		G_B6_0 = ((int32_t)(L_67));
		goto IL_0221;
	}

IL_01b1:
	{
		BallControl_t4002918974 * L_68 = __this->get_U24self_U2441_10();
		L_68->set_ball_time_7(_stringLiteral50);
		WaitForSeconds_t1291133240 * L_69 = (WaitForSeconds_t1291133240 *)il2cpp_codegen_object_new(WaitForSeconds_t1291133240_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_69, (0.8f), /*hidden argument*/NULL);
		bool L_70 = GenericGeneratorEnumerator_1_Yield_m4040456012(__this, 3, L_69, /*hidden argument*/GenericGeneratorEnumerator_1_Yield_m4040456012_MethodInfo_var);
		G_B6_0 = ((int32_t)(L_70));
		goto IL_0221;
	}

IL_01d7:
	{
		BallControl_t4002918974 * L_71 = __this->get_U24self_U2441_10();
		L_71->set_ball_time_7(_stringLiteral49);
		WaitForSeconds_t1291133240 * L_72 = (WaitForSeconds_t1291133240 *)il2cpp_codegen_object_new(WaitForSeconds_t1291133240_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_72, (0.8f), /*hidden argument*/NULL);
		bool L_73 = GenericGeneratorEnumerator_1_Yield_m4040456012(__this, 4, L_72, /*hidden argument*/GenericGeneratorEnumerator_1_Yield_m4040456012_MethodInfo_var);
		G_B6_0 = ((int32_t)(L_73));
		goto IL_0221;
	}

IL_01fd:
	{
		BallControl_t4002918974 * L_74 = __this->get_U24self_U2441_10();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_75 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		L_74->set_ball_time_7(L_75);
		BallControl_t4002918974 * L_76 = __this->get_U24self_U2441_10();
		VirtActionInvoker0::Invoke(8 /* System.Void BallControl::ball_start() */, L_76);
		GenericGeneratorEnumerator_1_YieldDefault_m289716250(__this, 1, /*hidden argument*/GenericGeneratorEnumerator_1_YieldDefault_m289716250_MethodInfo_var);
	}

IL_0220:
	{
		G_B6_0 = 0;
	}

IL_0221:
	{
		return (bool)G_B6_0;
	}
}
// System.Void BallControl/$Start$29::.ctor(BallControl)
extern const MethodInfo* GenericGenerator_1__ctor_m1086344373_MethodInfo_var;
extern const uint32_t U24StartU2429__ctor_m407278618_MetadataUsageId;
extern "C"  void U24StartU2429__ctor_m407278618 (U24StartU2429_t737531405 * __this, BallControl_t4002918974 * ___self_0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U24StartU2429__ctor_m407278618_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GenericGenerator_1__ctor_m1086344373(__this, /*hidden argument*/GenericGenerator_1__ctor_m1086344373_MethodInfo_var);
		BallControl_t4002918974 * L_0 = ___self_0;
		__this->set_U24self_U2431_0(L_0);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.WaitForSeconds> BallControl/$Start$29::GetEnumerator()
extern Il2CppClass* U24_t36_il2cpp_TypeInfo_var;
extern const uint32_t U24StartU2429_GetEnumerator_m1133732266_MetadataUsageId;
extern "C"  Il2CppObject* U24StartU2429_GetEnumerator_m1133732266 (U24StartU2429_t737531405 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U24StartU2429_GetEnumerator_m1133732266_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		BallControl_t4002918974 * L_0 = __this->get_U24self_U2431_0();
		U24_t36 * L_1 = (U24_t36 *)il2cpp_codegen_object_new(U24_t36_il2cpp_TypeInfo_var);
		U24__ctor_m3439968047(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void BallControl/$Start$29/$::.ctor(BallControl)
extern const MethodInfo* GenericGeneratorEnumerator_1__ctor_m3634585745_MethodInfo_var;
extern const uint32_t U24__ctor_m3439968047_MetadataUsageId;
extern "C"  void U24__ctor_m3439968047 (U24_t36 * __this, BallControl_t4002918974 * ___self_0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U24__ctor_m3439968047_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GenericGeneratorEnumerator_1__ctor_m3634585745(__this, /*hidden argument*/GenericGeneratorEnumerator_1__ctor_m3634585745_MethodInfo_var);
		BallControl_t4002918974 * L_0 = ___self_0;
		__this->set_U24self_U2430_2(L_0);
		return;
	}
}
// System.Boolean BallControl/$Start$29/$::MoveNext()
extern Il2CppClass* WaitForSeconds_t1291133240_il2cpp_TypeInfo_var;
extern const MethodInfo* GenericGeneratorEnumerator_1_Yield_m4040456012_MethodInfo_var;
extern const MethodInfo* GenericGeneratorEnumerator_1_YieldDefault_m289716250_MethodInfo_var;
extern const uint32_t U24_MoveNext_m850924581_MetadataUsageId;
extern "C"  bool U24_MoveNext_m850924581 (U24_t36 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U24_MoveNext_m850924581_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ((GenericGeneratorEnumerator_1_t1056199668 *)__this)->get__state_1();
		if (L_0 == 0)
		{
			goto IL_0017;
		}
		if (L_0 == 1)
		{
			goto IL_004c;
		}
		if (L_0 == 2)
		{
			goto IL_002d;
		}
	}

IL_0017:
	{
		WaitForSeconds_t1291133240 * L_1 = (WaitForSeconds_t1291133240 *)il2cpp_codegen_object_new(WaitForSeconds_t1291133240_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_1, (0.1f), /*hidden argument*/NULL);
		bool L_2 = GenericGeneratorEnumerator_1_Yield_m4040456012(__this, 2, L_1, /*hidden argument*/GenericGeneratorEnumerator_1_Yield_m4040456012_MethodInfo_var);
		G_B4_0 = ((int32_t)(L_2));
		goto IL_004d;
	}

IL_002d:
	{
		BallControl_t4002918974 * L_3 = __this->get_U24self_U2430_2();
		BallControl_t4002918974 * L_4 = __this->get_U24self_U2430_2();
		Il2CppObject * L_5 = VirtFuncInvoker0< Il2CppObject * >::Invoke(6 /* System.Collections.IEnumerator BallControl::ball_reset() */, L_4);
		MonoBehaviour_StartCoroutine_Auto_m1831125106(L_3, L_5, /*hidden argument*/NULL);
		GenericGeneratorEnumerator_1_YieldDefault_m289716250(__this, 1, /*hidden argument*/GenericGeneratorEnumerator_1_YieldDefault_m289716250_MethodInfo_var);
	}

IL_004c:
	{
		G_B4_0 = 0;
	}

IL_004d:
	{
		return (bool)G_B4_0;
	}
}
// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m1049824251 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::.cctor()
extern "C"  void GameManager__cctor_m1997684498 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameManager::Start()
extern Il2CppCodeGenString* _stringLiteral2062879;
extern Il2CppCodeGenString* _stringLiteral76887510;
extern Il2CppCodeGenString* _stringLiteral2410041;
extern const uint32_t GameManager_Start_m4291929339_MetadataUsageId;
extern "C"  void GameManager_Start_m4291929339 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Start_m4291929339_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t4012695102 * L_0 = GameObject_FindGameObjectWithTag_m2635560165(NULL /*static, unused*/, _stringLiteral2062879, /*hidden argument*/NULL);
		Transform_t284553113 * L_1 = GameObject_get_transform_m1278640159(L_0, /*hidden argument*/NULL);
		__this->set_trns_ball_5(L_1);
		__this->set_str_pause_10(_stringLiteral76887510);
		__this->set_str_mute_11(_stringLiteral2410041);
		return;
	}
}
// System.Void GameManager::fun_score(System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* GameManager_t2369589051_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2294658919;
extern Il2CppCodeGenString* _stringLiteral1459311964;
extern const uint32_t GameManager_fun_score_m3319428183_MetadataUsageId;
extern "C"  void GameManager_fun_score_m3319428183 (Il2CppObject * __this /* static, unused */, String_t* ___wall_name0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager_fun_score_m3319428183_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___wall_name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_0, _stringLiteral2294658919, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t2369589051_il2cpp_TypeInfo_var);
		int32_t L_2 = ((GameManager_t2369589051_StaticFields*)GameManager_t2369589051_il2cpp_TypeInfo_var->static_fields)->get_plyr_score_left_2();
		((GameManager_t2369589051_StaticFields*)GameManager_t2369589051_il2cpp_TypeInfo_var->static_fields)->set_plyr_score_left_2(((int32_t)((int32_t)L_2+(int32_t)1)));
		goto IL_0042;
	}

IL_0021:
	{
		String_t* L_3 = ___wall_name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_3, _stringLiteral1459311964, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t2369589051_il2cpp_TypeInfo_var);
		int32_t L_5 = ((GameManager_t2369589051_StaticFields*)GameManager_t2369589051_il2cpp_TypeInfo_var->static_fields)->get_plyr_score_right_3();
		((GameManager_t2369589051_StaticFields*)GameManager_t2369589051_il2cpp_TypeInfo_var->static_fields)->set_plyr_score_right_3(((int32_t)((int32_t)L_5+(int32_t)1)));
		goto IL_0042;
	}

IL_0042:
	{
		return;
	}
}
// System.Void GameManager::Update()
extern Il2CppClass* Input_t1593691127_il2cpp_TypeInfo_var;
extern const uint32_t GameManager_Update_m4206642802_MetadataUsageId;
extern "C"  void GameManager_Update_m4206642802 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Update_m4206642802_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = __this->get_key_pause_8();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		VirtActionInvoker0::Invoke(7 /* System.Void GameManager::game_pause() */, __this);
	}

IL_0016:
	{
		int32_t L_2 = __this->get_key_reset_9();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		VirtActionInvoker0::Invoke(8 /* System.Void GameManager::game_reset() */, __this);
	}

IL_002c:
	{
		return;
	}
}
// System.Void GameManager::OnGUI()
extern Il2CppClass* GUI_t1522956648_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* GameManager_t2369589051_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2847414787_il2cpp_TypeInfo_var;
extern Il2CppClass* RuntimeServices_t2273795202_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2394495;
extern Il2CppCodeGenString* _stringLiteral78851375;
extern Il2CppCodeGenString* _stringLiteral2410041;
extern Il2CppCodeGenString* _stringLiteral2538428498;
extern Il2CppCodeGenString* _stringLiteral2528879;
extern const uint32_t GameManager_OnGUI_m545222901_MetadataUsageId;
extern "C"  void GameManager_OnGUI_m545222901 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager_OnGUI_m545222901_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B13_0 = 0;
	{
		GUISkin_t2614611333 * L_0 = __this->get_skin_gui_4();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1522956648_il2cpp_TypeInfo_var);
		GUI_set_skin_m1213959601(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_width_m3080333084(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t1525428817  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Rect__ctor_m3291325233(&L_2, (((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)L_1/(int32_t)2))-(int32_t)((int32_t)150)))))), (((float)((float)((int32_t)20)))), (((float)((float)0))), (((float)((float)((int32_t)10)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t2369589051_il2cpp_TypeInfo_var);
		int32_t L_4 = ((GameManager_t2369589051_StaticFields*)GameManager_t2369589051_il2cpp_TypeInfo_var->static_fields)->get_plyr_score_left_2();
		int32_t L_5 = L_4;
		Il2CppObject * L_6 = Box(Int32_t2847414787_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2273795202_il2cpp_TypeInfo_var);
		String_t* L_7 = RuntimeServices_op_Addition_m3613207904(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
		GUI_Label_m1483857617(NULL /*static, unused*/, L_2, L_7, /*hidden argument*/NULL);
		int32_t L_8 = Screen_get_width_m3080333084(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t1525428817  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Rect__ctor_m3291325233(&L_9, (((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)L_8/(int32_t)2))+(int32_t)((int32_t)150)))))), (((float)((float)((int32_t)20)))), (((float)((float)0))), (((float)((float)((int32_t)10)))), /*hidden argument*/NULL);
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		int32_t L_11 = ((GameManager_t2369589051_StaticFields*)GameManager_t2369589051_il2cpp_TypeInfo_var->static_fields)->get_plyr_score_right_3();
		int32_t L_12 = L_11;
		Il2CppObject * L_13 = Box(Int32_t2847414787_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = RuntimeServices_op_Addition_m3613207904(NULL /*static, unused*/, L_10, L_13, /*hidden argument*/NULL);
		GUI_Label_m1483857617(NULL /*static, unused*/, L_9, L_14, /*hidden argument*/NULL);
		int32_t L_15 = Screen_get_width_m3080333084(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t1525428817  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Rect__ctor_m3291325233(&L_16, (((float)((float)((int32_t)((int32_t)L_15-(int32_t)((int32_t)80)))))), (((float)((float)0))), (((float)((float)((int32_t)80)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		bool L_17 = GUI_Button_m885093907(NULL /*static, unused*/, L_16, _stringLiteral2394495, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00b6;
		}
	}
	{
		bool L_18 = __this->get_gui_menu_6();
		if (L_18)
		{
			goto IL_00af;
		}
	}
	{
		__this->set_gui_menu_6((bool)1);
		goto IL_00b6;
	}

IL_00af:
	{
		__this->set_gui_menu_6((bool)0);
	}

IL_00b6:
	{
		bool L_19 = __this->get_gui_menu_6();
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_01c5;
		}
	}
	{
		int32_t L_20 = Screen_get_width_m3080333084(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t1525428817  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Rect__ctor_m3291325233(&L_21, (((float)((float)((int32_t)((int32_t)L_20-(int32_t)((int32_t)80)))))), (((float)((float)((int32_t)20)))), (((float)((float)((int32_t)80)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		String_t* L_22 = __this->get_str_pause_10();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1522956648_il2cpp_TypeInfo_var);
		bool L_23 = GUI_Button_m885093907(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00ef;
		}
	}
	{
		VirtActionInvoker0::Invoke(7 /* System.Void GameManager::game_pause() */, __this);
	}

IL_00ef:
	{
		int32_t L_24 = Screen_get_width_m3080333084(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t1525428817  L_25;
		memset(&L_25, 0, sizeof(L_25));
		Rect__ctor_m3291325233(&L_25, (((float)((float)((int32_t)((int32_t)L_24-(int32_t)((int32_t)80)))))), (((float)((float)((int32_t)40)))), (((float)((float)((int32_t)80)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1522956648_il2cpp_TypeInfo_var);
		bool L_26 = GUI_Button_m885093907(NULL /*static, unused*/, L_25, _stringLiteral78851375, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_011b;
		}
	}
	{
		VirtActionInvoker0::Invoke(8 /* System.Void GameManager::game_reset() */, __this);
	}

IL_011b:
	{
		int32_t L_27 = Screen_get_width_m3080333084(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t1525428817  L_28;
		memset(&L_28, 0, sizeof(L_28));
		Rect__ctor_m3291325233(&L_28, (((float)((float)((int32_t)((int32_t)L_27-(int32_t)((int32_t)80)))))), (((float)((float)((int32_t)60)))), (((float)((float)((int32_t)80)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		String_t* L_29 = __this->get_str_mute_11();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1522956648_il2cpp_TypeInfo_var);
		bool L_30 = GUI_Button_m885093907(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0199;
		}
	}
	{
		bool L_31 = __this->get_game_mute_7();
		__this->set_game_mute_7((bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0));
		bool L_32 = __this->get_game_mute_7();
		if (!L_32)
		{
			goto IL_0162;
		}
	}
	{
		G_B13_0 = 0;
		goto IL_0163;
	}

IL_0162:
	{
		G_B13_0 = 1;
	}

IL_0163:
	{
		AudioListener_set_volume_m1072709503(NULL /*static, unused*/, (((float)((float)G_B13_0))), /*hidden argument*/NULL);
		String_t* L_33 = __this->get_str_mute_11();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_34 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_33, _stringLiteral2410041, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_018e;
		}
	}
	{
		__this->set_str_mute_11(_stringLiteral2538428498);
		goto IL_0199;
	}

IL_018e:
	{
		__this->set_str_mute_11(_stringLiteral2410041);
	}

IL_0199:
	{
		int32_t L_35 = Screen_get_width_m3080333084(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t1525428817  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Rect__ctor_m3291325233(&L_36, (((float)((float)((int32_t)((int32_t)L_35-(int32_t)((int32_t)80)))))), (((float)((float)((int32_t)80)))), (((float)((float)((int32_t)80)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1522956648_il2cpp_TypeInfo_var);
		bool L_37 = GUI_Button_m885093907(NULL /*static, unused*/, L_36, _stringLiteral2528879, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_01c5;
		}
	}
	{
		VirtActionInvoker0::Invoke(9 /* System.Void GameManager::game_quit() */, __this);
	}

IL_01c5:
	{
		return;
	}
}
// System.Void GameManager::game_pause()
extern Il2CppCodeGenString* _stringLiteral2490196;
extern Il2CppCodeGenString* _stringLiteral76887510;
extern const uint32_t GameManager_game_pause_m4232213746_MetadataUsageId;
extern "C"  void GameManager_game_pause_m4232213746 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager_game_pause_m4232213746_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = Time_get_timeScale_m1970669766(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(((float)((float)1)))))))
		{
			goto IL_0023;
		}
	}
	{
		Time_set_timeScale_m1848691981(NULL /*static, unused*/, (((float)((float)0))), /*hidden argument*/NULL);
		__this->set_str_pause_10(_stringLiteral2490196);
		goto IL_0035;
	}

IL_0023:
	{
		Time_set_timeScale_m1848691981(NULL /*static, unused*/, (((float)((float)1))), /*hidden argument*/NULL);
		__this->set_str_pause_10(_stringLiteral76887510);
	}

IL_0035:
	{
		return;
	}
}
// System.Void GameManager::game_reset()
extern Il2CppClass* GameManager_t2369589051_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2126367503;
extern Il2CppCodeGenString* _stringLiteral3179768485;
extern const uint32_t GameManager_game_reset_m1824520715_MetadataUsageId;
extern "C"  void GameManager_game_reset_m1824520715 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager_game_reset_m1824520715_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t2369589051_il2cpp_TypeInfo_var);
		((GameManager_t2369589051_StaticFields*)GameManager_t2369589051_il2cpp_TypeInfo_var->static_fields)->set_plyr_score_left_2(0);
		((GameManager_t2369589051_StaticFields*)GameManager_t2369589051_il2cpp_TypeInfo_var->static_fields)->set_plyr_score_right_3(0);
		Transform_t284553113 * L_0 = __this->get_trns_ball_5();
		GameObject_t4012695102 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		GameObject_SendMessage_m2244324713(L_1, _stringLiteral2126367503, /*hidden argument*/NULL);
		Component_BroadcastMessage_m2857110644(__this, _stringLiteral3179768485, /*hidden argument*/NULL);
		Time_set_timeScale_m1848691981(NULL /*static, unused*/, (((float)((float)1))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::game_quit()
extern "C"  void GameManager_game_quit_m460358837 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	{
		Application_Quit_m1187862186(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::Main()
extern "C"  void GameManager_Main_m1889022306 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameSetup::.ctor()
extern "C"  void GameSetup__ctor_m3588450411 (GameSetup_t2993603979 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameSetup::Start()
extern "C"  void GameSetup_Start_m2535588203 (GameSetup_t2993603979 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(5 /* System.Void GameSetup::plyr_reset() */, __this);
		return;
	}
}
// System.Void GameSetup::plyr_reset()
extern "C"  void GameSetup_plyr_reset_m1248154302 (GameSetup_t2993603979 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Vector3_t3525329789  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector3_t3525329789  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_t3525329789  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_t3525329789  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		int32_t L_0 = 0;
		V_0 = L_0;
		Transform_t284553113 * L_1 = __this->get_plyr_left_7();
		Vector3_t3525329789  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		Vector3_t3525329789  L_3 = L_2;
		V_1 = L_3;
		int32_t L_4 = V_0;
		float L_5 = (((float)((float)L_4)));
		V_4 = L_5;
		(&V_1)->set_y_1(L_5);
		float L_6 = V_4;
		Transform_t284553113 * L_7 = __this->get_plyr_left_7();
		Vector3_t3525329789  L_8 = V_1;
		Vector3_t3525329789  L_9 = L_8;
		V_5 = L_9;
		Transform_set_position_m3111394108(L_7, L_9, /*hidden argument*/NULL);
		Vector3_t3525329789  L_10 = V_5;
		int32_t L_11 = 0;
		V_2 = L_11;
		Transform_t284553113 * L_12 = __this->get_plyr_right_8();
		Vector3_t3525329789  L_13 = Transform_get_position_m2211398607(L_12, /*hidden argument*/NULL);
		Vector3_t3525329789  L_14 = L_13;
		V_3 = L_14;
		int32_t L_15 = V_2;
		float L_16 = (((float)((float)L_15)));
		V_6 = L_16;
		(&V_3)->set_y_1(L_16);
		float L_17 = V_6;
		Transform_t284553113 * L_18 = __this->get_plyr_right_8();
		Vector3_t3525329789  L_19 = V_3;
		Vector3_t3525329789  L_20 = L_19;
		V_7 = L_20;
		Transform_set_position_m3111394108(L_18, L_20, /*hidden argument*/NULL);
		Vector3_t3525329789  L_21 = V_7;
		return;
	}
}
// System.Void GameSetup::Update()
extern "C"  void GameSetup_Update_m1299675138 (GameSetup_t2993603979 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t3525329789  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t3525329789  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3525329789  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3525329789  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3525329789  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3525329789  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3525329789  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3525329789  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t3525329789  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector3_t3525329789  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Vector3_t3525329789  V_12;
	memset(&V_12, 0, sizeof(V_12));
	float V_13 = 0.0f;
	Vector3_t3525329789  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Vector3_t3525329789  V_15;
	memset(&V_15, 0, sizeof(V_15));
	float V_16 = 0.0f;
	Vector3_t3525329789  V_17;
	memset(&V_17, 0, sizeof(V_17));
	{
		BoxCollider2D_t262790558 * L_0 = __this->get_wall_top_3();
		Camera_t3533968274 * L_1 = __this->get_cam_main_2();
		int32_t L_2 = Screen_get_width_m3080333084(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m2926210380(&L_3, ((float)((float)(((float)((float)L_2)))*(float)(2.0f))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Vector3_t3525329789  L_4 = Camera_ScreenToWorldPoint_m1572306334(L_1, L_3, /*hidden argument*/NULL);
		V_4 = L_4;
		float L_5 = (&V_4)->get_x_0();
		Vector2_t3525329788  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector2__ctor_m1517109030(&L_6, L_5, (1.0f), /*hidden argument*/NULL);
		BoxCollider2D_set_size_m1211670560(L_0, L_6, /*hidden argument*/NULL);
		BoxCollider2D_t262790558 * L_7 = __this->get_wall_top_3();
		Camera_t3533968274 * L_8 = __this->get_cam_main_2();
		Vector3_t3525329789  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m2926210380(&L_9, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Vector3_t3525329789  L_10 = Camera_ScreenToWorldPoint_m1572306334(L_8, L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		float L_11 = (&V_5)->get_y_1();
		Vector2_t3525329788  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector2__ctor_m1517109030(&L_12, (((float)((float)0))), ((float)((float)L_11-(float)(0.5f))), /*hidden argument*/NULL);
		Collider2D_set_offset_m2776803501(L_7, L_12, /*hidden argument*/NULL);
		BoxCollider2D_t262790558 * L_13 = __this->get_wall_bottom_4();
		Camera_t3533968274 * L_14 = __this->get_cam_main_2();
		int32_t L_15 = Screen_get_width_m3080333084(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector3__ctor_m2926210380(&L_16, ((float)((float)(((float)((float)L_15)))*(float)(2.0f))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Vector3_t3525329789  L_17 = Camera_ScreenToWorldPoint_m1572306334(L_14, L_16, /*hidden argument*/NULL);
		V_6 = L_17;
		float L_18 = (&V_6)->get_x_0();
		Vector2_t3525329788  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector2__ctor_m1517109030(&L_19, L_18, (1.0f), /*hidden argument*/NULL);
		BoxCollider2D_set_size_m1211670560(L_13, L_19, /*hidden argument*/NULL);
		BoxCollider2D_t262790558 * L_20 = __this->get_wall_bottom_4();
		Camera_t3533968274 * L_21 = __this->get_cam_main_2();
		int32_t L_22 = Screen_get_height_m1504859443(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector3__ctor_m2926210380(&L_23, (((float)((float)0))), (((float)((float)L_22))), (((float)((float)0))), /*hidden argument*/NULL);
		Vector3_t3525329789  L_24 = Camera_ScreenToWorldPoint_m1572306334(L_21, L_23, /*hidden argument*/NULL);
		V_7 = L_24;
		float L_25 = (&V_7)->get_y_1();
		Vector2_t3525329788  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Vector2__ctor_m1517109030(&L_26, (((float)((float)0))), ((float)((float)L_25+(float)(0.5f))), /*hidden argument*/NULL);
		Collider2D_set_offset_m2776803501(L_20, L_26, /*hidden argument*/NULL);
		BoxCollider2D_t262790558 * L_27 = __this->get_wall_left_5();
		Camera_t3533968274 * L_28 = __this->get_cam_main_2();
		int32_t L_29 = Screen_get_height_m1504859443(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_30;
		memset(&L_30, 0, sizeof(L_30));
		Vector3__ctor_m2926210380(&L_30, (((float)((float)0))), ((float)((float)(((float)((float)L_29)))*(float)(2.0f))), (((float)((float)0))), /*hidden argument*/NULL);
		Vector3_t3525329789  L_31 = Camera_ScreenToWorldPoint_m1572306334(L_28, L_30, /*hidden argument*/NULL);
		V_8 = L_31;
		float L_32 = (&V_8)->get_y_1();
		Vector2_t3525329788  L_33;
		memset(&L_33, 0, sizeof(L_33));
		Vector2__ctor_m1517109030(&L_33, (1.0f), L_32, /*hidden argument*/NULL);
		BoxCollider2D_set_size_m1211670560(L_27, L_33, /*hidden argument*/NULL);
		BoxCollider2D_t262790558 * L_34 = __this->get_wall_left_5();
		Camera_t3533968274 * L_35 = __this->get_cam_main_2();
		Vector3_t3525329789  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Vector3__ctor_m2926210380(&L_36, (((float)((float)0))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Vector3_t3525329789  L_37 = Camera_ScreenToWorldPoint_m1572306334(L_35, L_36, /*hidden argument*/NULL);
		V_9 = L_37;
		float L_38 = (&V_9)->get_x_0();
		Vector2_t3525329788  L_39;
		memset(&L_39, 0, sizeof(L_39));
		Vector2__ctor_m1517109030(&L_39, ((float)((float)L_38-(float)(0.5f))), (((float)((float)0))), /*hidden argument*/NULL);
		Collider2D_set_offset_m2776803501(L_34, L_39, /*hidden argument*/NULL);
		BoxCollider2D_t262790558 * L_40 = __this->get_wall_right_6();
		Camera_t3533968274 * L_41 = __this->get_cam_main_2();
		int32_t L_42 = Screen_get_height_m1504859443(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_43;
		memset(&L_43, 0, sizeof(L_43));
		Vector3__ctor_m2926210380(&L_43, (((float)((float)0))), ((float)((float)(((float)((float)L_42)))*(float)(2.0f))), (((float)((float)0))), /*hidden argument*/NULL);
		Vector3_t3525329789  L_44 = Camera_ScreenToWorldPoint_m1572306334(L_41, L_43, /*hidden argument*/NULL);
		V_10 = L_44;
		float L_45 = (&V_10)->get_y_1();
		Vector2_t3525329788  L_46;
		memset(&L_46, 0, sizeof(L_46));
		Vector2__ctor_m1517109030(&L_46, (1.0f), L_45, /*hidden argument*/NULL);
		BoxCollider2D_set_size_m1211670560(L_40, L_46, /*hidden argument*/NULL);
		BoxCollider2D_t262790558 * L_47 = __this->get_wall_right_6();
		Camera_t3533968274 * L_48 = __this->get_cam_main_2();
		int32_t L_49 = Screen_get_width_m3080333084(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_50;
		memset(&L_50, 0, sizeof(L_50));
		Vector3__ctor_m2926210380(&L_50, (((float)((float)L_49))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Vector3_t3525329789  L_51 = Camera_ScreenToWorldPoint_m1572306334(L_48, L_50, /*hidden argument*/NULL);
		V_11 = L_51;
		float L_52 = (&V_11)->get_x_0();
		Vector2_t3525329788  L_53;
		memset(&L_53, 0, sizeof(L_53));
		Vector2__ctor_m1517109030(&L_53, ((float)((float)L_52+(float)(0.5f))), (((float)((float)0))), /*hidden argument*/NULL);
		Collider2D_set_offset_m2776803501(L_47, L_53, /*hidden argument*/NULL);
		Camera_t3533968274 * L_54 = __this->get_cam_main_2();
		Vector3_t3525329789  L_55;
		memset(&L_55, 0, sizeof(L_55));
		Vector3__ctor_m2926210380(&L_55, (75.0f), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Vector3_t3525329789  L_56 = Camera_ScreenToWorldPoint_m1572306334(L_54, L_55, /*hidden argument*/NULL);
		V_12 = L_56;
		float L_57 = (&V_12)->get_x_0();
		float L_58 = L_57;
		V_0 = L_58;
		Transform_t284553113 * L_59 = __this->get_plyr_left_7();
		Vector3_t3525329789  L_60 = Transform_get_position_m2211398607(L_59, /*hidden argument*/NULL);
		Vector3_t3525329789  L_61 = L_60;
		V_1 = L_61;
		float L_62 = V_0;
		float L_63 = L_62;
		V_13 = L_63;
		(&V_1)->set_x_0(L_63);
		float L_64 = V_13;
		Transform_t284553113 * L_65 = __this->get_plyr_left_7();
		Vector3_t3525329789  L_66 = V_1;
		Vector3_t3525329789  L_67 = L_66;
		V_14 = L_67;
		Transform_set_position_m3111394108(L_65, L_67, /*hidden argument*/NULL);
		Vector3_t3525329789  L_68 = V_14;
		Camera_t3533968274 * L_69 = __this->get_cam_main_2();
		int32_t L_70 = Screen_get_width_m3080333084(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_71;
		memset(&L_71, 0, sizeof(L_71));
		Vector3__ctor_m2926210380(&L_71, ((float)((float)(((float)((float)L_70)))-(float)(75.0f))), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		Vector3_t3525329789  L_72 = Camera_ScreenToWorldPoint_m1572306334(L_69, L_71, /*hidden argument*/NULL);
		V_15 = L_72;
		float L_73 = (&V_15)->get_x_0();
		float L_74 = L_73;
		V_2 = L_74;
		Transform_t284553113 * L_75 = __this->get_plyr_right_8();
		Vector3_t3525329789  L_76 = Transform_get_position_m2211398607(L_75, /*hidden argument*/NULL);
		Vector3_t3525329789  L_77 = L_76;
		V_3 = L_77;
		float L_78 = V_2;
		float L_79 = L_78;
		V_16 = L_79;
		(&V_3)->set_x_0(L_79);
		float L_80 = V_16;
		Transform_t284553113 * L_81 = __this->get_plyr_right_8();
		Vector3_t3525329789  L_82 = V_3;
		Vector3_t3525329789  L_83 = L_82;
		V_17 = L_83;
		Transform_set_position_m3111394108(L_81, L_83, /*hidden argument*/NULL);
		Vector3_t3525329789  L_84 = V_17;
		return;
	}
}
// System.Void GameSetup::Main()
extern "C"  void GameSetup_Main_m3633481458 (GameSetup_t2993603979 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PlayerControls::.ctor()
extern "C"  void PlayerControls__ctor_m1201013849 (PlayerControls_t3363872983 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		__this->set_speed_4((((float)((float)((int32_t)10)))));
		return;
	}
}
// System.Void PlayerControls::Update()
extern Il2CppClass* Input_t1593691127_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var;
extern const uint32_t PlayerControls_Update_m303585748_MetadataUsageId;
extern "C"  void PlayerControls_Update_m303585748 (PlayerControls_t3363872983 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerControls_Update_m303585748_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t3525329788  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector2_t3525329788  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	Vector2_t3525329788  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector2_t3525329788  V_7;
	memset(&V_7, 0, sizeof(V_7));
	float V_8 = 0.0f;
	Vector2_t3525329788  V_9;
	memset(&V_9, 0, sizeof(V_9));
	float V_10 = 0.0f;
	Vector2_t3525329788  V_11;
	memset(&V_11, 0, sizeof(V_11));
	{
		int32_t L_0 = __this->get_key_up_2();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKey_m1349175653(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		float L_2 = __this->get_speed_4();
		float L_3 = L_2;
		V_0 = L_3;
		Rigidbody2D_t3632243084 * L_4 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_5 = Rigidbody2D_get_velocity_m416159605(L_4, /*hidden argument*/NULL);
		Vector2_t3525329788  L_6 = L_5;
		V_1 = L_6;
		float L_7 = V_0;
		float L_8 = L_7;
		V_6 = L_8;
		(&V_1)->set_y_1(L_8);
		float L_9 = V_6;
		Rigidbody2D_t3632243084 * L_10 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_11 = V_1;
		Vector2_t3525329788  L_12 = L_11;
		V_7 = L_12;
		Rigidbody2D_set_velocity_m100625302(L_10, L_12, /*hidden argument*/NULL);
		Vector2_t3525329788  L_13 = V_7;
		goto IL_00d2;
	}

IL_004c:
	{
		int32_t L_14 = __this->get_key_down_3();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_15 = Input_GetKey_m1349175653(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_009b;
		}
	}
	{
		float L_16 = __this->get_speed_4();
		float L_17 = ((float)((float)L_16*(float)(((float)((float)(-1))))));
		V_2 = L_17;
		Rigidbody2D_t3632243084 * L_18 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_19 = Rigidbody2D_get_velocity_m416159605(L_18, /*hidden argument*/NULL);
		Vector2_t3525329788  L_20 = L_19;
		V_3 = L_20;
		float L_21 = V_2;
		float L_22 = L_21;
		V_8 = L_22;
		(&V_3)->set_y_1(L_22);
		float L_23 = V_8;
		Rigidbody2D_t3632243084 * L_24 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_25 = V_3;
		Vector2_t3525329788  L_26 = L_25;
		V_9 = L_26;
		Rigidbody2D_set_velocity_m100625302(L_24, L_26, /*hidden argument*/NULL);
		Vector2_t3525329788  L_27 = V_9;
		goto IL_00d2;
	}

IL_009b:
	{
		int32_t L_28 = 0;
		V_4 = L_28;
		Rigidbody2D_t3632243084 * L_29 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_30 = Rigidbody2D_get_velocity_m416159605(L_29, /*hidden argument*/NULL);
		Vector2_t3525329788  L_31 = L_30;
		V_5 = L_31;
		int32_t L_32 = V_4;
		float L_33 = (((float)((float)L_32)));
		V_10 = L_33;
		(&V_5)->set_y_1(L_33);
		float L_34 = V_10;
		Rigidbody2D_t3632243084 * L_35 = Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m1700119068_MethodInfo_var);
		Vector2_t3525329788  L_36 = V_5;
		Vector2_t3525329788  L_37 = L_36;
		V_11 = L_37;
		Rigidbody2D_set_velocity_m100625302(L_35, L_37, /*hidden argument*/NULL);
		Vector2_t3525329788  L_38 = V_11;
	}

IL_00d2:
	{
		return;
	}
}
// System.Void PlayerControls::Main()
extern "C"  void PlayerControls_Main_m4249204036 (PlayerControls_t3363872983 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SideWalls::.ctor()
extern "C"  void SideWalls__ctor_m3566735652 (SideWalls_t147568818 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SideWalls::OnTriggerEnter2D(UnityEngine.Collider2D)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* GameManager_t2369589051_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t3628549054_m3320421034_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2062879;
extern Il2CppCodeGenString* _stringLiteral2126367503;
extern const uint32_t SideWalls_OnTriggerEnter2D_m1357562580_MetadataUsageId;
extern "C"  void SideWalls_OnTriggerEnter2D_m1357562580 (SideWalls_t147568818 * __this, Collider2D_t1890038195 * ___inf_hit0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SideWalls_OnTriggerEnter2D_m1357562580_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	{
		Collider2D_t1890038195 * L_0 = ___inf_hit0;
		String_t* L_1 = Object_get_name_m3709440845(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_1, _stringLiteral2062879, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		Transform_t284553113 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		String_t* L_4 = Object_get_name_m3709440845(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t2369589051_il2cpp_TypeInfo_var);
		GameManager_fun_score_m3319428183(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		AudioSource_t3628549054 * L_6 = Component_GetComponent_TisAudioSource_t3628549054_m3320421034(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3628549054_m3320421034_MethodInfo_var);
		AudioSource_Play_m1360558992(L_6, /*hidden argument*/NULL);
		Collider2D_t1890038195 * L_7 = ___inf_hit0;
		GameObject_t4012695102 * L_8 = Component_get_gameObject_m1170635899(L_7, /*hidden argument*/NULL);
		GameObject_SendMessage_m2244324713(L_8, _stringLiteral2126367503, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void SideWalls::Main()
extern "C"  void SideWalls_Main_m2662949657 (SideWalls_t147568818 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
