#ifndef __X_WRAPPER_PRIVATE_FUNCTION_INVOKER_H__
#define __X_WRAPPER_PRIVATE_FUNCTION_INVOKER_H__

#include "_p_list.h"

#define _BIND_INVOKER_PARAM   _X_BIND_P

namespace bind_private
{
    //!<  _get_cahce_size start
    struct _f_default_param
    {};
    struct _f_heap_param
    {};
    struct _f_stack_param
    {};

    template<int L, int R>
    struct _s_max_value
    {
        enum
        {
            value = L > R ? L : R
        };
    };

    template<class P_LIST>
    struct _get_param_count
    {
        typedef typename P_LIST::P1    P1;
        typedef typename P_LIST::P2    P2;
        typedef typename P_LIST::P3    P3;
        typedef typename P_LIST::P4    P4;
        typedef typename P_LIST::P5    P5;
        typedef typename P_LIST::P6    P6;
        typedef typename P_LIST::P7    P7;
        typedef typename P_LIST::P8    P8;
        typedef typename P_LIST::P9    P9;

        enum
        {
            p_count1 = X_TTL_MAX_VALUE(0, X_TTL_IF_VALUE(_is_i_arg<P1>::value, _p_list_index<P1>::value, 0)),
            p_count2 = X_TTL_MAX_VALUE(p_count1, X_TTL_IF_VALUE(_is_i_arg<P2>::value, _p_list_index<P2>::value, 0)),
            p_count3 = X_TTL_MAX_VALUE(p_count2, X_TTL_IF_VALUE(_is_i_arg<P3>::value, _p_list_index<P3>::value, 0)),
            p_count4 = X_TTL_MAX_VALUE(p_count3, X_TTL_IF_VALUE(_is_i_arg<P4>::value, _p_list_index<P4>::value, 0)),
            p_count5 = X_TTL_MAX_VALUE(p_count4, X_TTL_IF_VALUE(_is_i_arg<P5>::value, _p_list_index<P5>::value, 0)),
            p_count6 = X_TTL_MAX_VALUE(p_count5, X_TTL_IF_VALUE(_is_i_arg<P6>::value, _p_list_index<P6>::value, 0)),
            p_count7 = X_TTL_MAX_VALUE(p_count6, X_TTL_IF_VALUE(_is_i_arg<P7>::value, _p_list_index<P7>::value, 0)),
            p_count8 = X_TTL_MAX_VALUE(p_count7, X_TTL_IF_VALUE(_is_i_arg<P8>::value, _p_list_index<P8>::value, 0)),
            p_count9 = X_TTL_MAX_VALUE(p_count8, X_TTL_IF_VALUE(_is_i_arg<P9>::value, _p_list_index<P9>::value, 0)),
        };

    public:
        enum
        {
            param_count = p_count9
        };

        //         static int count()
        //         {
        //             int i1 = p_count1;
        //             int i2 = p_count2;
        //             int i3 = p_count3;
        //             int i4 = p_count4;
        //             int i5 = p_count5;
        //             int i6 = p_count6;
        //             int i7 = p_count7;
        //             int i8 = p_count8;
        //
        //             return param_count;
        //         }
    };


    template<class P_LIST, class T>
    struct _get_param_size
    {
        enum
        {
            //!< 不分配参数stack空间
            param_size = 0,//in byte
        };
    };

    template<class P1>
    struct _check_param_size
    {
        enum
        {
            value = sizeof(P1) <= sizeof(void*) ? sizeof(void*) : sizeof(P1),
        };
    };

    template<class P_LIST>
    struct _get_param_size<P_LIST, _f_default_param>
    {
    private:

        typedef typename P_LIST::P1    P1;
        typedef typename P_LIST::P2    P2;
        typedef typename P_LIST::P3    P3;
        typedef typename P_LIST::P4    P4;
        typedef typename P_LIST::P5    P5;
        typedef typename P_LIST::P6    P6;
        typedef typename P_LIST::P7    P7;
        typedef typename P_LIST::P8    P8;
        typedef typename P_LIST::P9    P9;

