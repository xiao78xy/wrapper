'''
template<class R>
struct _s_delegate3
{
    typedef R return_type;

    template<class F,class V_LIST,class P_LIST>
    struct _inner 
        : public _s_operator_return3<return_type, F, V_LIST, P_LIST>
    { 
        typedef _s_operator_return3<return_type, F, V_LIST, P_LIST>  base_type;

        typedef  _X_BIND_T(typename base_type::V1) V1;
        typedef  _X_BIND_T(typename base_type::V2) V2;
        typedef  _X_BIND_T(typename base_type::V3) V3;
         
        _inner(F f,V1 v1,V2 v2,V3 v3)
            :base_type(f, v1, v2, v3)
        {}
     };
};

template<>
struct _s_delegate3<void>
{
    typedef void return_type;

    template<class F,class V_LIST,class P_LIST>
    struct _inner
    : public _s_operator_void3<F, V_LIST, P_LIST>
    { 
        typedef _s_operator_void3<F, V_LIST, P_LIST>  base_type;

        typedef  _X_BIND_T(typename base_type::V1) V1;
        typedef  _X_BIND_T(typename base_type::V2) V2;
        typedef  _X_BIND_T(typename base_type::V3) V3;

    public:
        _inner(F f,V1 v1,V2 v2,V3 v3)
            :base_type(f, v1, v2, v3)
        {}
    };
};

template<class R,class F,class V_LIST,class P_LIST>
struct _s_delegate_function3 
    : public _s_delegate3<R>::_inner<F,V_LIST,P_LIST>
{
public:
    enum{ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count};

    typedef  R return_type;
    typedef  typename _s_delegate3<R>::_inner<F,V_LIST,P_LIST>    base_type;

    typedef  typename base_type::V1 V1;
    typedef  typename base_type::V2 V2;
    typedef  typename base_type::V3 V3;

    _s_delegate_function3(F f,V1 v1,V2 v2,V3 v3)
        :base_type(f,v1,v2,v3)
    { 
    } 
};

'''


def _s_delegate(_count, is_void):

    print("");
    print("//#%d" % _count);
    if is_void:        
        print("template<>")
        print("struct _s_delegate%d<void>" % _count)
    else:
        print("template<class R>")
        print("struct _s_delegate%d " % _count)

    print("{");
    #typedef
    if is_void:
        print(" typedef void return_type;");
    else:
        print(" typedef R    return_type;");
        
    print("");

    print("template<class F,class V_LIST,class P_LIST>")
    print("struct _inner")
    print(" : public _s_delegate_base<F,P_LIST>");
    print(" , public V_LIST");
        
    print("{");
    
    print("typedef _s_delegate_base<F,P_LIST> base_type;");
    print("typedef  V_LIST VL;");

    print("");
    for i in range(1,10):
        print(" typedef typename base_type::P%d  P%d;" % (i, i))
        
    print("");
    for i in range(_count):
        index = i + 1
        print(" typedef  _X_BIND_T(typename VL::V%d) V%d;" % (index, index))
    print("");
    
    _param  = ""
    _param_v  = ""
    _param_P  = ""
    _param_p  = ""
    for i in range(_count):
        index = i + 1
        _param   += ", V%d v%d" % (index, index)
        _param_v += "v%d" % (index)
        _param_P += "P%d p%d" % (index, index)
        _param_p += "p%d" % (index)
        
        if i != (_count-1):
            _param_v += ", "
            _param_P += ", "
            _param_p += ", "
            
    print("_inner(F f" + _param + ")" )
    print(":base_type(f)" )
    print(",VL("  +  _param_v + ")" )
    print("{}");

    print("");             
    print("return_type operator()(" + _param_P + ")")
    print("{")
    if is_void:
        print("base_type::_func()(" + _param_p + ");" )
    else:
        print("return base_type::_func()(" + _param_p + ");" )
    print("}")
    print("");
        
    print("};");    
    print("};");


def _s_delegate_function(_count):
    print("//#%d" % _count);
    print("template<class R,class F,class V_LIST,class P_LIST>")
    print("struct _s_delegate_function%d" % _count)
    print(": public _s_delegate%d<R>::_inner<F,V_LIST,P_LIST>" % _count)
    
    print("{");
    print("enum{ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count};")
    print("");
    print("typedef  R return_type;")
    print("typedef  typename _s_delegate%d<R>::_inner<F,V_LIST,P_LIST>  base_type;" % _count)

    print("");
    for i in range(_count):
        index = i + 1
        print(" typedef  typename base_type::V%d V%d;" % (index, index))
    print("");
    
    _param  = ""
    _param_v  = ""
    for i in range(_count):
        index = i + 1
        _temp =  ", V%d v%d" % (index, index)
        _param += _temp
        _temp_v =  ", v%d" % (index)
        _param_v += _temp_v

    _bind_function = "_s_delegate_function%d(F f" % _count;
    print(_bind_function + _param + ")")
    print(":base_type(f" + _param_v + ")" )
    print("{}");
    
    print("};");


'''  
'''
_s_delegate(0, False)
_s_delegate(1, False)
_s_delegate(2, False)
_s_delegate(3, False)
_s_delegate(4, False)
_s_delegate(5, False)
_s_delegate(6, False)
_s_delegate(7, False)
_s_delegate(8, False)
_s_delegate(9, False)


_s_delegate(0, True)
_s_delegate(1, True)
_s_delegate(2, True)
_s_delegate(3, True)
_s_delegate(4, True)
_s_delegate(5, True)
_s_delegate(6, True)
_s_delegate(7, True)
_s_delegate(8, True)
_s_delegate(9, True)


print("");
print("//!< static function");

_s_delegate_function(0)
_s_delegate_function(1)
_s_delegate_function(2)
_s_delegate_function(3)
_s_delegate_function(4)
_s_delegate_function(5)
_s_delegate_function(6)
_s_delegate_function(7)
_s_delegate_function(8)
_s_delegate_function(9)

