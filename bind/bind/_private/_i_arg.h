#ifndef  __X_WRAPPER_PRIVATE_INT_2_TYPE_H__
#define  __X_WRAPPER_PRIVATE_INT_2_TYPE_H__


/*!
*\file    _i_arg.h
*\author  xiaowei@myhexin.com
*\date    2013/12/2   10:23
*\brief
*\note
*\warning
*/


#define  $1  bind_private::_i_arg<1>()
#define  $2  bind_private::_i_arg<2>()
#define  $3  bind_private::_i_arg<3>()
#define  $4  bind_private::_i_arg<4>()
#define  $5  bind_private::_i_arg<5>()
#define  $6  bind_private::_i_arg<6>()
#define  $7  bind_private::_i_arg<7>()
#define  $8  bind_private::_i_arg<8>()
#define  $9  bind_private::_i_arg<9>()

#define  $$  bind_private::_i_arg

#define _$1  bind_private::_i_arg<1>
#define _$2  bind_private::_i_arg<2>
#define _$3  bind_private::_i_arg<3>
#define _$4  bind_private::_i_arg<4>
#define _$5  bind_private::_i_arg<5>
#define _$6  bind_private::_i_arg<6>
#define _$7  bind_private::_i_arg<7>
#define _$8  bind_private::_i_arg<8>
#define _$9  bind_private::_i_arg<9>

namespace bind_private
{
    template< int I >struct _i_arg
    {
        enum { value = I };
        _i_arg() {}
    };

    template<class T>
    struct _is_i_arg
    {
        enum { value = false };
    };

    template<int I>
    struct _is_i_arg< $$<I> >
    {
        enum { value = true };
    };

    template<class T>
    struct _i_arg_index
    {
        enum { value = 0 };
    };

    template<int I>
    struct _i_arg_index< $$<I> >
    {
        enum { value = I };
    };

}

#endif
