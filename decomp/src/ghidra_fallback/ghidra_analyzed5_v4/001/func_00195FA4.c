#include "ghidra_types.h"

extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_00196330(int param_1,undefined4 param_2);
extern float DAT_0019601c;
extern float DAT_00196020;

// USA 00195FA4 <- EU 00195FA4 (Ghidra, non-matching)
// GLOBAL DAT_0019601c float
// GLOBAL DAT_00196020 float

void func_00195FA4(int param_1)

{
  float fVar1;
  float fVar2;
  
  func_00196330(param_1,3);
  fVar1 = DAT_0019601c;
  *(uint *)(param_1 + 1000) = *(uint *)(param_1 + 0x24);
  func_0014FAFC(param_1,*(uint *)(param_1 + 0x24),fVar1);
  *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_1 + 0x3d4);
  *(float *)(param_1 + 0x48c) = *(float *)(param_1 + 0x3d8);
  fVar2 = *(float *)(param_1 + 0x484) - *(float *)(param_1 + 8);
  fVar1 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x490) = SQRT(fVar2 * fVar2 + fVar1 * fVar1) - DAT_00196020;
  return;
}

