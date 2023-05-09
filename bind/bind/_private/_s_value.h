#ifndef  __X_TOOL_PRIVATE_STRUCT_VALUE_H__
#define  __X_TOOL_PRIVATE_STRUCT_VALUE_H__

/*!
*\file    _s_value.h
*\author  xiaowei@myhexin.com
*\date    2013/11/29   21:25
*\brief
*\note
*\warning
*/

#include "_i_arg.h"
#include "_f_param.h"

namespace bind_private
{
    //#1
    template<class V1>struct _s_value1
    {
        _s_value1(_X_BIND_P(V1) v1) :m_v1(v1) {}

        typedef V1  V1;

        _X_BIND_R(V1) v1()const { return m_v1; }

        V1 m_v1;
    };

    template<int I>struct _s_value1< $$<I> >
    {
        _s_value1($$<I> _) { X_UNUSED(_); }

        typedef $$<I>  V1;

        static V1 v1() { return V1(); }
    };

    //#2
    template<class V1, class V2>
    struct _s_value2
        : public _s_value1<V1>
    {
        typedef _s_value1<V1> base_type;

        _s_value2(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2)
            :base_type(v1)
            , m_v2(v2)
        {}
        typedef V2  V2;

        _X_BIND_R(V2) v2()const { return m_v2; }

        V2 m_v2;
    };

    template<class V1, int I>
    struct _s_value2<V1, $$<I> >
        : public _s_value1<V1>
    {
        typedef _s_value1<V1> base_type;

        _s_value2(_X_BIND_P(V1) v1, $$<I> _)
            :base_type(v1)
        {}
        typedef $$<I>  V2;

        static V2 v2() { return V2(); }
    };


    //#3
    template<class V1, class V2, class V3>
    struct _s_value3
        : public _s_value2<V1, V2>
    {
        typedef _s_value2<V1, V2> base_type;

        _s_value3(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, _X_BIND_P(V3) v3)
            :base_type(v1, v2)
            , m_v3(v3)
        {}

        typedef V3  V3;

        _X_BIND_R(V3) v3()const { return m_v3; }

        V3 m_v3;
    };

    template<class V1, class V2, int I>
    struct _s_value3<V1, V2, $$<I> >
        : public _s_value2<V1, V2>
    {
        typedef _s_value2<V1, V2> base_type;

        _s_value3(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, $$<I> _)
            :base_type(v1, v2)
        {}

        typedef $$<I>  V3;

        static V3 v3() { return V3(); }
    };


    //#4
    template<class V1, class V2, class V3, class V4>
    struct _s_value4
        : public _s_value3<V1, V2, V3>
    {
        typedef _s_value3<V1, V2, V3> base_type;

        _s_value4(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, _X_BIND_P(V3) v3, _X_BIND_P(V4) v4)
            :base_type(v1, v2, v3)
            , m_v4(v4)
        {}

        typedef V4  V4;

        _X_BIND_R(V4) v4()const { return m_v4; }

        V4 m_v4;
    };

    template<class V1, class V2, class V3, int I>
    struct _s_value4<V1, V2, V3, $$<I> >
        : public _s_value3<V1, V2, V3>
    {
        typedef _s_value3<V1, V2, V3> base_type;

        _s_value4(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, _X_BIND_P(V3) v3, $$<I>)
            :base_type(v1, v2, v3)
        {}

        typedef $$<I>  V4;

        static V4 v4() { return V4(); }
    };

    //#5
    template<class V1, class V2, class V3, class V4, class V5>
    struct _s_value5
        : public _s_value4<V1, V2, V3, V4>
    {
        typedef _s_value4<V1, V2, V3, V4> base_type;

        _s_value5(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, _X_BIND_P(V3) v3, _X_BIND_P(V4) v4, _X_BIND_P(V5) v5)
            :base_type(v1, v2, v3, v4)
            , m_v5(v5)
        {}

        typedef V5  V5;

        _X_BIND_R(V5) v5()const { return m_v5; }

        V5 m_v5;
    };

    template<class V1, class V2, class V3, class V4, int I>
    struct _s_value5< V1, V2, V3, V4, $$<I> >
        : public _s_value4<V1, V2, V3, V4>
    {
        typedef _s_value4<V1, V2, V3, V4> base_type;

        _s_value5(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, _X_BIND_P(V3) v3, _X_BIND_P(V4) v4, $$<I> _)
            :base_type(v1, v2, v3, v4)
        {}

        typedef $$<I>  V5;

        static V5 v5() { return V5(); }
    };

    //#6
    template<class V1, class V2, class V3, class V4, class V5, class V6>
    struct _s_value6
        : public _s_value5<V1, V2, V3, V4, V5>
    {
        typedef _s_value5<V1, V2, V3, V4, V5> base_type;

        _s_value6(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, _X_BIND_P(V3) v3, _X_BIND_P(V4) v4, _X_BIND_P(V5) v5, _X_BIND_P(V6) v6)
            :base_type(v1, v2, v3, v4, v5)
            , m_v6(v6)
        {}

        typedef V6  V6;

        _X_BIND_R(V6) v6()const { return m_v6; }

        V6 m_v6;
    };

