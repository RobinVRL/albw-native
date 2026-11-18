#include "ghidra_types.h"

extern float DAT_00589004;

// USA 00588FD4 <- EU 00588FAC (Ghidra, non-matching)
// GLOBAL DAT_00589004 float

void func_00588FD4(int param_1,float *param_2)

{
  float fVar1;
  
  *param_2 = *(float *)(*(int *)(param_1 + 0x18) + 0xac) * DAT_00589004;
  param_2[1] = *(float *)(*(int *)(param_1 + 0x18) + 0x1a4);
  param_2[2] = *(float *)(*(int *)(param_1 + 0x18) + 0x1a8);
  param_2[3] = *(float *)(*(int *)(param_1 + 0x18) + 0xe4);
  fVar1 = *(float *)(*(int *)(param_1 + 0x18) + 0x19c);
  param_2[4] = *(float *)(*(int *)(param_1 + 0x18) + 0x198);
  param_2[5] = fVar1;
  param_2[6] = 0.0;
  return;
}

