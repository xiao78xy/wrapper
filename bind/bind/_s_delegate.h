#ifndef  __X_WRAPPER_COMMON_BIND_STATIC_DELEGATE_H__
#define  __X_WRAPPER_COMMON_BIND_STATIC_DELEGATE_H__


/*!
-*\file    _s_delegate.h
-*\author  XW
-*\date    2013/12/5   20:32
-*\brief
-*\note
-*\warning
-*/

#include "bind.hpp"
#include "_private/_v_list.h"
#include "_private/_p_list.h"

using namespace bind_private;

X_NS_BEGIN(n_bind);

//!static function base
template<class F, class P_LIST>
class _s_delegate_base : public c_function_base
{
public:
    typedef _p_ref_list_a<P_LIST>   _P_REF_LIST;
    typedef typename _P_REF_LIST::P1  P1;
    typedef typename _P_REF_LIST::P2  P2;
    typedef typename _P_REF_LIST::P3  P3;
    typedef typename _P_REF_LIST::P4  P4;
    typedef typename _P_REF_LIST::P5  P5;
    typedef typename _P_REF_LIST::P6  P6;
    typedef typename _P_REF_LIST::P7  P7;
    typedef typename _P_REF_LIST::P8  P8;
    typedef typename _P_REF_LIST::P9  P9;

    _s_delegate_base(F f)
        :m_function(f)
    {}

    const F& _func() const
    {
        return m_function;
    }

    F& _func()
    {
        return m_function;
    }

protected:
    F m_function;
};



//#0
template<class R>
struct _s_delegate0
{
    typedef R    return_type;

    template<class F, class V_LIST, class P_LIST>
    struct _inner
        : public _s_delegate_base<F, P_LIST>
        , public V_LIST
    {
        typedef _s_delegate_base<F, P_LIST> base_type;
        typedef  V_LIST VL;

        typedef typename s_function_sig<return_type>::function_sig   function_sig;

        _inner(F f)
            :base_type(f)
            , VL()
        {}

        return_type operator()()
        {
            return base_type::_func()();
        }

    };
};

//#1
template<class R>
struct _s_delegate1
{
    typedef R    return_type;

    template<class F, class V_LIST, class P_LIST>
    struct _inner
        : public _s_delegate_base<F, P_LIST>
        , public V_LIST
    {
        typedef _s_delegate_base<F, P_LIST> base_type;
        typedef  V_LIST VL;

        typedef typename base_type::P1  P1;

        typedef  _X_BIND_T(typename VL::V1) V1;

        typedef typename s_function_sig<return_type, _X_BIND_T_P1>::function_sig    function_sig;

        _inner(F f, V1 v1)
            :base_type(f)
            , VL(v1)
        {}

        return_type operator()(P1 p1)
        {
            return base_type::_func()(p1);
        }

    };
};

//#2
template<class R>
struct _s_delegate2
{
    typedef R    return_type;

    template<class F, class V_LIST, class P_LIST>
    struct _inner
        : public _s_delegate_base<F, P_LIST>
        , public V_LIST
    {
        typedef _s_delegate_base<F, P_LIST> base_type;
        typedef  V_LIST VL;

        typedef typename base_type::P1  P1;
        typedef typename base_type::P2  P2;

        typedef  _X_BIND_T(typename VL::V1) V1;
        typedef  _X_BIND_T(typename VL::V2) V2;

        typedef typename s_function_sig<return_type, _X_BIND_T_P2>::function_sig    function_sig;

        _inner(F f, V1 v1, V2 v2)
            :base_type(f)
            , VL(v1, v2)
        {}

        return_type operator()(P1 p1, P2 p2)
        {
            return base_type::_func()(p1, p2);
        }

    };
};

//#3
template<class R>
struct _s_delegate3
{
    typedef R    return_type;

