#include "ghidra_types.h"


// USA 00580C50 <- EU 00580C28 (Ghidra, non-matching)

void func_00580C50(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 4);
  fVar2 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 8);
  *param_2 = fVar1;
  param_2[1] = fVar2;
  switch(*(undefined1 *)(param_1 + 0x14)) {
  case 1:
  case 2:
    *param_2 = fVar2;
    param_2[1] = fVar1;
  }
  fVar1 = *param_2 / *(float *)(param_3 + 4);
  *param_2 = fVar1;
  fVar2 = param_2[1] / *(float *)(param_3 + 8);
  param_2[1] = fVar2;
  *param_2 = (*(float *)(param_3 + 0x14) - *(float *)(param_3 + 0xc)) * fVar1;
  param_2[1] = (*(float *)(param_3 + 0x18) - *(float *)(param_3 + 0x10)) * fVar2;
  return;
}

