#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t3818353675;
struct DownloadHandler_t3818353675_marshaled_pinvoke;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Hash1283885020822.h"
#include "UnityEngine_UnityEngine_Networking_DownloadHandler3818353675.h"
#include "UnityEngine_UnityEngine_AudioType3715057757.h"

// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
extern "C"  void DownloadHandler__ctor_m2530543973 (DownloadHandler_t3818353675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::InternalCreateBuffer()
extern "C"  void DownloadHandler_InternalCreateBuffer_m90273976 (DownloadHandler_t3818353675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::InternalCreateTexture(System.Boolean)
extern "C"  void DownloadHandler_InternalCreateTexture_m3794532220 (DownloadHandler_t3818353675 * __this, bool ___readable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::InternalCreateAssetBundle(System.String,System.UInt32)
extern "C"  void DownloadHandler_InternalCreateAssetBundle_m2968064314 (DownloadHandler_t3818353675 * __this, String_t* ___url0, uint32_t ___crc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::InternalCreateAssetBundle(System.String,UnityEngine.Hash128,System.UInt32)
extern "C"  void DownloadHandler_InternalCreateAssetBundle_m4164801108 (DownloadHandler_t3818353675 * __this, String_t* ___url0, Hash128_t3885020822  ___hash1, uint32_t ___crc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::INTERNAL_CALL_InternalCreateAssetBundle(UnityEngine.Networking.DownloadHandler,System.String,UnityEngine.Hash128&,System.UInt32)
extern "C"  void DownloadHandler_INTERNAL_CALL_InternalCreateAssetBundle_m900957164 (Il2CppObject * __this /* static, unused */, DownloadHandler_t3818353675 * ___self0, String_t* ___url1, Hash128_t3885020822 * ___hash2, uint32_t ___crc3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::InternalCreateAudioClip(System.String,UnityEngine.AudioType)
extern "C"  void DownloadHandler_InternalCreateAudioClip_m3659398341 (DownloadHandler_t3818353675 * __this, String_t* ___url0, int32_t ___audioType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::InternalDestroy()
extern "C"  void DownloadHandler_InternalDestroy_m2735807296 (DownloadHandler_t3818353675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::Finalize()
extern "C"  void DownloadHandler_Finalize_m2272026845 (DownloadHandler_t3818353675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
extern "C"  void DownloadHandler_Dispose_m799551586 (DownloadHandler_t3818353675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct DownloadHandler_t3818353675;
struct DownloadHandler_t3818353675_marshaled_pinvoke;

extern "C" void DownloadHandler_t3818353675_marshal_pinvoke(const DownloadHandler_t3818353675& unmarshaled, DownloadHandler_t3818353675_marshaled_pinvoke& marshaled);
extern "C" void DownloadHandler_t3818353675_marshal_pinvoke_back(const DownloadHandler_t3818353675_marshaled_pinvoke& marshaled, DownloadHandler_t3818353675& unmarshaled);
extern "C" void DownloadHandler_t3818353675_marshal_pinvoke_cleanup(DownloadHandler_t3818353675_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct DownloadHandler_t3818353675;
struct DownloadHandler_t3818353675_marshaled_com;

extern "C" void DownloadHandler_t3818353675_marshal_com(const DownloadHandler_t3818353675& unmarshaled, DownloadHandler_t3818353675_marshaled_com& marshaled);
extern "C" void DownloadHandler_t3818353675_marshal_com_back(const DownloadHandler_t3818353675_marshaled_com& marshaled, DownloadHandler_t3818353675& unmarshaled);
extern "C" void DownloadHandler_t3818353675_marshal_com_cleanup(DownloadHandler_t3818353675_marshaled_com& marshaled);
