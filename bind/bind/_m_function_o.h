#ifndef  __X_WRAPPER_COMMON_BIND_MEMBER_FUNCTION_OBJ_H__
#define  __X_WRAPPER_COMMON_BIND_MEMBER_FUNCTION_OBJ_H__


/*!
-*\file    _m_function.h
-*\author  XW
-*\date    2013/12/1   10:40
-*\brief
-*\note
-*\warning
-*/

#include "bind.hpp"
#include "_m_operator_o.h"


X_NS_BEGIN(n_bind);

//#0
template<class R>
struct _m_function_obj0
{
    typedef t_m_function_type       function_kind;

    typedef R    return_type;

    template< class F, class V_LIST, class P_LIST>
    struct _inner
        : public _m_operator_obj_return0<return_type,  F, V_LIST, P_LIST>
    {
        typedef _m_operator_obj_return0<return_type,  F, V_LIST, P_LIST>  base_type;

        typedef typename s_function_sig<return_type>::function_sig   function_sig;

        _inner( F f)
            :base_type(f)
        {}
    };
};

//#1
template<class R>
struct _m_function_obj1
{
    typedef t_m_function_type       function_kind;

    typedef R    return_type;

    template< class F, class V_LIST, class P_LIST>
    struct _inner
        : public _m_operator_obj_return1<return_type,  F, V_LIST, P_LIST>
    {
        typedef _m_operator_obj_return1<return_type,  F, V_LIST, P_LIST>  base_type;
        typedef typename base_type::P1              P1;

        typedef  _X_BIND_T(typename base_type::V1) V1;

        typedef typename s_function_sig<return_type, _X_BIND_T_P1>::function_sig   function_sig;

        _inner( F f, V1 v1)
            :base_type( f, v1)
        {}
    };
};

//#2
template<class R>
struct _m_function_obj2
{
    typedef t_m_function_type       function_kind;

    typedef R    return_type;

    template< class F, class V_LIST, class P_LIST>
    struct _inner
        : public _m_operator_obj_return2<return_type,  F, V_LIST, P_LIST>
    {
        typedef _m_operator_obj_return2<return_type,  F, V_LIST, P_LIST>  base_type;
        typedef typename base_type::P1              P1;
        typedef typename base_type::P2              P2;

        typedef  _X_BIND_T(typename base_type::V1) V1;
        typedef  _X_BIND_T(typename base_type::V2) V2;

        typedef typename s_function_sig<return_type, _X_BIND_T_P2>::function_sig   function_sig;

        _inner( F f, V1 v1, V2 v2)
            :base_type( f, v1, v2)
        {}
    };
};

//#3
template<class R>
struct _m_function_obj3
{
    typedef t_m_function_type       function_kind;

    typedef R    return_type;

    template< class F, class V_LIST, class P_LIST>
    struct _inner
        : public _m_operator_obj_return3<return_type,  F, V_LIST, P_LIST>
    {
        typedef _m_operator_obj_return3<return_type,  F, V_LIST, P_LIST>  base_type;
        typedef typename base_type::P1              P1;
        typedef typename base_type::P2              P2;
        typedef typename base_type::P3              P3;


        typedef  _X_BIND_T(typename base_type::V1) V1;
        typedef  _X_BIND_T(typename base_type::V2) V2;
        typedef  _X_BIND_T(typename base_type::V3) V3;

        typedef typename s_function_sig<return_type, _X_BIND_T_P3>::function_sig   function_sig;

        _inner( F f, V1 v1, V2 v2, V3 v3)
            :base_type( f, v1, v2, v3)
        {}
    };
};

//#4
template<class R>
struct _m_function_obj4
{
    typedef t_m_function_type       function_kind;

    typedef R    return_type;

    template< class F, class V_LIST, class P_LIST>
    struct _inner
        : public _m_operator_obj_return4<return_type,  F, V_LIST, P_LIST>
    {
        typedef _m_operator_obj_return4<return_type,  F, V_LIST, P_LIST>  base_type;
        typedef typename base_type::P1              P1;
        typedef typename base_type::P2              P2;
        typedef typename base_type::P3              P3;
        typedef typename base_type::P4              P4;

        typedef  _X_BIND_T(typename base_type::V1) V1;
        typedef  _X_BIND_T(typename base_type::V2) V2;
        typedef  _X_BIND_T(typename base_type::V3) V3;
        typedef  _X_BIND_T(typename base_type::V4) V4;

        typedef typename s_function_sig<return_type, _X_BIND_T_P4>::function_sig   function_sig;

        _inner( F f, V1 v1, V2 v2, V3 v3, V4 v4)
            :base_type( f, v1, v2, v3, v4)
        {}
    };
};

