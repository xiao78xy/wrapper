#ifndef  __X_WRAPPER_COMMON_BIND_DELEGATE_STATIC_H__
#define  __X_WRAPPER_COMMON_BIND_DELEGATE_STATIC_H__


/*!
-*\file    _delegate_sf.h
-*\author  XW
-*\date    2013/12/5   20:46
-*\brief
-*\note
-*\warning
-*/

#include "_s_delegate.h"

X_NS_BEGIN(n_bind);

template<class R>
_s_delegate_function0
<
    R, _X_BIND_S_FUNCTION_T0,
    _v_list0,
    _p_list< _p_list_a<>, _p_list_a<> >
>
x_delegate(_X_BIND_S_FUNCTION_P0)
{
    typedef _p_list_a<>                     _P_LIST_A;
    typedef _p_list_a<>                     _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>    _P_LIST;
    typedef _v_list0                        _V_LIST;

    return _s_delegate_function0< R, _X_BIND_S_FUNCTION_T0, _V_LIST, _P_LIST >(f);
}

//{{start
//!#1
template<class R, _X_BIND_TP_P1>
_s_delegate_function1
<
    R, _X_BIND_S_FUNCTION_T1,
    _v_list1< _X_BIND_T_ARG_$$1 >,
    _p_list< _p_list_a<_X_BIND_T_P1>, _p_list_a< _X_BIND_T_ARG_$$1 > >
>
x_delegate(_X_BIND_S_FUNCTION_P1)
{
    typedef _p_list_a<_X_BIND_T_P1>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$1 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list1< _X_BIND_T_ARG_$$1 >       _V_LIST;
    return _s_delegate_function1< R, _X_BIND_S_FUNCTION_T1, _V_LIST, _P_LIST >(f, _X_BIND_V_ARG_$1);
}
//}}end

//{{start
//!#2
template<class R, _X_BIND_TP_P2>
_s_delegate_function2
<
    R, _X_BIND_S_FUNCTION_T2,
    _v_list2< _X_BIND_T_ARG_$$2 >,
    _p_list< _p_list_a<_X_BIND_T_P2>, _p_list_a< _X_BIND_T_ARG_$$2 > >
>
x_delegate(_X_BIND_S_FUNCTION_P2)
{
    typedef _p_list_a<_X_BIND_T_P2>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$2 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list2< _X_BIND_T_ARG_$$2 >       _V_LIST;
    return _s_delegate_function2< R, _X_BIND_S_FUNCTION_T2, _V_LIST, _P_LIST >(f, _X_BIND_V_ARG_$2);
}
//}}end


//{{start
//!#3
template<class R, _X_BIND_TP_P3>
_s_delegate_function3
<
    R, _X_BIND_S_FUNCTION_T3,
    _v_list3< _X_BIND_T_ARG_$$3 >,
    _p_list< _p_list_a<_X_BIND_T_P3>, _p_list_a< _X_BIND_T_ARG_$$3 > >
>
x_delegate(_X_BIND_S_FUNCTION_P3)
{
    typedef _p_list_a<_X_BIND_T_P3>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$3 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list3< _X_BIND_T_ARG_$$3 >       _V_LIST;
    return _s_delegate_function3< R, _X_BIND_S_FUNCTION_T3, _V_LIST, _P_LIST >(f, _X_BIND_V_ARG_$3);
}
//}}end

//{{start
//!#4
template<class R, _X_BIND_TP_P4>
_s_delegate_function4
<
    R, _X_BIND_S_FUNCTION_T4,
    _v_list4< _X_BIND_T_ARG_$$4 >,
    _p_list< _p_list_a<_X_BIND_T_P4>, _p_list_a< _X_BIND_T_ARG_$$4 > >
>
x_delegate(_X_BIND_S_FUNCTION_P4)
{
    typedef _p_list_a<_X_BIND_T_P4>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$4 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list4< _X_BIND_T_ARG_$$4 >       _V_LIST;
    return _s_delegate_function4< R, _X_BIND_S_FUNCTION_T4, _V_LIST, _P_LIST >(f, _X_BIND_V_ARG_$4);
}
//}}end

