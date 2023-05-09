#ifndef __X_WRAPPER_COMMON_BIND_FUNCTION_PRIVATE_H__
#define __X_WRAPPER_COMMON_BIND_FUNCTION_PRIVATE_H__


#include "bind.hpp"
#include "_private/_f_invoker.h"
#include "_private/_f_sig.h"
using namespace bind_private;

X_NS_BEGIN(n_bind);

#define _BIND_FUNCTION_PARAM   _X_BIND_P

//#0
template<class R, class CACHE_TYPE>
class xfunction0
{
public:
    typedef  typename R                                             return_type;
    typedef t_x_function_type                                       function_kind;
    typedef typename s_function_sig<return_type>::function_sig      function_sig;

    enum { ARGS_COUNT = 0 };

    typedef  CACHE_TYPE             _CACHE_TYPE;
    typedef  _p_list_a<>            _P_LIST_A;
    enum
    {
        param_size = _get_param_size<_P_LIST_A, _CACHE_TYPE>::param_size,
    };

    typedef  xfunction0                 this_type;
    typedef  _s_f_cache<param_size>     _t_function_cache;

    typedef  return_type(*invoker_type)(const _t_function_cache&);

public:
    xfunction0()
        :m_invoker(invoker_type())
    {}
    xfunction0(const xfunction0& _func)
        :m_invoker(_func.m_invoker)
    {
        m_function_cache = _func.m_function_cache;
    }
    template<class Functor>
    xfunction0(const Functor& _func)
        : m_invoker(0)
    {
        _assign(_func);
    }

    template<class Functor>
    const this_type& operator = (const Functor& _func)
    {
        _assign(_func);
        return *this;
    }
    const this_type& operator = (const this_type& _func)
    {
        _assign(_func);
        return *this;
    }

    X_INLINE return_type operator()()
    {
        X_ASSERT(m_invoker);
        return m_invoker(m_function_cache);
    }
    X_INLINE return_type operator()() const
    {
        X_ASSERT(m_invoker);
        return m_invoker(m_function_cache);
    }

    X_INLINE operator bool() const
    {
        return m_invoker != invoker_type();
    }
private:
    template<class Functor>
    void _assign(const Functor& _func)
    {
        typedef _s_invoker_inner0<param_size, R, this_type, Functor>  _t_invoker_type;
        m_invoker = &_t_invoker_type::invoker;
        m_function_cache.assign(_func);
    }
    void _assign(const this_type& _func)
    {
        if (X_VERIFY(&_func != this))
        {
            m_invoker           = _func.m_invoker;
            m_function_cache    = _func.m_function_cache;
        }
    }
private:
    _t_function_cache   m_function_cache;
    invoker_type        m_invoker;
};

//{{start
//!#1
template<class R, _X_BIND_TP_P1, class CACHE_TYPE >
class xfunction1
{
public:
    typedef  R                                                                  return_type;
    typedef t_x_function_type                                                   function_kind;
    typedef typename s_function_sig<return_type, _X_BIND_T_P1>::function_sig    function_sig;

    enum { ARGS_COUNT = 1 };

    typedef  CACHE_TYPE                     _CACHE_TYPE;
    typedef  _p_list_a<_X_BIND_T_P1>        _P_LIST_A;
    typedef  xfunction1                     this_type;

    enum
    {
        param_size = _get_param_size<_P_LIST_A, _CACHE_TYPE>::param_size,
    };

    typedef  _s_f_cache<param_size>         _t_function_cache;

    typedef  _BIND_FUNCTION_PARAM(P1)   P1;

    typedef  return_type(*_t_invoker_type)(const _t_function_cache&, _X_BIND_T_P1);

public:
    xfunction1()
        :m_invoker(_t_invoker_type())
    {}
    xfunction1(const xfunction1& _func)
        :m_invoker(_func.m_invoker)
    {
        m_function_cache = _func.m_function_cache;
    }
    template<class Functor>
    xfunction1(const Functor& _func)
        : m_invoker(0)
    {
        _assign(_func);
    }