        enum
        {
            p_size1 = _is_p_any<P1>::value ? 0 : _check_param_size<P1>::value,
            p_size2 = _is_p_any<P2>::value ? 0 : _check_param_size<P2>::value,
            p_size3 = _is_p_any<P3>::value ? 0 : _check_param_size<P3>::value,
            p_size4 = _is_p_any<P4>::value ? 0 : _check_param_size<P4>::value,
            p_size5 = _is_p_any<P5>::value ? 0 : _check_param_size<P5>::value,
            p_size6 = _is_p_any<P6>::value ? 0 : _check_param_size<P6>::value,
            p_size7 = _is_p_any<P7>::value ? 0 : _check_param_size<P7>::value,
            p_size8 = _is_p_any<P8>::value ? 0 : _check_param_size<P8>::value,
            p_size9 = _is_p_any<P9>::value ? 0 : _check_param_size<P9>::value,
        };
    public:
        enum
        {
            param_size
            = p_size1
            + p_size2
            + p_size3
            + p_size4
            + p_size5
            + p_size6
            + p_size7
            + p_size8
            + p_size9,
        };
    };

    template<class P_LIST>
    struct _get_param_size<P_LIST, _f_heap_param>
    {
        enum
        {
            //!< 不分配参数stack空间
            param_size = 0,
        };
    };

    template<class P_LIST>
    struct _get_param_size<P_LIST, _f_stack_param>
    {
        enum
        {
            //!< 分配参数stack空间
            param_size = _get_param_size<P_LIST, _f_default_param>::param_size,
        };
    };

    template<class P_LIST, class P>
    struct _get_param_size_impl
    {
    public:
        enum
        {
            index_value = _i_arg_index<P>::value,
        };
    public:
        enum
        {
            value = index_value != 0 ? _check_param_size<typename _p_list_at<P_LIST, index_value>::value_type>::value : 0,
        };
    };

    template<class P_LIST, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class T8, class T9>
    struct _get_param_size<P_LIST, _p_list_a<T1, T2, T3, T4, T5, T6, T7, T8, T9> >
    {
    public:
        enum
        {
            p_size1 = _get_param_size_impl<P_LIST, T1>::value,
            p_size2 = _get_param_size_impl<P_LIST, T2>::value,
            p_size3 = _get_param_size_impl<P_LIST, T3>::value,
            p_size4 = _get_param_size_impl<P_LIST, T4>::value,
            p_size5 = _get_param_size_impl<P_LIST, T5>::value,
            p_size6 = _get_param_size_impl<P_LIST, T6>::value,
            p_size7 = _get_param_size_impl<P_LIST, T7>::value,
            p_size8 = _get_param_size_impl<P_LIST, T8>::value,
            p_size9 = _get_param_size_impl<P_LIST, T9>::value,

            default_size = _get_param_size<P_LIST, _f_default_param>::param_size,
        };
    public:
        enum
        {
            param_size = default_size - p_size1 - p_size2 - p_size3 - p_size4 - p_size5 - p_size6 - p_size7 - p_size8 - p_size9,
        };
    };
    //!<  _get_cahce_size end

    //!< function_cache start
    struct bind_function_allocate
    {
        static void* allocate_handler(int s)
        {
            return new char[s];
        }

        static void deallocate_handler(void* p)
        {
            char* d = (char*)p;
            delete[] d;
        }
    };

    template<int N>
    struct _parram_array
    {
        char   m_param[N];
    };

    template<>
    struct _parram_array<0>
    {
    };

    template<int N>
    struct _s_f_cache  //_s_function_cache
    {
        //cache data
        struct _f_cache_data
        {
            class __XXX__ {};
            typedef void (__XXX__::* _virtual_member_func_ptr)();
            typedef void (*_virtual_static_func_ptr)();

            struct heap_obj
            {
                void* m_obj;
                int   m_size;
            };

            //预留N个参数,高效的回调函数的参数应该都是引用或者指针，
            struct stack_obj
                : public _parram_array<N>
            {
                union
                {
                    struct
                    {
                        __XXX__* m_call_obj;
                        _virtual_member_func_ptr m_member_func_ptr;
                    } m_member_func;

                    struct
                    {
                        _virtual_static_func_ptr m_static_func_ptr;
                    }m_static_func;
                };
            };

            _f_cache_data()
            {
                memset(this, 0, sizeof(_f_cache_data));
            }

            void* get_stack_addr() const
            {
                return (void*)this;
            }
            void* get_heap_addr() const
            {
                return (void*)m_heap_obj.m_obj;
            }

