#ifndef  __X_WRAPPER_PRIVATE_VALUE_LIST_H__
#define  __X_WRAPPER_PRIVATE_VALUE_LIST_H__


/*!
*\file    _v_list.h
*\author  xiaowei@myhexin.com
*\date    2013/11/29   21:47
*\brief
*\note
*\warning
*/

//!include [c/c++]
//!include [wrapper]
//!include [local]
#include "_i_arg.h"
#include "_s_value.h"

namespace bind_private
{
#define _X_BIND_LIST_OPERATOR()\
        template<class T> T & operator[] (T & v) const { return v; }\
        template<class T> T const & operator[] (T const & v) const { return v; }


    //#0
    struct _v_list0
    {
        _v_list0()
        {}

        _X_BIND_LIST_OPERATOR();
    };

    //#1
    template<class V1>
    struct _v_list1
        : public _s_value1<V1>
    {
        typedef _s_value1<V1>   base_type;

        _v_list1(_X_BIND_P(V1) v1)
            :base_type(v1)
        {}

        _X_BIND_R(V1) operator [] (_$1 _) { return base_type::v1(); }

        _X_BIND_LIST_OPERATOR();
    };

    //#2
    template<class V1, class V2>
    struct _v_list2
        : public _s_value2<V1, V2>
    {
        typedef _s_value2<V1, V2>   base_type;

        _v_list2(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2)
            :base_type(v1, v2)
        {}

        _X_BIND_R(V1) operator [] (_$1 _) { X_UNUSED(_); return base_type::v1(); }
        _X_BIND_R(V2) operator [] (_$2 _) { X_UNUSED(_); return base_type::v2(); }

        _X_BIND_LIST_OPERATOR();
    };

    //#3
    template<class V1, class V2, class V3>
    struct _v_list3
        : public _s_value3<V1, V2, V3>
    {
        typedef _s_value3<V1, V2, V3>   base_type;

        _v_list3(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, _X_BIND_P(V3) v3)
            :base_type(v1, v2, v3)
        {}

        _X_BIND_R(V1) operator [] (_$1 _) { return base_type::v1(); }
        _X_BIND_R(V2) operator [] (_$2 _) { return base_type::v2(); }
        _X_BIND_R(V3) operator [] (_$3 _) { return base_type::v3(); }

        _X_BIND_LIST_OPERATOR();
    };

    //#4
    template<class V1, class V2, class V3, class V4>
    struct _v_list4
        : public _s_value4<V1, V2, V3, V4>
    {
        typedef _s_value4<V1, V2, V3, V4>   base_type;

        _v_list4(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, _X_BIND_P(V3) v3, _X_BIND_P(V4) v4)
            :base_type(v1, v2, v3, v4)
        {}

        _X_BIND_R(V1) operator [] (_$1 _) { return base_type::v1(); }
        _X_BIND_R(V2) operator [] (_$2 _) { return base_type::v2(); }
        _X_BIND_R(V3) operator [] (_$3 _) { return base_type::v3(); }
        _X_BIND_R(V4) operator [] (_$4 _) { return base_type::v4(); }

        _X_BIND_LIST_OPERATOR();
    };

    //#5
    template<class V1, class V2, class V3, class V4, class V5>
    struct _v_list5
        : public _s_value5<V1, V2, V3, V4, V5>
    {
        typedef _s_value5<V1, V2, V3, V4, V5>   base_type;

        _v_list5(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, _X_BIND_P(V3) v3, _X_BIND_P(V4) v4, _X_BIND_P(V5) v5)
            :base_type(v1, v2, v3, v4, v5)
        {}

        _X_BIND_R(V1) operator [] (_$1 _) { return base_type::v1(); }
        _X_BIND_R(V2) operator [] (_$2 _) { return base_type::v2(); }
        _X_BIND_R(V3) operator [] (_$3 _) { return base_type::v3(); }
        _X_BIND_R(V4) operator [] (_$4 _) { return base_type::v4(); }
        _X_BIND_R(V5) operator [] (_$5 _) { return base_type::v5(); }

        _X_BIND_LIST_OPERATOR();
    };


    //#6
    template<class V1, class V2, class V3, class V4, class V5, class V6>
    struct _v_list6
        : public _s_value6<V1, V2, V3, V4, V5, V6>
    {
        typedef _s_value6<V1, V2, V3, V4, V5, V6>   base_type;

        _v_list6(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, _X_BIND_P(V3) v3, _X_BIND_P(V4) v4, _X_BIND_P(V5) v5, _X_BIND_P(V6) v6)
            :base_type(v1, v2, v3, v4, v5, v6)
        {}

        _X_BIND_R(V1) operator [] (_$1 _) { return base_type::v1(); }
        _X_BIND_R(V2) operator [] (_$2 _) { return base_type::v2(); }
        _X_BIND_R(V3) operator [] (_$3 _) { return base_type::v3(); }
        _X_BIND_R(V4) operator [] (_$4 _) { return base_type::v4(); }
        _X_BIND_R(V5) operator [] (_$5 _) { return base_type::v5(); }
        _X_BIND_R(V6) operator [] (_$6 _) { return base_type::v6(); }

        _X_BIND_LIST_OPERATOR();
    };

