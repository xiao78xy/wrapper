#ifndef  __X_WRAPPER_COMMON_BIND_DELEGATE_MEMBER_H__
#define  __X_WRAPPER_COMMON_BIND_DELEGATE_MEMBER_H__


/*!
-*\file    _delegate_mf.h
-*\author  XW
-*\date    2013/12/5   21:18
-*\brief
-*\note
-*\warning
-*/

#include "_m_delegate.h"

X_NS_BEGIN(n_bind);

//{{start
//!#0
template<class C, class O, class R>
_m_delegate_function0
<
    R, O, _X_BIND_M_FUNCTION_T0,
    _v_list0,
    _p_list< _p_list_a<>, _p_list_a<> >
>
x_delegate(_X_BIND_M_FUNCTION_P0, O o)
{
    typedef _p_list_a<>                     _P_LIST_A;
    typedef _p_list_a<>                     _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>    _P_LIST;
    typedef _v_list0                        _V_LIST;

    return _m_delegate_function0< R, O, _X_BIND_M_FUNCTION_T0, _V_LIST, _P_LIST >(o, f);
}

template<class C, class O, class R>
_m_delegate_function0
<
    R, O, _X_BIND_M_FUNCTION_T0 const,
    _v_list0,
    _p_list< _p_list_a<>, _p_list_a<> >
>
x_delegate(_X_BIND_M_FUNCTION_P0 const, O o)
{
    typedef _p_list_a<>                     _P_LIST_A;
    typedef _p_list_a<>                     _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>    _P_LIST;
    typedef _v_list0                        _V_LIST;

    return _m_delegate_function0< R, O, _X_BIND_M_FUNCTION_T0 const, _V_LIST, _P_LIST >(o, f);
}
//}}end


//{{start
//!#1
template<class C, class O, class R, _X_BIND_TP_P1>
_m_delegate_function1
<
    R, O, _X_BIND_M_FUNCTION_T1,
    _v_list1< _X_BIND_T_ARG_$$1 >,
    _p_list< _p_list_a<_X_BIND_T_P1>, _p_list_a< _X_BIND_T_ARG_$$1 > >
>
x_delegate(_X_BIND_M_FUNCTION_P1, O o)
{
    typedef _p_list_a<_X_BIND_T_P1>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$1 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list1< _X_BIND_T_ARG_$$1 >       _V_LIST;

    return _m_delegate_function1< R, O, _X_BIND_M_FUNCTION_T1, _V_LIST, _P_LIST >(o, f, _X_BIND_V_ARG_$1);
}

template<class C, class O, class R, _X_BIND_TP_P1>
_m_delegate_function1
<
    R, O, _X_BIND_M_FUNCTION_T1 const,
    _v_list1< _X_BIND_T_ARG_$$1 >,
    _p_list< _p_list_a<_X_BIND_T_P1>, _p_list_a< _X_BIND_T_ARG_$$1 > >
>
x_delegate(_X_BIND_M_FUNCTION_P1 const, O o)
{
    typedef _p_list_a<_X_BIND_T_P1>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$1 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list1< _X_BIND_T_ARG_$$1 >       _V_LIST;

    return _m_delegate_function1< R, O, _X_BIND_M_FUNCTION_T1 const, _V_LIST, _P_LIST >(o, f, _X_BIND_V_ARG_$1);
}
//}}end


//{{start
//!#2
template<class C, class O, class R, _X_BIND_TP_P2>
_m_delegate_function2
<
    R, O, _X_BIND_M_FUNCTION_T2,
    _v_list2< _X_BIND_T_ARG_$$2 >,
    _p_list< _p_list_a<_X_BIND_T_P2>, _p_list_a< _X_BIND_T_ARG_$$2 > >
>
x_delegate(_X_BIND_M_FUNCTION_P2, O o)
{
    typedef _p_list_a<_X_BIND_T_P2>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$2 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list2< _X_BIND_T_ARG_$$2 >       _V_LIST;

    return _m_delegate_function2< R, O, _X_BIND_M_FUNCTION_T2, _V_LIST, _P_LIST >(o, f, _X_BIND_V_ARG_$2);
}