//#5
template<class R>
struct _m_function_obj5
{
    typedef t_m_function_type       function_kind;

    typedef R    return_type;

    template< class F, class V_LIST, class P_LIST>
    struct _inner
        : public _m_operator_obj_return5<return_type,  F, V_LIST, P_LIST>
    {
        typedef _m_operator_obj_return5<return_type,  F, V_LIST, P_LIST>  base_type;
        typedef typename base_type::P1              P1;
        typedef typename base_type::P2              P2;
        typedef typename base_type::P3              P3;
        typedef typename base_type::P4              P4;
        typedef typename base_type::P5              P5;

        typedef  _X_BIND_T(typename base_type::V1) V1;
        typedef  _X_BIND_T(typename base_type::V2) V2;
        typedef  _X_BIND_T(typename base_type::V3) V3;
        typedef  _X_BIND_T(typename base_type::V4) V4;
        typedef  _X_BIND_T(typename base_type::V5) V5;

        typedef typename s_function_sig<return_type, _X_BIND_T_P5>::function_sig   function_sig;

        _inner( F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5)
            :base_type( f, v1, v2, v3, v4, v5)
        {}
    };
};

//#6
template<class R>
struct _m_function_obj6
{
    typedef t_m_function_type       function_kind;

    typedef R    return_type;

    template< class F, class V_LIST, class P_LIST>
    struct _inner
        : public _m_operator_obj_return6<return_type,  F, V_LIST, P_LIST>
    {
        typedef _m_operator_obj_return6<return_type,  F, V_LIST, P_LIST>  base_type;
        typedef typename base_type::P1              P1;
        typedef typename base_type::P2              P2;
        typedef typename base_type::P3              P3;
        typedef typename base_type::P4              P4;
        typedef typename base_type::P5              P5;
        typedef typename base_type::P6              P6;

        typedef  _X_BIND_T(typename base_type::V1) V1;
        typedef  _X_BIND_T(typename base_type::V2) V2;
        typedef  _X_BIND_T(typename base_type::V3) V3;
        typedef  _X_BIND_T(typename base_type::V4) V4;
        typedef  _X_BIND_T(typename base_type::V5) V5;
        typedef  _X_BIND_T(typename base_type::V6) V6;

        typedef typename s_function_sig<return_type, _X_BIND_T_P6>::function_sig   function_sig;

        _inner( F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6)
            :base_type( f, v1, v2, v3, v4, v5, v6)
        {}
    };
};

//#7
template<class R>
struct _m_function_obj7
{
    typedef t_m_function_type       function_kind;

    typedef R    return_type;

    template< class F, class V_LIST, class P_LIST>
    struct _inner
        : public _m_operator_obj_return7<return_type,  F, V_LIST, P_LIST>
    {
        typedef _m_operator_obj_return7<return_type,  F, V_LIST, P_LIST>  base_type;
        typedef typename base_type::P1              P1;
        typedef typename base_type::P2              P2;
        typedef typename base_type::P3              P3;
        typedef typename base_type::P4              P4;
        typedef typename base_type::P5              P5;
        typedef typename base_type::P6              P6;
        typedef typename base_type::P7              P7;


        typedef  _X_BIND_T(typename base_type::V1) V1;
        typedef  _X_BIND_T(typename base_type::V2) V2;
        typedef  _X_BIND_T(typename base_type::V3) V3;
        typedef  _X_BIND_T(typename base_type::V4) V4;
        typedef  _X_BIND_T(typename base_type::V5) V5;
        typedef  _X_BIND_T(typename base_type::V6) V6;
        typedef  _X_BIND_T(typename base_type::V7) V7;

        typedef typename s_function_sig<return_type, _X_BIND_T_P7>::function_sig   function_sig;

        _inner( F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7)
            :base_type( f, v1, v2, v3, v4, v5, v6, v7)
        {}
    };
};

//#8
template<class R>
struct _m_function_obj8
{
    typedef t_m_function_type       function_kind;

    typedef R    return_type;

