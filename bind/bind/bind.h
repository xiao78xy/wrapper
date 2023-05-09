#ifndef __X_WRAPPER_BIND_H__
#define __X_WRAPPER_BIND_H__

/*!  bind
 *\file    bind.h
 *\author  xiaowei@myhexin.com
 *\date    2013/11/29   20:49
 *\brief
 *\note
 *\warning
 */

 //!include [c/c++]
 //!include [local]
 //! 
 //{{bind}}
#include "_bind_sf.h"
#include "_bind_mf.h"
#include "_bind_mfo.h"

#define X_BIND\
    N_BIND::x_bind

//{{delegate}}
#include "_delegate_sf.h"
#include "_delegate_mf.h"

#define X_DELEGATE\
    N_BIND::x_delegate

//{{function}}
#include "_function_type.h"

#define X_FUNCTION(f)\
    N_BIND::s_function_type< f >::function_type

#define X_FUNCTION_STACK(f)\
    N_BIND::s_function_type< f ,X_BIND_STACK >::function_type

#define X_FUNCTION_HEAP(f)\
    N_BIND::s_function_type< f ,X_BIND_HEAP >::function_type

//{{guard}}
#include "_guard_sf.h"
#include "_guard_mf.h"

#define X_GUARD\
    N_BIND::x_guard


#define X_GUARD_PROCESS(name,rollback_guard)\
    for (N_BIND::c_scope_guard  name  = rollback_guard, __loop_1 = N_BIND::_s_guard_process_loop_1(); __loop_1.is_need_exec() ; __loop_1.not_exec())


#define X_GUARD_PROCESS_EXEC\
    X_GUARD_PROCESS


#define X_GUARD_PROCESS_NOT_EXEC(name,rollback_guard)\
    for (N_BIND::c_scope_guard  name  = rollback_guard, __loop_1 = N_BIND::_s_guard_process_loop_1(name, false); __loop_1.is_need_exec() ; __loop_1.not_exec())


#define X_GUARD_RAII(_guard)\
    N_BIND::c_scope_guard  X_MACRO_LINK(__guard_raii_, __LINE__) = _guard; X_UNUSED(X_MACRO_LINK(__guard_raii_, __LINE__));


//{{param_count}}
#include "_s_param_count.h"
#include "_m_param_count.h"

#define X_PARAM_COUNT(f)\
    N_BIND::s_param_count< f >::value

#define X_PARAM_COUNT_F(f)\
    N_BIND::x_param_count(f)


#if 0
X_GUARD_PROCESS(_test, X_GUARD(&test_guard, X_VALUE_REF(pa)))
{
    X_VOID();
    _test.completed();
}
#endif

#endif //__X_WRAPPER_BIND_H__