    template<class V1, class V2, class V3, class V4, class V5, int I>
    struct _s_value6< V1, V2, V3, V4, V5, $$<I> >
        : public _s_value5<V1, V2, V3, V4, V5>
    {
        typedef _s_value5<V1, V2, V3, V4, V5> base_type;

        _s_value6(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, _X_BIND_P(V3) v3, _X_BIND_P(V4) v4, _X_BIND_P(V5) v5, $$<I> _)
            :base_type(v1, v2, v3, v4, v5)
        {}

        typedef $$<I>  V6;

        static V6 v6() { return V6(); }
    };

    //#7
    template<class V1, class V2, class V3, class V4, class V5, class V6, class V7>
    struct _s_value7
        : public _s_value6<V1, V2, V3, V4, V5, V6>
    {
        typedef _s_value6<V1, V2, V3, V4, V5, V6> base_type;

        _s_value7(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, _X_BIND_P(V3) v3, _X_BIND_P(V4) v4, _X_BIND_P(V5) v5, _X_BIND_P(V6) v6, _X_BIND_P(V7) v7)
            :base_type(v1, v2, v3, v4, v5, v6)
            , m_v7(v7)
        {}

        typedef V7  V7;

        _X_BIND_R(V7) v7()const { return m_v7; }

        V7 m_v7;
    };

    template<class V1, class V2, class V3, class V4, class V5, class V6, int I>
    struct _s_value7< V1, V2, V3, V4, V5, V6, $$<I> >
        : public _s_value6<V1, V2, V3, V4, V5, V6>
    {
        typedef _s_value6<V1, V2, V3, V4, V5, V6> base_type;

        _s_value7(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, _X_BIND_P(V3) v3, _X_BIND_P(V4) v4, _X_BIND_P(V5) v5, _X_BIND_P(V6) v6, $$<I> _)
            :base_type(v1, v2, v3, v4, v5, v6)
        {}

        typedef $$<I>  V7;

        static V7 v7() { return V7(); }
    };

    //#8
    template<class V1, class V2, class V3, class V4, class V5, class V6, class V7, class V8>
    struct _s_value8
        : public _s_value7<V1, V2, V3, V4, V5, V6, V7>
    {
        typedef _s_value7<V1, V2, V3, V4, V5, V6, V7> base_type;

        _s_value8(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, _X_BIND_P(V3) v3, _X_BIND_P(V4) v4, _X_BIND_P(V5) v5, _X_BIND_P(V6) v6, _X_BIND_P(V7) v7, _X_BIND_P(V8) v8)
            :base_type(v1, v2, v3, v4, v5, v6, v7)
            , m_v8(v8)
        {}

        typedef V8  V8;

        _X_BIND_R(V8) v8()const { return m_v8; }

        V8 m_v8;
    };

    template<class V1, class V2, class V3, class V4, class V5, class V6, class V7, int I>
    struct _s_value8< V1, V2, V3, V4, V5, V6, V7, $$<I> >
        : public _s_value7<V1, V2, V3, V4, V5, V6, V7>
    {
        typedef _s_value7<V1, V2, V3, V4, V5, V6, V7> base_type;

        _s_value8(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, _X_BIND_P(V3) v3, _X_BIND_P(V4) v4, _X_BIND_P(V5) v5, _X_BIND_P(V6) v6, _X_BIND_P(V7) v7, $$<I> _)
            :base_type(v1, v2, v3, v4, v5, v6, v7)
        {}

        typedef $$<I>  V8;

        static V8 v8() { return V8(); }
    };

    //#9
    template<class V1, class V2, class V3, class V4, class V5, class V6, class V7, class V8, class V9>
    struct _s_value9
        : public _s_value8<V1, V2, V3, V4, V5, V6, V7, V8>
    {
        typedef _s_value8<V1, V2, V3, V4, V5, V6, V7, V8> base_type;

        _s_value9(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, _X_BIND_P(V3) v3, _X_BIND_P(V4) v4, _X_BIND_P(V5) v5, _X_BIND_P(V6) v6, _X_BIND_P(V7) v7, _X_BIND_P(V8) v8, _X_BIND_P(V9) v9)
            :base_type(v1, v2, v3, v4, v5, v6, v7, v8)
            , m_v9(v9)
        {}

        typedef V9  V9;

        _X_BIND_R(V9) v9()const { return m_v9; }
        V9 m_v9;
    };

    template<class V1, class V2, class V3, class V4, class V5, class V6, class V7, class V8, int I>
    struct _s_value9< V1, V2, V3, V4, V5, V6, V7, V8, $$<I> >
        : public _s_value8<V1, V2, V3, V4, V5, V6, V7, V8>
    {
        typedef _s_value8<V1, V2, V3, V4, V5, V6, V7, V8> base_type;

        _s_value9(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, _X_BIND_P(V3) v3, _X_BIND_P(V4) v4, _X_BIND_P(V5) v5, _X_BIND_P(V6) v6, _X_BIND_P(V7) v7, _X_BIND_P(V8) v8, $$<I> _)
            :base_type(v1, v2, v3, v4, v5, v6, v7, v8)
        {}

        typedef $$<I>  V9;

        static V9 v9() { return V9(); }
    };
}
#endif //__X_TOOL_PRIVATE_STRUCT_VALUE_H__
