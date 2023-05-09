#ifndef  __X_WRAPPER_COMMON_BIND_MACRO_H__
#define  __X_WRAPPER_COMMON_BIND_MACRO_H__

//static function type
#define  _X_BIND_S_FUNCTION_T0      R (*)()
#define  _X_BIND_S_FUNCTION_T1      R (*)(P1)
#define  _X_BIND_S_FUNCTION_T2      R (*)(P1, P2)
#define  _X_BIND_S_FUNCTION_T3      R (*)(P1, P2, P3)
#define  _X_BIND_S_FUNCTION_T4      R (*)(P1, P2, P3, P4)
#define  _X_BIND_S_FUNCTION_T5      R (*)(P1, P2, P3, P4, P5)
#define  _X_BIND_S_FUNCTION_T6      R (*)(P1, P2, P3, P4, P5, P6)
#define  _X_BIND_S_FUNCTION_T7      R (*)(P1, P2, P3, P4, P5, P6, P7)
#define  _X_BIND_S_FUNCTION_T8      R (*)(P1, P2, P3, P4, P5, P6, P7, P8)
#define  _X_BIND_S_FUNCTION_T9      R (*)(P1, P2, P3, P4, P5, P6, P7, P8, P9)

//static function param
#define  _X_BIND_S_FUNCTION_P0      R (*f)()
#define  _X_BIND_S_FUNCTION_P1      R (*f)(P1)
#define  _X_BIND_S_FUNCTION_P2      R (*f)(P1, P2)
#define  _X_BIND_S_FUNCTION_P3      R (*f)(P1, P2, P3)
#define  _X_BIND_S_FUNCTION_P4      R (*f)(P1, P2, P3, P4)
#define  _X_BIND_S_FUNCTION_P5      R (*f)(P1, P2, P3, P4, P5)
#define  _X_BIND_S_FUNCTION_P6      R (*f)(P1, P2, P3, P4, P5, P6)
#define  _X_BIND_S_FUNCTION_P7      R (*f)(P1, P2, P3, P4, P5, P6, P7)
#define  _X_BIND_S_FUNCTION_P8      R (*f)(P1, P2, P3, P4, P5, P6, P7, P8)
#define  _X_BIND_S_FUNCTION_P9      R (*f)(P1, P2, P3, P4, P5, P6, P7, P8, P9)


#define  _X_BIND_S_FUNCTION_RT0     R ()
#define  _X_BIND_S_FUNCTION_RT1     R (P1)
#define  _X_BIND_S_FUNCTION_RT2     R (P1, P2)
#define  _X_BIND_S_FUNCTION_RT3     R (P1, P2, P3)
#define  _X_BIND_S_FUNCTION_RT4     R (P1, P2, P3, P4)
#define  _X_BIND_S_FUNCTION_RT5     R (P1, P2, P3, P4, P5)
#define  _X_BIND_S_FUNCTION_RT6     R (P1, P2, P3, P4, P5, P6)
#define  _X_BIND_S_FUNCTION_RT7     R (P1, P2, P3, P4, P5, P6, P7)
#define  _X_BIND_S_FUNCTION_RT8     R (P1, P2, P3, P4, P5, P6, P7, P8)
#define  _X_BIND_S_FUNCTION_RT9     R (P1, P2, P3, P4, P5, P6, P7, P8, P9)

//member function type
#define  _X_BIND_M_FUNCTION_T0      R (C::*)()
#define  _X_BIND_M_FUNCTION_T1      R (C::*)(P1)
#define  _X_BIND_M_FUNCTION_T2      R (C::*)(P1, P2)
#define  _X_BIND_M_FUNCTION_T3      R (C::*)(P1, P2, P3)
#define  _X_BIND_M_FUNCTION_T4      R (C::*)(P1, P2, P3, P4)
#define  _X_BIND_M_FUNCTION_T5      R (C::*)(P1, P2, P3, P4, P5)
#define  _X_BIND_M_FUNCTION_T6      R (C::*)(P1, P2, P3, P4, P5, P6)
#define  _X_BIND_M_FUNCTION_T7      R (C::*)(P1, P2, P3, P4, P5, P6, P7)
#define  _X_BIND_M_FUNCTION_T8      R (C::*)(P1, P2, P3, P4, P5, P6, P7, P8)
#define  _X_BIND_M_FUNCTION_T9      R (C::*)(P1, P2, P3, P4, P5, P6, P7, P8, P9)

