#ifndef  __X_WRAPPER_COMMON_BIND_TOOL_MAKE_FUNCTION_H__
#define  __X_WRAPPER_COMMON_BIND_TOOL_MAKE_FUNCTION_H__

#include "_function.h"

namespace bind_private
{
    template<class T, class CT >
    struct _function_type
    {};

    //#0
    template<class R, class CT >
    struct _function_type<_X_BIND_S_FUNCTION_RT0, CT>
    {
        typedef  X_NAME::n_bind::xfunction0<R, CT>  function_type;
    };

    //#1
    template<class R, _X_BIND_TP_P1, class CT>
    struct _function_type<_X_BIND_S_FUNCTION_RT1, CT>
    {
        typedef  X_NAME::n_bind::xfunction1<R, _X_BIND_T_P1, CT>  function_type;
    };

    //#2
    template<class R, _X_BIND_TP_P2, class CT>
    struct _function_type<_X_BIND_S_FUNCTION_RT2, CT>
    {
        typedef  X_NAME::n_bind::xfunction2<R, _X_BIND_T_P2, CT>  function_type;
    };

    //#3
    template<class R, _X_BIND_TP_P3, class CT>
    struct _function_type<_X_BIND_S_FUNCTION_RT3, CT>
    {
        typedef  X_NAME::n_bind::xfunction3<R, _X_BIND_T_P3, CT>  function_type;
    };

    //#4
    template<class R, _X_BIND_TP_P4, class CT>
    struct _function_type<_X_BIND_S_FUNCTION_RT4, CT>
    {
        typedef  X_NAME::n_bind::xfunction4<R, _X_BIND_T_P4, CT>  function_type;
    };

    //#5
    template<class R, _X_BIND_TP_P5, class CT>
    struct _function_type<_X_BIND_S_FUNCTION_RT5, CT>
    {
        typedef  X_NAME::n_bind::xfunction5<R, _X_BIND_T_P5, CT>  function_type;
    };

    //#6
    template<class R, _X_BIND_TP_P6, class CT>
    struct _function_type<_X_BIND_S_FUNCTION_RT6, CT>
    {
        typedef  X_NAME::n_bind::xfunction6<R, _X_BIND_T_P6, CT>  function_type;
    };

    //#7
    template<class R, _X_BIND_TP_P7, class CT>
    struct _function_type<_X_BIND_S_FUNCTION_RT7, CT>
    {
        typedef  X_NAME::n_bind::xfunction7<R, _X_BIND_T_P7, CT>  function_type;
    };

    //#8
    template<class R, _X_BIND_TP_P8, class CT>
    struct _function_type<_X_BIND_S_FUNCTION_RT8, CT>
    {
        typedef  X_NAME::n_bind::xfunction8<R, _X_BIND_T_P8, CT>  function_type;
    };

    //#9
    template<class R, _X_BIND_TP_P9, class CT>
    struct _function_type<_X_BIND_S_FUNCTION_RT9, CT>
    {
        typedef  X_NAME::n_bind::xfunction9<R, _X_BIND_T_P9, CT>  function_type;
    };


}

X_NS_BEGIN(n_bind);

#define X_BIND_HEAP    bind_private::_f_heap_param
#define X_BIND_STACK   bind_private::_f_stack_param
#define X_BIND_LIST    bind_private::_p_list_a


template<class FunctionType, class CT = X_BIND_HEAP>
struct s_function_type
{
    typedef typename bind_private::_function_type<FunctionType, CT>::function_type function_type;
};

X_NS_END(n_bind)

#endif //__X_WRAPPER_COMMON_BIND_TOOL_MAKE_FUNCTION_H__
