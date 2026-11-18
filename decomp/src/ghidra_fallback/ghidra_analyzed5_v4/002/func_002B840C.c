#include "ghidra_types.h"

extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern float DAT_002b83f4;

// USA 002B840C <- EU 002B83E8 (Ghidra, non-matching)
// GLOBAL DAT_002b83f4 float

undefined4 func_002B840C(int param_1,float *param_2,float fparam_0,float fparam_1)

{
  return func_004D838C((float *)(param_1 + 0x3d0),param_2,fparam_0,fparam_1,DAT_002b83f4);
}