            void    set_heep_value(void* _obj, int _s)
            {
                m_heap_obj.m_obj  = _obj;
                m_heap_obj.m_size = _s;
            }

            //!< _ready function cache
            union
            {
                heap_obj    m_heap_obj;
                stack_obj   m_stack_obj;
            };
        };

        struct _cache_handle_impl
        {
            typedef void* (*_clone_func)(_s_f_cache&, const _s_f_cache&);
            typedef void* (*_new_func)(_s_f_cache&, void*);
            typedef void  (*_delete_func)(_s_f_cache&);
            typedef void* (*_function_func)(const _s_f_cache&);

        public:
            _cache_handle_impl()
                :m_clone_func(_clone_func())
                , m_new_func(_new_func())
                , m_delete_func(_delete_func())
                , m_function_func(_function_func())
            {}

            _cache_handle_impl(_clone_func& _cf, _new_func& _nf, _delete_func& _df, _function_func& _ff)
                :m_clone_func(_cf)
                , m_new_func(_nf)
                , m_delete_func(_df)
                , m_function_func(_ff)
            {}

            void* _clone(_s_f_cache& _this_cache, const _s_f_cache& _clone_from)
            {
                return m_clone_func(_this_cache, _clone_from);
            }

            void* _new(_s_f_cache& _this_cache, void* _f)
            {
                return m_new_func(_this_cache, _f);
            }

            void    _delete(_s_f_cache& _this_cache)
            {
                m_delete_func(_this_cache);
            }

            void* _function(const _s_f_cache& _this_cache)
            {
                return m_function_func(_this_cache);
            }

        public:
            _clone_func     m_clone_func;
            _new_func       m_new_func;
            _delete_func    m_delete_func;
            _function_func  m_function_func;
        };


        //function_cache_handle start
        template<class F, bool IS_SMALL>
        struct _cache_handle
        {
            static void* _clone(_s_f_cache& _this_cache, const _s_f_cache& _clone_from)
            {
                F* f = (F*)_clone_from.get_function();
                return (void*)_new(_this_cache, (void*)f);
            }

            static void* _new(_s_f_cache& _this_cache, void* _f)
            {
                F* f = (F*)_f;
                X_ASSERT(sizeof(F) <= sizeof(_this_cache));

                void* __obj = _this_cache.get_function();
                new(__obj) F(*f);
                return __obj;
            }

            static void    _delete(_s_f_cache& _this_cache)
            {
                F* f = (F*)_this_cache.get_function();
                f->~F();
            }

            static void* _function(const  _s_f_cache& _this_cache)
            {
                return _this_cache.m_cache.get_stack_addr();
            }

        };

        template<class F>
        struct _cache_handle<F, false>
        {
            static void* _clone(_s_f_cache& _this_cache, const _s_f_cache& _clone_from)
            {
                F* f = (F*)_clone_from.get_function();
                return (void*)_new(_this_cache, (void*)f);
            }

            static void* _new(_s_f_cache& _this_cache, void* _f)
            {
                F* __f = (F*)_f;
                void* __obj = bind_function_allocate::allocate_handler(sizeof(F));
                new(__obj) F(*__f);

                _this_cache.m_cache.set_heep_value(__obj, sizeof(F));
                return __obj;
            }

            static void    _delete(_s_f_cache& _this_cache)
            {
                void* __p = _this_cache.get_function();
                F* __f = (F*)__p;
                __f->~F();
                bind_function_allocate::deallocate_handler(__p);
            }

            static void* _function(const _s_f_cache& _this_cache)
            {
                return _this_cache.m_cache.get_heap_addr();
            }

        }; 

        template<class F>
        static _cache_handle_impl* _get_cache_handle(F& _f)
        {
            typedef F                                                           _t_function_type;
            typedef _is_small_type<_t_function_type, _f_cache_data>              _t_is_small_type;
            typedef _cache_handle<_t_function_type, _t_is_small_type::value>    _t_cache_handle;

#ifdef X_HAS_DEBUG
            int v = _t_is_small_type::value;
            int i1 = sizeof(_t_function_type);
            int i2 = sizeof(_f_cache_data);
#endif
            static _cache_handle_impl* __impl = NULL;
            if (__impl == NULL)
            {
                static _cache_handle_impl  __g_impl;
                __g_impl.m_clone_func     = &_t_cache_handle::_clone;
                __g_impl.m_delete_func    = &_t_cache_handle::_delete;
                __g_impl.m_function_func  = &_t_cache_handle::_function;
                __g_impl.m_new_func       = &_t_cache_handle::_new;
                __impl = &__g_impl;
            }
            return __impl;
        }
        //function_cache_handle end

