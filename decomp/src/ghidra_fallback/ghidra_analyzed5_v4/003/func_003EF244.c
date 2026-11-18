#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern undefined4 *DAT_003ef2d4;
extern int *DAT_003ef2d8;

// USA 003EF244 <- EU 003EF224 (Ghidra, non-matching)
// GLOBAL DAT_003ef2d4 undefined4 *
// GLOBAL DAT_003ef2d8 int *

undefined8 func_003EF244(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  puVar1 = DAT_003ef2d4;
  *(undefined4 *)(param_1 + 4) = DAT_003ef2d4[2];
  piVar2 = DAT_003ef2d8;
  uVar4 = (uint)*(byte *)(param_1 + 0x14);
  puVar3 = (uint *)*puVar1;
  if (uVar4 == 0) {
    if (puVar1[1] != 0) {
      iVar5 = *DAT_003ef2d8;
      *(int *)(*(int *)(iVar5 + 0x28) + 0x10) = puVar1[1] * 6;
      func_0010E3C4(puVar3,*(uint **)(iVar5 + 0x28),*(int *)(iVar5 + 0x2c) << 2);
      *puVar1 = puVar3 + *(int *)(iVar5 + 0x2c);
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + puVar1[1];
      puVar1[1] = 0;
    }
    iVar5 = *piVar2;
    puVar3 = (uint *)*puVar1;
    uVar6 = func_0010E3C4(puVar3,*(uint **)(iVar5 + 0x10),*(int *)(iVar5 + 0x14) << 2);
    uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
    puVar3 = puVar3 + *(int *)(iVar5 + 0x14);
  }
  return CONCAT44(uVar4,puVar3);
}

