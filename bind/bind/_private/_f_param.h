#ifndef  __X_TOOL_PRIVATE_FUNCTION_PARAM_H__
#define  __X_TOOL_PRIVATE_FUNCTION_PARAM_H__


/*!
-*\file    _f_param.h
-*\author  XW
-*\date    2013/11/30   10:43
-*\brief
-*\note
-*\warning
-*/

#include "../bind.hpp"
#include "_i_arg.h"

namespace bind_private
{
    template<class Type>
    struct f_param
    {
        typedef Type    type;

        typedef typename X_TTL_IF_TYPE
        (
            X_TTL_IS_REFERENCE(type) || X_TTL_IS_POIRNTER(type) || X_TTL_IS_SMALL_TYPE(type) || X_TTL_IS_INNER(type)
            , type
            , typename X_TTL_ADD_CONST_REFERENCE(type)
        )
            value_type;
         
    };
}

//!< 函数参数
#define _X_BIND_P(T)    typename bind_private::f_param<T>::value_type


#define _X_BIND_T(T)    typename bind_private::f_param<T>::value_type


//!< 返回值
#define _X_BIND_R(T)    typename bind_private::f_param<T>::value_type


//!< 构造函数参数
#define _X_BIND_C       _X_BIND_R


#endif //__X_TOOL_PRIVATE_FUNCTION_PARAM_H__