        template<class T1, class T2>
        struct _is_small_type
        {
            enum
            {
                value = sizeof(T1) <= sizeof(T2),
            };
        };

        _s_f_cache()
            :m_cache_impl(NULL)
        {}

        _s_f_cache(const _s_f_cache& _other)
            :m_cache_impl(_other.m_cache_impl)
        {
            m_cache_impl->_clone(*this, _other);
        }

        ~_s_f_cache()
        {
            _release();
        }

        const _s_f_cache& operator = (const _s_f_cache& _other)
        {
            if (this != &_other && _other.m_cache_impl)
            {
                m_cache_impl = _other.m_cache_impl;

                X_ASSERT(m_cache_impl);
                m_cache_impl->_clone(*this, _other);
            }
            return *this;
        }

        template<class F>
        void    assign(F& _f)
        {
            _release();

            m_cache_impl = _get_cache_handle<F>(_f);

            X_ASSERT(m_cache_impl);
            m_cache_impl->_new(*this, (void*)&_f);
        }

        void* get_function() const
        {
            X_ASSERT(m_cache_impl);
            return m_cache_impl->_function(*this);
        }

    private:
        void    _release()
        {
            if (m_cache_impl)
            {
                m_cache_impl->_delete(*this);
                m_cache_impl = NULL;
            }
        }
    public:
        _f_cache_data       m_cache;
        _cache_handle_impl* m_cache_impl;
    };
    //!< function_cache end

    //#0
    template<int N, class R>
    struct _f_invoker0
    {
        typedef R  return_type;
        typedef _s_f_cache<N>  _t_function_cache;

        template<class XF, class F>
        struct _inner
        {
            typedef  F           function_type;

            static return_type invoker(const _t_function_cache& fc)
            {
                function_type* f = (function_type*)fc.get_function();
                return (*f)();
            }
        };
    };

    //#1
    template<int N, class R>
    struct _f_invoker1
    {
        typedef R  return_type;
        typedef _s_f_cache<N>  _t_function_cache;

        template<class XF, class F>
        struct _inner
        {
            typedef  F           function_type;
            typedef typename XF::_P_LIST_A  PA;

            typedef  _BIND_INVOKER_PARAM(typename PA::P1)    P1;

            static return_type invoker(const _t_function_cache& fc, P1 p1)
            {
                function_type* f = (function_type*)fc.get_function();
                return (*f)(p1);
            }
        };
    };

    //#2
    template<int N, class R>
    struct _f_invoker2
    {
        typedef R  return_type;
        typedef _s_f_cache<N>  _t_function_cache;

        template<class XF, class F>
        struct _inner
        {
            typedef  F           function_type;
            typedef typename XF::_P_LIST_A  PA;

            typedef  _BIND_INVOKER_PARAM(typename PA::P1)    P1;
            typedef  _BIND_INVOKER_PARAM(typename PA::P2)    P2;

            static return_type invoker(const _t_function_cache& fc, P1 p1, P2 p2)
            {
                function_type* f = (function_type*)fc.get_function();
                return (*f)(p1, p2);
            }
        };
    };

    //#3
    template<int N, class R>
    struct _f_invoker3
    {
        typedef R  return_type;
        typedef _s_f_cache<N>  _t_function_cache;

        template<class XF, class F>
        struct _inner
        {
            typedef  F           function_type;
            typedef typename XF::_P_LIST_A  PA;

            typedef  _BIND_INVOKER_PARAM(typename PA::P1)    P1;
            typedef  _BIND_INVOKER_PARAM(typename PA::P2)    P2;
            typedef  _BIND_INVOKER_PARAM(typename PA::P3)    P3;

            static return_type invoker(const _t_function_cache& fc, P1 p1, P2 p2, P3 p3)
            {
                function_type* f = (function_type*)fc.get_function();
                return (*f)(p1, p2, p3);
            }
        };
    };

