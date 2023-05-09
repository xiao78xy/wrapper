'''
'''


def _m_delegate(_count, is_void):

    print("");
    print("//#%d" % _count);
    if is_void:        
        print("template<>")
        print("struct _m_delegate%d<void>" % _count)
    else:
        print("template<class R>")
        print("struct _m_delegate%d " % _count)

    print("{");
    #typedef
    if is_void:
        print(" typedef void return_type;");
    else:
        print(" typedef R    return_type;");
        
    print("");

    print("template<class O, class F, class V_LIST, class P_LIST>")
    print("struct _inner")
    print(" : public _m_delegate_base<O, F, P_LIST>");
    print(" , public V_LIST");
        
    print("{");
    
    print("typedef _m_delegate_base<O, F, P_LIST> base_type;");
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
            
    print("_inner(O o, F f" + _param + ")" )
    print(":base_type(o, f)" )
    print(",VL("  +  _param_v + ")" )
    print("{}");

    print("");             
    print("return_type operator()(" + _param_P + ")")
    print("{")
    if is_void:
        print("(base_type::_obj()->*base_type::_func())(" + _param_p + ");" )
    else:
        print("return (base_type::_obj()->*base_type::_func())(" + _param_p + ");" )
    print("}")
    print("");
        
    print("};");    
    print("};");


def _m_delegate_function(_count):
    print("//#%d" % _count);
    print("template<class R, class O, class F,class V_LIST,class P_LIST>")
    print("struct _m_delegate_function%d" % _count)
    print(": public _m_delegate%d<R>::_inner<O, F,V_LIST,P_LIST>" % _count)
    
    print("{");
    print("enum{ARGS_COUNT = _get_param_count<P_LIST::_C_LIST>::param_count};")
    print("");
    print("typedef  R return_type;")
    print("typedef  typename _m_delegate%d<R>::_inner<O, F,V_LIST,P_LIST>  base_type;" % _count)

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

    _bind_function = "_m_delegate_function%d(O o, F f" % _count;
    print(_bind_function + _param + ")")
    print(":base_type(o, f" + _param_v + ")" )
    print("{}");
    
    print("};");


'''  
'''
_m_delegate(0, False)
_m_delegate(1, False)
_m_delegate(2, False)
_m_delegate(3, False)
_m_delegate(4, False)
_m_delegate(5, False)
_m_delegate(6, False)
_m_delegate(7, False)
_m_delegate(8, False)
_m_delegate(9, False)


_m_delegate(0, True)
_m_delegate(1, True)
_m_delegate(2, True)
_m_delegate(3, True)
_m_delegate(4, True)
_m_delegate(5, True)
_m_delegate(6, True)
_m_delegate(7, True)
_m_delegate(8, True)
_m_delegate(9, True)


print("");
print("//!< static function");

_m_delegate_function(0)
_m_delegate_function(1)
_m_delegate_function(2)
_m_delegate_function(3)
_m_delegate_function(4)
_m_delegate_function(5)
_m_delegate_function(6)
_m_delegate_function(7)
_m_delegate_function(8)
_m_delegate_function(9)

