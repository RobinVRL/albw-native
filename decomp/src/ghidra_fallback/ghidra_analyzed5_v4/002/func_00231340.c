#include "ghidra_types.h"

extern undefined4 DAT_002313c0;

// USA 00231340 <- EU 00231340 (Ghidra, non-matching)
// GLOBAL DAT_002313c0 undefined4

void func_00231340(short *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int in_r3;
  
  uVar3 = DAT_002313c0;
  iVar4 = *(int *)(param_1 + 4);
  if ((iVar4 != 0) && (uVar5 = (uint)param_1[1], -1 < (int)uVar5)) {
    uVar1 = *(uint *)(iVar4 + 8);
    if (*param_1 == 2) {
      iVar4 = *(int *)(iVar4 + 0xc);
      if (uVar5 < uVar1) {
        iVar4 = iVar4 + uVar5 * 0x38;
      }
      *(undefined4 *)(iVar4 + 0x14) = DAT_002313c0;
      *(undefined4 *)(*(int *)(iVar4 + 0x10) + 0x10) = uVar3;
      return;
    }
    if (uVar5 < uVar1) {
      in_r3 = *(int *)(iVar4 + 0xc);
      iVar2 = uVar5 * 7;
    }
    else {
      iVar2 = *(int *)(iVar4 + 0xc);
    }
    iVar4 = *(int *)(iVar4 + 0xc);
    if (uVar5 < uVar1) {
      iVar2 = in_r3 + iVar2 * 8;
      iVar4 = iVar4 + uVar5 * 0x38;
    }
    uVar3 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(iVar4 + 0x14) = uVar3;
    *(undefined4 *)(*(int *)(iVar4 + 0x10) + 0x10) = uVar3;
  }
  return;
}

