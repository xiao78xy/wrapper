'''
template<class R>
struct _m_function3
{
    typedef R return_type;

    template<class O ,class F,class V_LIST,class P_LIST>
    struct _inner 
        : public _m_operator_return3<return_type, O, F, V_LIST, P_LIST>
    { 
        typedef _m_operator_return3<return_type, O, F, V_LIST, P_LIST>  base_type;

        typedef  _X_BIND_T(typename base_type::V1) V1;
        typedef  _X_BIND_T(typename base_type::V2) V2;
        typedef  _X_BIND_T(typename base_type::V3) V3;
         
        _inner(O o,F f,V1 v1,V2 v2,V3 v3)
            :base_type(f, v1, v2, v3)
        {}
     };
};

template<>
struct _m_function3<void>
{
    typedef void return_type;

    template<class F,class V_LIST,class P_LIST>
    struct _inner
    : public _m_operator_void3<F, V_LIST, P_LIST>
    { 
        typedef _m_operator_void3<F, V_LIST, P_LIST>  base_type;

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
struct _m_bind_function3 
    : public _m_function3<R>::_inner<F,V_LIST,P_LIST>
{
public:
    enum{ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count};

    typedef  R return_type;
    typedef  typename _m_function3<R>::_inner<F,V_LIST,P_LIST>    base_type;

    typedef  typename base_type::V1 V1;
    typedef  typename base_type::V2 V2;
    typedef  typename base_type::V3 V3;

    _m_bind_function3(F f,V1 v1,V2 v2,V3 v3)
        :base_type(f,v1,v2,v3)
    { 
    } 
};

'''


def _m_function(_count, is_void):

    print("");
    print("//#%d" % _count);
    if is_void:        
        print("template<>")
        print("struct _m_function%d<void>" % _count)
    else:
        print("template<class R>")
        print("struct _m_function%d " % _count)

    print("{");
    #typedef
    if is_void:
        print(" typedef void return_type;");
    else:
        print(" typedef R    return_type;");
        
    print("");

    print("template<class O, class F,class V_LIST,class P_LIST>")
    
    if is_void:
        print("struct _inner");
        print(" : public _m_operator_void%d<O, F, V_LIST, P_LIST>" % _count);
    else:
        print("struct _inner");
        print(" : public _m_operator_return%d<return_type, O, F, V_LIST, P_LIST>" % _count);
        
    print("{");
    
    if is_void:
        print("typedef _m_operator_void%d<O, F, V_LIST, P_LIST>  base_type;" % _count);
    else:
        print("typedef _m_operator_return%d<return_type, O, F, V_LIST, P_LIST>  base_type;" % _count);

    print("");
    for i in range(_count):
        index = i + 1
        print(" typedef  _X_BIND_T(typename VL::V%d) V%d;" % (index, index))
    print("");
    
    _param  = ""
    _param_v  = ""
    for i in range(_count):
        index = i + 1
        _temp =  ", V%d v%d" % (index, index)
        _param += _temp
        _temp_v =  ", v%d" % (index)
        _param_v += _temp_v

    print("_inner(O o, F f" + _param + ")" )
    print(":base_type(o, f" + _param_v + ")" )
    print("{}");
        
    print("};");
    
    print("};");


def _m_bind_function(_count):
    print("//#%d" % _count);
    print("template<class R,class O, class F,class V_LIST,class P_LIST>")
    print("struct _m_bind_function%d" % _count)
    print(": public _m_function%d<R>::_inner<O, F, V_LIST, P_LIST>" % _count)
    
    print("{");
    print("enum{ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count};")
    print("");
    print("typedef  R return_type;")
    print("typedef  typename _m_function%d<R>::_inner<O, F, V_LIST, P_LIST>  base_type;" % _count)

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

    _bind_function = "_m_bind_function%d(O o, F f" % _count;
    print(_bind_function + _param + ")")
    print(":base_type(o, f" + _param_v + ")" )
    print("{}");
    
    print("};");


'''  
'''
_m_function(0, False)
_m_function(1, False)
_m_function(2, False)
_m_function(3, False)
_m_function(4, False)
_m_function(5, False)
_m_function(6, False)
_m_function(7, False)
_m_function(8, False)
_m_function(9, False)


_m_function(0, True)
_m_function(1, True)
_m_function(2, True)
_m_function(3, True)
_m_function(4, True)
_m_function(5, True)
_m_function(6, True)
_m_function(7, True)
_m_function(8, True)
_m_function(9, True)


print("");
print("//!< static function");

_m_bind_function(0)
_m_bind_function(1)
_m_bind_function(2)
_m_bind_function(3)
_m_bind_function(4)
_m_bind_function(5)
_m_bind_function(6)
_m_bind_function(7)
_m_bind_function(8)
_m_bind_function(9)

