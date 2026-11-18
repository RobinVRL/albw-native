#include "ghidra_types.h"

extern int func_002CBFF4(int param_1,float param_2,float *param_3,float fparam_0,float fparam_1);
extern float DAT_002cc5a0;
extern float DAT_002cc5a4;

// USA 002CC568 <- EU 002CC544 (Ghidra, non-matching)
// GLOBAL DAT_002cc5a0 float
// GLOBAL DAT_002cc5a4 float

undefined4 func_002CC568(int *param_1)

{
  float fparam_0;
  
  *(undefined1 *)((int)param_1 + 0x853) = 3;
  (**(code **)(*param_1 + 0xac))(param_1,3,0xffffffff);
  fparam_0 = DAT_002cc5a0;
  param_1[0x36a] = (int)ALBW_AS_U32(DAT_002cc5a0);
  param_1[0x36b] = (int)ALBW_AS_U32(fparam_0);
  param_1[0x36c] = (int)ALBW_AS_U32(fparam_0);
  param_1[0x36d] = 0;
  param_1[0x36e] = (int)ALBW_AS_U32(fparam_0);
  return func_002CBFF4((int)param_1,0.0,(float *)(param_1 + 0x36a),fparam_0,DAT_002cc5a4);
}