//member function param
#define  _X_BIND_M_FUNCTION_P0      R (C::*f)()
#define  _X_BIND_M_FUNCTION_P1      R (C::*f)(P1)
#define  _X_BIND_M_FUNCTION_P2      R (C::*f)(P1, P2)
#define  _X_BIND_M_FUNCTION_P3      R (C::*f)(P1, P2, P3)
#define  _X_BIND_M_FUNCTION_P4      R (C::*f)(P1, P2, P3, P4)
#define  _X_BIND_M_FUNCTION_P5      R (C::*f)(P1, P2, P3, P4, P5)
#define  _X_BIND_M_FUNCTION_P6      R (C::*f)(P1, P2, P3, P4, P5, P6)
#define  _X_BIND_M_FUNCTION_P7      R (C::*f)(P1, P2, P3, P4, P5, P6, P7)
#define  _X_BIND_M_FUNCTION_P8      R (C::*f)(P1, P2, P3, P4, P5, P6, P7, P8)
#define  _X_BIND_M_FUNCTION_P9      R (C::*f)(P1, P2, P3, P4, P5, P6, P7, P8, P9)

//function paramter
#define  _X_BIND_FP_P1              P1 p1
#define  _X_BIND_FP_P2              _X_BIND_FP_P1, P2 p2
#define  _X_BIND_FP_P3              _X_BIND_FP_P2, P3 p3
#define  _X_BIND_FP_P4              _X_BIND_FP_P3, P4 p4
#define  _X_BIND_FP_P5              _X_BIND_FP_P4, P5 p5
#define  _X_BIND_FP_P6              _X_BIND_FP_P5, P6 p6
#define  _X_BIND_FP_P7              _X_BIND_FP_P6, P7 p7
#define  _X_BIND_FP_P8              _X_BIND_FP_P7, P8 p8
#define  _X_BIND_FP_P9              _X_BIND_FP_P8, P9 p9


//function paramter
#define  _X_BIND_FP_CP1             CP1 p1
#define  _X_BIND_FP_CP2             _X_BIND_FP_CP1, CP2 p2
#define  _X_BIND_FP_CP3             _X_BIND_FP_CP2, CP3 p3
#define  _X_BIND_FP_CP4             _X_BIND_FP_CP3, CP4 p4
#define  _X_BIND_FP_CP5             _X_BIND_FP_CP4, CP5 p5
#define  _X_BIND_FP_CP6             _X_BIND_FP_CP5, CP6 p6
#define  _X_BIND_FP_CP7             _X_BIND_FP_CP6, CP7 p7
#define  _X_BIND_FP_CP8             _X_BIND_FP_CP7, CP8 p8
#define  _X_BIND_FP_CP9             _X_BIND_FP_CP8, CP9 p9


//function paramter value
#define  _X_BIND_FPV_P1             p1
#define  _X_BIND_FPV_P2             _X_BIND_FPV_P1, p2
#define  _X_BIND_FPV_P3             _X_BIND_FPV_P2, p3
#define  _X_BIND_FPV_P4             _X_BIND_FPV_P3, p4
#define  _X_BIND_FPV_P5             _X_BIND_FPV_P4, p5
#define  _X_BIND_FPV_P6             _X_BIND_FPV_P5, p6
#define  _X_BIND_FPV_P7             _X_BIND_FPV_P6, p7
#define  _X_BIND_FPV_P8             _X_BIND_FPV_P7, p8
#define  _X_BIND_FPV_P9             _X_BIND_FPV_P8, p9

#define  _X_BIND_TP_P1              class P1
#define  _X_BIND_TP_P2              _X_BIND_TP_P1, class P2
#define  _X_BIND_TP_P3              _X_BIND_TP_P2, class P3
#define  _X_BIND_TP_P4              _X_BIND_TP_P3, class P4
#define  _X_BIND_TP_P5              _X_BIND_TP_P4, class P5
#define  _X_BIND_TP_P6              _X_BIND_TP_P5, class P6
#define  _X_BIND_TP_P7              _X_BIND_TP_P6, class P7
#define  _X_BIND_TP_P8              _X_BIND_TP_P7, class P8
#define  _X_BIND_TP_P9              _X_BIND_TP_P8, class P9


