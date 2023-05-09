#ifndef  __X_WRAPPER_COMMON_BIND_STATIC_FUNCTION_SIGNATURE_H__
#define  __X_WRAPPER_COMMON_BIND_STATIC_FUNCTION_SIGNATURE_H__

#include "../bind.hpp"
#include "_p_list.h"

namespace bind_private
{ 

    template
        <
        typename R,
        typename P1  = _p_any, typename P2  = _p_any, typename P3  = _p_any,
        typename P4  = _p_any, typename P5  = _p_any, typename P6  = _p_any,
        typename P7  = _p_any, typename P8  = _p_any, typename P9  = _p_any,
        typename P10 = _p_any, typename P11 = _p_any, typename P12 = _p_any,
        typename P13 = _p_any, typename P14 = _p_any, typename P15 = _p_any,
        typename P16 = _p_any, typename P17 = _p_any, typename P18 = _p_any
        >
        struct s_function_sig
    { 
    public:
        typedef void                                                      function_sig;
    };
}

#endif // __X_WRAPPER_COMMON_BIND_STATIC_FUNCTION_SIGNATURE_H__