    template<class F, class V_LIST, class P_LIST>
    struct _inner
        : public _s_delegate_base<F, P_LIST>
        , public V_LIST
    {
        typedef _s_delegate_base<F, P_LIST> base_type;
        typedef  V_LIST VL;

        typedef typename base_type::P1  P1;
        typedef typename base_type::P2  P2;
        typedef typename base_type::P3  P3;

        typedef  _X_BIND_T(typename VL::V1) V1;
        typedef  _X_BIND_T(typename VL::V2) V2;
        typedef  _X_BIND_T(typename VL::V3) V3;

        typedef typename s_function_sig<return_type, _X_BIND_T_P3>::function_sig    function_sig;

        _inner(F f, V1 v1, V2 v2, V3 v3)
            :base_type(f)
            , VL(v1, v2, v3)
        {}

        return_type operator()(P1 p1, P2 p2, P3 p3)
        {
            return base_type::_func()(p1, p2, p3);
        }

    };
};

//#4
template<class R>
struct _s_delegate4
{
    typedef R    return_type;

    template<class F, class V_LIST, class P_LIST>
    struct _inner
        : public _s_delegate_base<F, P_LIST>
        , public V_LIST
    {
        typedef _s_delegate_base<F, P_LIST> base_type;
        typedef  V_LIST VL;

        typedef typename base_type::P1  P1;
        typedef typename base_type::P2  P2;
        typedef typename base_type::P3  P3;
        typedef typename base_type::P4  P4;

        typedef  _X_BIND_T(typename VL::V1) V1;
        typedef  _X_BIND_T(typename VL::V2) V2;
        typedef  _X_BIND_T(typename VL::V3) V3;
        typedef  _X_BIND_T(typename VL::V4) V4;

        typedef typename s_function_sig<return_type, _X_BIND_T_P4>::function_sig    function_sig;

        _inner(F f, V1 v1, V2 v2, V3 v3, V4 v4)
            :base_type(f)
            , VL(v1, v2, v3, v4)
        {}

        return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
        {
            return base_type::_func()(p1, p2, p3, p4);
        }

    };
};

//#5
template<class R>
struct _s_delegate5
{
    typedef R    return_type;

    template<class F, class V_LIST, class P_LIST>
    struct _inner
        : public _s_delegate_base<F, P_LIST>
        , public V_LIST
    {
        typedef _s_delegate_base<F, P_LIST> base_type;
        typedef  V_LIST VL;

        typedef typename base_type::P1  P1;
        typedef typename base_type::P2  P2;
        typedef typename base_type::P3  P3;
        typedef typename base_type::P4  P4;
        typedef typename base_type::P5  P5;

        typedef  _X_BIND_T(typename VL::V1) V1;
        typedef  _X_BIND_T(typename VL::V2) V2;
        typedef  _X_BIND_T(typename VL::V3) V3;
        typedef  _X_BIND_T(typename VL::V4) V4;
        typedef  _X_BIND_T(typename VL::V5) V5;

        typedef typename s_function_sig<return_type, _X_BIND_T_P5>::function_sig    function_sig;

        _inner(F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5)
            :base_type(f)
            , VL(v1, v2, v3, v4, v5)
        {}

        return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
        {
            return base_type::_func()(p1, p2, p3, p4, p5);
        }

    };
};

//#6
template<class R>
struct _s_delegate6
{
    typedef R    return_type;

    template<class F, class V_LIST, class P_LIST>
    struct _inner
        : public _s_delegate_base<F, P_LIST>
        , public V_LIST
    {
        typedef _s_delegate_base<F, P_LIST> base_type;
        typedef  V_LIST VL;

        typedef typename base_type::P1  P1;
        typedef typename base_type::P2  P2;
        typedef typename base_type::P3  P3;
        typedef typename base_type::P4  P4;
        typedef typename base_type::P5  P5;
        typedef typename base_type::P6  P6;

        typedef  _X_BIND_T(typename VL::V1) V1;
        typedef  _X_BIND_T(typename VL::V2) V2;
        typedef  _X_BIND_T(typename VL::V3) V3;
        typedef  _X_BIND_T(typename VL::V4) V4;
        typedef  _X_BIND_T(typename VL::V5) V5;
        typedef  _X_BIND_T(typename VL::V6) V6;

        typedef typename s_function_sig<return_type, _X_BIND_T_P6>::function_sig    function_sig;

        _inner(F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6)
            :base_type(f)
            , VL(v1, v2, v3, v4, v5, v6)
        {}

        return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
        {
            return base_type::_func()(p1, p2, p3, p4, p5, p6);
        }

    };
};

