'''
//#0
    template<int N,class R>
    struct _f_invoker0
    {
    public:
        typedef _s_f_cache<N>  _t_function_cache;
        template<class XF,class F> 
        struct _inner
        {
            typedef F                       function_type;
            static R invoker(const _t_function_cache& fc)
            {
                function_type* f = (function_type*)fc.get_function();
                return (*f)();
            };
        };
    };

    template<int N>
    struct _f_invoker0<N,void>
    {
    public:
        typedef _s_f_cache<N>  _t_function_cache;
        template<class XF,class F> struct _inner
        {
            typedef F                       function_type;

            static void invoker(const _t_function_cache& fc)
            {
                function_type* f = (function_type*)fc.get_function();
                (*f)();
            };
        };
    };

    template<int N, class R, class XF, class F>
    struct _s_invoker_func
        : public _f_invoker0<N, R>::_inner<XF, F>
    {
    };
'''


def _s_invoker_func(_count, _is_void):
    print("");
    print("//#%d" % _count)
    if _is_void:
        print("template<int N>")
        print("struct _f_invoker%d<N,void>" % _count)
        print("{")
        print("typedef void  return_type;")
    else:
        print("template<int N,class R>")
        print("struct _f_invoker%d" % _count)
        print("{")
        print("typedef R  return_type;")
    
    print("typedef _s_f_cache<N>  _t_function_cache;")
    print("");
    print("template<class XF,class F> ");
    print("struct _inner")
    print("{")
    print("typedef  F           function_type;")     
    if _count > 0:
        print("typedef typename XF::_P_LIST_A  PA;")
        print("");
        for i in range(1,_count+1):
            print("typedef  _BIND_INVOKER_PARAM(typename PA::P%d)    P%d;" % (i,i))
    print("");
    
    _param_P = ""
    _param_p = "";
    for i in range(1,_count+1):
        _param_P += "P%d p%d" % (i,i)
        _param_p += "p%d" % (i)
        if i != (_count):
            _param_P += ","
            _param_p += ","

    if _count == 0:
        print("static return_type invoker(const _t_function_cache& fc)")
    else:
        print("static return_type invoker(const _t_function_cache& fc," + _param_P + ")")
        
    print("{")
    print("function_type* f = (function_type*)fc.get_function();")
    if _is_void:
        print("(*f)(" + _param_p + ");")
    else:
        print("return (*f)(" + _param_p + ");")
    print("}")
    print("};")
    print("};")


def _s_invoker_inner_func(_count):
    '''
        template<int N, class R, class XF, class F>
        struct _s_invoker_func
            : public _f_invoker0<N, R>::_inner<XF, F>
        {
        };
    '''
    print("");
    print("//#%d" % _count)
    print("template<int N, class R, class XF, class F>")
    print("struct _s_invoker_inner%d" % _count)
    print(": public _f_invoker%d<N, R>::_inner<XF, F>" % _count)
    print("{};")

if __name__ == "__main__":
    _s_invoker_func(0, False)
    _s_invoker_func(1, False)
    _s_invoker_func(2, False)
    _s_invoker_func(3, False)
    _s_invoker_func(4, False)
    _s_invoker_func(5, False)
    _s_invoker_func(6, False)
    _s_invoker_func(7, False)
    _s_invoker_func(8, False)
    _s_invoker_func(9, False)

    _s_invoker_func(0, True)
    _s_invoker_func(1, True)
    _s_invoker_func(2, True)
    _s_invoker_func(3, True)
    _s_invoker_func(4, True)
    _s_invoker_func(5, True)
    _s_invoker_func(6, True)
    _s_invoker_func(7, True)
    _s_invoker_func(8, True)
    _s_invoker_func(9, True)
    _s_invoker_inner_func(0)

    _s_invoker_inner_func(1)
    _s_invoker_inner_func(2)
    _s_invoker_inner_func(3)
    _s_invoker_inner_func(4)
    _s_invoker_inner_func(5)
    _s_invoker_inner_func(6)
    _s_invoker_inner_func(7)
    _s_invoker_inner_func(8)
    _s_invoker_inner_func(9)