#define  _X_BIND_TP_CP1             class CP1
#define  _X_BIND_TP_CP2             _X_BIND_TP_CP1, class CP2
#define  _X_BIND_TP_CP3             _X_BIND_TP_CP2, class CP3
#define  _X_BIND_TP_CP4             _X_BIND_TP_CP3, class CP4
#define  _X_BIND_TP_CP5             _X_BIND_TP_CP4, class CP5
#define  _X_BIND_TP_CP6             _X_BIND_TP_CP5, class CP6
#define  _X_BIND_TP_CP7             _X_BIND_TP_CP6, class CP7
#define  _X_BIND_TP_CP8             _X_BIND_TP_CP7, class CP8
#define  _X_BIND_TP_CP9             _X_BIND_TP_CP8, class CP9


#define  _X_BIND_T_P1               P1
#define  _X_BIND_T_P2               _X_BIND_T_P1,  P2
#define  _X_BIND_T_P3               _X_BIND_T_P2,  P3
#define  _X_BIND_T_P4               _X_BIND_T_P3,  P4
#define  _X_BIND_T_P5               _X_BIND_T_P4,  P5
#define  _X_BIND_T_P6               _X_BIND_T_P5,  P6
#define  _X_BIND_T_P7               _X_BIND_T_P6,  P7
#define  _X_BIND_T_P8               _X_BIND_T_P7,  P8
#define  _X_BIND_T_P9               _X_BIND_T_P8,  P9


#define  _X_BIND_T_CP1              CP1
#define  _X_BIND_T_CP2              _X_BIND_T_CP1,  CP2
#define  _X_BIND_T_CP3              _X_BIND_T_CP2,  CP3
#define  _X_BIND_T_CP4              _X_BIND_T_CP3,  CP4
#define  _X_BIND_T_CP5              _X_BIND_T_CP4,  CP5
#define  _X_BIND_T_CP6              _X_BIND_T_CP5,  CP6
#define  _X_BIND_T_CP7              _X_BIND_T_CP6,  CP7
#define  _X_BIND_T_CP8              _X_BIND_T_CP7,  CP8
#define  _X_BIND_T_CP9              _X_BIND_T_CP8,  CP9


#define _X_BIND_T_ARG_$$1           $$<1>
#define _X_BIND_T_ARG_$$2           _X_BIND_T_ARG_$$1, $$<2>
#define _X_BIND_T_ARG_$$3           _X_BIND_T_ARG_$$2, $$<3>
#define _X_BIND_T_ARG_$$4           _X_BIND_T_ARG_$$3, $$<4>
#define _X_BIND_T_ARG_$$5           _X_BIND_T_ARG_$$4, $$<5>
#define _X_BIND_T_ARG_$$6           _X_BIND_T_ARG_$$5, $$<6>
#define _X_BIND_T_ARG_$$7           _X_BIND_T_ARG_$$6, $$<7>
#define _X_BIND_T_ARG_$$8           _X_BIND_T_ARG_$$7, $$<8>
#define _X_BIND_T_ARG_$$9           _X_BIND_T_ARG_$$8, $$<9>


#define _X_BIND_V_ARG_$1            $1
#define _X_BIND_V_ARG_$2            _X_BIND_V_ARG_$1, $2
#define _X_BIND_V_ARG_$3            _X_BIND_V_ARG_$2, $3
#define _X_BIND_V_ARG_$4            _X_BIND_V_ARG_$3, $4
#define _X_BIND_V_ARG_$5            _X_BIND_V_ARG_$4, $5
#define _X_BIND_V_ARG_$6            _X_BIND_V_ARG_$5, $6
#define _X_BIND_V_ARG_$7            _X_BIND_V_ARG_$6, $7
#define _X_BIND_V_ARG_$8            _X_BIND_V_ARG_$7, $8
#define _X_BIND_V_ARG_$9            _X_BIND_V_ARG_$8, $9


#endif //__X_WRAPPER_COMMON_BIND_MACRO_H__
