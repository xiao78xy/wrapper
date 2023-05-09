#ifndef  __X_WRAPPER_COMMON_BIND_PRIVATE_H__
#define  __X_WRAPPER_COMMON_BIND_PRIVATE_H__


#define X_BIND_T_FUNCTION   0X01
#define X_BIND_T_BIND       0X02

#include "_bind_m.h"
 

X_NS_BEGIN(n_bind);

// typedef N_TOOLS::s_int_type<1>  t_x_function_type;
// typedef N_TOOLS::s_int_type<2>  t_m_bind_function_type;
// typedef N_TOOLS::s_int_type<3>  t_s_bind_function_type;
// typedef N_TOOLS::s_int_type<4>  t_m_delegate_function_type;
// typedef N_TOOLS::s_int_type<5>  t_s_delegate_function_type;
// typedef N_TOOLS::s_int_type<6>  t_m_function_type;
// typedef N_TOOLS::s_int_type<7>  t_s_function_type;


struct  t_x_function_type {};
struct  t_m_bind_function_type {};
struct  t_s_bind_function_type {};
struct  t_m_delegate_function_type {};
struct  t_s_delegate_function_type {};
struct  t_m_function_type {};
struct  t_s_function_type {};
struct  t_m_function_obj_type {};

class  c_function_base/* : public c_heap_check<c_function_base>*/
{};

template<class BindFuncType>
struct s_param_count
{
    X_STATIC_CONST(size_t, value, BindFuncType::ARGS_COUNT);
};

template<class FunctorType>
inline size_t x_param_count(const FunctorType& _func)
{
    typedef s_param_count<FunctorType>  _t_param_count;
    _t_param_count  __pc; 

    return s_param_count<FunctorType>::value;
}

#include "_bind_macro.h"

X_NS_END(n_bind)

#endif //__X_WRAPPER_COMMON_BIND_PRIVATE_H__