    template< class F, class V_LIST, class P_LIST>
    struct _inner
        : public _m_operator_obj_return8<return_type,  F, V_LIST, P_LIST>
    {
        typedef _m_operator_obj_return8<return_type,  F, V_LIST, P_LIST>  base_type;
        typedef typename base_type::P1              P1;
        typedef typename base_type::P2              P2;
        typedef typename base_type::P3              P3;
        typedef typename base_type::P4              P4;
        typedef typename base_type::P5              P5;
        typedef typename base_type::P6              P6;
        typedef typename base_type::P7              P7;
        typedef typename base_type::P8              P8;

        typedef  _X_BIND_T(typename base_type::V1) V1;
        typedef  _X_BIND_T(typename base_type::V2) V2;
        typedef  _X_BIND_T(typename base_type::V3) V3;
        typedef  _X_BIND_T(typename base_type::V4) V4;
        typedef  _X_BIND_T(typename base_type::V5) V5;
        typedef  _X_BIND_T(typename base_type::V6) V6;
        typedef  _X_BIND_T(typename base_type::V7) V7;
        typedef  _X_BIND_T(typename base_type::V8) V8;

        typedef typename s_function_sig<return_type, _X_BIND_T_P8>::function_sig   function_sig;

        _inner( F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7, V8 v8)
            :base_type( f, v1, v2, v3, v4, v5, v6, v7, v8)
        {}
    };
};

//#9
template<class R>
struct _m_function_obj9
{
    typedef t_m_function_type       function_kind;

    typedef R    return_type;

    template< class F, class V_LIST, class P_LIST>
    struct _inner
        : public _m_operator_obj_return9<return_type,  F, V_LIST, P_LIST>
    {
        typedef _m_operator_obj_return9<return_type,  F, V_LIST, P_LIST>  base_type;
        typedef typename base_type::P1              P1;
        typedef typename base_type::P2              P2;
        typedef typename base_type::P3              P3;
        typedef typename base_type::P4              P4;
        typedef typename base_type::P5              P5;
        typedef typename base_type::P6              P6;
        typedef typename base_type::P7              P7;
        typedef typename base_type::P8              P8;
        typedef typename base_type::P9              P9;

        typedef  _X_BIND_T(typename base_type::V1) V1;
        typedef  _X_BIND_T(typename base_type::V2) V2;
        typedef  _X_BIND_T(typename base_type::V3) V3;
        typedef  _X_BIND_T(typename base_type::V4) V4;
        typedef  _X_BIND_T(typename base_type::V5) V5;
        typedef  _X_BIND_T(typename base_type::V6) V6;
        typedef  _X_BIND_T(typename base_type::V7) V7;
        typedef  _X_BIND_T(typename base_type::V8) V8;
        typedef  _X_BIND_T(typename base_type::V9) V9;

        typedef typename s_function_sig<return_type, _X_BIND_T_P9>::function_sig   function_sig;

        _inner( F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7, V8 v8, V9 v9)
            :base_type( f, v1, v2, v3, v4, v5, v6, v7, v8, v9)
        {}
    };
};

//#0
template<>
struct _m_function_obj0<void>
{
    typedef t_m_function_type       function_kind;

    typedef void return_type;

    template< class F, class V_LIST, class P_LIST>
    struct _inner
        : public _m_operator_obj_void0<F, V_LIST, P_LIST>
    {
        typedef _m_operator_obj_void0<F, V_LIST, P_LIST>         base_type;

        typedef typename s_function_sig<return_type>::function_sig   function_sig;

        _inner( F f)
            :base_type(f)
        {}
    };
};

//#1
template<>
struct _m_function_obj1<void>
{
    typedef t_m_function_type       function_kind;

    typedef void return_type;

    template< class F, class V_LIST, class P_LIST>
    struct _inner
        : public _m_operator_obj_void1<F, V_LIST, P_LIST>
    {
        typedef _m_operator_obj_void1<F, V_LIST, P_LIST>  base_type;
        typedef typename base_type::P1              P1;

        typedef  _X_BIND_T(typename base_type::V1) V1;

        typedef typename s_function_sig<return_type, _X_BIND_T_P1>::function_sig   function_sig;

        _inner( F f, V1 v1)
            :base_type( f, v1)
        {}
    };
};

//#2
template<>
struct _m_function_obj2<void>
{
    typedef t_m_function_type       function_kind;

    typedef void return_type;

