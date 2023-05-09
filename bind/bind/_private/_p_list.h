#ifndef  __X_WRAPPER_PRIVATE_PARAM_LIST_H__
#define  __X_WRAPPER_PRIVATE_PARAM_LIST_H__

#include "../bind.hpp"
#include "_i_arg.h"
#include "_f_param.h"

namespace bind_private
{
    struct _p_any
    {
        _p_any() {};
        template<class T>_p_any(T const& t) {}
    };

    template<class T>
    struct _is_p_any
    {
        enum { value = false };
    };

    template<>
    struct _is_p_any< _p_any >
    {
        enum { value = true };
    };

    //p_list
    template
        <
        class _P1 = _p_any,
        class _P2 = _p_any,
        class _P3 = _p_any,
        class _P4 = _p_any,
        class _P5 = _p_any,
        class _P6 = _p_any,
        class _P7 = _p_any,
        class _P8 = _p_any,
        class _P9 = _p_any
        >
        struct _p_list_a
    {
        typedef _P1   P1;
        typedef _P2   P2;
        typedef _P3   P3;
        typedef _P4   P4;
        typedef _P5   P5;
        typedef _P6   P6;
        typedef _P7   P7;
        typedef _P8   P8;
        typedef _P9   P9;
    };

    template
        <
        class LIST_A
        >
        struct _p_ref_list_a
    {
        typedef typename f_param<typename LIST_A::P1>::value_type   P1;
        typedef typename f_param<typename LIST_A::P2>::value_type   P2;
        typedef typename f_param<typename LIST_A::P3>::value_type   P3;
        typedef typename f_param<typename LIST_A::P4>::value_type   P4;
        typedef typename f_param<typename LIST_A::P5>::value_type   P5;
        typedef typename f_param<typename LIST_A::P6>::value_type   P6;
        typedef typename f_param<typename LIST_A::P7>::value_type   P7;
        typedef typename f_param<typename LIST_A::P8>::value_type   P8;
        typedef typename f_param<typename LIST_A::P9>::value_type   P9;
    };

    template
        <
        class LIST_A
        >
        struct _p_value_list_a
    {
        typedef typename LIST_A::P1   P1;
        typedef typename LIST_A::P2   P2;
        typedef typename LIST_A::P3   P3;
        typedef typename LIST_A::P4   P4;
        typedef typename LIST_A::P5   P5;
        typedef typename LIST_A::P6   P6;
        typedef typename LIST_A::P7   P7;
        typedef typename LIST_A::P8   P8;
        typedef typename LIST_A::P9   P9;
    };

    ///_p_list_at start
    template<class P_LIST_A, int I>
    struct _p_list_at {};

    template<class P_LIST_A>
    struct _p_list_at<P_LIST_A, 0> { typedef _p_any value_type; };

    template<class P_LIST_A>
    struct _p_list_at<P_LIST_A, 1> { typedef typename P_LIST_A::P1 value_type; };

    template<class P_LIST_A>
    struct _p_list_at<P_LIST_A, 2> { typedef typename P_LIST_A::P2 value_type; };

    template<class P_LIST_A>
    struct _p_list_at<P_LIST_A, 3> { typedef typename P_LIST_A::P3 value_type; };

    template<class P_LIST_A>
    struct _p_list_at<P_LIST_A, 4> { typedef typename P_LIST_A::P4 value_type; };

    template<class P_LIST_A>
    struct _p_list_at<P_LIST_A, 5> { typedef typename P_LIST_A::P5 value_type; };

    template<class P_LIST_A>
    struct _p_list_at<P_LIST_A, 6> { typedef typename P_LIST_A::P6 value_type; };

    template<class P_LIST_A>
    struct _p_list_at<P_LIST_A, 7> { typedef typename P_LIST_A::P7 value_type; };

    template<class P_LIST_A>
    struct _p_list_at<P_LIST_A, 8> { typedef typename P_LIST_A::P8 value_type; };

