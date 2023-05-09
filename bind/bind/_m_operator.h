#ifndef  __X_WRAPPER_COMMON_BIND_MEMBER_FUNCTION_OPERATOR_H__
#define  __X_WRAPPER_COMMON_BIND_MEMBER_FUNCTION_OPERATOR_H__

/*!
-*\file    _s_function.h
-*\author  XW
-*\date    2013/12/1   10:40
-*\brief
-*\note
-*\warning
-*/

#include "bind.hpp"
#include "_private/_v_list.h"
#include "_private/_p_list.h"
#include "_private/_f_sig.h"
using namespace bind_private;

X_NS_BEGIN(n_bind);

//!member function base
template<class O, class F, class P_LIST>
class _m_function_base
    : public c_function_base
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

    _m_function_base(O o, F f)
        :m_object(o)
        , m_function(f)
    {}

    O _obj() { return m_object; }
    F _func() { return m_function; }


    const O _obj() const { return m_object; }
    const F _func() const { return m_function; }

protected:
    O m_object;
    F m_function;
};

//return type

//return #0
template<class R, class O, class F, class V_LIST, class P_LIST>
struct _m_operator_return0
    : public _m_function_base<O, F, P_LIST>, public V_LIST
{
    typedef  R return_type;
    typedef  V_LIST VL;
    typedef _m_function_base<O, F, P_LIST> base_type;

    typedef typename base_type::P1  P1;
    typedef typename base_type::P2  P2;
    typedef typename base_type::P3  P3;
    typedef typename base_type::P4  P4;
    typedef typename base_type::P5  P5;
    typedef typename base_type::P6  P6;
    typedef typename base_type::P7  P7;
    typedef typename base_type::P8  P8;
    typedef typename base_type::P9  P9;


    _m_operator_return0(O o, F f)
        :base_type(o, f)
        , VL()
    {}

    return_type operator()()
    {
        return (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1)
    {
        return (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2)
    {
        return (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3)
    {
        return (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
    {
        return (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
    {
        return (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
    {
        return (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
    {
        return (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
    {
        return (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
    {
        return (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()() const
    {
        return (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1) const
    {
        return (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2) const
    {
        return (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3) const
    {
        return (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4) const
    {
        return (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
    {
        return (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
    {
        return (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
    {
        return (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
    {
        return (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
    {
        return (base_type::_obj()->*base_type::_func())();
    }
};

//return #1
template<class R, class O, class F, class V_LIST, class P_LIST>
struct _m_operator_return1
    : public _m_function_base<O, F, P_LIST>, public V_LIST
{
    typedef  R return_type;
    typedef  V_LIST VL;
    typedef _m_function_base<O, F, P_LIST> base_type;

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

    _m_operator_return1(O o, F f, V1 v1)
        :base_type(o, f)
        , VL(v1)
    {}

    return_type operator()()
    {
        _v_list0  v;
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1)
    {
        _v_list1< P1>  v(p1);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2)
    {
        _v_list2< P1, P2>  v(p1, p2);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3)
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()() const
    {
        _v_list0  v;
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1) const
    {
        _v_list1< P1>  v(p1);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2) const
    {
        _v_list2< P1, P2>  v(p1, p2);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3) const
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4) const
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }
};

//return #2
template<class R, class O, class F, class V_LIST, class P_LIST>
struct _m_operator_return2
    : public _m_function_base<O, F, P_LIST>, public V_LIST
{
    typedef  R return_type;
    typedef  V_LIST VL;
    typedef _m_function_base<O, F, P_LIST> base_type;

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

    _m_operator_return2(O o, F f, V1 v1, V2 v2)
        :base_type(o, f)
        , VL(v1, v2)
    {}

    return_type operator()()
    {
        _v_list0  v;
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1)
    {
        _v_list1< P1>  v(p1);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2)
    {
        _v_list2< P1, P2>  v(p1, p2);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3)
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()() const
    {
        _v_list0  v;
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1) const
    {
        _v_list1< P1>  v(p1);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2) const
    {
        _v_list2< P1, P2>  v(p1, p2);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3) const
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4) const
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }
};

//return #3
template<class R, class O, class F, class V_LIST, class P_LIST>
struct _m_operator_return3
    : public _m_function_base<O, F, P_LIST>, public V_LIST
{
    typedef  R return_type;
    typedef  V_LIST VL;
    typedef _m_function_base<O, F, P_LIST> base_type;

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

    _m_operator_return3(O o, F f, V1 v1, V2 v2, V3 v3)
        :base_type(o, f)
        , VL(v1, v2, v3)
    {}

    return_type operator()()
    {
        _v_list0  v;
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1)
    {
        _v_list1< P1>  v(p1);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2)
    {
        _v_list2< P1, P2>  v(p1, p2);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3)
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()() const
    {
        _v_list0  v;
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1) const
    {
        _v_list1< P1>  v(p1);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2) const
    {
        _v_list2< P1, P2>  v(p1, p2);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3) const
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4) const
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }
};

//return #4
template<class R, class O, class F, class V_LIST, class P_LIST>
struct _m_operator_return4
    : public _m_function_base<O, F, P_LIST>, public V_LIST
{
    typedef  R return_type;
    typedef  V_LIST VL;
    typedef _m_function_base<O, F, P_LIST> base_type;

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

    _m_operator_return4(O o, F f, V1 v1, V2 v2, V3 v3, V4 v4)
        :base_type(o, f)
        , VL(v1, v2, v3, v4)
    {}

    return_type operator()()
    {
        _v_list0  v;
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1)
    {
        _v_list1< P1>  v(p1);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2)
    {
        _v_list2< P1, P2>  v(p1, p2);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3)
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()() const
    {
        _v_list0  v;
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1) const
    {
        _v_list1< P1>  v(p1);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2) const
    {
        _v_list2< P1, P2>  v(p1, p2);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3) const
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4) const
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }
};

//return #5
template<class R, class O, class F, class V_LIST, class P_LIST>
struct _m_operator_return5
    : public _m_function_base<O, F, P_LIST>, public V_LIST
{
    typedef  R return_type;
    typedef  V_LIST VL;
    typedef _m_function_base<O, F, P_LIST> base_type;

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

    _m_operator_return5(O o, F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5)
        :base_type(o, f)
        , VL(v1, v2, v3, v4, v5)
    {}

    return_type operator()()
    {
        _v_list0  v;
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1)
    {
        _v_list1< P1>  v(p1);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2)
    {
        _v_list2< P1, P2>  v(p1, p2);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3)
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()() const
    {
        _v_list0  v;
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1) const
    {
        _v_list1< P1>  v(p1);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2) const
    {
        _v_list2< P1, P2>  v(p1, p2);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3) const
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4) const
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }
};

//return #6
template<class R, class O, class F, class V_LIST, class P_LIST>
struct _m_operator_return6
    : public _m_function_base<O, F, P_LIST>, public V_LIST
{
    typedef  R return_type;
    typedef  V_LIST VL;
    typedef _m_function_base<O, F, P_LIST> base_type;

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

    _m_operator_return6(O o, F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6)
        :base_type(o, f)
        , VL(v1, v2, v3, v4, v5, v6)
    {}

    return_type operator()()
    {
        _v_list0  v;
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1)
    {
        _v_list1< P1>  v(p1);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2)
    {
        _v_list2< P1, P2>  v(p1, p2);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3)
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()() const
    {
        _v_list0  v;
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1) const
    {
        _v_list1< P1>  v(p1);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2) const
    {
        _v_list2< P1, P2>  v(p1, p2);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3) const
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4) const
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }
};

//return #7
template<class R, class O, class F, class V_LIST, class P_LIST>
struct _m_operator_return7
    : public _m_function_base<O, F, P_LIST>, public V_LIST
{
    typedef  R return_type;
    typedef  V_LIST VL;
    typedef _m_function_base<O, F, P_LIST> base_type;

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

    _m_operator_return7(O o, F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7)
        :base_type(o, f)
        , VL(v1, v2, v3, v4, v5, v6, v7)
    {}

    return_type operator()()
    {
        _v_list0  v;
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1)
    {
        _v_list1< P1>  v(p1);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2)
    {
        _v_list2< P1, P2>  v(p1, p2);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3)
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()() const
    {
        _v_list0  v;
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1) const
    {
        _v_list1< P1>  v(p1);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2) const
    {
        _v_list2< P1, P2>  v(p1, p2);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3) const
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4) const
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }
};

//return #8
template<class R, class O, class F, class V_LIST, class P_LIST>
struct _m_operator_return8
    : public _m_function_base<O, F, P_LIST>, public V_LIST
{
    typedef  R return_type;
    typedef  V_LIST VL;
    typedef _m_function_base<O, F, P_LIST> base_type;

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

    _m_operator_return8(O o, F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7, V8 v8)
        :base_type(o, f)
        , VL(v1, v2, v3, v4, v5, v6, v7, v8)
    {}

    return_type operator()()
    {
        _v_list0  v;
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1)
    {
        _v_list1< P1>  v(p1);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2)
    {
        _v_list2< P1, P2>  v(p1, p2);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3)
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()() const
    {
        _v_list0  v;
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1) const
    {
        _v_list1< P1>  v(p1);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2) const
    {
        _v_list2< P1, P2>  v(p1, p2);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3) const
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4) const
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }
};

//return #9
template<class R, class O, class F, class V_LIST, class P_LIST>
struct _m_operator_return9
    : public _m_function_base<O, F, P_LIST>, public V_LIST
{
    typedef  R return_type;
    typedef  V_LIST VL;
    typedef _m_function_base<O, F, P_LIST> base_type;

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

    _m_operator_return9(O o, F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7, V8 v8, V9 v9)
        :base_type(o, f)
        , VL(v1, v2, v3, v4, v5, v6, v7, v8, v9)
    {}

    return_type operator()()
    {
        _v_list0  v;
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1)
    {
        _v_list1< P1>  v(p1);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2)
    {
        _v_list2< P1, P2>  v(p1, p2);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3)
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()() const
    {
        _v_list0  v;
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1) const
    {
        _v_list1< P1>  v(p1);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2) const
    {
        _v_list2< P1, P2>  v(p1, p2);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3) const
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4) const
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        return (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }
};
//return void

//void #0
template<class O, class F, class V_LIST, class P_LIST>
struct _m_operator_void0
    : public _m_function_base<O, F, P_LIST>, public V_LIST
{
    typedef  void return_type;
    typedef  V_LIST VL;
    typedef _m_function_base<O, F, P_LIST> base_type;

    typedef typename base_type::P1  P1;
    typedef typename base_type::P2  P2;
    typedef typename base_type::P3  P3;
    typedef typename base_type::P4  P4;
    typedef typename base_type::P5  P5;
    typedef typename base_type::P6  P6;
    typedef typename base_type::P7  P7;
    typedef typename base_type::P8  P8;
    typedef typename base_type::P9  P9;


    _m_operator_void0(O o, F f)
        :base_type(o, f)
        , VL()
    {}

    return_type operator()()
    {
        (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1)
    {
        (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2)
    {
        (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3)
    {
        (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
    {
        (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
    {
        (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
    {
        (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
    {
        (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
    {
        (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
    {
        (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()() const
    {
        (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1) const
    {
        (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2) const
    {
        (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3) const
    {
        (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4) const
    {
        (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
    {
        (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
    {
        (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
    {
        (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
    {
        (base_type::_obj()->*base_type::_func())();
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
    {
        (base_type::_obj()->*base_type::_func())();
    }
};

//void #1
template<class O, class F, class V_LIST, class P_LIST>
struct _m_operator_void1
    : public _m_function_base<O, F, P_LIST>, public V_LIST
{
    typedef  void return_type;
    typedef  V_LIST VL;
    typedef _m_function_base<O, F, P_LIST> base_type;

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

    _m_operator_void1(O o, F f, V1 v1)
        :base_type(o, f)
        , VL(v1)
    {}

    return_type operator()()
    {
        _v_list0  v;
        (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1)
    {
        _v_list1< P1>  v(p1);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2)
    {
        _v_list2< P1, P2>  v(p1, p2);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3)
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()() const
    {
        _v_list0  v;
        (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1) const
    {
        _v_list1< P1>  v(p1);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2) const
    {
        _v_list2< P1, P2>  v(p1, p2);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3) const
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4) const
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()]);
    }
};

//void #2
template<class O, class F, class V_LIST, class P_LIST>
struct _m_operator_void2
    : public _m_function_base<O, F, P_LIST>, public V_LIST
{
    typedef  void return_type;
    typedef  V_LIST VL;
    typedef _m_function_base<O, F, P_LIST> base_type;

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

    _m_operator_void2(O o, F f, V1 v1, V2 v2)
        :base_type(o, f)
        , VL(v1, v2)
    {}

    return_type operator()()
    {
        _v_list0  v;
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1)
    {
        _v_list1< P1>  v(p1);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2)
    {
        _v_list2< P1, P2>  v(p1, p2);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3)
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()() const
    {
        _v_list0  v;
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1) const
    {
        _v_list1< P1>  v(p1);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2) const
    {
        _v_list2< P1, P2>  v(p1, p2);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3) const
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4) const
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()]);
    }
};

//void #3
template<class O, class F, class V_LIST, class P_LIST>
struct _m_operator_void3
    : public _m_function_base<O, F, P_LIST>, public V_LIST
{
    typedef  void return_type;
    typedef  V_LIST VL;
    typedef _m_function_base<O, F, P_LIST> base_type;

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

    _m_operator_void3(O o, F f, V1 v1, V2 v2, V3 v3)
        :base_type(o, f)
        , VL(v1, v2, v3)
    {}

    return_type operator()()
    {
        _v_list0  v;
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1)
    {
        _v_list1< P1>  v(p1);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2)
    {
        _v_list2< P1, P2>  v(p1, p2);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3)
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()() const
    {
        _v_list0  v;
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1) const
    {
        _v_list1< P1>  v(p1);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2) const
    {
        _v_list2< P1, P2>  v(p1, p2);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3) const
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4) const
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()]);
    }
};

//void #4
template<class O, class F, class V_LIST, class P_LIST>
struct _m_operator_void4
    : public _m_function_base<O, F, P_LIST>, public V_LIST
{
    typedef  void return_type;
    typedef  V_LIST VL;
    typedef _m_function_base<O, F, P_LIST> base_type;

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

    _m_operator_void4(O o, F f, V1 v1, V2 v2, V3 v3, V4 v4)
        :base_type(o, f)
        , VL(v1, v2, v3, v4)
    {}

    return_type operator()()
    {
        _v_list0  v;
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1)
    {
        _v_list1< P1>  v(p1);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2)
    {
        _v_list2< P1, P2>  v(p1, p2);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3)
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()() const
    {
        _v_list0  v;
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1) const
    {
        _v_list1< P1>  v(p1);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2) const
    {
        _v_list2< P1, P2>  v(p1, p2);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3) const
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4) const
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()]);
    }
};

//void #5
template<class O, class F, class V_LIST, class P_LIST>
struct _m_operator_void5
    : public _m_function_base<O, F, P_LIST>, public V_LIST
{
    typedef  void return_type;
    typedef  V_LIST VL;
    typedef _m_function_base<O, F, P_LIST> base_type;

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

    _m_operator_void5(O o, F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5)
        :base_type(o, f)
        , VL(v1, v2, v3, v4, v5)
    {}

    return_type operator()()
    {
        _v_list0  v;
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1)
    {
        _v_list1< P1>  v(p1);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2)
    {
        _v_list2< P1, P2>  v(p1, p2);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3)
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()() const
    {
        _v_list0  v;
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1) const
    {
        _v_list1< P1>  v(p1);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2) const
    {
        _v_list2< P1, P2>  v(p1, p2);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3) const
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4) const
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()]);
    }
};

//void #6
template<class O, class F, class V_LIST, class P_LIST>
struct _m_operator_void6
    : public _m_function_base<O, F, P_LIST>, public V_LIST
{
    typedef  void return_type;
    typedef  V_LIST VL;
    typedef _m_function_base<O, F, P_LIST> base_type;

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

    _m_operator_void6(O o, F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6)
        :base_type(o, f)
        , VL(v1, v2, v3, v4, v5, v6)
    {}

    return_type operator()()
    {
        _v_list0  v;
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1)
    {
        _v_list1< P1>  v(p1);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2)
    {
        _v_list2< P1, P2>  v(p1, p2);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3)
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()() const
    {
        _v_list0  v;
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1) const
    {
        _v_list1< P1>  v(p1);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2) const
    {
        _v_list2< P1, P2>  v(p1, p2);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3) const
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4) const
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()]);
    }
};

//void #7
template<class O, class F, class V_LIST, class P_LIST>
struct _m_operator_void7
    : public _m_function_base<O, F, P_LIST>, public V_LIST
{
    typedef  void return_type;
    typedef  V_LIST VL;
    typedef _m_function_base<O, F, P_LIST> base_type;

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

    _m_operator_void7(O o, F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7)
        :base_type(o, f)
        , VL(v1, v2, v3, v4, v5, v6, v7)
    {}

    return_type operator()()
    {
        _v_list0  v;
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1)
    {
        _v_list1< P1>  v(p1);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2)
    {
        _v_list2< P1, P2>  v(p1, p2);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3)
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()() const
    {
        _v_list0  v;
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1) const
    {
        _v_list1< P1>  v(p1);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2) const
    {
        _v_list2< P1, P2>  v(p1, p2);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3) const
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4) const
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()]);
    }
};

//void #8
template<class O, class F, class V_LIST, class P_LIST>
struct _m_operator_void8
    : public _m_function_base<O, F, P_LIST>, public V_LIST
{
    typedef  void return_type;
    typedef  V_LIST VL;
    typedef _m_function_base<O, F, P_LIST> base_type;

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

    _m_operator_void8(O o, F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7, V8 v8)
        :base_type(o, f)
        , VL(v1, v2, v3, v4, v5, v6, v7, v8)
    {}

    return_type operator()()
    {
        _v_list0  v;
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1)
    {
        _v_list1< P1>  v(p1);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2)
    {
        _v_list2< P1, P2>  v(p1, p2);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3)
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()() const
    {
        _v_list0  v;
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1) const
    {
        _v_list1< P1>  v(p1);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2) const
    {
        _v_list2< P1, P2>  v(p1, p2);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3) const
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4) const
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()]);
    }
};

//void #9
template<class O, class F, class V_LIST, class P_LIST>
struct _m_operator_void9
    : public _m_function_base<O, F, P_LIST>, public V_LIST
{
    typedef  void return_type;
    typedef  V_LIST VL;
    typedef _m_function_base<O, F, P_LIST> base_type;

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

    _m_operator_void9(O o, F f, V1 v1, V2 v2, V3 v3, V4 v4, V5 v5, V6 v6, V7 v7, V8 v8, V9 v9)
        :base_type(o, f)
        , VL(v1, v2, v3, v4, v5, v6, v7, v8, v9)
    {}

    return_type operator()()
    {
        _v_list0  v;
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1)
    {
        _v_list1< P1>  v(p1);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2)
    {
        _v_list2< P1, P2>  v(p1, p2);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3)
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4)
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()() const
    {
        _v_list0  v;
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1) const
    {
        _v_list1< P1>  v(p1);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2) const
    {
        _v_list2< P1, P2>  v(p1, p2);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3) const
    {
        _v_list3< P1, P2, P3>  v(p1, p2, p3);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4) const
    {
        _v_list4< P1, P2, P3, P4>  v(p1, p2, p3, p4);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5) const
    {
        _v_list5< P1, P2, P3, P4, P5>  v(p1, p2, p3, p4, p5);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6) const
    {
        _v_list6< P1, P2, P3, P4, P5, P6>  v(p1, p2, p3, p4, p5, p6);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7) const
    {
        _v_list7< P1, P2, P3, P4, P5, P6, P7>  v(p1, p2, p3, p4, p5, p6, p7);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8) const
    {
        _v_list8< P1, P2, P3, P4, P5, P6, P7, P8>  v(p1, p2, p3, p4, p5, p6, p7, p8);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }

    return_type operator()(P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9) const
    {
        _v_list9< P1, P2, P3, P4, P5, P6, P7, P8, P9>  v(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        (base_type::_obj()->*base_type::_func())(v[VL::v1()], v[VL::v2()], v[VL::v3()], v[VL::v4()], v[VL::v5()], v[VL::v6()], v[VL::v7()], v[VL::v8()], v[VL::v9()]);
    }
};

X_NS_END(n_bind);


#endif //__X_WRAPPER_COMMON_BIND_MEMBER_FUNCTION_OPERATOR_H__
