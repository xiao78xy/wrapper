
#include "_param_count.h"
#include "_s_function.h"

X_NS_BEGIN(n_bind);

//{{start
//!#0
template<class R>
struct s_param_count< _s_bind_function0< R, _X_BIND_S_FUNCTION_T0, _v_list0, _p_list<_p_list_a<>, _p_list_a<> > > >
{
    typedef _s_bind_function0< R, _X_BIND_S_FUNCTION_T0, _v_list0, _p_list<_p_list_a<>, _p_list_a<> > > _t_bind_function;
    X_STATIC_CONST(size_t, value, _t_bind_function::ARGS_COUNT);
};

template<class R>
struct s_param_count< _s_delegate_function0< R, _X_BIND_S_FUNCTION_T0, _v_list0, _p_list<_p_list_a<>, _p_list_a<> > > >
{
    typedef _s_delegate_function0< R, _X_BIND_S_FUNCTION_T0, _v_list0, _p_list<_p_list_a<>, _p_list_a<> > > _t_bind_function;
    X_STATIC_CONST(size_t, value, _t_bind_function::ARGS_COUNT);
};

template<class R>
struct s_param_count< R(*)() >
{
    X_STATIC_CONST(size_t, value, 0);
};

template<class R>
struct s_param_count< R() >
{
    X_STATIC_CONST(size_t, value, 0);
};
//}}end

//{{start
//!#1
template<class R, _X_BIND_TP_P1, _X_BIND_TP_CP1>
struct s_param_count< _s_bind_function1< R, _X_BIND_S_FUNCTION_T1, _v_list1<_X_BIND_T_CP1>, _p_list<_p_list_a<_X_BIND_T_P1>, _p_list_a<_X_BIND_T_CP1> > > >
{
    typedef _s_bind_function1< R, _X_BIND_S_FUNCTION_T1, _v_list1<_X_BIND_T_CP1>, _p_list<_p_list_a<_X_BIND_T_P1>, _p_list_a<_X_BIND_T_CP1> > > _t_bind_function;

    X_STATIC_CONST(size_t, value, _t_bind_function::ARGS_COUNT);
};

template<class R, _X_BIND_TP_P1, _X_BIND_TP_CP1>
struct s_param_count< _s_delegate_function1< R, _X_BIND_S_FUNCTION_T1, _v_list1<_X_BIND_T_CP1>, _p_list<_p_list_a<_X_BIND_T_P1>, _p_list_a<_X_BIND_T_CP1> > > >
{
    typedef _s_delegate_function1< R, _X_BIND_S_FUNCTION_T1, _v_list1<_X_BIND_T_CP1>, _p_list<_p_list_a<_X_BIND_T_P1>, _p_list_a<_X_BIND_T_CP1> > > _t_bind_function;

    X_STATIC_CONST(size_t, value, _t_bind_function::ARGS_COUNT);
};

template<class R, _X_BIND_TP_P1>
struct s_param_count< _X_BIND_S_FUNCTION_T1 >
{
    X_STATIC_CONST(size_t, value, 1);
};

template<class R, _X_BIND_TP_P1>
struct s_param_count< _X_BIND_S_FUNCTION_RT1 >
{
    X_STATIC_CONST(size_t, value, 1);
};
//}}end

//{{start
//!#2
template<class R, _X_BIND_TP_P2, _X_BIND_TP_CP2>
struct s_param_count< _s_bind_function2< R, _X_BIND_S_FUNCTION_T2, _v_list2<_X_BIND_T_CP2>, _p_list<_p_list_a<_X_BIND_T_P2>, _p_list_a<_X_BIND_T_CP2> > > >
{
    typedef _s_bind_function2< R, _X_BIND_S_FUNCTION_T2, _v_list2<_X_BIND_T_CP2>, _p_list<_p_list_a<_X_BIND_T_P2>, _p_list_a<_X_BIND_T_CP2> > > _t_bind_function;

    X_STATIC_CONST(size_t, value, _t_bind_function::ARGS_COUNT);
};

template<class R, _X_BIND_TP_P2, _X_BIND_TP_CP2>
struct s_param_count< _s_delegate_function2< R, _X_BIND_S_FUNCTION_T2, _v_list2<_X_BIND_T_CP2>, _p_list<_p_list_a<_X_BIND_T_P2>, _p_list_a<_X_BIND_T_CP2> > > >
{
    typedef _s_delegate_function2< R, _X_BIND_S_FUNCTION_T2, _v_list2<_X_BIND_T_CP2>, _p_list<_p_list_a<_X_BIND_T_P2>, _p_list_a<_X_BIND_T_CP2> > > _t_bind_function;