    template<class P_LIST_A>
    struct _p_list_at<P_LIST_A, 9> { typedef typename P_LIST_A::P9 value_type; };
    ///_p_list_at end

    template<class T>
    struct _p_list_length_impl
    {
        enum
        {
            value = _is_p_any<T>::value ? 1 : 0,
        };
    };

    template<class P_LIST_A>
    struct _p_list_length
    {
        typedef P_LIST_A PA;
        enum
        {
            value =
            _p_list_length_impl<typename PA::P1>::value +
            _p_list_length_impl<typename PA::P2>::value +
            _p_list_length_impl<typename PA::P3>::value +
            _p_list_length_impl<typename PA::P4>::value +
            _p_list_length_impl<typename PA::P5>::value +
            _p_list_length_impl<typename PA::P6>::value +
            _p_list_length_impl<typename PA::P7>::value +
            _p_list_length_impl<typename PA::P8>::value +
            _p_list_length_impl<typename PA::P9>::value,
        };
    };

    //!< _is_p_list_a start
    template<class T>
    struct _is_p_list_a
    {
        enum { value = false };
    };
    template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9>
    struct _is_p_list_a<_p_list_a<T1, T2, T3, T4, T5, T6, T7, T8, T9> >
    {
        enum { value = true };
    };
    //!< _is_p_list_a end

    //!< _p_list_index start
    template<class TYPE>
    struct _p_list_index
    {
        enum { value = 0 };
    };

    template<int I>
    struct _p_list_index< $$<I> >
    {
        enum { value = I };
    };
    //!< _p_list_index end


    //!< _p_list_find start
    //!< I1 为上一次Index,I2为需要找的Index
    template<class P, int I1, int I2, int I3>
    struct  _p_list_find_impl
    {
    public:
        enum
        {
            _value = (_p_list_index<P>::value == I2) ? I2 : 0,
        };
    public:
        enum
        {
            value = I1 > 0 ? I1 : (_value > 0 ? I3 : 0),
        };
    };

    //!在C_LIST中找到I的$n eg:C_LIST<$3,$2,$1>
    template<class P_LIST, class C_LIST, int I>
    struct _p_list_find
    {
    public:
        enum
        {
            _E_VALUE1 = _p_list_find_impl<typename C_LIST::P1, 0, I, 1>::value,
        };
        enum
        {
            _E_VALUE2 = _p_list_find_impl<typename C_LIST::P2, _E_VALUE1, I, 2>::value,
        };
        enum
        {
            _E_VALUE3 = _p_list_find_impl<typename C_LIST::P3, _E_VALUE2, I, 3>::value,
        };
        enum
        {
            _E_VALUE4 = _p_list_find_impl<typename C_LIST::P4, _E_VALUE3, I, 4>::value,
        };
        enum
        {
            _E_VALUE5 = _p_list_find_impl<typename C_LIST::P5, _E_VALUE4, I, 5>::value,
        };
        enum
        {
            _E_VALUE6 = _p_list_find_impl<typename C_LIST::P6, _E_VALUE5, I, 6>::value,
        };
        enum
        {
            _E_VALUE7 = _p_list_find_impl<typename C_LIST::P7, _E_VALUE6, I, 7>::value,
        };
        enum
        {
            _E_VALUE8 = _p_list_find_impl<typename C_LIST::P8, _E_VALUE7, I, 8>::value,
        };
        enum
        {
            _E_VALUE9 = _p_list_find_impl<typename C_LIST::P9, _E_VALUE8, I, 9>::value,
        };

    public:
        enum
        {
            value = _E_VALUE9 > 0 ? true : false,
        };
        typedef typename _p_list_at<P_LIST, _E_VALUE9>::value_type value_type;
    };
    //!< _p_list_find end

