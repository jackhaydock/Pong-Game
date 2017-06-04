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

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t3642540642;
// System.Reflection.AssemblyName
struct AssemblyName_t3481926655;
// System.String
struct String_t;
// System.Security.PermissionSet
struct PermissionSet_t2781735032;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1058295580;
// System.Reflection.Module[]
struct ModuleU5BU5D_t153190015;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Reflection.Module
struct Module_t206139610;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_AssemblyName3481926655.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAcc4255369254.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilder3642540642.h"
#include "mscorlib_System_Security_PermissionSet2781735032.h"

// System.Void System.Reflection.Emit.AssemblyBuilder::.ctor(System.Reflection.AssemblyName,System.String,System.Reflection.Emit.AssemblyBuilderAccess,System.Boolean)
extern "C"  void AssemblyBuilder__ctor_m558768500 (AssemblyBuilder_t3642540642 * __this, AssemblyName_t3481926655 * ___n0, String_t* ___directory1, int32_t ___access2, bool ___corlib_internal3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::basic_init(System.Reflection.Emit.AssemblyBuilder)
extern "C"  void AssemblyBuilder_basic_init_m2666501043 (Il2CppObject * __this /* static, unused */, AssemblyBuilder_t3642540642 * ___ab0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C"  String_t* AssemblyBuilder_get_Location_m2002209681 (AssemblyBuilder_t3642540642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::AddPermissionRequests(System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet)
extern "C"  void AssemblyBuilder_AddPermissionRequests_m831171448 (AssemblyBuilder_t3642540642 * __this, PermissionSet_t2781735032 * ___required0, PermissionSet_t2781735032 * ___optional1, PermissionSet_t2781735032 * ___refused2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String)
extern "C"  ModuleBuilder_t1058295580 * AssemblyBuilder_DefineDynamicModule_m490868275 (AssemblyBuilder_t3642540642 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String,System.String,System.Boolean,System.Boolean)
extern "C"  ModuleBuilder_t1058295580 * AssemblyBuilder_DefineDynamicModule_m3735477071 (AssemblyBuilder_t3642540642 * __this, String_t* ___name0, String_t* ___fileName1, bool ___emitSymbolInfo2, bool ___transient3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C"  ModuleU5BU5D_t153190015* AssemblyBuilder_GetModulesInternal_m2718782039 (AssemblyBuilder_t3642540642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C"  TypeU5BU5D_t3431720054* AssemblyBuilder_GetTypes_m3461115874 (AssemblyBuilder_t3642540642 * __this, bool ___exportedOnly0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C"  bool AssemblyBuilder_get_IsCompilerContext_m332025933 (AssemblyBuilder_t3642540642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsSave()
extern "C"  bool AssemblyBuilder_get_IsSave_m1537194370 (AssemblyBuilder_t3642540642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsRun()
extern "C"  bool AssemblyBuilder_get_IsRun_m1296175624 (AssemblyBuilder_t3642540642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.AssemblyBuilder::get_AssemblyDir()
extern "C"  String_t* AssemblyBuilder_get_AssemblyDir_m1726853645 (AssemblyBuilder_t3642540642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.AssemblyBuilder::GetManifestModule()
extern "C"  Module_t206139610 * AssemblyBuilder_GetManifestModule_m3329157928 (AssemblyBuilder_t3642540642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C"  Exception_t1967233988 * AssemblyBuilder_not_supported_m186391929 (AssemblyBuilder_t3642540642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.AssemblyBuilder::check_name_and_filename(System.String,System.String,System.Boolean)
extern "C"  void AssemblyBuilder_check_name_and_filename_m153452157 (AssemblyBuilder_t3642540642 * __this, String_t* ___name0, String_t* ___fileName1, bool ___fileNeedsToExists2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C"  AssemblyName_t3481926655 * AssemblyBuilder_UnprotectedGetName_m3388533202 (AssemblyBuilder_t3642540642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
