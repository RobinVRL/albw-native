#include "ghidra_types.h"


// USA 004302B8 <- EU 00430298 (Ghidra, non-matching)

undefined4 func_004302B8(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + 0xd0);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0xd4);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0xd8);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar1 + 0xdc);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar1 + 0xe0);
  fVar2 = *(float *)(iVar1 + 0xe4);
  *(float *)(param_1 + 0x48) = fVar2;
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 4);
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 8);
  *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 4);
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) + *(float *)(param_1 + 8);
  *(float *)(param_1 + 0x48) = fVar2 + *(float *)(param_1 + 0xc);
  return (undefined4)param_1;
}