    //!< is all arg type start
    template
        <
        class C_LIST
        >
        struct _p_is_all_i_arg
    {
        typedef C_LIST  _C_LIST;
    private:
        enum
        {
            _E_VALUE1 = _is_i_arg<typename _C_LIST::P1>::value,
        };
        enum
        {
            _E_VALUE2 = _E_VALUE1 & _is_i_arg<typename _C_LIST::P2>::value,
        };
        enum
        {
            _E_VALUE3 = _E_VALUE2 & _is_i_arg<typename _C_LIST::P3>::value,
        };
        enum
        {
            _E_VALUE4 = _E_VALUE3 & _is_i_arg<typename _C_LIST::P4>::value,
        };
        enum
        {
            _E_VALUE5 = _E_VALUE4 & _is_i_arg<typename _C_LIST::P5>::value,
        };
        enum
        {
            _E_VALUE6 = _E_VALUE5 & _is_i_arg<typename _C_LIST::P6>::value,
        };
        enum
        {
            _E_VALUE7 = _E_VALUE6 & _is_i_arg<typename _C_LIST::P7>::value,
        };
        enum
        {
            _E_VALUE8 = _E_VALUE7 & _is_i_arg<typename _C_LIST::P8>::value,
        };
        enum
        {
            _E_VALUE9 = _E_VALUE8 & _is_i_arg<typename _C_LIST::P9>::value,
        };
    public:
        enum
        {
            value = _E_VALUE9,
        };
    };
    //!< is all arg type end

    template
        <
        class P_LIST, class C_LIST
        >
        struct _p_list
    {
        typedef P_LIST  _P_LIST;
        typedef C_LIST  _C_LIST;

        typedef typename _p_list_find<_P_LIST, _C_LIST, 1>   _p_list_find1;
        typedef typename X_TTL_IF_TYPE(bool(_p_list_find1::value), typename _p_list_find1::value_type, _p_any)   P1;

        typedef typename _p_list_find<_P_LIST, _C_LIST, 2>   _p_list_find2;
        typedef typename X_TTL_IF_TYPE(bool(_p_list_find2::value), typename _p_list_find2::value_type, _p_any)    P2;

        typedef typename _p_list_find<_P_LIST, _C_LIST, 3>   _p_list_find3;
        typedef typename X_TTL_IF_TYPE(bool(_p_list_find3::value), typename _p_list_find3::value_type, _p_any)    P3;

        typedef typename _p_list_find<_P_LIST, _C_LIST, 4>   _p_list_find4;
        typedef typename X_TTL_IF_TYPE(bool(_p_list_find4::value), typename _p_list_find4::value_type, _p_any)    P4;

        typedef typename _p_list_find<_P_LIST, _C_LIST, 5>   _p_list_find5;
        typedef typename X_TTL_IF_TYPE(bool(_p_list_find5::value), typename _p_list_find5::value_type, _p_any)   P5;

        typedef typename _p_list_find<_P_LIST, _C_LIST, 6>   _p_list_find6;
        typedef typename X_TTL_IF_TYPE(bool(_p_list_find6::value), typename _p_list_find6::value_type, _p_any)    P6;

        typedef typename _p_list_find<_P_LIST, _C_LIST, 7>   _p_list_find7;
        typedef typename X_TTL_IF_TYPE(bool(_p_list_find7::value), typename _p_list_find7::value_type, _p_any)    P7;

        typedef typename _p_list_find<_P_LIST, _C_LIST, 8>   _p_list_find8;
        typedef typename X_TTL_IF_TYPE(bool(_p_list_find8::value), typename _p_list_find8::value_type, _p_any)   P8;

        typedef typename _p_list_find<_P_LIST, _C_LIST, 9>   _p_list_find9;
        typedef typename X_TTL_IF_TYPE(bool(_p_list_find9::value), typename _p_list_find9::value_type, _p_any)    P9;

    };
}

#endif //__X_WRAPPER_PRIVATE_PARAM_LIST_H__
