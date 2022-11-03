/*
    float2.inc
    kvann 2015, no rights reserved at all.
*/
 
#include <a_samp>
 
#if defined _float2_included
        #endinput
#endif
#define _float2_included
 
/*
    native Float:floatmod(Float:oper1, Float:oper2);
*/
 
#if !defined FLOAT_INFINITY
    #define FLOAT_INFINITY (Float:0x7F800000)
#endif
 
#if !defined FLOAT_POS_INFINITY
    #define FLOAT_POS_INFINITY (Float:0x7F800000)
#endif
 
#if !defined FLOAT_NEG_INFINITY
    #define FLOAT_NEG_INFINITY (Float:0xFF800000)
#endif
 
#if !defined FLOAT_NAN
    #define FLOAT_NAN (Float:0x7FFFFFFF)
#endif
 
stock Float:floatmod(Float:oper1, Float:oper2)
{
    if (oper2 == 0.0) return FLOAT_NAN;
    while (oper1 >= oper2) oper1 -= oper2;
    while (oper1 < 0.0) oper1 += oper2;
    return oper1;
}
 
native operator=(Float:oper) = floatround;
 
stock Float:operator%(Float:oper1, Float:oper2) return floatmod(oper1, oper2);
stock Float:operator%(oper1, Float:oper2) return floatmod(float(oper1), oper2);
stock Float:operator%(Float:oper1, oper2) return floatmod(oper1, float(oper2));