    template<class Functor>
    const this_type& operator = (const Functor& _func)
    {
        _assign(_func);
        return *this;
    }
    const this_type& operator = (const this_type& _func)
    {
        _assign(_func);
        return *this;
    }

    X_INLINE return_type operator()(_X_BIND_FP_P1)
    {
        return m_invoker(m_function_cache, _X_BIND_FPV_P1);
    }
    X_INLINE return_type operator()(_X_BIND_FP_P1) const
    {
        return m_invoker(m_function_cache, _X_BIND_FPV_P1);
    }

    X_INLINE operator bool() const
    {
        return m_invoker != _t_invoker_type();
    }

private:
    template<class Functor>
    void _assign(const Functor& _func)
    {
        typedef _s_invoker_inner1<param_size, R, this_type, Functor>  _t_invoker_type;
        m_invoker = &_t_invoker_type::invoker;
        m_function_cache.assign(_func);
    }
    void _assign(const this_type& _func)
    {
        if (X_VERIFY(&_func != this))
        {
            m_invoker           = _func.m_invoker;
            m_function_cache    = _func.m_function_cache;
        }
    }

private:
    _t_function_cache   m_function_cache;
    _t_invoker_type     m_invoker;
};
//}}end

//{{start
//!#2
template<class R, _X_BIND_TP_P2, class CACHE_TYPE >
class xfunction2
{
public:
    typedef  R                                                                  return_type;
    typedef t_x_function_type                                                   function_kind;
    typedef typename s_function_sig<return_type, _X_BIND_T_P2>::function_sig    function_sig;

    enum { ARGS_COUNT = 2 };

    typedef  CACHE_TYPE                     _CACHE_TYPE;
    typedef  _p_list_a<_X_BIND_T_P2>        _P_LIST_A;
    typedef  xfunction2                     this_type;

    enum
    {
        param_size = _get_param_size<_P_LIST_A, _CACHE_TYPE>::param_size,
    };

    typedef  _s_f_cache<param_size>         _t_function_cache;

    typedef  _BIND_FUNCTION_PARAM(P1)   P1;
    typedef  _BIND_FUNCTION_PARAM(P2)   P2;

    typedef  return_type(*_t_invoker_type)(const _t_function_cache&, _X_BIND_T_P2);

public:
    xfunction2()
        :m_invoker(_t_invoker_type())
    {}
    xfunction2(const xfunction2& _func)
        :m_invoker(_func.m_invoker)
    {
        m_function_cache = _func.m_function_cache;
    }
    template<class Functor>
    xfunction2(const Functor& _func)
        : m_invoker(0)
    {
        _assign(_func);
    }

    template<class Functor>
    const this_type& operator = (const Functor& _func)
    {
        _assign(_func);
        return *this;
    }
    const this_type& operator = (const this_type& _func)
    {
        _assign(_func);
        return *this;
    }

    X_INLINE return_type operator()(_X_BIND_FP_P2)
    {
        return m_invoker(m_function_cache, _X_BIND_FPV_P2);
    }
    X_INLINE return_type operator()(_X_BIND_FP_P2) const
    {
        return m_invoker(m_function_cache, _X_BIND_FPV_P2);
    }

    X_INLINE operator bool() const
    {
        return m_invoker != _t_invoker_type();
    }

private:
    template<class Functor>
    void _assign(const Functor& _func)
    {
        typedef _s_invoker_inner2<param_size, R, this_type, Functor>  _t_invoker_type;
        m_invoker = &_t_invoker_type::invoker;
        m_function_cache.assign(_func);
    }
    void _assign(const this_type& _func)
    {
        if (X_VERIFY(&_func != this))
        {
            m_invoker           = _func.m_invoker;
            m_function_cache    = _func.m_function_cache;
        }
    }

private:
    _t_function_cache   m_function_cache;
    _t_invoker_type     m_invoker;
};
//}}end

//{{start
//!#3
template<class R, _X_BIND_TP_P3, class CACHE_TYPE >
class xfunction3
{
public:
    typedef  R                                                                  return_type;
    typedef t_x_function_type                                                   function_kind;
    typedef typename s_function_sig<return_type, _X_BIND_T_P3>::function_sig    function_sig;