    template< class F, class V_LIST, class P_LIST>
    struct _inner
        : public _m_operator_obj_void2<F, V_LIST, P_LIST>
    {
        typedef _m_operator_obj_void2<F, V_LIST, P_LIST>  base_type;
        typedef typename base_type::P1              P1;
        typedef typename base_type::P2              P2;

        typedef  _X_BIND_T(typename base_type::V1) V1;
        typedef  _X_BIND_T(typename base_type::V2) V2;

        typedef typename s_function_sig<return_type, _X_BIND_T_P2>::function_sig   function_sig;

        _inner( F f, V1 v1, V2 v2)
            :base_type( f, v1, v2)
        {}
    };
};

//#3
template<>
struct _m_function_obj3<void>
{
    typedef t_m_function_type       function_kind;

    typedef void return_type;

    template< class F, class V_LIST, class P_LIST>
    struct _inner
        : public _m_operator_obj_void3<F, V_LIST, P_LIST>
    {
        typedef _m_operator_obj_void3<F, V_LIST, P_LIST>  base_type;
        typedef typename base_type::P1              P1;
        typedef typename base_type::P2              P2;
        typedef typename base_type::P3              P3;

        typedef  _X_BIND_T(typename base_type::V1) V1;
        typedef  _X_BIND_T(typename base_type::V2) V2;
        typedef  _X_BIND_T(typename base_type::V3) V3;

        typedef typename s_function_sig<return_type, _X_BIND_T_P3>::function_sig   function_sig;

        _inner( F f, V1 v1, V2 v2, V3 v3)
            :base_type( f, v1, v2, v3)
        {}
    };
};

//#4
template<>
struct _m_function_obj4<void>
{
    typedef t_m_function_type       function_kind;

    typedef void return_type;

    template< class F, class V_LIST, class P_LIST>
    struct _inner
        : public _m_operator_obj_void4<F, V_LIST, P_LIST>
    {
        typedef _m_operator_obj_void4<F, V_LIST, P_LIST>  base_type;
        typedef typename base_type::P1              P1;
        typedef typename base_type::P2              P2;
        typedef typename base_type::P3              P3;
        typedef typename base_type::P4              P4;

        typedef  _X_BIND_T(typename base_type::V1) V1;
        typedef  _X_BIND_T(typename base_type::V2) V2;
        typedef  _X_BIND_T(typename base_type::V3) V3;
        typedef  _X_BIND_T(typename base_type::V4) V4;

        typedef typename s_function_sig<return_type, _X_BIND_T_P4>::function_sig   function_sig;

        _inner( F f, V1 v1, V2 v2, V3 v3, V4 v4)
            :base_type( f, v1, v2, v3, v4)
        {}
    };
};

//#5
template<>
struct _m_function_obj5<void>
{
    typedef t_m_function_type       function_kind;

    typedef void return_type;

    template< class F, class V_LIST, class P_LIST>
    struct _inner
        : public _m_operator_obj_void5<F, V_LIST, P_LIST>
    {
        typedef _m_operator_obj_void5<F, V_LIST, P_LIST>  base_type;
        typedef typename base_type::P1              P1;
        typedef typename base_type::P2              P2;
        typedef typename base_type::P3              P3;
        typedef typename base_type::P4              P4;
        typedef typename base_type::P5              P5;

        typedef  _X_BIND_T(typename base_type::V1) V1;
        typedef  _X_BIND_T(typename base_type::V2) V2;
        typedef  _X_BIND_T(typename base_type::V3) V3;
        typedef  _X_BIND_T(typename base_type::V4) V4;
        typedef  _X_BIND_T(typename base_type::V5) V5;

        typedef typename s_function_sig<return_type, _X_BIND_T_P5>::function_sig   function_sig;

        _inner( F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5)
            :base_type( f, v1, v2, v3, v4, v5)
        {}
    };
};

//#6
template<>
struct _m_function_obj6<void>
{
    typedef t_m_function_type       function_kind;

    typedef void return_type;

    template< class F, class V_LIST, class P_LIST>
    struct _inner
        : public _m_operator_obj_void6<F, V_LIST, P_LIST>
    {
        typedef _m_operator_obj_void6<F, V_LIST, P_LIST>  base_type;
        typedef typename base_type::P1              P1;
        typedef typename base_type::P2              P2;
        typedef typename base_type::P3              P3;
        typedef typename base_type::P4              P4;
        typedef typename base_type::P5              P5;
        typedef typename base_type::P6              P6;

        typedef  _X_BIND_T(typename base_type::V1) V1;
        typedef  _X_BIND_T(typename base_type::V2) V2;
        typedef  _X_BIND_T(typename base_type::V3) V3;
        typedef  _X_BIND_T(typename base_type::V4) V4;
        typedef  _X_BIND_T(typename base_type::V5) V5;
        typedef  _X_BIND_T(typename base_type::V6) V6;

        typedef typename s_function_sig<return_type, _X_BIND_T_P6>::function_sig   function_sig;

        _inner( F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6)
            :base_type( f, v1, v2, v3, v4, v5, v6)
        {}
    };
};

