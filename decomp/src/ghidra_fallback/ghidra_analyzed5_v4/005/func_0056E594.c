#include "ghidra_types.h"

extern int func_00417710(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,float fparam_0, float fparam_1,float fparam_2);

// USA 0056E594 <- EU 0056E56C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 int

undefined4 func_0056E594(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  int param_6,float fparam_0,float fparam_1,float fparam_2)

{
  return func_00417710(param_2,param_3,param_4,param_5,param_6,fparam_0,fparam_1,fparam_2);
}

