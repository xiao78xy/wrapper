#pragma once

//定义命名空间
#define  X_NAME\
    n_ths 


#define X_NS_BEGIN(n)\
    namespace X_NAME{ namespace n{


#define X_NS_END(n)\
    }}


#define X_NS_BEGIN_EX(n)\
    namespace X_NAME_EX{ namespace n{

#define X_NS_END_EX(n)\
    }}

#define _X_NAME(n)\
    X_NAME::n

#define N_BIND\
    _X_NAME(n_bind)


#ifndef X_STATIC_CONST
# define  X_STATIC_CONST(Type,Name,Value)\
    static const Type Name = Value
#endif


#ifndef X_HAS_NOINLINE
# ifdef X_HAS_DEBUG
#  define X_INLINE
# else
#  define X_INLINE  inline
# endif
#else
#  define X_INLINE
#endif

#define X_FORCE_INLINE  inline

#include <assert.h>

# define X_ASSERT(expr)\
    assert(expr)

#define X_VERIFY(expr)  (expr)

#ifndef X_UNUSED
# define X_UNUSED(v)\
    ((void)v)
#endif


//ttl
namespace _bind_ttl
{ 
    typedef  bool   ttl_bool_t;
    typedef  void*  ttl_pointer_t;

#define  ttl_true   true
#define  ttl_false  false

#define  ttl_native_or(a,b)    ((a)|(b))
#define  ttl_native_and(a,b)   ((a)&(b))
#define  ttl_native_not(a)     (!(a))

#define TTL_VALUE(t, v)         enum { value = v, }

#define  TTL_TYPE(t)            typedef typename t value_type

    template<class T1, class T2, ttl_bool_t b>
    struct __if
    {
        typedef T1 value_type;
    };

    template<class T1, class T2>
    struct __if<T1, T2, ttl_false>
    {
        typedef T2 value_type;
    };


    template<ttl_bool_t b, class T1, class T2>
    struct _if
    {
        typedef typename __if<T1, T2, b>::value_type value_type;
    };

    template<ttl_bool_t b, int V1, int V2>
    struct _if_value
    {
        TTL_VALUE(ttl_bool_t, b ? V1 : V2);
    };

    //is reference
    template<class T>
    struct  _is_reference
    {
        TTL_VALUE(ttl_bool_t, ttl_false);
    };
    template<class T>
    struct  _is_reference<T&>
    {
        TTL_VALUE(ttl_bool_t, ttl_true);
    };
    template<class T>
    struct  _is_reference<const T&>
    {
        TTL_VALUE(ttl_bool_t, ttl_true);
    };
    template<class T>
    struct  _is_reference<const T*&>
    {
        TTL_VALUE(ttl_bool_t, ttl_true);
    };
    template<class T>
    struct  _is_reference<T*&>
    {
        TTL_VALUE(ttl_bool_t, ttl_true);
    };
    template<class T>
    ttl_bool_t  _is_reference_value(T& t)
    {
        return _is_reference<T>::value;
    };
    template<class T>
    ttl_bool_t  _is_reference_value(const T& t)
    {
        return _is_reference<T>::value;
    };



    //is pointer
    template<class T>
    struct  _is_pointer
    {
        TTL_VALUE(ttl_bool_t, ttl_false);
    };
    template<class T>
    struct  _is_pointer<T*>
    {
        TTL_VALUE(ttl_bool_t, ttl_true);
    };
    template<class T>
    struct  _is_pointer<const T*>
    {
        TTL_VALUE(ttl_bool_t, ttl_true);
    };
    template<class T>
    struct  _is_pointer<T**>
    {
        TTL_VALUE(ttl_bool_t, ttl_true);
    };
    template<class T>
    struct  _is_pointer<const T**>
    {
        TTL_VALUE(ttl_bool_t, ttl_true);
    };
    template<class T>
    struct  _is_pointer<T*&>
    {
        TTL_VALUE(ttl_bool_t, ttl_true);
    };
    template<class T>
    struct  _is_pointer<const T*&>
    {
        TTL_VALUE(ttl_bool_t, ttl_true);
    };
    template<class T>
    bool  _is_pointer_value(T& t)
    {
        return _is_pointer<T>::value;
    };
    template<class T>
    bool  _is_pointer_value(const T& t)
    {
        return _is_pointer<T>::value;
    };
    
    //_is_small_type
    template<class T>
    struct  _is_small_type
    {
        TTL_VALUE(ttl_bool_t, sizeof(T) <= sizeof(ttl_pointer_t));
    };