//#7
template<>
struct _m_function_obj7<void>
{
    typedef t_m_function_type       function_kind;

    typedef void return_type;

    template< class F, class V_LIST, class P_LIST>
    struct _inner
        : public _m_operator_obj_void7<F, V_LIST, P_LIST>
    {
        typedef _m_operator_obj_void7<F, V_LIST, P_LIST>  base_type;
        typedef typename base_type::P1              P1;
        typedef typename base_type::P2              P2;
        typedef typename base_type::P3              P3;
        typedef typename base_type::P4              P4;
        typedef typename base_type::P5              P5;
        typedef typename base_type::P6              P6;
        typedef typename base_type::P7              P7;

        typedef  _X_BIND_T(typename base_type::V1) V1;
        typedef  _X_BIND_T(typename base_type::V2) V2;
        typedef  _X_BIND_T(typename base_type::V3) V3;
        typedef  _X_BIND_T(typename base_type::V4) V4;
        typedef  _X_BIND_T(typename base_type::V5) V5;
        typedef  _X_BIND_T(typename base_type::V6) V6;
        typedef  _X_BIND_T(typename base_type::V7) V7;

        typedef typename s_function_sig<return_type, _X_BIND_T_P7>::function_sig   function_sig;

        _inner( F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7)
            :base_type( f, v1, v2, v3, v4, v5, v6, v7)
        {}
    };
};

//#8
template<>
struct _m_function_obj8<void>
{
    typedef t_m_function_type       function_kind;

    typedef void return_type;

    template< class F, class V_LIST, class P_LIST>
    struct _inner
        : public _m_operator_obj_void8<F, V_LIST, P_LIST>
    {
        typedef _m_operator_obj_void8<F, V_LIST, P_LIST>  base_type;
        typedef typename base_type::P1              P1;
        typedef typename base_type::P2              P2;
        typedef typename base_type::P3              P3;
        typedef typename base_type::P4              P4;
        typedef typename base_type::P5              P5;
        typedef typename base_type::P6              P6;
        typedef typename base_type::P7              P7;
        typedef typename base_type::P8              P8;

        typedef  _X_BIND_T(typename base_type::V1) V1;
        typedef  _X_BIND_T(typename base_type::V2) V2;
        typedef  _X_BIND_T(typename base_type::V3) V3;
        typedef  _X_BIND_T(typename base_type::V4) V4;
        typedef  _X_BIND_T(typename base_type::V5) V5;
        typedef  _X_BIND_T(typename base_type::V6) V6;
        typedef  _X_BIND_T(typename base_type::V7) V7;
        typedef  _X_BIND_T(typename base_type::V8) V8;

        typedef typename s_function_sig<return_type, _X_BIND_T_P8>::function_sig   function_sig;

        _inner( F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7, V8 v8)
            :base_type( f, v1, v2, v3, v4, v5, v6, v7, v8)
        {}
    };
};

//#9
template<>
struct _m_function_obj9<void>
{
    typedef t_m_function_type       function_kind;

    typedef void return_type;

    template< class F, class V_LIST, class P_LIST>
    struct _inner
        : public _m_operator_obj_void9<F, V_LIST, P_LIST>
    {
        typedef _m_operator_obj_void9<F, V_LIST, P_LIST>  base_type;
        typedef typename base_type::P1              P1;
        typedef typename base_type::P2              P2;
        typedef typename base_type::P3              P3;
        typedef typename base_type::P4              P4;
        typedef typename base_type::P5              P5;
        typedef typename base_type::P6              P6;
        typedef typename base_type::P7              P7;
        typedef typename base_type::P8              P8;
        typedef typename base_type::P9              P9;

        typedef  _X_BIND_T(typename base_type::V1) V1;
        typedef  _X_BIND_T(typename base_type::V2) V2;
        typedef  _X_BIND_T(typename base_type::V3) V3;
        typedef  _X_BIND_T(typename base_type::V4) V4;
        typedef  _X_BIND_T(typename base_type::V5) V5;
        typedef  _X_BIND_T(typename base_type::V6) V6;
        typedef  _X_BIND_T(typename base_type::V7) V7;
        typedef  _X_BIND_T(typename base_type::V8) V8;
        typedef  _X_BIND_T(typename base_type::V9) V9;

        typedef typename s_function_sig<return_type, _X_BIND_T_P9>::function_sig   function_sig;

        _inner( F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7, V8 v8, V9 v9)
            :base_type( f, v1, v2, v3, v4, v5, v6, v7, v8, v9)
        {}
    };
};