    enum { ARGS_COUNT = 3 };

    typedef  CACHE_TYPE                     _CACHE_TYPE;
    typedef  _p_list_a<_X_BIND_T_P3>        _P_LIST_A;
    typedef  xfunction3                     this_type;

    enum
    {
        param_size = _get_param_size<_P_LIST_A, _CACHE_TYPE>::param_size,
    };

    typedef  _s_f_cache<param_size>         _t_function_cache;

    typedef  _BIND_FUNCTION_PARAM(P1)   P1;
    typedef  _BIND_FUNCTION_PARAM(P2)   P2;
    typedef  _BIND_FUNCTION_PARAM(P3)   P3;

    typedef  return_type(*_t_invoker_type)(const _t_function_cache&, _X_BIND_T_P3);

public:
    xfunction3()
        :m_invoker(_t_invoker_type())
    {}
    xfunction3(const xfunction3& _func)
        :m_invoker(_func.m_invoker)
    {
        m_function_cache = _func.m_function_cache;
    }
    template<class Functor>
    xfunction3(const Functor& _func)
        : m_invoker(0)
    {
        _assign(_func);
    }

    template<class Functor>
    const this_type& operator = (const Functor& _func)
    {
        _assign(_func);
        return *this;
    }
    const this_type& operator = (const this_type& _func)
    {
        _assign(_func);
        return *this;
    }

    X_INLINE return_type operator()(_X_BIND_FP_P3)
    {
        return m_invoker(m_function_cache, _X_BIND_FPV_P3);
    }
    X_INLINE return_type operator()(_X_BIND_FP_P3) const
    {
        return m_invoker(m_function_cache, _X_BIND_FPV_P3);
    }

    X_INLINE operator bool() const
    {
        return m_invoker != _t_invoker_type();
    }

private:
    template<class Functor>
    void _assign(const Functor& _func)
    {
        typedef _s_invoker_inner3<param_size, R, this_type, Functor>  _t_invoker_type;
        m_invoker = &_t_invoker_type::invoker;
        m_function_cache.assign(_func);
    }
    void _assign(const this_type& _func)
    {
        if (X_VERIFY(&_func != this))
        {
            m_invoker           = _func.m_invoker;
            m_function_cache    = _func.m_function_cache;
        }
    }

private:
    _t_function_cache   m_function_cache;
    _t_invoker_type     m_invoker;
};
//}}end

//{{start
//!#4
template<class R, _X_BIND_TP_P4, class CACHE_TYPE >
class xfunction4
{
public:
    typedef  R                                                                  return_type;
    typedef t_x_function_type                                                   function_kind;
    typedef typename s_function_sig<return_type, _X_BIND_T_P4>::function_sig    function_sig;

    enum { ARGS_COUNT = 4 };

    typedef  CACHE_TYPE                     _CACHE_TYPE;
    typedef  _p_list_a<_X_BIND_T_P4>        _P_LIST_A;
    typedef  xfunction4                     this_type;

    enum
    {
        param_size = _get_param_size<_P_LIST_A, _CACHE_TYPE>::param_size,
    };

    typedef  _s_f_cache<param_size>         _t_function_cache;

    typedef  _BIND_FUNCTION_PARAM(P1)   P1;
    typedef  _BIND_FUNCTION_PARAM(P2)   P2;
    typedef  _BIND_FUNCTION_PARAM(P3)   P3;
    typedef  _BIND_FUNCTION_PARAM(P4)   P4;

    typedef  return_type(*_t_invoker_type)(const _t_function_cache&, _X_BIND_T_P4);

public:
    xfunction4()
        :m_invoker(_t_invoker_type())
    {}
    xfunction4(const xfunction4& _func)
        :m_invoker(_func.m_invoker)
    {
        m_function_cache = _func.m_function_cache;
    }
    template<class Functor>
    xfunction4(const Functor& _func)
        : m_invoker(0)
    {
        _assign(_func);
    }