template<class C, class O, class R, _X_BIND_TP_P2>
_m_delegate_function2
<
    R, O, _X_BIND_M_FUNCTION_T2 const,
    _v_list2< _X_BIND_T_ARG_$$2 >,
    _p_list< _p_list_a<_X_BIND_T_P2>, _p_list_a< _X_BIND_T_ARG_$$2 > >
>
x_delegate(_X_BIND_M_FUNCTION_P2 const, O o)
{
    typedef _p_list_a<_X_BIND_T_P2>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$2 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list2< _X_BIND_T_ARG_$$2 >       _V_LIST;

    return _m_delegate_function2< R, O, _X_BIND_M_FUNCTION_T2 const, _V_LIST, _P_LIST >(o, f, _X_BIND_V_ARG_$2);
}
//}}end


//{{start
//!#3
template<class C, class O, class R, _X_BIND_TP_P3>
_m_delegate_function3
<
    R, O, _X_BIND_M_FUNCTION_T3,
    _v_list3< _X_BIND_T_ARG_$$3 >,
    _p_list< _p_list_a<_X_BIND_T_P3>, _p_list_a< _X_BIND_T_ARG_$$3 > >
>
x_delegate(_X_BIND_M_FUNCTION_P3, O o)
{
    typedef _p_list_a<_X_BIND_T_P3>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$3 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list3< _X_BIND_T_ARG_$$3 >       _V_LIST;

    return _m_delegate_function3< R, O, _X_BIND_M_FUNCTION_T3, _V_LIST, _P_LIST >(o, f, _X_BIND_V_ARG_$3);
}

template<class C, class O, class R, _X_BIND_TP_P3>
_m_delegate_function3
<
    R, O, _X_BIND_M_FUNCTION_T3 const,
    _v_list3< _X_BIND_T_ARG_$$3 >,
    _p_list< _p_list_a<_X_BIND_T_P3>, _p_list_a< _X_BIND_T_ARG_$$3 > >
>
x_delegate(_X_BIND_M_FUNCTION_P3 const, O o)
{
    typedef _p_list_a<_X_BIND_T_P3>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$3 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list3< _X_BIND_T_ARG_$$3 >       _V_LIST;

    return _m_delegate_function3< R, O, _X_BIND_M_FUNCTION_T3 const, _V_LIST, _P_LIST >(o, f, _X_BIND_V_ARG_$3);
}
//}}end

//{{start
//!#4
template<class C, class O, class R, _X_BIND_TP_P4>
_m_delegate_function4
<
    R, O, _X_BIND_M_FUNCTION_T4,
    _v_list4< _X_BIND_T_ARG_$$4 >,
    _p_list< _p_list_a<_X_BIND_T_P4>, _p_list_a< _X_BIND_T_ARG_$$4 > >
>
x_delegate(_X_BIND_M_FUNCTION_P4, O o)
{
    typedef _p_list_a<_X_BIND_T_P4>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$4 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list4< _X_BIND_T_ARG_$$4 >       _V_LIST;

    return _m_delegate_function4< R, O, _X_BIND_M_FUNCTION_T4, _V_LIST, _P_LIST >(o, f, _X_BIND_V_ARG_$4);
}

template<class C, class O, class R, _X_BIND_TP_P4>
_m_delegate_function4
<
    R, O, _X_BIND_M_FUNCTION_T4 const,
    _v_list4< _X_BIND_T_ARG_$$4 >,
    _p_list< _p_list_a<_X_BIND_T_P4>, _p_list_a< _X_BIND_T_ARG_$$4 > >
>
x_delegate(_X_BIND_M_FUNCTION_P4 const, O o)
{
    typedef _p_list_a<_X_BIND_T_P4>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$4 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list4< _X_BIND_T_ARG_$$4 >       _V_LIST;

    return _m_delegate_function4< R, O, _X_BIND_M_FUNCTION_T4 const, _V_LIST, _P_LIST >(o, f, _X_BIND_V_ARG_$4);
}
//}}end

