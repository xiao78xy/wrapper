
def _s_operator_return_func(count, is_void, is_const):
    for i in range(10):
        _operator_v = "";
        for j in range(1,i+1):
            _tmp = "P%d p%d" % (j, j);
            _operator_v += _tmp;
            if j != (i):
                _operator_v += ",";

        print("")
        if is_const:
            if i >0:
                print("return_type operator()(" + _operator_v + ") const");
            else:
                print("return_type operator()() const");
        else:
            if i >0:
                print("return_type operator()(" + _operator_v + ")");
            else:
                print("return_type operator()()");
                

        print("{")

        #func param
        _v_list = ""
        _param_v="";
        for j in range(1,i+1):
            _tmp = "P%d" % j;
            _param_v += _tmp;
            if j != (i):
                _param_v += ",";

        _v_list = "";
        if i !=0:       
            _v_list_t = "_v_list%d" % i;        
            _v_list = _v_list_t + "< " + _param_v+ ">  v"
        else:
            _v_list = "_v_list0  v";
            
        _param_v="";
        for j in range(1,i+1):
            _tmp = "p%d" % j;
            _param_v += _tmp;
            if j != (i):
                _param_v += ",";

        if count != 0:
            if i !=0:
                print(_v_list + "(" + _param_v + ");" ) #local value
            else:            
                print(_v_list + ";" ) #local value
                
        _call_v = "";
        for j in range(count):
            index = j + 1
            _tmp = "v[VL::v%d()]" % index;
            _call_v += _tmp;
            if j != (count-1):
                _call_v += ",";
                
        if is_void:
            print( "base_type::_func()" + "(" + _call_v + ");" )
        else:
            print( "return base_type::_func()" + "(" + _call_v + ");" )

                
        print("}")

        

def _s_operator(count, is_void):
    #class header
    #typedef 
    if is_void:
        print("template<class F, class V_LIST, class P_LIST>")      
        print("struct _s_operator_void%d " % count)
        print(": public _s_function_base<F, P_LIST>, public V_LIST")
        print("{")
        print(" typedef  void return_type;")
    else:
        print("template<class R,class F, class V_LIST, class P_LIST>")      
        print("struct _s_operator_return%d " % count)
        print(": public _s_function_base<F, P_LIST>, public V_LIST")
        print("{")
        print(" typedef  R return_type;")
        
    print(" typedef  V_LIST VL;")
    print(" typedef _s_function_base<F, P_LIST> base_type;")

    print("");

    for i in range(1,10):
        print(" typedef typename base_type::P%d  P%d;" % (i, i))
        
    print("");
    for i in range(1,count+1):
        print(" typedef  _X_BIND_T(typename VL::V%d) V%d;" % (i, i))

    print("");

    #construct
    _construct = "";
    if is_void:
        _construct = "_s_operator_void%s(F f" % count;
    else:
        _construct = "_s_operator_return%s(F f" % count;
    
    _param     = "";
    for i in range(1,count+1):
        _temp =  ", V%d v%d" % (i, i)
        _param += _temp

    print(" %s%s)" % (_construct, _param));
    print(":base_type(f)")
    
    _param = ""
    for i in range(1,count+1):
        _temp =  "v%d" % i
        _param += _temp
        if i != (count):
                _param += ","
    print(",VL(" + _param + ")");
    
    print("{}");

    ##no const
    _s_operator_return_func(count, is_void, False);
    ##const 
    _s_operator_return_func(count, is_void, True);
    print("};")
    

def _s_operator_return(count):    
    print("")
    print("//return #%d" % count);
    _s_operator(count, False);
    


def _s_operator_void(count):    
    print("")
    print("//void #%d" % count);
    _s_operator(count, True);
    
'''
_s_operator_return(3)
_s_operator_void(3)

'''

if __name__ == "__main__":
    print("//return type");
    _s_operator_return(0)
    _s_operator_return(1)
    _s_operator_return(2)
    _s_operator_return(3)
    _s_operator_return(4)
    _s_operator_return(5)
    _s_operator_return(6)
    _s_operator_return(7)
    _s_operator_return(8)
    _s_operator_return(9)

    print("//return void");
    _s_operator_void(0)
    _s_operator_void(1)
    _s_operator_void(2)
    _s_operator_void(3)
    _s_operator_void(4)
    _s_operator_void(5)
    _s_operator_void(6)
    _s_operator_void(7)
    _s_operator_void(8)
    _s_operator_void(9)