    template<class Functor>
    const this_type& operator = (const Functor& _func)
    {
        _assign(_func);
        return *this;
    }
    const this_type& operator = (const this_type& _func)
    {
        _assign(_func);
        return *this;
    }

    X_INLINE return_type operator()(_X_BIND_FP_P4)
    {
        return m_invoker(m_function_cache, _X_BIND_FPV_P4);
    }
    X_INLINE return_type operator()(_X_BIND_FP_P4) const
    {
        return m_invoker(m_function_cache, _X_BIND_FPV_P4);
    }

    X_INLINE operator bool() const
    {
        return m_invoker != _t_invoker_type();
    }

private:
    template<class Functor>
    void _assign(const Functor& _func)
    {
        typedef _s_invoker_inner4<param_size, R, this_type, Functor>  _t_invoker_type;
        m_invoker = &_t_invoker_type::invoker;
        m_function_cache.assign(_func);
    }
    void _assign(const this_type& _func)
    {
        if (X_VERIFY(&_func != this))
        {
            m_invoker           = _func.m_invoker;
            m_function_cache    = _func.m_function_cache;
        }
    }

private:
    _t_function_cache   m_function_cache;
    _t_invoker_type     m_invoker;
};
//}}end

//{{start
//!#5
template<class R, _X_BIND_TP_P5, class CACHE_TYPE >
class xfunction5
{
public:
    typedef  R                                                                  return_type;
    typedef t_x_function_type                                                   function_kind;
    typedef typename s_function_sig<return_type, _X_BIND_T_P5>::function_sig    function_sig;

    enum { ARGS_COUNT = 5 };

    typedef  CACHE_TYPE                     _CACHE_TYPE;
    typedef  _p_list_a<_X_BIND_T_P5>        _P_LIST_A;
    typedef  xfunction5                     this_type;

    enum
    {
        param_size = _get_param_size<_P_LIST_A, _CACHE_TYPE>::param_size,
    };

    typedef  _s_f_cache<param_size>         _t_function_cache;

    typedef  _BIND_FUNCTION_PARAM(P1)   P1;
    typedef  _BIND_FUNCTION_PARAM(P2)   P2;
    typedef  _BIND_FUNCTION_PARAM(P3)   P3;
    typedef  _BIND_FUNCTION_PARAM(P4)   P4;
    typedef  _BIND_FUNCTION_PARAM(P5)   P5;

    typedef  return_type(*_t_invoker_type)(const _t_function_cache&, _X_BIND_T_P5);

public:
    xfunction5()
        :m_invoker(_t_invoker_type())
    {}
    xfunction5(const xfunction5& _func)
        :m_invoker(_func.m_invoker)
    {
        m_function_cache = _func.m_function_cache;
    }
    template<class Functor>
    xfunction5(const Functor& _func)
        : m_invoker(0)
    {
        _assign(_func);
    }

    template<class Functor>
    const this_type& operator = (const Functor& _func)
    {
        _assign(_func);
        return *this;
    }
    const this_type& operator = (const this_type& _func)
    {
        _assign(_func);
        return *this;
    }

    X_INLINE return_type operator()(_X_BIND_FP_P5)
    {
        return m_invoker(m_function_cache, _X_BIND_FPV_P5);
    }
    X_INLINE return_type operator()(_X_BIND_FP_P5) const
    {
        return m_invoker(m_function_cache, _X_BIND_FPV_P5);
    }

    X_INLINE operator bool() const
    {
        return m_invoker != _t_invoker_type();
    }

private:
    template<class Functor>
    void _assign(const Functor& _func)
    {
        typedef _s_invoker_inner5<param_size, R, this_type, Functor>  _t_invoker_type;
        m_invoker = &_t_invoker_type::invoker;
        m_function_cache.assign(_func);
    }
    void _assign(const this_type& _func)
    {
        if (X_VERIFY(&_func != this))
        {
            m_invoker           = _func.m_invoker;
            m_function_cache    = _func.m_function_cache;
        }
    }

private:
    _t_function_cache   m_function_cache;
    _t_invoker_type     m_invoker;
};
//}}end