    X_STATIC_CONST(size_t, value, _t_bind_function::ARGS_COUNT);
};

template<class R, _X_BIND_TP_P2>
struct s_param_count< _X_BIND_S_FUNCTION_T2 >
{
    X_STATIC_CONST(size_t, value, 2);
};

template<class R, _X_BIND_TP_P2>
struct s_param_count< _X_BIND_S_FUNCTION_RT2 >
{
    X_STATIC_CONST(size_t, value, 2);
};
//}}end

//{{start
//!#3
template<class R, _X_BIND_TP_P3, _X_BIND_TP_CP3>
struct s_param_count< _s_bind_function3< R, _X_BIND_S_FUNCTION_T3, _v_list3<_X_BIND_T_CP3>, _p_list<_p_list_a<_X_BIND_T_P3>, _p_list_a<_X_BIND_T_CP3> > > >
{
    typedef _s_bind_function3< R, _X_BIND_S_FUNCTION_T3, _v_list3<_X_BIND_T_CP3>, _p_list<_p_list_a<_X_BIND_T_P3>, _p_list_a<_X_BIND_T_CP3> > > _t_bind_function;

    X_STATIC_CONST(size_t, value, _t_bind_function::ARGS_COUNT);
};

template<class R, _X_BIND_TP_P3, _X_BIND_TP_CP3>
struct s_param_count< _s_delegate_function3< R, _X_BIND_S_FUNCTION_T3, _v_list3<_X_BIND_T_CP3>, _p_list<_p_list_a<_X_BIND_T_P3>, _p_list_a<_X_BIND_T_CP3> > > >
{
    typedef _s_delegate_function3< R, _X_BIND_S_FUNCTION_T3, _v_list3<_X_BIND_T_CP3>, _p_list<_p_list_a<_X_BIND_T_P3>, _p_list_a<_X_BIND_T_CP3> > > _t_bind_function;

    X_STATIC_CONST(size_t, value, _t_bind_function::ARGS_COUNT);
};

template<class R, _X_BIND_TP_P3>
struct s_param_count< _X_BIND_S_FUNCTION_T3 >
{
    X_STATIC_CONST(size_t, value, 3);
};

template<class R, _X_BIND_TP_P3>
struct s_param_count< _X_BIND_S_FUNCTION_RT3 >
{
    X_STATIC_CONST(size_t, value, 3);
};
//}}end

//{{start
//!#4
template<class R, _X_BIND_TP_P4, _X_BIND_TP_CP4>
struct s_param_count< _s_bind_function4< R, _X_BIND_S_FUNCTION_T4, _v_list4<_X_BIND_T_CP4>, _p_list<_p_list_a<_X_BIND_T_P4>, _p_list_a<_X_BIND_T_CP4> > > >
{
    typedef _s_bind_function4< R, _X_BIND_S_FUNCTION_T4, _v_list4<_X_BIND_T_CP4>, _p_list<_p_list_a<_X_BIND_T_P4>, _p_list_a<_X_BIND_T_CP4> > > _t_bind_function;

    X_STATIC_CONST(size_t, value, _t_bind_function::ARGS_COUNT);
};

template<class R, _X_BIND_TP_P4, _X_BIND_TP_CP4>
struct s_param_count< _s_delegate_function4< R, _X_BIND_S_FUNCTION_T4, _v_list4<_X_BIND_T_CP4>, _p_list<_p_list_a<_X_BIND_T_P4>, _p_list_a<_X_BIND_T_CP4> > > >
{
    typedef _s_delegate_function4< R, _X_BIND_S_FUNCTION_T4, _v_list4<_X_BIND_T_CP4>, _p_list<_p_list_a<_X_BIND_T_P4>, _p_list_a<_X_BIND_T_CP4> > > _t_bind_function;

    X_STATIC_CONST(size_t, value, _t_bind_function::ARGS_COUNT);
};

template<class R, _X_BIND_TP_P4>
struct s_param_count< _X_BIND_S_FUNCTION_T4 >
{
    X_STATIC_CONST(size_t, value, 4);
};

template<class R, _X_BIND_TP_P4>
struct s_param_count< _X_BIND_S_FUNCTION_RT4 >
{
    X_STATIC_CONST(size_t, value, 4);
};
//}}end

