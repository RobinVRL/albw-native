#include "ghidra_types.h"


// USA 003EEF88 <- EU 003EEF68 (Ghidra, non-matching)

undefined4 func_003EEF88(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = *(int *)(param_1 + 0x144);
  iVar2 = *(int *)(iVar1 + 0x18);
  fVar3 = *(float *)(*(int *)(iVar1 + 0xd8) + 0x4b8);
  fVar5 = *(float *)(iVar2 + 0x230);
  fVar6 = *(float *)(iVar2 + 0x234);
  fVar4 = *(float *)(iVar2 + 0x238);
  *param_2 = *(float *)(param_1 + 0xb0) * *(float *)(iVar2 + 0x22c) * fVar3 *
             *(float *)(iVar1 + 0x194);
  param_2[1] = *(float *)(param_1 + 0xb4) * fVar5 * fVar3 *
               *(float *)(*(int *)(param_1 + 0x144) + 0x198);
  param_2[2] = *(float *)(param_1 + 0xb8) * fVar6 * fVar3 *
               *(float *)(*(int *)(param_1 + 0x144) + 0x19c);
  param_2[3] = *(float *)(param_1 + 0x5c) * fVar4 *
               *(float *)(*(int *)(param_1 + 0x144) + 0x90) *
               *(float *)(*(int *)(param_1 + 0x144) + 0x1a0) * *(float *)(param_1 + 0xa8);
  return (undefined4)param_1;
}

