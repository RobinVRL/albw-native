#include "ghidra_types.h"


// USA 00520A8C <- EU 00520A64 (Ghidra, non-matching)

undefined4 func_00520A8C(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x10 + uVar5 * 4) + 100))(*(int **)(param_1 + 0x10 + uVar5 * 4));
    if (iVar3 != 0) {
      return 1;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0xf);
  if (0 < *(int *)(param_1 + 0x54)) {
    iVar4 = *(int *)(param_1 + 0x58);
    bVar2 = 0;
    bVar1 = 0;
    for (iVar3 = *(int *)(param_1 + 0x50) - iVar4; iVar3 != (param_1 + 0x4c) - iVar4;
        iVar3 = *(int *)(iVar3 + iVar4 + 4) - iVar4) {
      if ((*(short *)(iVar3 + 0x10) == 0) && (*(short *)(iVar3 + 0x12) != 0)) {
        if ((*(byte *)(iVar3 + 0x17) & 1) != 0) {
          bVar2 = 1;
        }
        if ((*(byte *)(iVar3 + 0x17) & 2) != 0) {
          bVar1 = 1;
        }
      }
    }
    if ((bool)(bVar2 & bVar1)) {
      return 1;
    }
  }
  return 0;
}

