#include "ghidra_types.h"

extern int func_003D49C4(short *param_1,float *param_2,float *param_3,undefined4 param_4, undefined4 param_5,float fparam_0,float fparam_1,float fparam_2,float fparam_3, float fparam_4,float fparam_5,float fparam_6,float fparam_7);

// USA 003D566C <- EU 003D564C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4

undefined4 func_003D566C(int param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5,
                  float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4,
                  float fparam_5,float fparam_6,float fparam_7)

{
  return func_003D49C4((short *)(param_1 + 0xc),param_2,param_3,param_4,param_5,fparam_0,fparam_1,fparam_2,
                fparam_3,fparam_4,fparam_5,fparam_6,fparam_7);
}