//#7
template<class R>
struct _s_delegate7
{
    typedef R    return_type;

    template<class F, class V_LIST, class P_LIST>
    struct _inner
        : public _s_delegate_base<F, P_LIST>
        , public V_LIST
    {
        typedef _s_delegate_base<F, P_LIST> base_type;
        typedef  V_LIST VL;

        typedef typename base_type::P1  P1;
        typedef typename base_type::P2  P2;
        typedef typename base_type::P3  P3;
        typedef typename base_type::P4  P4;
        typedef typename base_type::P5  P5;
        typedef typename base_type::P6  P6;
        typedef typename base_type::P7  P7;

        typedef  _X_BIND_T(typename VL::V1) V1;
        typedef  _X_BIND_T(typename VL::V2) V2;
        typedef  _X_BIND_T(typename VL::V3) V3;
        typedef  _X_BIND_T(typename VL::V4) V4;
        typedef  _X_BIND_T(typename VL::V5) V5;
        typedef  _X_BIND_T(typename VL::V6) V6;
        typedef  _X_BIND_T(typename VL::V7) V7;

        typedef typename s_function_sig<return_type, _X_BIND_T_P7>::function_sig    function_sig;

        _inner(F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7)
            :base_type(f)
            , VL(v1, v2, v3, v4, v5, v6, v7)
        {}

        return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
        {
            return base_type::_func()(p1, p2, p3, p4, p5, p6, p7);
        }

    };
};

//#8
template<class R>
struct _s_delegate8
{
    typedef R    return_type;

    template<class F, class V_LIST, class P_LIST>
    struct _inner
        : public _s_delegate_base<F, P_LIST>
        , public V_LIST
    {
        typedef _s_delegate_base<F, P_LIST> base_type;
        typedef  V_LIST VL;

        typedef typename base_type::P1  P1;
        typedef typename base_type::P2  P2;
        typedef typename base_type::P3  P3;
        typedef typename base_type::P4  P4;
        typedef typename base_type::P5  P5;
        typedef typename base_type::P6  P6;
        typedef typename base_type::P7  P7;
        typedef typename base_type::P8  P8;

        typedef  _X_BIND_T(typename VL::V1) V1;
        typedef  _X_BIND_T(typename VL::V2) V2;
        typedef  _X_BIND_T(typename VL::V3) V3;
        typedef  _X_BIND_T(typename VL::V4) V4;
        typedef  _X_BIND_T(typename VL::V5) V5;
        typedef  _X_BIND_T(typename VL::V6) V6;
        typedef  _X_BIND_T(typename VL::V7) V7;
        typedef  _X_BIND_T(typename VL::V8) V8;

        typedef typename s_function_sig<return_type, _X_BIND_T_P8>::function_sig    function_sig;

        _inner(F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7, V8 v8)
            :base_type(f)
            , VL(v1, v2, v3, v4, v5, v6, v7, v8)
        {}

        return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
        {
            return base_type::_func()(p1, p2, p3, p4, p5, p6, p7, p8);
        }

    };
};

//#9
template<class R>
struct _s_delegate9
{
    typedef R    return_type;

