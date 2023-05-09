#ifndef  __X_WRAPPER_COMMON_BIND_STATIC_FUNCTION_BIND_H__
#define  __X_WRAPPER_COMMON_BIND_STATIC_FUNCTION_BIND_H__

/*!
*\file    _bind_sf.h
*\author  xiaowei@myhexin.com
*\date    2013/11/30   10:28
*\brief
*\note
*\warning
*/

//!include [c/c++]
//!include [wrapper]
//!include [local]
#include "_s_function.h"

X_NS_BEGIN(n_bind);

//#0
template<class R>
_s_bind_function0
<
    R, _X_BIND_S_FUNCTION_T0,
    _v_list0,
    _p_list< _p_list_a<>, _p_list_a<> >
>
x_bind(_X_BIND_S_FUNCTION_P0)
{
    typedef _p_list_a<>                     _P_LIST_A;
    typedef _p_list_a<>                     _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>   _P_LIST;
    typedef _v_list0                        _V_LIST;

    return _s_bind_function0< R, _X_BIND_S_FUNCTION_T0, _V_LIST, _P_LIST >(f);
}

//#1
template<class R, _X_BIND_TP_P1, _X_BIND_TP_CP1>
_s_bind_function1
<
    R, _X_BIND_S_FUNCTION_T1,
    _v_list1<_X_BIND_T_CP1>,
    _p_list< _p_list_a<_X_BIND_T_P1>, _p_list_a<_X_BIND_T_CP1> >
>
x_bind(_X_BIND_S_FUNCTION_P1, _X_BIND_FP_CP1)
{
    typedef _p_list_a<_X_BIND_T_P1>         _P_LIST_A;
    typedef _p_list_a<_X_BIND_T_CP1>        _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>   _P_LIST;
    typedef _v_list1<_X_BIND_T_CP1>         _V_LIST;

    return _s_bind_function1< R, _X_BIND_S_FUNCTION_T1, _V_LIST, _P_LIST >(f, _X_BIND_FPV_P1);
}


//#2
template<class R, _X_BIND_TP_P2, _X_BIND_TP_CP2>
_s_bind_function2
<
    R, _X_BIND_S_FUNCTION_T2,
    _v_list2<_X_BIND_T_CP2>,
    _p_list< _p_list_a<_X_BIND_T_P2>, _p_list_a<_X_BIND_T_CP2> >
>
x_bind(_X_BIND_S_FUNCTION_P2, _X_BIND_FP_CP2)
{
    typedef _p_list_a<_X_BIND_T_P2>         _P_LIST_A;
    typedef _p_list_a<_X_BIND_T_CP2>        _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>   _P_LIST;
    typedef _v_list2<_X_BIND_T_CP2>         _V_LIST;

    return _s_bind_function2< R, _X_BIND_S_FUNCTION_T2, _V_LIST, _P_LIST >(f, _X_BIND_FPV_P2);
}

//#3
template<class R, _X_BIND_TP_P3, _X_BIND_TP_CP3>
_s_bind_function3
<
    R, _X_BIND_S_FUNCTION_T3,
    _v_list3<_X_BIND_T_CP3>,
    _p_list< _p_list_a<_X_BIND_T_P3>, _p_list_a<_X_BIND_T_CP3> >
>
x_bind(_X_BIND_S_FUNCTION_P3, _X_BIND_FP_CP3)
{
    typedef _p_list_a<_X_BIND_T_P3>         _P_LIST_A;
    typedef _p_list_a<_X_BIND_T_CP3>        _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>   _P_LIST;
    typedef _v_list3<_X_BIND_T_CP3>         _V_LIST;

    return _s_bind_function3< R, _X_BIND_S_FUNCTION_T3, _V_LIST, _P_LIST >(f, _X_BIND_FPV_P3);
}


//#4
template<class R, _X_BIND_TP_P4, _X_BIND_TP_CP4>
_s_bind_function4
<
    R, _X_BIND_S_FUNCTION_T4,
    _v_list4<_X_BIND_T_CP4>,
    _p_list< _p_list_a<_X_BIND_T_P4>, _p_list_a<_X_BIND_T_CP4> >
>
x_bind(_X_BIND_S_FUNCTION_P4, _X_BIND_FP_CP4)
{
    typedef _p_list_a<_X_BIND_T_P4>         _P_LIST_A;
    typedef _p_list_a<_X_BIND_T_CP4>        _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>   _P_LIST;
    typedef _v_list4<_X_BIND_T_CP4>         _V_LIST;

    return _s_bind_function4< R, _X_BIND_S_FUNCTION_T4, _V_LIST, _P_LIST >(f, _X_BIND_FPV_P4);
}