    //#4
    template<int N, class R>
    struct _f_invoker4
    {
        typedef R  return_type;
        typedef _s_f_cache<N>  _t_function_cache;

        template<class XF, class F>
        struct _inner
        {
            typedef  F           function_type;
            typedef typename XF::_P_LIST_A  PA;

            typedef  _BIND_INVOKER_PARAM(typename PA::P1)    P1;
            typedef  _BIND_INVOKER_PARAM(typename PA::P2)    P2;
            typedef  _BIND_INVOKER_PARAM(typename PA::P3)    P3;
            typedef  _BIND_INVOKER_PARAM(typename PA::P4)    P4;

            static return_type invoker(const _t_function_cache& fc, P1 p1, P2 p2, P3 p3, P4 p4)
            {
                function_type* f = (function_type*)fc.get_function();
                return (*f)(p1, p2, p3, p4);
            }
        };
    };

    //#5
    template<int N, class R>
    struct _f_invoker5
    {
        typedef R  return_type;
        typedef _s_f_cache<N>  _t_function_cache;

        template<class XF, class F>
        struct _inner
        {
            typedef  F           function_type;
            typedef typename XF::_P_LIST_A  PA;

            typedef  _BIND_INVOKER_PARAM(typename PA::P1)    P1;
            typedef  _BIND_INVOKER_PARAM(typename PA::P2)    P2;
            typedef  _BIND_INVOKER_PARAM(typename PA::P3)    P3;
            typedef  _BIND_INVOKER_PARAM(typename PA::P4)    P4;
            typedef  _BIND_INVOKER_PARAM(typename PA::P5)    P5;

            static return_type invoker(const _t_function_cache& fc, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
            {
                function_type* f = (function_type*)fc.get_function();
                return (*f)(p1, p2, p3, p4, p5);
            }
        };
    };

    //#6
    template<int N, class R>
    struct _f_invoker6
    {
        typedef R  return_type;
        typedef _s_f_cache<N>  _t_function_cache;

        template<class XF, class F>
        struct _inner
        {
            typedef  F           function_type;
            typedef typename XF::_P_LIST_A  PA;

            typedef  _BIND_INVOKER_PARAM(typename PA::P1)    P1;
            typedef  _BIND_INVOKER_PARAM(typename PA::P2)    P2;
            typedef  _BIND_INVOKER_PARAM(typename PA::P3)    P3;
            typedef  _BIND_INVOKER_PARAM(typename PA::P4)    P4;
            typedef  _BIND_INVOKER_PARAM(typename PA::P5)    P5;
            typedef  _BIND_INVOKER_PARAM(typename PA::P6)    P6;

            static return_type invoker(const _t_function_cache& fc, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
            {
                function_type* f = (function_type*)fc.get_function();
                return (*f)(p1, p2, p3, p4, p5, p6);
            }
        };
    };

    //#7
    template<int N, class R>
    struct _f_invoker7
    {
        typedef R  return_type;
        typedef _s_f_cache<N>  _t_function_cache;

        template<class XF, class F>
        struct _inner
        {
            typedef  F           function_type;
            typedef typename XF::_P_LIST_A  PA;

            typedef  _BIND_INVOKER_PARAM(typename PA::P1)    P1;
            typedef  _BIND_INVOKER_PARAM(typename PA::P2)    P2;
            typedef  _BIND_INVOKER_PARAM(typename PA::P3)    P3;
            typedef  _BIND_INVOKER_PARAM(typename PA::P4)    P4;
            typedef  _BIND_INVOKER_PARAM(typename PA::P5)    P5;
            typedef  _BIND_INVOKER_PARAM(typename PA::P6)    P6;
            typedef  _BIND_INVOKER_PARAM(typename PA::P7)    P7;

            static return_type invoker(const _t_function_cache& fc, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
            {
                function_type* f = (function_type*)fc.get_function();
                return (*f)(p1, p2, p3, p4, p5, p6, p7);
            }
        };
    };

    //#8
    template<int N, class R>
    struct _f_invoker8
    {
        typedef R  return_type;
        typedef _s_f_cache<N>  _t_function_cache;

        template<class XF, class F>
        struct _inner
        {
            typedef  F           function_type;
            typedef typename XF::_P_LIST_A  PA;