    template<class F, class V_LIST, class P_LIST>
    struct _inner
        : public _s_delegate_base<F, P_LIST>
        , public V_LIST
    {
        typedef _s_delegate_base<F, P_LIST> base_type;
        typedef  V_LIST VL;

        typedef typename base_type::P1  P1;
        typedef typename base_type::P2  P2;
        typedef typename base_type::P3  P3;
        typedef typename base_type::P4  P4;
        typedef typename base_type::P5  P5;
        typedef typename base_type::P6  P6;
        typedef typename base_type::P7  P7;
        typedef typename base_type::P8  P8;
        typedef typename base_type::P9  P9;

        typedef  _X_BIND_T(typename VL::V1) V1;
        typedef  _X_BIND_T(typename VL::V2) V2;
        typedef  _X_BIND_T(typename VL::V3) V3;
        typedef  _X_BIND_T(typename VL::V4) V4;
        typedef  _X_BIND_T(typename VL::V5) V5;
        typedef  _X_BIND_T(typename VL::V6) V6;
        typedef  _X_BIND_T(typename VL::V7) V7;
        typedef  _X_BIND_T(typename VL::V8) V8;
        typedef  _X_BIND_T(typename VL::V9) V9;

        typedef typename s_function_sig<return_type, _X_BIND_T_P9>::function_sig    function_sig;

        _inner(F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7, V8 v8, V9 v9)
            :base_type(f)
            , VL(v1, v2, v3, v4, v5, v6, v7, v8, v9)
        {}

        return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
        {
            return base_type::_func()(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        }

    };
};

//#0
template<>
struct _s_delegate0<void>
{
    typedef void return_type;

    template<class F, class V_LIST, class P_LIST>
    struct _inner
        : public _s_delegate_base<F, P_LIST>
        , public V_LIST
    {
        typedef _s_delegate_base<F, P_LIST> base_type;
        typedef  V_LIST VL;

        typedef typename s_function_sig<return_type>::function_sig    function_sig;

        _inner(F f)
            :base_type(f)
            , VL()
        {}

        return_type operator()()
        {
            base_type::_func()();
        }

    };
};

//#1
template<>
struct _s_delegate1<void>
{
    typedef void return_type;

    template<class F, class V_LIST, class P_LIST>
    struct _inner
        : public _s_delegate_base<F, P_LIST>
        , public V_LIST
    {
        typedef _s_delegate_base<F, P_LIST> base_type;
        typedef  V_LIST VL;

        typedef typename base_type::P1  P1;

        typedef  _X_BIND_T(typename VL::V1) V1;

        typedef typename s_function_sig<return_type, _X_BIND_T_P1>::function_sig    function_sig;

        _inner(F f, V1 v1)
            :base_type(f)
            , VL(v1)
        {}

        return_type operator()(P1 p1)
        {
            base_type::_func()(p1);
        }

    };
};

//#2
template<>
struct _s_delegate2<void>
{
    typedef void return_type;

    template<class F, class V_LIST, class P_LIST>
    struct _inner
        : public _s_delegate_base<F, P_LIST>
        , public V_LIST
    {
        typedef _s_delegate_base<F, P_LIST> base_type;
        typedef  V_LIST VL;

        typedef typename base_type::P1  P1;
        typedef typename base_type::P2  P2;

        typedef  _X_BIND_T(typename VL::V1) V1;
        typedef  _X_BIND_T(typename VL::V2) V2;

        typedef typename s_function_sig<return_type, _X_BIND_T_P2>::function_sig    function_sig;

        _inner(F f, V1 v1, V2 v2)
            :base_type(f)
            , VL(v1, v2)
        {}

        return_type operator()(P1 p1, P2 p2)
        {
            base_type::_func()(p1, p2);
        }

    };
};

//#3
template<>
struct _s_delegate3<void>
{
    typedef void return_type;

    template<class F, class V_LIST, class P_LIST>
    struct _inner
        : public _s_delegate_base<F, P_LIST>
        , public V_LIST
    {
        typedef _s_delegate_base<F, P_LIST> base_type;
        typedef  V_LIST VL;

        typedef typename base_type::P1  P1;
        typedef typename base_type::P2  P2;
        typedef typename base_type::P3  P3;

        typedef  _X_BIND_T(typename VL::V1) V1;
        typedef  _X_BIND_T(typename VL::V2) V2;
        typedef  _X_BIND_T(typename VL::V3) V3;

        typedef typename s_function_sig<return_type, _X_BIND_T_P3>::function_sig    function_sig;

        _inner(F f, V1 v1, V2 v2, V3 v3)
            :base_type(f)
            , VL(v1, v2, v3)
        {}

        return_type operator()(P1 p1, P2 p2, P3 p3)
        {
            base_type::_func()(p1, p2, p3);
        }

    };
};

//#4
template<>
struct _s_delegate4<void>
{
    typedef void return_type;

