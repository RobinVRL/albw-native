#include "ghidra_types.h"

extern float DAT_00481528;
extern float DAT_0048152c;
extern undefined4 DAT_00481530;

// USA 00481500 <- EU 004814D8 (Ghidra, non-matching)
// GLOBAL DAT_00481528 float
// GLOBAL DAT_0048152c float
// GLOBAL DAT_00481530 undefined4

void func_00481500(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  
  uVar1 = DAT_00481530;
  iVar2 = *(int *)(**(int **)(param_1 + 0x1c) + 0x10);
  if (param_2 != 0) {
    fVar3 = *(float *)(param_2 + 0x20) + DAT_0048152c;
    *(float *)(iVar2 + 0x1c) = *(float *)(param_2 + 0x1c) + DAT_00481528;
    *(float *)(iVar2 + 0x20) = fVar3;
    *(undefined4 *)(iVar2 + 0x24) = uVar1;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  }
  return;
}