    template<class TYPE, ttl_bool_t b>
    struct __is_inner
    {
        TTL_VALUE(ttl_bool_t, b);
    };


    template<class TYPE>
    struct _is_inner : __is_inner<TYPE, false>
    {};

#define _X_GEN_IS_INNER_TYPE(T)  \
    template<>struct _is_inner<T> : __is_inner<T,true>{} 

    _X_GEN_IS_INNER_TYPE(char);
    _X_GEN_IS_INNER_TYPE(wchar_t);
     
    _X_GEN_IS_INNER_TYPE(unsigned char); 

    _X_GEN_IS_INNER_TYPE(short);
    _X_GEN_IS_INNER_TYPE(unsigned short);

    _X_GEN_IS_INNER_TYPE(int);
    _X_GEN_IS_INNER_TYPE(unsigned int);

    _X_GEN_IS_INNER_TYPE(long);
    _X_GEN_IS_INNER_TYPE(unsigned long);

    _X_GEN_IS_INNER_TYPE(signed   __int64 );
    _X_GEN_IS_INNER_TYPE(unsigned   __int64 );

    _X_GEN_IS_INNER_TYPE(double);
    _X_GEN_IS_INNER_TYPE(float);


    //is const
    template<class T>
    struct  _is_const
    {
        TTL_VALUE(ttl_bool_t, ttl_false);
    };
    template<class T>
    struct  _is_const<T&>
    {
        TTL_VALUE(ttl_bool_t, ttl_false);
    };
    template<class T>
    struct  _is_const<T*>
    {
        TTL_VALUE(ttl_bool_t, ttl_false);
    };
    template<class T>
    struct  _is_const<const T>
    {
        TTL_VALUE(ttl_bool_t, ttl_true);
    };
    template<class T>
    struct  _is_const<const T*>
    {
        TTL_VALUE(ttl_bool_t, ttl_true);
    };
    template<class T>
    struct  _is_const<const T*&>
    {
        TTL_VALUE(ttl_bool_t, ttl_true);
    };
    template<class T>
    struct  _is_const<const T&>
    {
        TTL_VALUE(ttl_bool_t, ttl_true);
    };
    template<class T>
    inline ttl_bool_t  _is_const_value(T& t)
    {
        return _is_const<T>::value;
    };
    template<class T>
    inline ttl_bool_t  _is_const_value(const T& t)
    {
        return _is_const<T>::value;
    };

    //!off_reference
    template<class T>
    struct  _off_reference
    {
        typedef T value_type;
    };
    template<class T>
    struct  _off_reference<T&>
    {
        typedef T value_type;
    };
    template<class T>
    struct  _off_reference<T*&>
    {
        typedef T* value_type;
    };
    template<class T>
    struct  _off_reference<const T&>
    {
        typedef const T value_type;
    };
    template<class T>
    struct  _off_reference<const T*&>
    {
        typedef const T* value_type;
    };

    //!off_const
    template<class T>
    struct  _off_const
    {
        typedef T value_type;
    };
    template<class T>
    struct  _off_const<const T>
    {
        typedef T value_type;
    };
    template<class T>
    struct  _off_const<const T*>
    {
        typedef T* value_type;
    };
    template<class T>
    struct  _off_const<const T&>
    {
        typedef T& value_type;
    };
    template<class T>
    struct  _off_const<const T*&>
    {
        typedef T*& value_type;
    };
    template<class T>
    struct  _off_const<const T**>
    {
        typedef T** value_type;
    };

    //!off_pointer
    template<class T>
    struct  _off_pointer
    {
        typedef T value_type;
    };
    template<class T>
    struct  _off_pointer<T*>
    {
        typedef T value_type;
    };
    template<class T>
    struct  _off_pointer<const T*>
    {
        typedef const T value_type;
    };
    template<class T>
    struct  _off_pointer<T*&>
    {
        typedef T value_type;
    };
    template<class T>
    struct  _off_pointer<const T*&>
    {
        typedef const T value_type;
    };
    template<class T>
    struct  _off_pointer<T**>
    {
        typedef T* value_type;
    };
    template<class T>
    struct  _off_pointer<const T**>
    {
        typedef const T* value_type;
    };


    template<class T>
    struct  _off_const_reference
    {
        typedef typename _off_reference<T>::value_type  _type;
        typedef typename _off_const<_type>::value_type  value_type;
    };

    template<class T>
    struct  _off_const_pointer
    {
        typedef typename _off_pointer<T>::value_type  _type;
        typedef typename _off_const<_type>::value_type  value_type;
    };
    //off array

