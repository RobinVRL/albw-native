#include "ghidra_types.h"


// USA 003EE454 <- EU 003EE434 (Ghidra, non-matching)

undefined4 func_003EE454(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(param_1 + 0x138);
  fVar4 = *(float *)(iVar1 + 0x378);
  fVar2 = *(float *)(iVar1 + 0x38c);
  fVar3 = *(float *)(iVar1 + 0x390);
  fVar5 = *(float *)(iVar1 + 0x3a4);
  *(float *)(param_1 + 0x7c) = *(float *)(param_1 + 0x7c) + *(float *)(iVar1 + 0x374);
  *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x80) + fVar4;
  *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) + fVar2;
  *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) + fVar3;
  *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x70) + fVar5;
  return (undefined4)param_1;
}

