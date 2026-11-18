#include "ghidra_types.h"

extern int func_004CF478(int param_1,int param_2);
extern int func_004D8548(float *param_1,float *param_2,float *param_3,float fparam_0,float fparam_1, float fparam_2,float fparam_3,float fparam_4);
extern float DAT_00143ba0;
extern float DAT_00143ba4;
extern float DAT_00143ba8;

// USA 00143B28 <- EU 00143B28 (Ghidra, non-matching)
// GLOBAL DAT_00143ba0 float
// GLOBAL DAT_00143ba4 float
// GLOBAL DAT_00143ba8 float

undefined4 func_00143B28(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fparam_0;
  float fparam_3;
  
  if (*(uint *)(param_1 + 0x490) < *(uint *)(param_1 + 0x494)) {
    *(uint *)(param_1 + 0x490) = *(uint *)(param_1 + 0x490) + 1;
    return 0;
  }
  if (*(uint *)(param_1 + 0x4ac) <= *(uint *)(param_1 + 0x4a8)) {
    *(undefined1 *)(param_1 + 0x411) = 0;
    return func_004CF478(*(int *)(param_1 + 0x46c),0);
  }
  iVar1 = *(uint *)(param_1 + 0x4a8) + 1;
  *(int *)(param_1 + 0x4a8) = iVar1;
  fparam_0 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  fparam_3 = (float)VectorUnsignedToFloat(*(uint *)(param_1 + 0x4ac),(byte)(in_fpscr >> 0x15) & 3);
  return func_004D8548((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x460),(float *)(param_1 + 0x454),
                fparam_0,DAT_00143ba8,DAT_00143ba4,fparam_3,DAT_00143ba0);
}

