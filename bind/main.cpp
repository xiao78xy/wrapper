// bind_.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "./bind/bind.h"
 
int   _print1(int i1,const std::string& _str, long l)
{
    std::cout <<i1 << ";" << _str << ";" << l << std::endl;
    return 0;
}

int   _print2(int i1,const std::string& _str, long l, long l2)
{
    std::cout <<i1 << ";" << _str << ";" << l <<    ";" << l2  << std::endl;
    return 0;
}

int   _print3(int i1,const std::string& _str1, long l, const std::string& _str2, long l2)
{
    std::cout <<i1 << ";" << _str1 << ";" << l  <<    ";" << l2  <<    ";" << _str2<< std::endl;
    return 0;
} 

static void static_func_case()
{
    do 
    { 
        std::string str("test");
        std::string str2("test2");
        auto  _f1 = X_BIND(_print1, 23, $1, 123L);
        auto  _f2 = X_BIND(_print2, 23, $1, 123L, $2);
        auto  _f3 = X_BIND(_print2, 23, X_VALUE_REF(str), 123L, $1);

        _f1(str);
        _f2(str, 1213L);
        _f3(13L);  
    } while (0);


    do 
    { 
        std::string str("test");
        std::string str2("test2");
        X_FUNCTION(void(const std::string&))        _f1 = X_BIND(_print1, 23, $1, 123L);
        X_FUNCTION(void(const std::string&,long))   _f2 = X_BIND(_print2, 23, $1, 123L, $2);
        X_FUNCTION(void(long))                      _f3 = X_BIND(_print2, 23, X_VALUE_REF(str), 123L, $1);

        _f1(str);
        _f2(str, 1213L);
        _f3(13L); 

        do 
        { 
            typedef  X_FUNCTION(void(std::string&,long))    _tFuncT1; 
            _tFuncT1  _f4 = X_BIND(_print3, 23, $1, 123L, X_VALUE_REF(str), $2);
            _f4(str2, 234443);
            _tFuncT1  _f41 = _f4;
            _tFuncT1  _f42;
            _f42 = _f4;
            _f41(str2, 23443);
            _f4(str2, 2343);
        } while (0);

        do 
        { 
            typedef  X_FUNCTION(void(long,std::string&))    _tFuncT1; 
            _tFuncT1  _f4 = X_BIND(_print3, 23, $2, 123L, X_VALUE_REF(str), $1);
            _f4(234443,str2);
            _tFuncT1  _f41 = _f4;
            _f41(23443, str2);
            _f4(2343, str2);
        } while (0);

    } while (0); 
}


class CBindObj
{
public:
    CBindObj()
        :m_long(1)
        ,m_str("def")
    {
        std::cout << "CBindObj_2" << std::endl;
    }
    CBindObj(long l, const std::string& _str)
        :m_long(l)
        ,m_str(_str)
    {
        std::cout << "CBindObj_2" << std::endl;
    }
    ~CBindObj()
    {
        std::cout << "~CBindObj" << std::endl;
    }

    int   _print1(int i1,const std::string& _str, long l)
    {
        std::cout << this << ":" << m_str << ":" << m_long  <<  "{{"<< std::endl;
        std::cout <<i1 << ";" << _str << ";" << l << std::endl;
        std::cout << "}}" << std::endl << std::endl;
        return 0;
    }

    int   _print2(int i1,const std::string& _str, long l, long l2)
    {
        std::cout << this << ":" << m_str << ":" << m_long  <<  "{{"<< std::endl;
        std::cout <<i1 << ";" << _str << ";" << l <<    ";" << l2  << std::endl;
        std::cout << "}}" << std::endl << std::endl;
        return 0;
    }

    int   _print3(int i1,const std::string& _str1, long l, const std::string& _str2, long l2)
    {
        std::cout << this << ":" << m_str << ":" << m_long  <<  "{{"<< std::endl;
        std::cout <<i1 << ";" << _str1 << ";" << l  <<    ";" << l2  <<    ";" << _str2<< std::endl;
        std::cout << "}}" << std::endl << std::endl;
        return 0;
    } 
private:
    long            m_long;
    std::string     m_str;
};

static void class_func_case()
{
    CBindObj  _bindobj;
    CBindObj  _bindobj1(123L, "test bind obj!");
    do 
    {
        do 
        {  
            std::string str("test");
            std::string str2("test2");
            auto  _f1 = X_BIND(&CBindObj::_print1,  &_bindobj, 23, $1, 123L);
            auto  _f2 = X_BIND(&CBindObj::_print2,  &_bindobj,23, $1, 123L, $2);
            auto  _f3 = X_BIND(&CBindObj::_print2,  &_bindobj,23, X_VALUE_REF(str), 123L, $1);

            _f1(str);
            _f2(str, 1213L);
            _f3(13L);  
        } while (0);


        do 
        {  
            std::string str("test");
            std::string str2("test2");
            auto  _f1 = X_BIND(&CBindObj::_print1,  23, $1, 123L);
            auto  _f2 = X_BIND(&CBindObj::_print2,  23, $1, 123L, $2);
            auto  _f3 = X_BIND(&CBindObj::_print2,  23, X_VALUE_REF(str), 123L, $1);

            _f1(&_bindobj, str);
            _f2(&_bindobj, str, 1213L);
            _f3(&_bindobj, 13L);  

            _f1(&_bindobj1, str);
            _f2(&_bindobj1, str, 1213L);
            _f3(&_bindobj1, 13L);  
        } while (0);

    } while (0);


    do 
    { 
        std::string str("test");
        std::string str2("test2");
        X_FUNCTION(void(const std::string&))        _f1 = X_BIND(&CBindObj::_print1, &_bindobj, 23, $1, 123L); 
        X_FUNCTION(void(const std::string&,long))  _f2  = X_BIND(&CBindObj::_print2, &_bindobj, 23, $1, 123L, $2);
        X_FUNCTION(void(long))  _f3                     = X_BIND(&CBindObj::_print2, &_bindobj, 23, X_VALUE_REF(str), 123L, $1);

        _f1(str);
        _f2(str, 1213L);
        _f3(13L); 

        do 
        { 
            typedef  X_FUNCTION(void(std::string&,long))    _tFuncT1; 
            _tFuncT1  _f4 = X_BIND(&CBindObj::_print3, &_bindobj,23, $1, 123L, X_VALUE_REF(str), $2);
            _f4(str2, 234443);
            _tFuncT1  _f41 = _f4;
            _f41(str2, 23443);
            _f4(str2, 2343);
        } while (0);

        do 
        { 
            typedef  X_FUNCTION(void(long,std::string&))    _tFuncT1; 
            _tFuncT1  _f4 = X_BIND(&CBindObj::_print3, &_bindobj,23, $2, 123L, X_VALUE_REF(str), $1);
            _f4(234443,str2);
            _tFuncT1  _f41 = _f4;
            _f41(23443, str2);
            _f4(2343, str2);
        } while (0);
    } while (0);
}

int _tmain(int argc, _TCHAR* argv[])
{
     static_func_case();
     class_func_case();
    return 0;
}