    template<class F, class V_LIST, class P_LIST>
    struct _inner
        : public _s_delegate_base<F, P_LIST>
        , public V_LIST
    {
        typedef _s_delegate_base<F, P_LIST> base_type;
        typedef  V_LIST VL;

        typedef typename base_type::P1  P1;
        typedef typename base_type::P2  P2;
        typedef typename base_type::P3  P3;
        typedef typename base_type::P4  P4;

        typedef  _X_BIND_T(typename VL::V1) V1;
        typedef  _X_BIND_T(typename VL::V2) V2;
        typedef  _X_BIND_T(typename VL::V3) V3;
        typedef  _X_BIND_T(typename VL::V4) V4;

        typedef typename s_function_sig<return_type, _X_BIND_T_P4>::function_sig    function_sig;

        _inner(F f, V1 v1, V2 v2, V3 v3, V4 v4)
            :base_type(f)
            , VL(v1, v2, v3, v4)
        {}

        return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
        {
            base_type::_func()(p1, p2, p3, p4);
        }

    };
};

//#5
template<>
struct _s_delegate5<void>
{
    typedef void return_type;

    template<class F, class V_LIST, class P_LIST>
    struct _inner
        : public _s_delegate_base<F, P_LIST>
        , public V_LIST
    {
        typedef _s_delegate_base<F, P_LIST> base_type;
        typedef  V_LIST VL;

        typedef typename base_type::P1  P1;
        typedef typename base_type::P2  P2;
        typedef typename base_type::P3  P3;
        typedef typename base_type::P4  P4;
        typedef typename base_type::P5  P5;

        typedef  _X_BIND_T(typename VL::V1) V1;
        typedef  _X_BIND_T(typename VL::V2) V2;
        typedef  _X_BIND_T(typename VL::V3) V3;
        typedef  _X_BIND_T(typename VL::V4) V4;
        typedef  _X_BIND_T(typename VL::V5) V5;

        typedef typename s_function_sig<return_type, _X_BIND_T_P5>::function_sig    function_sig;

        _inner(F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5)
            :base_type(f)
            , VL(v1, v2, v3, v4, v5)
        {}

        return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
        {
            base_type::_func()(p1, p2, p3, p4, p5);
        }

    };
};

//#6
template<>
struct _s_delegate6<void>
{
    typedef void return_type;

    template<class F, class V_LIST, class P_LIST>
    struct _inner
        : public _s_delegate_base<F, P_LIST>
        , public V_LIST
    {
        typedef _s_delegate_base<F, P_LIST> base_type;
        typedef  V_LIST VL;

        typedef typename base_type::P1  P1;
        typedef typename base_type::P2  P2;
        typedef typename base_type::P3  P3;
        typedef typename base_type::P4  P4;
        typedef typename base_type::P5  P5;
        typedef typename base_type::P6  P6;

        typedef  _X_BIND_T(typename VL::V1) V1;
        typedef  _X_BIND_T(typename VL::V2) V2;
        typedef  _X_BIND_T(typename VL::V3) V3;
        typedef  _X_BIND_T(typename VL::V4) V4;
        typedef  _X_BIND_T(typename VL::V5) V5;
        typedef  _X_BIND_T(typename VL::V6) V6;

        typedef typename s_function_sig<return_type, _X_BIND_T_P6>::function_sig    function_sig;

        _inner(F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6)
            :base_type(f)
            , VL(v1, v2, v3, v4, v5, v6)
        {}

        return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
        {
            base_type::_func()(p1, p2, p3, p4, p5, p6);
        }

    };
};

//#7
template<>
struct _s_delegate7<void>
{
    typedef void return_type;