//{{start
//!#6
template<class R, _X_BIND_TP_P6, class CACHE_TYPE >
class xfunction6
{
public:
    typedef  R                                                                  return_type;
    typedef t_x_function_type                                                   function_kind;
    typedef typename s_function_sig<return_type, _X_BIND_T_P6>::function_sig    function_sig;

    enum { ARGS_COUNT = 6 };

    typedef  CACHE_TYPE                     _CACHE_TYPE;
    typedef  _p_list_a<_X_BIND_T_P6>        _P_LIST_A;
    typedef  xfunction6                     this_type;

    enum
    {
        param_size = _get_param_size<_P_LIST_A, _CACHE_TYPE>::param_size,
    };

    typedef  _s_f_cache<param_size>         _t_function_cache;

    typedef  _BIND_FUNCTION_PARAM(P1)   P1;
    typedef  _BIND_FUNCTION_PARAM(P2)   P2;
    typedef  _BIND_FUNCTION_PARAM(P3)   P3;
    typedef  _BIND_FUNCTION_PARAM(P4)   P4;
    typedef  _BIND_FUNCTION_PARAM(P5)   P5;
    typedef  _BIND_FUNCTION_PARAM(P6)   P6;

    typedef  return_type(*_t_invoker_type)(const _t_function_cache&, _X_BIND_T_P6);

public:
    xfunction6()
        :m_invoker(_t_invoker_type())
    {}
    xfunction6(const xfunction6& _func)
        :m_invoker(_func.m_invoker)
    {
        m_function_cache = _func.m_function_cache;
    }
    template<class Functor>
    xfunction6(const Functor& _func)
        : m_invoker(0)
    {
        _assign(_func);
    }

    template<class Functor>
    const this_type& operator = (const Functor& _func)
    {
        _assign(_func);
        return *this;
    }
    const this_type& operator = (const this_type& _func)
    {
        _assign(_func);
        return *this;
    }

    X_INLINE return_type operator()(_X_BIND_FP_P6)
    {
        return m_invoker(m_function_cache, _X_BIND_FPV_P6);
    }
    X_INLINE return_type operator()(_X_BIND_FP_P6) const
    {
        return m_invoker(m_function_cache, _X_BIND_FPV_P6);
    }

    X_INLINE operator bool() const
    {
        return m_invoker != _t_invoker_type();
    }

private:
    template<class Functor>
    void _assign(const Functor& _func)
    {
        typedef _s_invoker_inner6<param_size, R, this_type, Functor>  _t_invoker_type;
        m_invoker = &_t_invoker_type::invoker;
        m_function_cache.assign(_func);
    }
    void _assign(const this_type& _func)
    {
        if (X_VERIFY(&_func != this))
        {
            m_invoker           = _func.m_invoker;
            m_function_cache    = _func.m_function_cache;
        }
    }

private:
    _t_function_cache   m_function_cache;
    _t_invoker_type     m_invoker;
};
//}}end


//{{start
//!#7
template<class R, _X_BIND_TP_P7, class CACHE_TYPE >
class xfunction7
{
public:
    typedef  R                                                                  return_type;
    typedef t_x_function_type                                                   function_kind;
    typedef typename s_function_sig<return_type, _X_BIND_T_P7>::function_sig    function_sig;

    enum { ARGS_COUNT = 7 };

    typedef  CACHE_TYPE                     _CACHE_TYPE;
    typedef  _p_list_a<_X_BIND_T_P7>        _P_LIST_A;
    typedef  xfunction7                     this_type;

    enum
    {
        param_size = _get_param_size<_P_LIST_A, _CACHE_TYPE>::param_size,
    };

    typedef  _s_f_cache<param_size>         _t_function_cache;

    typedef  _BIND_FUNCTION_PARAM(P1)   P1;
    typedef  _BIND_FUNCTION_PARAM(P2)   P2;
    typedef  _BIND_FUNCTION_PARAM(P3)   P3;
    typedef  _BIND_FUNCTION_PARAM(P4)   P4;
    typedef  _BIND_FUNCTION_PARAM(P5)   P5;
    typedef  _BIND_FUNCTION_PARAM(P6)   P6;
    typedef  _BIND_FUNCTION_PARAM(P7)   P7;