//#5
template<class R, _X_BIND_TP_P5, _X_BIND_TP_CP5>
_s_bind_function5
<
    R, _X_BIND_S_FUNCTION_T5,
    _v_list5<_X_BIND_T_CP5>,
    _p_list< _p_list_a<_X_BIND_T_P5>, _p_list_a<_X_BIND_T_CP5> >
>
x_bind(_X_BIND_S_FUNCTION_P5, _X_BIND_FP_CP5)
{
    typedef _p_list_a<_X_BIND_T_P5>         _P_LIST_A;
    typedef _p_list_a<_X_BIND_T_CP5>        _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>   _P_LIST;
    typedef _v_list5<_X_BIND_T_CP5>         _V_LIST;

    return _s_bind_function5< R, _X_BIND_S_FUNCTION_T5, _V_LIST, _P_LIST >(f, _X_BIND_FPV_P5);
}


//#6
template<class R, _X_BIND_TP_P6, _X_BIND_TP_CP6>
_s_bind_function6
<
    R, _X_BIND_S_FUNCTION_T6,
    _v_list6<_X_BIND_T_CP6>,
    _p_list< _p_list_a<_X_BIND_T_P6>, _p_list_a<_X_BIND_T_CP6> >
>
x_bind(_X_BIND_S_FUNCTION_P6, _X_BIND_FP_CP6)
{
    typedef _p_list_a<_X_BIND_T_P6>         _P_LIST_A;
    typedef _p_list_a<_X_BIND_T_CP6>        _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>   _P_LIST;
    typedef _v_list6<_X_BIND_T_CP6>         _V_LIST;

    return _s_bind_function6< R, _X_BIND_S_FUNCTION_T6, _V_LIST, _P_LIST >(f, _X_BIND_FPV_P6);
}


//#7
template<class R, _X_BIND_TP_P7, _X_BIND_TP_CP7>
_s_bind_function7
<
    R, _X_BIND_S_FUNCTION_T7,
    _v_list7<_X_BIND_T_CP7>,
    _p_list< _p_list_a<_X_BIND_T_P7>, _p_list_a<_X_BIND_T_CP7> >
>
x_bind(_X_BIND_S_FUNCTION_P7, _X_BIND_FP_CP7)
{
    typedef _p_list_a<_X_BIND_T_P7>         _P_LIST_A;
    typedef _p_list_a<_X_BIND_T_CP7>        _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>   _P_LIST;
    typedef _v_list7<_X_BIND_T_CP7>         _V_LIST;

    return _s_bind_function7< R, _X_BIND_S_FUNCTION_T7, _V_LIST, _P_LIST >(f, _X_BIND_FPV_P7);
}


//#8
template<class R, _X_BIND_TP_P8, _X_BIND_TP_CP8>
_s_bind_function8
<
    R, _X_BIND_S_FUNCTION_T8,
    _v_list8<_X_BIND_T_CP8>,
    _p_list< _p_list_a<_X_BIND_T_P8>, _p_list_a<_X_BIND_T_CP8> >
>
x_bind(_X_BIND_S_FUNCTION_P8, _X_BIND_FP_CP8)
{
    typedef _p_list_a<_X_BIND_T_P8>         _P_LIST_A;
    typedef _p_list_a<_X_BIND_T_CP8>        _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>   _P_LIST;
    typedef _v_list8<_X_BIND_T_CP8>         _V_LIST;

    return _s_bind_function8< R, _X_BIND_S_FUNCTION_T8, _V_LIST, _P_LIST >(f, _X_BIND_FPV_P8);
}


//#9
template<class R, _X_BIND_TP_P9, _X_BIND_TP_CP9>
_s_bind_function9
<
    R, _X_BIND_S_FUNCTION_T9,
    _v_list9<_X_BIND_T_CP9>,
    _p_list< _p_list_a<_X_BIND_T_P9>, _p_list_a<_X_BIND_T_CP9> >
>
x_bind(_X_BIND_S_FUNCTION_P9, _X_BIND_FP_CP9)
{
    typedef _p_list_a<_X_BIND_T_P9>         _P_LIST_A;
    typedef _p_list_a<_X_BIND_T_CP9>        _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>   _P_LIST;
    typedef _v_list9<_X_BIND_T_CP9>         _V_LIST;

    return _s_bind_function9< R, _X_BIND_S_FUNCTION_T9, _V_LIST, _P_LIST >(f, _X_BIND_FPV_P9);
}

X_NS_END(n_bind);

#endif //__X_WRAPPER_COMMON_BIND_STATIC_FUNCTION_BIND_H__