    template<class F, class V_LIST, class P_LIST>
    struct _inner
        : public _s_delegate_base<F, P_LIST>
        , public V_LIST
    {
        typedef _s_delegate_base<F, P_LIST> base_type;
        typedef  V_LIST VL;

        typedef typename base_type::P1  P1;
        typedef typename base_type::P2  P2;
        typedef typename base_type::P3  P3;
        typedef typename base_type::P4  P4;
        typedef typename base_type::P5  P5;
        typedef typename base_type::P6  P6;
        typedef typename base_type::P7  P7;

        typedef  _X_BIND_T(typename VL::V1) V1;
        typedef  _X_BIND_T(typename VL::V2) V2;
        typedef  _X_BIND_T(typename VL::V3) V3;
        typedef  _X_BIND_T(typename VL::V4) V4;
        typedef  _X_BIND_T(typename VL::V5) V5;
        typedef  _X_BIND_T(typename VL::V6) V6;
        typedef  _X_BIND_T(typename VL::V7) V7;

        typedef typename s_function_sig<return_type, _X_BIND_T_P7>::function_sig    function_sig;

        _inner(F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7)
            :base_type(f)
            , VL(v1, v2, v3, v4, v5, v6, v7)
        {}

        return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
        {
            base_type::_func()(p1, p2, p3, p4, p5, p6, p7);
        }

    };
};

//#8
template<>
struct _s_delegate8<void>
{
    typedef void return_type;

    template<class F, class V_LIST, class P_LIST>
    struct _inner
        : public _s_delegate_base<F, P_LIST>
        , public V_LIST
    {
        typedef _s_delegate_base<F, P_LIST> base_type;
        typedef  V_LIST VL;

        typedef typename base_type::P1  P1;
        typedef typename base_type::P2  P2;
        typedef typename base_type::P3  P3;
        typedef typename base_type::P4  P4;
        typedef typename base_type::P5  P5;
        typedef typename base_type::P6  P6;
        typedef typename base_type::P7  P7;
        typedef typename base_type::P8  P8;

        typedef  _X_BIND_T(typename VL::V1) V1;
        typedef  _X_BIND_T(typename VL::V2) V2;
        typedef  _X_BIND_T(typename VL::V3) V3;
        typedef  _X_BIND_T(typename VL::V4) V4;
        typedef  _X_BIND_T(typename VL::V5) V5;
        typedef  _X_BIND_T(typename VL::V6) V6;
        typedef  _X_BIND_T(typename VL::V7) V7;
        typedef  _X_BIND_T(typename VL::V8) V8;

        typedef typename s_function_sig<return_type, _X_BIND_T_P8>::function_sig    function_sig;

        _inner(F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7, V8 v8)
            :base_type(f)
            , VL(v1, v2, v3, v4, v5, v6, v7, v8)
        {}

        return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
        {
            base_type::_func()(p1, p2, p3, p4, p5, p6, p7, p8);
        }

    };
};

//#9
template<>
struct _s_delegate9<void>
{
    typedef void return_type;