    //#7
    template<class V1, class V2, class V3, class V4, class V5, class V6, class V7>
    struct _v_list7
        : public _s_value7<V1, V2, V3, V4, V5, V6, V7>
    {
        typedef _s_value7<V1, V2, V3, V4, V5, V6, V7>   base_type;

        _v_list7(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, _X_BIND_P(V3) v3, _X_BIND_P(V4) v4, _X_BIND_P(V5) v5, _X_BIND_P(V6) v6, _X_BIND_P(V7) v7)
            :base_type(v1, v2, v3, v4, v5, v6, v7)
        {}

        _X_BIND_R(V1) operator [] (_$1 _) { return base_type::v1(); }
        _X_BIND_R(V2) operator [] (_$2 _) { return base_type::v2(); }
        _X_BIND_R(V3) operator [] (_$3 _) { return base_type::v3(); }
        _X_BIND_R(V4) operator [] (_$4 _) { return base_type::v4(); }
        _X_BIND_R(V5) operator [] (_$5 _) { return base_type::v5(); }
        _X_BIND_R(V6) operator [] (_$6 _) { return base_type::v6(); }
        _X_BIND_R(V7) operator [] (_$7 _) { return base_type::v7(); }

        _X_BIND_LIST_OPERATOR();
    };

    //#8
    template<class V1, class V2, class V3, class V4, class V5, class V6, class V7, class V8>
    struct _v_list8
        : public _s_value8<V1, V2, V3, V4, V5, V6, V7, V8>
    {
        typedef _s_value8<V1, V2, V3, V4, V5, V6, V7, V8>   base_type;

        _v_list8(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, _X_BIND_P(V3) v3, _X_BIND_P(V4) v4, _X_BIND_P(V5) v5, _X_BIND_P(V6) v6, _X_BIND_P(V7) v7, _X_BIND_P(V8) v8)
            :base_type(v1, v2, v3, v4, v5, v6, v7, v8)
        {}

        _X_BIND_R(V1) operator [] (_$1 _) { return base_type::v1(); }
        _X_BIND_R(V2) operator [] (_$2 _) { return base_type::v2(); }
        _X_BIND_R(V3) operator [] (_$3 _) { return base_type::v3(); }
        _X_BIND_R(V4) operator [] (_$4 _) { return base_type::v4(); }
        _X_BIND_R(V5) operator [] (_$5 _) { return base_type::v5(); }
        _X_BIND_R(V6) operator [] (_$6 _) { return base_type::v6(); }
        _X_BIND_R(V7) operator [] (_$7 _) { return base_type::v7(); }
        _X_BIND_R(V8) operator [] (_$8 _) { return base_type::v8(); }

        _X_BIND_LIST_OPERATOR();

    };

    //#9
    template<class V1, class V2, class V3, class V4, class V5, class V6, class V7, class V8, class V9>
    struct _v_list9
        : public _s_value9<V1, V2, V3, V4, V5, V6, V7, V8, V9>
    {
        typedef _s_value9<V1, V2, V3, V4, V5, V6, V7, V8, V9>   base_type;

        _v_list9(_X_BIND_P(V1) v1, _X_BIND_P(V2) v2, _X_BIND_P(V3) v3, _X_BIND_P(V4) v4, _X_BIND_P(V5) v5, _X_BIND_P(V6) v6, _X_BIND_P(V7) v7, _X_BIND_P(V8) v8, _X_BIND_P(V9) v9)
            :base_type(v1, v2, v3, v4, v5, v6, v7, v8, v9)
        {}

        _X_BIND_R(V1) operator [] (_$1 _) { return base_type::v1(); }
        _X_BIND_R(V2) operator [] (_$2 _) { return base_type::v2(); }
        _X_BIND_R(V3) operator [] (_$3 _) { return base_type::v3(); }
        _X_BIND_R(V4) operator [] (_$4 _) { return base_type::v4(); }
        _X_BIND_R(V5) operator [] (_$5 _) { return base_type::v5(); }
        _X_BIND_R(V6) operator [] (_$6 _) { return base_type::v6(); }
        _X_BIND_R(V7) operator [] (_$7 _) { return base_type::v7(); }
        _X_BIND_R(V8) operator [] (_$8 _) { return base_type::v8(); }
        _X_BIND_R(V9) operator [] (_$9 _) { return base_type::v9(); }

        _X_BIND_LIST_OPERATOR();
    };

}
#endif
