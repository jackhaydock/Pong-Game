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

// UnityEngine.Networking.DownloadHandlerAssetBundle
struct DownloadHandlerAssetBundle_t1172283193;
struct DownloadHandlerAssetBundle_t1172283193_marshaled_pinvoke;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Hash1283885020822.h"

// System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::.ctor(System.String,System.UInt32)
extern "C"  void DownloadHandlerAssetBundle__ctor_m1343790375 (DownloadHandlerAssetBundle_t1172283193 * __this, String_t* ___url0, uint32_t ___crc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::.ctor(System.String,System.UInt32,System.UInt32)
extern "C"  void DownloadHandlerAssetBundle__ctor_m3076523803 (DownloadHandlerAssetBundle_t1172283193 * __this, String_t* ___url0, uint32_t ___version1, uint32_t ___crc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::.ctor(System.String,UnityEngine.Hash128,System.UInt32)
extern "C"  void DownloadHandlerAssetBundle__ctor_m3772065217 (DownloadHandlerAssetBundle_t1172283193 * __this, String_t* ___url0, Hash128_t3885020822  ___hash1, uint32_t ___crc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct DownloadHandlerAssetBundle_t1172283193;
struct DownloadHandlerAssetBundle_t1172283193_marshaled_pinvoke;

extern "C" void DownloadHandlerAssetBundle_t1172283193_marshal_pinvoke(const DownloadHandlerAssetBundle_t1172283193& unmarshaled, DownloadHandlerAssetBundle_t1172283193_marshaled_pinvoke& marshaled);
extern "C" void DownloadHandlerAssetBundle_t1172283193_marshal_pinvoke_back(const DownloadHandlerAssetBundle_t1172283193_marshaled_pinvoke& marshaled, DownloadHandlerAssetBundle_t1172283193& unmarshaled);
extern "C" void DownloadHandlerAssetBundle_t1172283193_marshal_pinvoke_cleanup(DownloadHandlerAssetBundle_t1172283193_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct DownloadHandlerAssetBundle_t1172283193;
struct DownloadHandlerAssetBundle_t1172283193_marshaled_com;

extern "C" void DownloadHandlerAssetBundle_t1172283193_marshal_com(const DownloadHandlerAssetBundle_t1172283193& unmarshaled, DownloadHandlerAssetBundle_t1172283193_marshaled_com& marshaled);
extern "C" void DownloadHandlerAssetBundle_t1172283193_marshal_com_back(const DownloadHandlerAssetBundle_t1172283193_marshaled_com& marshaled, DownloadHandlerAssetBundle_t1172283193& unmarshaled);
extern "C" void DownloadHandlerAssetBundle_t1172283193_marshal_com_cleanup(DownloadHandlerAssetBundle_t1172283193_marshaled_com& marshaled);
