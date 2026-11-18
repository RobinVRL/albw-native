#include "ghidra_types.h"

extern float func_0036EAF8(undefined4 param_1,int param_2);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern float DAT_0036e984;
extern float DAT_0036e988;
extern float DAT_0036e98c;
extern float DAT_0036e990;

// USA 0036E93C <- EU 0036E918 (Ghidra, non-matching)
// GLOBAL DAT_0036e984 float
// GLOBAL DAT_0036e988 float
// GLOBAL DAT_0036e98c float
// GLOBAL DAT_0036e990 float

undefined4 func_0036E93C(int param_1,int param_2)

{
  float fVar1;
  float fparam_3;
  float fparam_2;
  
  fVar1 = func_0036EAF8(param_1,param_2);
  fparam_3 = DAT_0036e984;
  fparam_2 = DAT_0036e988;
  func_0068C794((float *)(param_1 + 0x5c),fVar1,DAT_0036e98c,DAT_0036e988,DAT_0036e984);
  fVar1 = DAT_0036e990;
  func_0068C794((float *)(param_1 + 4),*(float *)(param_2 + 0x3d0),DAT_0036e990,fparam_2,fparam_3);
  return func_0068C794((float *)(param_1 + 0xc),*(float *)(param_2 + 0x3d8),fVar1,fparam_2,fparam_3);
}