//{{start
//!#5
template<class C, class O, class R, _X_BIND_TP_P5>
_m_delegate_function5
<
    R, O, _X_BIND_M_FUNCTION_T5,
    _v_list5< _X_BIND_T_ARG_$$5 >,
    _p_list< _p_list_a<_X_BIND_T_P5>, _p_list_a< _X_BIND_T_ARG_$$5 > >
>
x_delegate(_X_BIND_M_FUNCTION_P5, O o)
{
    typedef _p_list_a<_X_BIND_T_P5>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$5 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list5< _X_BIND_T_ARG_$$5 >       _V_LIST;

    return _m_delegate_function5< R, O, _X_BIND_M_FUNCTION_T5, _V_LIST, _P_LIST >(o, f, _X_BIND_V_ARG_$5);
}

template<class C, class O, class R, _X_BIND_TP_P5>
_m_delegate_function5
<
    R, O, _X_BIND_M_FUNCTION_T5 const,
    _v_list5< _X_BIND_T_ARG_$$5 >,
    _p_list< _p_list_a<_X_BIND_T_P5>, _p_list_a< _X_BIND_T_ARG_$$5 > >
>
x_delegate(_X_BIND_M_FUNCTION_P5 const, O o)
{
    typedef _p_list_a<_X_BIND_T_P5>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$5 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list5< _X_BIND_T_ARG_$$5 >       _V_LIST;

    return _m_delegate_function5< R, O, _X_BIND_M_FUNCTION_T5 const, _V_LIST, _P_LIST >(o, f, _X_BIND_V_ARG_$5);
}
//}}end


//{{start
//!#6
template<class C, class O, class R, _X_BIND_TP_P6>
_m_delegate_function6
<
    R, O, _X_BIND_M_FUNCTION_T6,
    _v_list6< _X_BIND_T_ARG_$$6 >,
    _p_list< _p_list_a<_X_BIND_T_P6>, _p_list_a< _X_BIND_T_ARG_$$6 > >
>
x_delegate(_X_BIND_M_FUNCTION_P6, O o)
{
    typedef _p_list_a<_X_BIND_T_P6>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$6 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list6< _X_BIND_T_ARG_$$6 >       _V_LIST;

    return _m_delegate_function6< R, O, _X_BIND_M_FUNCTION_T6, _V_LIST, _P_LIST >(o, f, _X_BIND_V_ARG_$6);
}

template<class C, class O, class R, _X_BIND_TP_P6>
_m_delegate_function6
<
    R, O, _X_BIND_M_FUNCTION_T6 const,
    _v_list6< _X_BIND_T_ARG_$$6 >,
    _p_list< _p_list_a<_X_BIND_T_P6>, _p_list_a< _X_BIND_T_ARG_$$6 > >
>
x_delegate(_X_BIND_M_FUNCTION_P6 const, O o)
{
    typedef _p_list_a<_X_BIND_T_P6>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$6 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list6< _X_BIND_T_ARG_$$6 >       _V_LIST;

    return _m_delegate_function6< R, O, _X_BIND_M_FUNCTION_T6 const, _V_LIST, _P_LIST >(o, f, _X_BIND_V_ARG_$6);
}
//}}end


//{{start
//!#7
template<class C, class O, class R, _X_BIND_TP_P7>
_m_delegate_function7
<
    R, O, _X_BIND_M_FUNCTION_T7,
    _v_list7< _X_BIND_T_ARG_$$7 >,
    _p_list< _p_list_a<_X_BIND_T_P7>, _p_list_a< _X_BIND_T_ARG_$$7 > >
>
x_delegate(_X_BIND_M_FUNCTION_P7, O o)
{
    typedef _p_list_a<_X_BIND_T_P7>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$7 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list7< _X_BIND_T_ARG_$$7 >       _V_LIST;

    return _m_delegate_function7< R, O, _X_BIND_M_FUNCTION_T7, _V_LIST, _P_LIST >(o, f, _X_BIND_V_ARG_$7);
}

template<class C, class O, class R, _X_BIND_TP_P7>
_m_delegate_function7
<
    R, O, _X_BIND_M_FUNCTION_T7 const,
    _v_list7< _X_BIND_T_ARG_$$7 >,
    _p_list< _p_list_a<_X_BIND_T_P7>, _p_list_a< _X_BIND_T_ARG_$$7 > >