    template<typename T>
    struct _off_array
    {
        typedef T       value_type;
        typedef T       type_type;
    };

    template<typename T>
    struct _off_array<T[]>
    {
        typedef T*      value_type;
        typedef T       type_type;
    };


    template<typename T, unsigned int N>
    struct _off_array<T[N]>
    {
        typedef T*      value_type;
        typedef T       type_type;
    };


    template<class T>
    struct  _off_all
    {
        typedef typename _off_reference<T>::value_type              _t_off_reference;
        typedef typename _off_pointer<_t_off_reference>::value_type _t_off_pointer;
        typedef typename _off_const<_t_off_pointer>::value_type     value_type;
    };

    template<class T>
    struct _add_pointer
    {
        typedef typename _off_reference<T>::value_type _off_reference_type;

        typedef typename _if
            <
            _is_pointer<T>::value
            , T
            , _off_reference_type*
            >::value_type  value_type;
    };

    template<class T>
    struct _add_reference
    {
    private:
        typedef typename _off_reference<T>::value_type _off_reference_type;

    public:
        typedef typename _if
            <
            _is_reference<T>::value
            , T
            , _off_reference_type&
            >::value_type
            value_type;
    };

    template<class T>
    struct _add_const_reference
    {
    private:
        typedef typename _off_reference<T>::value_type _off_reference_type;

        typedef typename _if
            <
            _is_const<T>::value
            , _off_reference_type&
            , const _off_reference_type&
            >::value_type
            _t_reference_type;

    public:
        typedef typename _if
            <
            _is_reference<T>::value
            , T
            , _t_reference_type
            >::value_type
            value_type;
    };


    template<int V1, int V2>
    struct _max_value
    {
        TTL_VALUE(int, V1 > V2 ? V1 : V2);
    };

    template<int V1, int V2>
    struct _min_value
    {
        TTL_VALUE(int, V1 > V2 ? V2 : V1);
    };

}

#define  X_TTL_IF_VALUE(b,t, f)         _bind_ttl::_if_value<b,t,f>::value

#define  X_TTL_IF_TYPE(b, T, F)         _bind_ttl::_if<b,T,F>::value_type

#define  X_TTL_IS_REFERENCE(T)          _bind_ttl::_is_reference<T>::value

#define  X_TTL_IS_POIRNTER(T)           _bind_ttl::_is_pointer<T>::value

#define  X_TTL_IS_SMALL_TYPE(T)         _bind_ttl::_is_small_type<T>::value

#define  X_TTL_IS_INNER(T)              _bind_ttl::_is_inner<T>::value

#define  X_TTL_ADD_CONST_REFERENCE(T)   _bind_ttl::_add_const_reference<T>::value_type

#define  X_TTL_MAX_VALUE(V1,V2)         _bind_ttl::_max_value<V1,V2>::value

#define  X_TTL_MIN_VALUE(V1,V2)         _bind_ttl::_min_value<V1,V2>::value



namespace _bind_value
{ 
    template<class ValueType>
    class c_value_ref
    {
        typedef ValueType   value_type;
    public:
        c_value_ref(value_type& _ref)
            :m_ref(_ref)
        {}

        operator value_type& ()
        {
            return m_ref;
        }
        operator value_type& ()const
        {
            return m_ref;
        }
    private:
        c_value_ref();
        c_value_ref& operator=(const c_value_ref&);
        value_type& m_ref;
    };

    template<class ValueType>
    X_FORCE_INLINE c_value_ref<ValueType> x_value_ref(ValueType& r)
    {
        return c_value_ref<ValueType>(r);
    }

    template<class ValueType>
    class c_const_value_ref
    {
        typedef ValueType   value_type;
    public:
        c_const_value_ref(const value_type& _ref)
            :m_ref(_ref)
        {}
        operator const value_type& ()const
        {
            return m_ref;
        }

    private:
        c_const_value_ref();
        c_const_value_ref& operator=(const c_const_value_ref&);
        const value_type& m_ref;
    };

    template<class ValueType>
    X_FORCE_INLINE c_const_value_ref<ValueType> x_const_value_ref(const ValueType& r)
    {
        return c_const_value_ref<ValueType>(r);
    } 
}


//const ref
#define  X_CONST_VALUE_REF(v)\
    _bind_value::x_const_value_ref(v)

//ref
#define  X_VALUE_REF(v)\
    _bind_value::x_value_ref(v)