    typedef  return_type(*_t_invoker_type)(const _t_function_cache&, _X_BIND_T_P7);

public:
    xfunction7()
        :m_invoker(_t_invoker_type())
    {}
    xfunction7(const xfunction7& _func)
        :m_invoker(_func.m_invoker)
    {
        m_function_cache = _func.m_function_cache;
    }
    template<class Functor>
    xfunction7(const Functor& _func)
        : m_invoker(0)
    {
        _assign(_func);
    }

    template<class Functor>
    const this_type& operator = (const Functor& _func)
    {
        _assign(_func);
        return *this;
    }
    const this_type& operator = (const this_type& _func)
    {
        _assign(_func);
        return *this;
    }

    X_INLINE return_type operator()(_X_BIND_FP_P7)
    {
        return m_invoker(m_function_cache, _X_BIND_FPV_P7);
    }
    X_INLINE return_type operator()(_X_BIND_FP_P7) const
    {
        return m_invoker(m_function_cache, _X_BIND_FPV_P7);
    }

    X_INLINE operator bool() const
    {
        return m_invoker != _t_invoker_type();
    }

private:
    template<class Functor>
    void _assign(const Functor& _func)
    {
        typedef _s_invoker_inner7<param_size, R, this_type, Functor>  _t_invoker_type;
        m_invoker = &_t_invoker_type::invoker;
        m_function_cache.assign(_func);
    }
    void _assign(const this_type& _func)
    {
        if (X_VERIFY(&_func != this))
        {
            m_invoker           = _func.m_invoker;
            m_function_cache    = _func.m_function_cache;
        }
    }

private:
    _t_function_cache   m_function_cache;
    _t_invoker_type     m_invoker;
};
//}}end

//{{start
//!#8
template<class R, _X_BIND_TP_P8, class CACHE_TYPE >
class xfunction8
{
public:
    typedef  R                                                                  return_type;
    typedef t_x_function_type                                                   function_kind;
    typedef typename s_function_sig<return_type, _X_BIND_T_P8>::function_sig    function_sig;

    enum { ARGS_COUNT = 8 };

    typedef  CACHE_TYPE                     _CACHE_TYPE;
    typedef  _p_list_a<_X_BIND_T_P8>        _P_LIST_A;
    typedef  xfunction8                     this_type;

    enum
    {
        param_size = _get_param_size<_P_LIST_A, _CACHE_TYPE>::param_size,
    };

    typedef  _s_f_cache<param_size>         _t_function_cache;

    typedef  _BIND_FUNCTION_PARAM(P1)   P1;
    typedef  _BIND_FUNCTION_PARAM(P2)   P2;
    typedef  _BIND_FUNCTION_PARAM(P3)   P3;
    typedef  _BIND_FUNCTION_PARAM(P4)   P4;
    typedef  _BIND_FUNCTION_PARAM(P5)   P5;
    typedef  _BIND_FUNCTION_PARAM(P6)   P6;
    typedef  _BIND_FUNCTION_PARAM(P7)   P7;
    typedef  _BIND_FUNCTION_PARAM(P8)   P8;

    typedef  return_type(*_t_invoker_type)(const _t_function_cache&, _X_BIND_T_P8);

public:
    xfunction8()
        :m_invoker(_t_invoker_type())
    {}
    xfunction8(const xfunction8& _func)
        :m_invoker(_func.m_invoker)
    {
        m_function_cache = _func.m_function_cache;
    }
    template<class Functor>
    xfunction8(const Functor& _func)
        : m_invoker(0)
    {
        _assign(_func);
    }

    template<class Functor>
    const this_type& operator = (const Functor& _func)
    {
        _assign(_func);
        return *this;
    }
    const this_type& operator = (const this_type& _func)
    {
        _assign(_func);
        return *this;
    }

    X_INLINE return_type operator()(_X_BIND_FP_P8)
    {
        return m_invoker(m_function_cache, _X_BIND_FPV_P8);
    }
    X_INLINE return_type operator()(_X_BIND_FP_P8) const
    {
        return m_invoker(m_function_cache, _X_BIND_FPV_P8);
    }