>
x_delegate(_X_BIND_M_FUNCTION_P7 const, O o)
{
    typedef _p_list_a<_X_BIND_T_P7>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$7 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list7< _X_BIND_T_ARG_$$7 >       _V_LIST;

    return _m_delegate_function7< R, O, _X_BIND_M_FUNCTION_T7 const, _V_LIST, _P_LIST >(o, f, _X_BIND_V_ARG_$7);
}
//}}end


//{{start
//!#8
template<class C, class O, class R, _X_BIND_TP_P8>
_m_delegate_function8
<
    R, O, _X_BIND_M_FUNCTION_T8,
    _v_list8< _X_BIND_T_ARG_$$8 >,
    _p_list< _p_list_a<_X_BIND_T_P8>, _p_list_a< _X_BIND_T_ARG_$$8 > >
>
x_delegate(_X_BIND_M_FUNCTION_P8, O o)
{
    typedef _p_list_a<_X_BIND_T_P8>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$8 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list8< _X_BIND_T_ARG_$$8 >       _V_LIST;

    return _m_delegate_function8< R, O, _X_BIND_M_FUNCTION_T8, _V_LIST, _P_LIST >(o, f, _X_BIND_V_ARG_$8);
}

template<class C, class O, class R, _X_BIND_TP_P8>
_m_delegate_function8
<
    R, O, _X_BIND_M_FUNCTION_T8 const,
    _v_list8< _X_BIND_T_ARG_$$8 >,
    _p_list< _p_list_a<_X_BIND_T_P8>, _p_list_a< _X_BIND_T_ARG_$$8 > >
>
x_delegate(_X_BIND_M_FUNCTION_P8 const, O o)
{
    typedef _p_list_a<_X_BIND_T_P8>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$8 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list8< _X_BIND_T_ARG_$$8 >       _V_LIST;

    return _m_delegate_function8< R, O, _X_BIND_M_FUNCTION_T8 const, _V_LIST, _P_LIST >(o, f, _X_BIND_V_ARG_$8);
}
//}}end

//{{start
//!#9
template<class C, class O, class R, _X_BIND_TP_P9>
_m_delegate_function9
<
    R, O, _X_BIND_M_FUNCTION_T9,
    _v_list9< _X_BIND_T_ARG_$$9 >,
    _p_list< _p_list_a<_X_BIND_T_P9>, _p_list_a< _X_BIND_T_ARG_$$9 > >
>
x_delegate(_X_BIND_M_FUNCTION_P9, O o)
{
    typedef _p_list_a<_X_BIND_T_P9>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$9 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list9< _X_BIND_T_ARG_$$9 >       _V_LIST;

    return _m_delegate_function9< R, O, _X_BIND_M_FUNCTION_T9, _V_LIST, _P_LIST >(o, f, _X_BIND_V_ARG_$9);
}

template<class C, class O, class R, _X_BIND_TP_P9>
_m_delegate_function9
<
    R, O, _X_BIND_M_FUNCTION_T9 const,
    _v_list9< _X_BIND_T_ARG_$$9 >,
    _p_list< _p_list_a<_X_BIND_T_P9>, _p_list_a< _X_BIND_T_ARG_$$9 > >
>
x_delegate(_X_BIND_M_FUNCTION_P9 const, O o)
{
    typedef _p_list_a<_X_BIND_T_P9>             _P_LIST_A;
    typedef _p_list_a< _X_BIND_T_ARG_$$9 >      _C_LIST_A;
    typedef _p_list<_P_LIST_A, _C_LIST_A>       _P_LIST;
    typedef _v_list9< _X_BIND_T_ARG_$$9 >       _V_LIST;

    return _m_delegate_function9< R, O, _X_BIND_M_FUNCTION_T9 const, _V_LIST, _P_LIST >(o, f, _X_BIND_V_ARG_$9);
}
//}}end


X_NS_END(n_bind)

#endif //__X_WRAPPER_COMMON_BIND_DELEGATE_MEMBER_H__