//!< static function
//#0
template<class R, class F, class V_LIST, class P_LIST>
struct _m_bind_function_obj0
    : public _m_function_obj0<R>::_inner<F, V_LIST, P_LIST>
{
    typedef t_m_function_obj_type                      function_kind;

    enum { ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count };

    typedef  R return_type;
    typedef  typename _m_function_obj0<R>::_inner<F, V_LIST, P_LIST>     base_type;
    typedef  typename base_type::function_sig                           function_sig;

    _m_bind_function_obj0( F f)
        :base_type(f)
    {}
};
//#1
template<class R, class F, class V_LIST, class P_LIST>
struct _m_bind_function_obj1
    : public _m_function_obj1<R>::_inner<F, V_LIST, P_LIST>
{
    typedef t_m_function_obj_type                      function_kind;

    enum { ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count };

    typedef  R return_type;
    typedef  typename _m_function_obj1<R>::_inner<F, V_LIST, P_LIST>     base_type;
    typedef  typename base_type::function_sig                           function_sig;

    typedef  typename base_type::V1 V1;

    _m_bind_function_obj1( F f, V1 v1)
        :base_type( f, v1)
    {}
};
//#2
template<class R, class F, class V_LIST, class P_LIST>
struct _m_bind_function_obj2
    : public _m_function_obj2<R>::_inner<F, V_LIST, P_LIST>
{
    typedef t_m_function_obj_type                      function_kind;


    enum { ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count };

    typedef  R return_type;
    typedef  typename _m_function_obj2<R>::_inner<F, V_LIST, P_LIST>     base_type;
    typedef  typename base_type::function_sig                           function_sig;

    typedef  typename base_type::V1 V1;
    typedef  typename base_type::V2 V2;

    _m_bind_function_obj2( F f, V1 v1, V2 v2)
        :base_type( f, v1, v2)
    {}
};
//#3
template<class R, class F, class V_LIST, class P_LIST>
struct _m_bind_function_obj3
    : public _m_function_obj3<R>::_inner<F, V_LIST, P_LIST>
{
    typedef t_m_function_obj_type                      function_kind;


    enum { ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count };

    typedef  R return_type;
    typedef  typename _m_function_obj3<R>::_inner<F, V_LIST, P_LIST>     base_type;
    typedef  typename base_type::function_sig                           function_sig;

    typedef  typename base_type::V1 V1;
    typedef  typename base_type::V2 V2;
    typedef  typename base_type::V3 V3;

    _m_bind_function_obj3( F f, V1 v1, V2 v2, V3 v3)
        :base_type( f, v1, v2, v3)
    {}
};
//#4
template<class R, class F, class V_LIST, class P_LIST>
struct _m_bind_function_obj4
    : public _m_function_obj4<R>::_inner<F, V_LIST, P_LIST>
{
    typedef t_m_function_obj_type                      function_kind;

    enum { ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count };

    typedef  R return_type;
    typedef  typename _m_function_obj4<R>::_inner<F, V_LIST, P_LIST>     base_type;
    typedef  typename base_type::function_sig                           function_sig;

    typedef  typename base_type::V1 V1;
    typedef  typename base_type::V2 V2;
    typedef  typename base_type::V3 V3;
    typedef  typename base_type::V4 V4;

    _m_bind_function_obj4( F f, V1 v1, V2 v2, V3 v3, V4 v4)
        :base_type( f, v1, v2, v3, v4)
    {}
};
//#5
template<class R, class F, class V_LIST, class P_LIST>
struct _m_bind_function_obj5
    : public _m_function_obj5<R>::_inner<F, V_LIST, P_LIST>
{
    typedef t_m_function_obj_type                      function_kind;

    enum { ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count };

    typedef  R return_type;
    typedef  typename _m_function_obj5<R>::_inner<F, V_LIST, P_LIST>     base_type;
    typedef  typename base_type::function_sig                           function_sig;

    typedef  typename base_type::V1 V1;
    typedef  typename base_type::V2 V2;
    typedef  typename base_type::V3 V3;
    typedef  typename base_type::V4 V4;
    typedef  typename base_type::V5 V5;

    _m_bind_function_obj5( F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5)
        :base_type( f, v1, v2, v3, v4, v5)
    {}
};
//#6
template<class R, class F, class V_LIST, class P_LIST>
struct _m_bind_function_obj6
    : public _m_function_obj6<R>::_inner<F, V_LIST, P_LIST>
{
    typedef t_m_function_obj_type                      function_kind;

    enum { ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count };

    typedef  R return_type;
    typedef  typename _m_function_obj6<R>::_inner<F, V_LIST, P_LIST>     base_type;
    typedef  typename base_type::function_sig                           function_sig;

    typedef  typename base_type::V1 V1;
    typedef  typename base_type::V2 V2;
    typedef  typename base_type::V3 V3;
    typedef  typename base_type::V4 V4;
    typedef  typename base_type::V5 V5;
    typedef  typename base_type::V6 V6;

    _m_bind_function_obj6( F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6)
        :base_type( f, v1, v2, v3, v4, v5, v6)
    {}
};
//#7
template<class R, class F, class V_LIST, class P_LIST>
struct _m_bind_function_obj7
    : public _m_function_obj7<R>::_inner<F, V_LIST, P_LIST>
{
    typedef t_m_function_obj_type                      function_kind;

    enum { ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count };

    typedef  R return_type;
    typedef  typename _m_function_obj7<R>::_inner<F, V_LIST, P_LIST>     base_type;
    typedef  typename base_type::function_sig                           function_sig;

    typedef  typename base_type::V1 V1;
    typedef  typename base_type::V2 V2;
    typedef  typename base_type::V3 V3;
    typedef  typename base_type::V4 V4;
    typedef  typename base_type::V5 V5;
    typedef  typename base_type::V6 V6;
    typedef  typename base_type::V7 V7;

    _m_bind_function_obj7( F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7)
        :base_type( f, v1, v2, v3, v4, v5, v6, v7)
    {}
};
//#8
template<class R, class F, class V_LIST, class P_LIST>
struct _m_bind_function_obj8
    : public _m_function_obj8<R>::_inner<F, V_LIST, P_LIST>
{
    typedef t_m_function_obj_type                      function_kind;

    enum { ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count };

    typedef  R return_type;
    typedef  typename _m_function_obj8<R>::_inner<F, V_LIST, P_LIST>     base_type;
    typedef  typename base_type::function_sig                           function_sig;

    typedef  typename base_type::V1 V1;
    typedef  typename base_type::V2 V2;
    typedef  typename base_type::V3 V3;
    typedef  typename base_type::V4 V4;
    typedef  typename base_type::V5 V5;
    typedef  typename base_type::V6 V6;
    typedef  typename base_type::V7 V7;
    typedef  typename base_type::V8 V8;

    _m_bind_function_obj8( F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7, V8 v8)
        :base_type( f, v1, v2, v3, v4, v5, v6, v7, v8)
    {}
};
//#9
template<class R, class F, class V_LIST, class P_LIST>
struct _m_bind_function_obj9
    : public _m_function_obj9<R>::_inner<F, V_LIST, P_LIST>
{
    typedef t_m_function_obj_type                      function_kind;

    enum { ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count };

    typedef  R return_type;
    typedef  typename _m_function_obj9<R>::_inner<F, V_LIST, P_LIST>     base_type;
    typedef  typename base_type::function_sig                           function_sig;

    typedef  typename base_type::V1 V1;
    typedef  typename base_type::V2 V2;
    typedef  typename base_type::V3 V3;
    typedef  typename base_type::V4 V4;
    typedef  typename base_type::V5 V5;
    typedef  typename base_type::V6 V6;
    typedef  typename base_type::V7 V7;
    typedef  typename base_type::V8 V8;
    typedef  typename base_type::V9 V9;

    _m_bind_function_obj9( F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7, V8 v8, V9 v9)
        :base_type( f, v1, v2, v3, v4, v5, v6, v7, v8, v9)
    {}
};

X_NS_END(n_bind)


#endif //__X_WRAPPER_COMMON_BIND_MEMBER_FUNCTION_OBJ_H__