            typedef  _BIND_INVOKER_PARAM(typename PA::P1)    P1;
            typedef  _BIND_INVOKER_PARAM(typename PA::P2)    P2;
            typedef  _BIND_INVOKER_PARAM(typename PA::P3)    P3;
            typedef  _BIND_INVOKER_PARAM(typename PA::P4)    P4;
            typedef  _BIND_INVOKER_PARAM(typename PA::P5)    P5;
            typedef  _BIND_INVOKER_PARAM(typename PA::P6)    P6;
            typedef  _BIND_INVOKER_PARAM(typename PA::P7)    P7;
            typedef  _BIND_INVOKER_PARAM(typename PA::P8)    P8;

            static return_type invoker(const _t_function_cache& fc, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
            {
                function_type* f = (function_type*)fc.get_function();
                return (*f)(p1, p2, p3, p4, p5, p6, p7, p8);
            }
        };
    };

    //#9
    template<int N, class R>
    struct _f_invoker9
    {
        typedef R  return_type;
        typedef _s_f_cache<N>  _t_function_cache;

        template<class XF, class F>
        struct _inner
        {
            typedef  F           function_type;
            typedef typename XF::_P_LIST_A  PA;

            typedef  _BIND_INVOKER_PARAM(typename PA::P1)    P1;
            typedef  _BIND_INVOKER_PARAM(typename PA::P2)    P2;
            typedef  _BIND_INVOKER_PARAM(typename PA::P3)    P3;
            typedef  _BIND_INVOKER_PARAM(typename PA::P4)    P4;
            typedef  _BIND_INVOKER_PARAM(typename PA::P5)    P5;
            typedef  _BIND_INVOKER_PARAM(typename PA::P6)    P6;
            typedef  _BIND_INVOKER_PARAM(typename PA::P7)    P7;
            typedef  _BIND_INVOKER_PARAM(typename PA::P8)    P8;
            typedef  _BIND_INVOKER_PARAM(typename PA::P9)    P9;

            static return_type invoker(const _t_function_cache& fc, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
            {
                function_type* f = (function_type*)fc.get_function();
                return (*f)(p1, p2, p3, p4, p5, p6, p7, p8, p9);
            }
        };
    };

    //#0
    template<int N>
    struct _f_invoker0<N, void>
    {
        typedef void  return_type;
        typedef _s_f_cache<N>  _t_function_cache;

        template<class XF, class F>
        struct _inner
        {
            typedef  F           function_type;

            static return_type invoker(const _t_function_cache& fc)
            {
                function_type* f = (function_type*)fc.get_function();
                (*f)();
            }
        };
    };

    //#1
    template<int N>
    struct _f_invoker1<N, void>
    {
        typedef void  return_type;
        typedef _s_f_cache<N>  _t_function_cache;

        template<class XF, class F>
        struct _inner
        {
            typedef  F           function_type;
            typedef typename XF::_P_LIST_A  PA;

            typedef  _BIND_INVOKER_PARAM(typename PA::P1)    P1;

            static return_type invoker(const _t_function_cache& fc, P1 p1)
            {
                function_type* f = (function_type*)fc.get_function();
                (*f)(p1);
            }
        };
    };

    //#2
    template<int N>
    struct _f_invoker2<N, void>
    {
        typedef void  return_type;
        typedef _s_f_cache<N>  _t_function_cache;

        template<class XF, class F>
        struct _inner
        {
            typedef  F           function_type;
            typedef typename XF::_P_LIST_A  PA;

            typedef  _BIND_INVOKER_PARAM(typename PA::P1)    P1;
            typedef  _BIND_INVOKER_PARAM(typename PA::P2)    P2;

            static return_type invoker(const _t_function_cache& fc, P1 p1, P2 p2)
            {
                function_type* f = (function_type*)fc.get_function();
                (*f)(p1, p2);
            }
        };
    };

    //#3
    template<int N>
    struct _f_invoker3<N, void>
    {
        typedef void  return_type;
        typedef _s_f_cache<N>  _t_function_cache;

        template<class XF, class F>
        struct _inner
        {
            typedef  F           function_type;
            typedef typename XF::_P_LIST_A  PA;

            typedef  _BIND_INVOKER_PARAM(typename PA::P1)    P1;
            typedef  _BIND_INVOKER_PARAM(typename PA::P2)    P2;
            typedef  _BIND_INVOKER_PARAM(typename PA::P3)    P3;