    template<class F, class V_LIST, class P_LIST>
    struct _inner
        : public _s_delegate_base<F, P_LIST>
        , public V_LIST
    {
        typedef _s_delegate_base<F, P_LIST> base_type;
        typedef  V_LIST VL;

        typedef typename base_type::P1  P1;
        typedef typename base_type::P2  P2;
        typedef typename base_type::P3  P3;
        typedef typename base_type::P4  P4;
        typedef typename base_type::P5  P5;
        typedef typename base_type::P6  P6;
        typedef typename base_type::P7  P7;
        typedef typename base_type::P8  P8;
        typedef typename base_type::P9  P9;

        typedef  _X_BIND_T(typename VL::V1) V1;
        typedef  _X_BIND_T(typename VL::V2) V2;
        typedef  _X_BIND_T(typename VL::V3) V3;
        typedef  _X_BIND_T(typename VL::V4) V4;
        typedef  _X_BIND_T(typename VL::V5) V5;
        typedef  _X_BIND_T(typename VL::V6) V6;
        typedef  _X_BIND_T(typename VL::V7) V7;
        typedef  _X_BIND_T(typename VL::V8) V8;
        typedef  _X_BIND_T(typename VL::V9) V9;

        typedef typename s_function_sig<return_type, _X_BIND_T_P9>::function_sig    function_sig;

        _inner(F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7, V8 v8, V9 v9)
            :base_type(f)
            , VL(v1, v2, v3, v4, v5, v6, v7, v8, v9)
        {}

        return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
        {
            base_type::_func()(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        }

    };
};

//!< static function
//#0
template<class R, class F, class V_LIST, class P_LIST>
struct _s_delegate_function0
    : public _s_delegate0<R>::_inner<F, V_LIST, P_LIST>
{
    enum { ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count };

    typedef  R return_type;
    typedef  typename _s_delegate0<R>::_inner<F, V_LIST, P_LIST>      base_type;
    typedef  typename base_type::function_sig                       function_sig;

    _s_delegate_function0(F f)
        :base_type(f)
    {}
};
//#1
template<class R, class F, class V_LIST, class P_LIST>
struct _s_delegate_function1
    : public _s_delegate1<R>::_inner<F, V_LIST, P_LIST>
{
    enum { ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count };

    typedef  R return_type;
    typedef  typename _s_delegate1<R>::_inner<F, V_LIST, P_LIST>      base_type;
    typedef  typename base_type::function_sig                       function_sig;

    typedef  typename base_type::V1 V1;

    _s_delegate_function1(F f, V1 v1)
        :base_type(f, v1)
    {}
};
//#2
template<class R, class F, class V_LIST, class P_LIST>
struct _s_delegate_function2
    : public _s_delegate2<R>::_inner<F, V_LIST, P_LIST>
{
    enum { ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count };

    typedef  R return_type;
    typedef  typename _s_delegate2<R>::_inner<F, V_LIST, P_LIST>      base_type;
    typedef  typename base_type::function_sig                       function_sig;

    typedef  typename base_type::V1 V1;
    typedef  typename base_type::V2 V2;

    _s_delegate_function2(F f, V1 v1, V2 v2)
        :base_type(f, v1, v2)
    {}
};
//#3
template<class R, class F, class V_LIST, class P_LIST>
struct _s_delegate_function3
    : public _s_delegate3<R>::_inner<F, V_LIST, P_LIST>
{
    enum { ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count };

    typedef  R return_type;
    typedef  typename _s_delegate3<R>::_inner<F, V_LIST, P_LIST>      base_type;
    typedef  typename base_type::function_sig                       function_sig;

    typedef  typename base_type::V1 V1;
    typedef  typename base_type::V2 V2;
    typedef  typename base_type::V3 V3;

    _s_delegate_function3(F f, V1 v1, V2 v2, V3 v3)
        :base_type(f, v1, v2, v3)
    {}
};
//#4
template<class R, class F, class V_LIST, class P_LIST>
struct _s_delegate_function4
    : public _s_delegate4<R>::_inner<F, V_LIST, P_LIST>
{
    enum { ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count };

    typedef  R return_type;
    typedef  typename _s_delegate4<R>::_inner<F, V_LIST, P_LIST>      base_type;
    typedef  typename base_type::function_sig                       function_sig;

    typedef  typename base_type::V1 V1;
    typedef  typename base_type::V2 V2;
    typedef  typename base_type::V3 V3;
    typedef  typename base_type::V4 V4;

    _s_delegate_function4(F f, V1 v1, V2 v2, V3 v3, V4 v4)
        :base_type(f, v1, v2, v3, v4)
    {}
};
//#5
template<class R, class F, class V_LIST, class P_LIST>
struct _s_delegate_function5
    : public _s_delegate5<R>::_inner<F, V_LIST, P_LIST>
{
    enum { ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count };

    typedef  R return_type;
    typedef  typename _s_delegate5<R>::_inner<F, V_LIST, P_LIST>      base_type;
    typedef  typename base_type::function_sig                       function_sig;

    typedef  typename base_type::V1 V1;
    typedef  typename base_type::V2 V2;
    typedef  typename base_type::V3 V3;
    typedef  typename base_type::V4 V4;
    typedef  typename base_type::V5 V5;

    _s_delegate_function5(F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5)
        :base_type(f, v1, v2, v3, v4, v5)
    {}
};
//#6
template<class R, class F, class V_LIST, class P_LIST>
struct _s_delegate_function6
    : public _s_delegate6<R>::_inner<F, V_LIST, P_LIST>
{
    enum { ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count };

    typedef  R return_type;
    typedef  typename _s_delegate6<R>::_inner<F, V_LIST, P_LIST>      base_type;
    typedef  typename base_type::function_sig                       function_sig;

    typedef  typename base_type::V1 V1;
    typedef  typename base_type::V2 V2;
    typedef  typename base_type::V3 V3;
    typedef  typename base_type::V4 V4;
    typedef  typename base_type::V5 V5;
    typedef  typename base_type::V6 V6;

    _s_delegate_function6(F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6)
        :base_type(f, v1, v2, v3, v4, v5, v6)
    {}
};
//#7
template<class R, class F, class V_LIST, class P_LIST>
struct _s_delegate_function7
    : public _s_delegate7<R>::_inner<F, V_LIST, P_LIST>
{
    enum { ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count };

    typedef  R return_type;
    typedef  typename _s_delegate7<R>::_inner<F, V_LIST, P_LIST>      base_type;
    typedef  typename base_type::function_sig                       function_sig;

    typedef  typename base_type::V1 V1;
    typedef  typename base_type::V2 V2;
    typedef  typename base_type::V3 V3;
    typedef  typename base_type::V4 V4;
    typedef  typename base_type::V5 V5;
    typedef  typename base_type::V6 V6;
    typedef  typename base_type::V7 V7;

    _s_delegate_function7(F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7)
        :base_type(f, v1, v2, v3, v4, v5, v6, v7)
    {}
};
//#8
template<class R, class F, class V_LIST, class P_LIST>
struct _s_delegate_function8
    : public _s_delegate8<R>::_inner<F, V_LIST, P_LIST>
{
    enum { ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count };

    typedef  R return_type;
    typedef  typename _s_delegate8<R>::_inner<F, V_LIST, P_LIST>      base_type;
    typedef  typename base_type::function_sig                       function_sig;

    typedef  typename base_type::V1 V1;
    typedef  typename base_type::V2 V2;
    typedef  typename base_type::V3 V3;
    typedef  typename base_type::V4 V4;
    typedef  typename base_type::V5 V5;
    typedef  typename base_type::V6 V6;
    typedef  typename base_type::V7 V7;
    typedef  typename base_type::V8 V8;

    _s_delegate_function8(F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7, V8 v8)
        :base_type(f, v1, v2, v3, v4, v5, v6, v7, v8)
    {}
};
//#9
template<class R, class F, class V_LIST, class P_LIST>
struct _s_delegate_function9
    : public _s_delegate9<R>::_inner<F, V_LIST, P_LIST>
{
    enum { ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count };

    typedef  R return_type;
    typedef  typename _s_delegate9<R>::_inner<F, V_LIST, P_LIST>      base_type;
    typedef  typename base_type::function_sig                       function_sig;

    typedef  typename base_type::V1 V1;
    typedef  typename base_type::V2 V2;
    typedef  typename base_type::V3 V3;
    typedef  typename base_type::V4 V4;
    typedef  typename base_type::V5 V5;
    typedef  typename base_type::V6 V6;
    typedef  typename base_type::V7 V7;
    typedef  typename base_type::V8 V8;
    typedef  typename base_type::V9 V9;

    _s_delegate_function9(F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7, V8 v8, V9 v9)
        :base_type(f, v1, v2, v3, v4, v5, v6, v7, v8, v9)
    {}
};

X_NS_END(n_bind)


#endif //__X_WRAPPER_STATIC_DELEGATE_H__