//{{start
//!#5
template<class R, _X_BIND_TP_P5>
_s_delegate_function5
<
    R, _X_BIND_S_FUNCTION_T5,
    _v_list5< _X_BIND_T_ARG_$$5 >,
    _p_list< _p_list_a<_X_BIND_T_P5>, _p_list_a< _X_BIND_T_ARG_$$5 > >
>
x_delegate(_X_BIND_S_FUNCTION_P5)
{
    typedef _p_list_a<_X_BIND_T_P5>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$5 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list5< _X_BIND_T_ARG_$$5 >       _V_LIST;
    return _s_delegate_function5< R, _X_BIND_S_FUNCTION_T5, _V_LIST, _P_LIST >(f, _X_BIND_V_ARG_$5);
}
//}}end

//{{start
//!#6
template<class R, _X_BIND_TP_P6>
_s_delegate_function6
<
    R, _X_BIND_S_FUNCTION_T6,
    _v_list6< _X_BIND_T_ARG_$$6 >,
    _p_list< _p_list_a<_X_BIND_T_P6>, _p_list_a< _X_BIND_T_ARG_$$6 > >
>
x_delegate(_X_BIND_S_FUNCTION_P6)
{
    typedef _p_list_a<_X_BIND_T_P6>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$6 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list6< _X_BIND_T_ARG_$$6 >       _V_LIST;
    return _s_delegate_function6< R, _X_BIND_S_FUNCTION_T6, _V_LIST, _P_LIST >(f, _X_BIND_V_ARG_$6);
}
//}}end

//{{start
//!#7
template<class R, _X_BIND_TP_P7>
_s_delegate_function7
<
    R, _X_BIND_S_FUNCTION_T7,
    _v_list7< _X_BIND_T_ARG_$$7 >,
    _p_list< _p_list_a<_X_BIND_T_P7>, _p_list_a< _X_BIND_T_ARG_$$7 > >
>
x_delegate(_X_BIND_S_FUNCTION_P7)
{
    typedef _p_list_a<_X_BIND_T_P7>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$7 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list7< _X_BIND_T_ARG_$$7 >       _V_LIST;
    return _s_delegate_function7< R, _X_BIND_S_FUNCTION_T7, _V_LIST, _P_LIST >(f, _X_BIND_V_ARG_$7);
}
//}}end

//{{start
//!#8
template<class R, _X_BIND_TP_P8>
_s_delegate_function8
<
    R, _X_BIND_S_FUNCTION_T8,
    _v_list8< _X_BIND_T_ARG_$$8 >,
    _p_list< _p_list_a<_X_BIND_T_P8>, _p_list_a< _X_BIND_T_ARG_$$8 > >
>
x_delegate(_X_BIND_S_FUNCTION_P8)
{
    typedef _p_list_a<_X_BIND_T_P8>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$8 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list8< _X_BIND_T_ARG_$$8 >       _V_LIST;
    return _s_delegate_function8< R, _X_BIND_S_FUNCTION_T8, _V_LIST, _P_LIST >(f, _X_BIND_V_ARG_$8);
}
//}}end

//{{start
//!#9
template<class R, _X_BIND_TP_P9>
_s_delegate_function9
<
    R, _X_BIND_S_FUNCTION_T9,
    _v_list9< _X_BIND_T_ARG_$$9 >,
    _p_list< _p_list_a<_X_BIND_T_P9>, _p_list_a< _X_BIND_T_ARG_$$9 > >
>
x_delegate(_X_BIND_S_FUNCTION_P9)
{
    typedef _p_list_a<_X_BIND_T_P9>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$9 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list9< _X_BIND_T_ARG_$$9 >       _V_LIST;
    return _s_delegate_function9< R, _X_BIND_S_FUNCTION_T9, _V_LIST, _P_LIST >(f, _X_BIND_V_ARG_$9);
}
//}}end

X_NS_END(n_bind)

#endif //__X_WRAPPER_COMMON_BIND_DELEGATE_STATIC_H__
