#include "ghidra_types.h"

extern float DAT_0045dc7c;
extern undefined4 DAT_0045dc80;
extern float DAT_0045dc84;

// USA 0045DC34 <- EU 0045DC0C (Ghidra, non-matching)
// GLOBAL DAT_0045dc7c float
// GLOBAL DAT_0045dc80 undefined4
// GLOBAL DAT_0045dc84 float

undefined4 func_0045DC34(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  
  uVar1 = DAT_0045dc80;
  fVar3 = *(float *)(param_1 + 0x160) + DAT_0045dc7c;
  *(float *)(param_1 + 0x160) = fVar3;
  iVar2 = *(int *)(param_1 + 0x150);
  *(float *)(iVar2 + 0x1c) = -fVar3;
  *(undefined4 *)(iVar2 + 0x20) = uVar1;
  *(undefined4 *)(iVar2 + 0x24) = uVar1;
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  if (*(float *)(param_1 + 0x164) <= *(float *)(param_1 + 0x160)) {
    *(float *)(param_1 + 0x160) =
         *(float *)(param_1 + 0x160) - (*(float *)(param_1 + 0x164) + DAT_0045dc84);
  }
  return (undefined4)param_1;
}