            static return_type invoker(const _t_function_cache& fc, P1 p1, P2 p2, P3 p3)
            {
                function_type* f = (function_type*)fc.get_function();
                (*f)(p1, p2, p3);
            }
        };
    };

    //#4
    template<int N>
    struct _f_invoker4<N, void>
    {
        typedef void  return_type;
        typedef _s_f_cache<N>  _t_function_cache;

        template<class XF, class F>
        struct _inner
        {
            typedef  F           function_type;
            typedef typename XF::_P_LIST_A  PA;

            typedef  _BIND_INVOKER_PARAM(typename PA::P1)    P1;
            typedef  _BIND_INVOKER_PARAM(typename PA::P2)    P2;
            typedef  _BIND_INVOKER_PARAM(typename PA::P3)    P3;
            typedef  _BIND_INVOKER_PARAM(typename PA::P4)    P4;

            static return_type invoker(const _t_function_cache& fc, P1 p1, P2 p2, P3 p3, P4 p4)
            {
                function_type* f = (function_type*)fc.get_function();
                (*f)(p1, p2, p3, p4);
            }
        };
    };

    //#5
    template<int N>
    struct _f_invoker5<N, void>
    {
        typedef void  return_type;
        typedef _s_f_cache<N>  _t_function_cache;

        template<class XF, class F>
        struct _inner
        {
            typedef  F           function_type;
            typedef typename XF::_P_LIST_A  PA;

            typedef  _BIND_INVOKER_PARAM(typename PA::P1)    P1;
            typedef  _BIND_INVOKER_PARAM(typename PA::P2)    P2;
            typedef  _BIND_INVOKER_PARAM(typename PA::P3)    P3;
            typedef  _BIND_INVOKER_PARAM(typename PA::P4)    P4;
            typedef  _BIND_INVOKER_PARAM(typename PA::P5)    P5;

            static return_type invoker(const _t_function_cache& fc, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5)
            {
                function_type* f = (function_type*)fc.get_function();
                (*f)(p1, p2, p3, p4, p5);
            }
        };
    };

    //#6
    template<int N>
    struct _f_invoker6<N, void>
    {
        typedef void  return_type;
        typedef _s_f_cache<N>  _t_function_cache;

        template<class XF, class F>
        struct _inner
        {
            typedef  F           function_type;
            typedef typename XF::_P_LIST_A  PA;

            typedef  _BIND_INVOKER_PARAM(typename PA::P1)    P1;
            typedef  _BIND_INVOKER_PARAM(typename PA::P2)    P2;
            typedef  _BIND_INVOKER_PARAM(typename PA::P3)    P3;
            typedef  _BIND_INVOKER_PARAM(typename PA::P4)    P4;
            typedef  _BIND_INVOKER_PARAM(typename PA::P5)    P5;
            typedef  _BIND_INVOKER_PARAM(typename PA::P6)    P6;

            static return_type invoker(const _t_function_cache& fc, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6)
            {
                function_type* f = (function_type*)fc.get_function();
                (*f)(p1, p2, p3, p4, p5, p6);
            }
        };
    };

    //#7
    template<int N>
    struct _f_invoker7<N, void>
    {
        typedef void  return_type;
        typedef _s_f_cache<N>  _t_function_cache;

        template<class XF, class F>
        struct _inner
        {
            typedef  F           function_type;
            typedef typename XF::_P_LIST_A  PA;

            typedef  _BIND_INVOKER_PARAM(typename PA::P1)    P1;
            typedef  _BIND_INVOKER_PARAM(typename PA::P2)    P2;
            typedef  _BIND_INVOKER_PARAM(typename PA::P3)    P3;
            typedef  _BIND_INVOKER_PARAM(typename PA::P4)    P4;
            typedef  _BIND_INVOKER_PARAM(typename PA::P5)    P5;
            typedef  _BIND_INVOKER_PARAM(typename PA::P6)    P6;
            typedef  _BIND_INVOKER_PARAM(typename PA::P7)    P7;

            static return_type invoker(const _t_function_cache& fc, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7)
            {
                function_type* f = (function_type*)fc.get_function();
                (*f)(p1, p2, p3, p4, p5, p6, p7);
            }
        };
    };

    //#8
    template<int N>
    struct _f_invoker8<N, void>
    {
        typedef void  return_type;
        typedef _s_f_cache<N>  _t_function_cache;