    X_INLINE operator bool() const
    {
        return m_invoker != _t_invoker_type();
    }

private:
    template<class Functor>
    void _assign(const Functor& _func)
    {
        typedef _s_invoker_inner8<param_size, R, this_type, Functor>  _t_invoker_type;
        m_invoker = &_t_invoker_type::invoker;
        m_function_cache.assign(_func);
    }
    void _assign(const this_type& _func)
    {
        if (X_VERIFY(&_func != this))
        {
            m_invoker           = _func.m_invoker;
            m_function_cache    = _func.m_function_cache;
        }
    }

private:
    _t_function_cache   m_function_cache;
    _t_invoker_type     m_invoker;
};
//}}end

//{{start
//!#9
template<class R, _X_BIND_TP_P9, class CACHE_TYPE >
class xfunction9
{
public:
    typedef  R                                                                  return_type;
    typedef t_x_function_type                                                   function_kind;
    typedef typename s_function_sig<return_type, _X_BIND_T_P9>::function_sig    function_sig;

    enum { ARGS_COUNT = 9 };

    typedef  CACHE_TYPE                     _CACHE_TYPE;
    typedef  _p_list_a<_X_BIND_T_P9>        _P_LIST_A;
    typedef  xfunction9                     this_type;

    enum
    {
        param_size = _get_param_size<_P_LIST_A, _CACHE_TYPE>::param_size,
    };

    typedef  _s_f_cache<param_size>         _t_function_cache;

    typedef  _BIND_FUNCTION_PARAM(P1)   P1;
    typedef  _BIND_FUNCTION_PARAM(P2)   P2;
    typedef  _BIND_FUNCTION_PARAM(P3)   P3;
    typedef  _BIND_FUNCTION_PARAM(P4)   P4;
    typedef  _BIND_FUNCTION_PARAM(P5)   P5;
    typedef  _BIND_FUNCTION_PARAM(P6)   P6;
    typedef  _BIND_FUNCTION_PARAM(P7)   P7;
    typedef  _BIND_FUNCTION_PARAM(P8)   P8;
    typedef  _BIND_FUNCTION_PARAM(P9)   P9;

    typedef  return_type(*_t_invoker_type)(const _t_function_cache&, _X_BIND_T_P9);

public:
    xfunction9()
        :m_invoker(_t_invoker_type())
    {}
    xfunction9(const xfunction9& _func)
        :m_invoker(_func.m_invoker)
    {
        m_function_cache = _func.m_function_cache;
    }
    template<class Functor>
    xfunction9(const Functor& _func)
        : m_invoker(0)
    {
        _assign(_func);
    }

    template<class Functor>
    const this_type& operator = (const Functor& _func)
    {
        _assign(_func);
        return *this;
    }
    const this_type& operator = (const this_type& _func)
    {
        _assign(_func);
        return *this;
    }

    X_INLINE return_type operator()(_X_BIND_FP_P9)
    {
        return m_invoker(m_function_cache, _X_BIND_FPV_P9);
    }
    X_INLINE return_type operator()(_X_BIND_FP_P9) const
    {
        return m_invoker(m_function_cache, _X_BIND_FPV_P9);
    }

    X_INLINE operator bool() const
    {
        return m_invoker != _t_invoker_type();
    }

private:
    template<class Functor>
    void _assign(const Functor& _func)
    {
        typedef _s_invoker_inner9<param_size, R, this_type, Functor>  _t_invoker_type;
        m_invoker = &_t_invoker_type::invoker;
        m_function_cache.assign(_func);
    }
    void _assign(const this_type& _func)
    {
        if (X_VERIFY(&_func != this))
        {
            m_invoker           = _func.m_invoker;
            m_function_cache    = _func.m_function_cache;
        }
    }

private:
    _t_function_cache   m_function_cache;
    _t_invoker_type     m_invoker;
};
//}}end


X_NS_END(n_bind)

#endif  //__X_WRAPPER_COMMON_BIND_FUNCTION_PRIVATE_H__