//{{start
//!#5
template<class R, _X_BIND_TP_P5, _X_BIND_TP_CP5>
struct s_param_count< _s_bind_function5< R, _X_BIND_S_FUNCTION_T5, _v_list5<_X_BIND_T_CP5>, _p_list<_p_list_a<_X_BIND_T_P5>, _p_list_a<_X_BIND_T_CP5> > > >
{
    typedef _s_bind_function5< R, _X_BIND_S_FUNCTION_T5, _v_list5<_X_BIND_T_CP5>, _p_list<_p_list_a<_X_BIND_T_P5>, _p_list_a<_X_BIND_T_CP5> > > _t_bind_function;

    X_STATIC_CONST(size_t, value, _t_bind_function::ARGS_COUNT);
};

template<class R, _X_BIND_TP_P5, _X_BIND_TP_CP5>
struct s_param_count< _s_delegate_function5< R, _X_BIND_S_FUNCTION_T5, _v_list5<_X_BIND_T_CP5>, _p_list<_p_list_a<_X_BIND_T_P5>, _p_list_a<_X_BIND_T_CP5> > > >
{
    typedef _s_delegate_function5< R, _X_BIND_S_FUNCTION_T5, _v_list5<_X_BIND_T_CP5>, _p_list<_p_list_a<_X_BIND_T_P5>, _p_list_a<_X_BIND_T_CP5> > > _t_bind_function;

    X_STATIC_CONST(size_t, value, _t_bind_function::ARGS_COUNT);
};

template<class R, _X_BIND_TP_P5>
struct s_param_count< _X_BIND_S_FUNCTION_T5 >
{
    X_STATIC_CONST(size_t, value, 5);
};

template<class R, _X_BIND_TP_P5>
struct s_param_count< _X_BIND_S_FUNCTION_RT5 >
{
    X_STATIC_CONST(size_t, value, 5);
};
//}}end

//{{start
//!#6
template<class R, _X_BIND_TP_P6, _X_BIND_TP_CP6>
struct s_param_count< _s_bind_function6< R, _X_BIND_S_FUNCTION_T6, _v_list6<_X_BIND_T_CP6>, _p_list<_p_list_a<_X_BIND_T_P6>, _p_list_a<_X_BIND_T_CP6> > > >
{
    typedef _s_bind_function6< R, _X_BIND_S_FUNCTION_T6, _v_list6<_X_BIND_T_CP6>, _p_list<_p_list_a<_X_BIND_T_P6>, _p_list_a<_X_BIND_T_CP6> > > _t_bind_function;

    X_STATIC_CONST(size_t, value, _t_bind_function::ARGS_COUNT);
};

template<class R, _X_BIND_TP_P6, _X_BIND_TP_CP6>
struct s_param_count< _s_delegate_function6< R, _X_BIND_S_FUNCTION_T6, _v_list6<_X_BIND_T_CP6>, _p_list<_p_list_a<_X_BIND_T_P6>, _p_list_a<_X_BIND_T_CP6> > > >
{
    typedef _s_delegate_function6< R, _X_BIND_S_FUNCTION_T6, _v_list6<_X_BIND_T_CP6>, _p_list<_p_list_a<_X_BIND_T_P6>, _p_list_a<_X_BIND_T_CP6> > > _t_bind_function;

    X_STATIC_CONST(size_t, value, _t_bind_function::ARGS_COUNT);
};

template<class R, _X_BIND_TP_P6>
struct s_param_count< _X_BIND_S_FUNCTION_T6 >
{
    X_STATIC_CONST(size_t, value, 6);
};

template<class R, _X_BIND_TP_P6>
struct s_param_count< _X_BIND_S_FUNCTION_RT6 >
{
    X_STATIC_CONST(size_t, value, 6);
};
//}}end

//{{start
//!#7
template<class R, _X_BIND_TP_P7, _X_BIND_TP_CP7>
struct s_param_count< _s_bind_function7< R, _X_BIND_S_FUNCTION_T7, _v_list7<_X_BIND_T_CP7>, _p_list<_p_list_a<_X_BIND_T_P7>, _p_list_a<_X_BIND_T_CP7> > > >
{
    typedef _s_bind_function7< R, _X_BIND_S_FUNCTION_T7, _v_list7<_X_BIND_T_CP7>, _p_list<_p_list_a<_X_BIND_T_P7>, _p_list_a<_X_BIND_T_CP7> > > _t_bind_function;

    X_STATIC_CONST(size_t, value, _t_bind_function::ARGS_COUNT);
};

template<class R, _X_BIND_TP_P7, _X_BIND_TP_CP7>
struct s_param_count< _s_delegate_function7< R, _X_BIND_S_FUNCTION_T7, _v_list7<_X_BIND_T_CP7>, _p_list<_p_list_a<_X_BIND_T_P7>, _p_list_a<_X_BIND_T_CP7> > > >
{
    typedef _s_delegate_function7< R, _X_BIND_S_FUNCTION_T7, _v_list7<_X_BIND_T_CP7>, _p_list<_p_list_a<_X_BIND_T_P7>, _p_list_a<_X_BIND_T_CP7> > > _t_bind_function;