        template<class XF, class F>
        struct _inner
        {
            typedef  F           function_type;
            typedef typename XF::_P_LIST_A  PA;

            typedef  _BIND_INVOKER_PARAM(typename PA::P1)    P1;
            typedef  _BIND_INVOKER_PARAM(typename PA::P2)    P2;
            typedef  _BIND_INVOKER_PARAM(typename PA::P3)    P3;
            typedef  _BIND_INVOKER_PARAM(typename PA::P4)    P4;
            typedef  _BIND_INVOKER_PARAM(typename PA::P5)    P5;
            typedef  _BIND_INVOKER_PARAM(typename PA::P6)    P6;
            typedef  _BIND_INVOKER_PARAM(typename PA::P7)    P7;
            typedef  _BIND_INVOKER_PARAM(typename PA::P8)    P8;

            static return_type invoker(const _t_function_cache& fc, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8)
            {
                function_type* f = (function_type*)fc.get_function();
                (*f)(p1, p2, p3, p4, p5, p6, p7, p8);
            }
        };
    };

    //#9
    template<int N>
    struct _f_invoker9<N, void>
    {
        typedef void  return_type;
        typedef _s_f_cache<N>  _t_function_cache;

        template<class XF, class F>
        struct _inner
        {
            typedef  F           function_type;
            typedef typename XF::_P_LIST_A  PA;

            typedef  _BIND_INVOKER_PARAM(typename PA::P1)    P1;
            typedef  _BIND_INVOKER_PARAM(typename PA::P2)    P2;
            typedef  _BIND_INVOKER_PARAM(typename PA::P3)    P3;
            typedef  _BIND_INVOKER_PARAM(typename PA::P4)    P4;
            typedef  _BIND_INVOKER_PARAM(typename PA::P5)    P5;
            typedef  _BIND_INVOKER_PARAM(typename PA::P6)    P6;
            typedef  _BIND_INVOKER_PARAM(typename PA::P7)    P7;
            typedef  _BIND_INVOKER_PARAM(typename PA::P8)    P8;
            typedef  _BIND_INVOKER_PARAM(typename PA::P9)    P9;

            static return_type invoker(const _t_function_cache& fc, P1 p1, P2 p2, P3 p3, P4 p4, P5 p5, P6 p6, P7 p7, P8 p8, P9 p9)
            {
                function_type* f = (function_type*)fc.get_function();
                (*f)(p1, p2, p3, p4, p5, p6, p7, p8, p9);
            }
        };
    };

    //#0
    template<int N, class R, class XF, class F>
    struct _s_invoker_inner0
        : public _f_invoker0<N, R>::_inner<XF, F>
    {};

    //#1
    template<int N, class R, class XF, class F>
    struct _s_invoker_inner1
        : public _f_invoker1<N, R>::_inner<XF, F>
    {};

    //#2
    template<int N, class R, class XF, class F>
    struct _s_invoker_inner2
        : public _f_invoker2<N, R>::_inner<XF, F>
    {};

    //#3
    template<int N, class R, class XF, class F>
    struct _s_invoker_inner3
        : public _f_invoker3<N, R>::_inner<XF, F>
    {};

    //#4
    template<int N, class R, class XF, class F>
    struct _s_invoker_inner4
        : public _f_invoker4<N, R>::_inner<XF, F>
    {};

    //#5
    template<int N, class R, class XF, class F>
    struct _s_invoker_inner5
        : public _f_invoker5<N, R>::_inner<XF, F>
    {};

    //#6
    template<int N, class R, class XF, class F>
    struct _s_invoker_inner6
        : public _f_invoker6<N, R>::_inner<XF, F>
    {};

    //#7
    template<int N, class R, class XF, class F>
    struct _s_invoker_inner7
        : public _f_invoker7<N, R>::_inner<XF, F>
    {};

    //#8
    template<int N, class R, class XF, class F>
    struct _s_invoker_inner8
        : public _f_invoker8<N, R>::_inner<XF, F>
    {};

    //#9
    template<int N, class R, class XF, class F>
    struct _s_invoker_inner9
        : public _f_invoker9<N, R>::_inner<XF, F>
    {};

}

#endif //__X_WRAPPER_PRIVATE_FUNCTION_INVOKER_H__
