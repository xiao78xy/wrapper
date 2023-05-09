#ifndef  __X_WRAPPER_COMMON_BIND_GUARD_H__
#define  __X_WRAPPER_COMMON_BIND_GUARD_H__

#include "bind.hpp"

X_NS_BEGIN(n_bind);

class _c_guard_object
{
public:
    X_FORCE_INLINE _c_guard_object()
        :m_need_exec(true)
    {}

    X_FORCE_INLINE _c_guard_object(bool _need_exec)
        : m_need_exec(_need_exec)
    {}

    X_FORCE_INLINE void not_exec() const
    {
        m_need_exec = false;
    }

    X_FORCE_INLINE void exec() const
    {
        m_need_exec = true;
    }

    X_FORCE_INLINE bool    is_need_exec()const
    {
        return m_need_exec;
    }

    X_FORCE_INLINE void    set_need_exec(bool _need_exec) const
    {
        m_need_exec = _need_exec;
    }

protected:
    _c_guard_object(const _c_guard_object& _other);
    _c_guard_object& operator=(const _c_guard_object&);

private:
    mutable
        bool    m_need_exec;
};

template<class F>
class _c_guard_impl
    : public _c_guard_object
{
    typedef F   _t_rollback_function;

public:
    explicit _c_guard_impl(const _t_rollback_function& f)
        :m_exec_function(f)
    {}

    ~_c_guard_impl()
    {
        if (is_need_exec())
        {
            try
            {
                m_exec_function();
            }
            catch (...)
            {
                X_ASSERT(0);
            }
        }
    }

private:
    _c_guard_impl& operator=(const _c_guard_impl&);

private:
    _t_rollback_function   m_exec_function;
};

/*! -|attention|-!! [12/4/2013 XW]*/
typedef  const _c_guard_object& c_scope_guard;

struct _s_guard_process_loop_1
    : public X_NAME::n_bind::_c_guard_object
{
    _s_guard_process_loop_1(c_scope_guard _exe_gruard, bool _is_exec)
        :X_NAME::n_bind::_c_guard_object(true)
    {
        _exe_gruard.set_need_exec(_is_exec);
    }

    _s_guard_process_loop_1()
        :X_NAME::n_bind::_c_guard_object(true)
    {}
};

X_NS_END(n_bind)

#endif //__X_WRAPPER_COMMON_BIND_GUARD_H__