    X_STATIC_CONST(size_t, value, _t_bind_function::ARGS_COUNT);
};

template<class R, _X_BIND_TP_P7>
struct s_param_count< _X_BIND_S_FUNCTION_T7 >
{
    X_STATIC_CONST(size_t, value, 7);
};

template<class R, _X_BIND_TP_P7>
struct s_param_count< _X_BIND_S_FUNCTION_RT7 >
{
    X_STATIC_CONST(size_t, value, 7);
};
//}}end

//{{start
//!#8
template<class R, _X_BIND_TP_P8, _X_BIND_TP_CP8>
struct s_param_count< _s_bind_function8< R, _X_BIND_S_FUNCTION_T8, _v_list8<_X_BIND_T_CP8>, _p_list<_p_list_a<_X_BIND_T_P8>, _p_list_a<_X_BIND_T_CP8> > > >
{
    typedef _s_bind_function8< R, _X_BIND_S_FUNCTION_T8, _v_list8<_X_BIND_T_CP8>, _p_list<_p_list_a<_X_BIND_T_P8>, _p_list_a<_X_BIND_T_CP8> > > _t_bind_function;

    X_STATIC_CONST(size_t, value, _t_bind_function::ARGS_COUNT);
};

template<class R, _X_BIND_TP_P8, _X_BIND_TP_CP8>
struct s_param_count< _s_delegate_function8< R, _X_BIND_S_FUNCTION_T8, _v_list8<_X_BIND_T_CP8>, _p_list<_p_list_a<_X_BIND_T_P8>, _p_list_a<_X_BIND_T_CP8> > > >
{
    typedef _s_delegate_function8< R, _X_BIND_S_FUNCTION_T8, _v_list8<_X_BIND_T_CP8>, _p_list<_p_list_a<_X_BIND_T_P8>, _p_list_a<_X_BIND_T_CP8> > > _t_bind_function;

    X_STATIC_CONST(size_t, value, _t_bind_function::ARGS_COUNT);
};

template<class R, _X_BIND_TP_P8>
struct s_param_count< _X_BIND_S_FUNCTION_T8 >
{
    X_STATIC_CONST(size_t, value, 8);
};

template<class R, _X_BIND_TP_P8>
struct s_param_count< _X_BIND_S_FUNCTION_RT8 >
{
    X_STATIC_CONST(size_t, value, 8);
};
//}}end

//{{start
//!#9
template<class R, _X_BIND_TP_P9, _X_BIND_TP_CP9>
struct s_param_count< _s_bind_function9< R, _X_BIND_S_FUNCTION_T9, _v_list9<_X_BIND_T_CP9>, _p_list<_p_list_a<_X_BIND_T_P9>, _p_list_a<_X_BIND_T_CP9> > > >
{
    typedef _s_bind_function9< R, _X_BIND_S_FUNCTION_T9, _v_list9<_X_BIND_T_CP9>, _p_list<_p_list_a<_X_BIND_T_P9>, _p_list_a<_X_BIND_T_CP9> > > _t_bind_function;

    X_STATIC_CONST(size_t, value, _t_bind_function::ARGS_COUNT);
};

template<class R, _X_BIND_TP_P9, _X_BIND_TP_CP9>
struct s_param_count< _s_delegate_function9< R, _X_BIND_S_FUNCTION_T9, _v_list9<_X_BIND_T_CP9>, _p_list<_p_list_a<_X_BIND_T_P9>, _p_list_a<_X_BIND_T_CP9> > > >
{
    typedef _s_delegate_function9< R, _X_BIND_S_FUNCTION_T9, _v_list9<_X_BIND_T_CP9>, _p_list<_p_list_a<_X_BIND_T_P9>, _p_list_a<_X_BIND_T_CP9> > > _t_bind_function;

    X_STATIC_CONST(size_t, value, _t_bind_function::ARGS_COUNT);
};

template<class R, _X_BIND_TP_P9>
struct s_param_count< _X_BIND_S_FUNCTION_T9 >
{
    X_STATIC_CONST(size_t, value, 9);
};

template<class R, _X_BIND_TP_P9>
struct s_param_count< _X_BIND_S_FUNCTION_RT9 >
{
    X_STATIC_CONST(size_t, value, 9);
};
//}}end


X_NS_END(n_bind);
