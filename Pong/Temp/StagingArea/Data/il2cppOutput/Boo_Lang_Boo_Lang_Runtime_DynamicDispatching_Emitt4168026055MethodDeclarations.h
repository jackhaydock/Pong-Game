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

// Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter
struct DispatcherEmitter_t4168026055;
// System.Type
struct Type_t;
// System.String
struct String_t;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t1056575496;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::.ctor(System.Type,System.String)
extern "C"  void DispatcherEmitter__ctor_m280365255 (DispatcherEmitter_t4168026055 * __this, Type_t * ___owner0, String_t* ___dynamicMethodName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::Emit()
extern "C"  Dispatcher_t1056575496 * DispatcherEmitter_Emit_m1321466940 (DispatcherEmitter_t4168026055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::CreateMethodDispatcher()
extern "C"  Dispatcher_t1056575496 * DispatcherEmitter_CreateMethodDispatcher_m428726701 (DispatcherEmitter_t4168026055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::EmitCastOrUnbox(System.Type)
extern "C"  void DispatcherEmitter_EmitCastOrUnbox_m2264703600 (DispatcherEmitter_t4168026055 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::BoxIfNeeded(System.Type)
extern "C"  void DispatcherEmitter_BoxIfNeeded_m3898773808 (DispatcherEmitter_t4168026055 * __this, Type_t * ___returnType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.Emitters.DispatcherEmitter::EmitReturn(System.Type)
extern "C"  void DispatcherEmitter_EmitReturn_m482722528 (DispatcherEmitter_t4168026055 * __this, Type_t * ___typeOnStack0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
