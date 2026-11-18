#include "ghidra_types.h"

extern int *DAT_00439154;

// USA 00439040 <- EU 00439020 (Ghidra, non-matching)
// GLOBAL DAT_00439154 int *

undefined4 func_00439040(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  
  uVar2 = (uint)*(short *)(param_1 + 0x1b0);
  if (0xc < uVar2) {
    return 0xffffffff;
  }
  uVar3 = *(uint *)(*DAT_00439154 + (uint)*(byte *)(param_1 + 0x70) * 400 + 300);
  if ((uVar3 & 0x990000) == 0) {
    if ((uVar3 & 0x660000) == 0) {
      return 0xffffffff;
    }
    uVar3 = 0;
    do {
      piVar4 = (int *)(param_1 + 0x164);
      if (uVar3 < 0xd) {
        piVar4 = piVar4 + uVar3;
      }
      if (*piVar4 != -1 && uVar2 != 0xffffffff) {
        puVar5 = (uint *)(param_1 + 0x164);
        if (uVar3 < 0xd) {
          puVar5 = puVar5 + uVar3;
        }
        if (*puVar5 == uVar2) {
          uVar3 = uVar3 - 1;
          if (-1 < (int)uVar3) goto joined_r0x004390cc;
          break;
        }
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 0xd);
    uVar3 = *(int *)(param_1 + 0x160) - 1;
  }
  else {
    uVar3 = 0;
    do {
      piVar4 = (int *)(param_1 + 0x164);
      if (uVar3 < 0xd) {
        piVar4 = piVar4 + uVar3;
      }
      if (*piVar4 != -1 && uVar2 != 0xffffffff) {
        puVar5 = (uint *)(param_1 + 0x164);
        if (uVar3 < 0xd) {
          puVar5 = puVar5 + uVar3;
        }
        if (*puVar5 == uVar2) goto LAB_004390b4;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 0xd);
    uVar3 = 0xffffffff;
LAB_004390b4:
    uVar3 = uVar3 + 1;
    if (*(uint *)(param_1 + 0x160) <= uVar3) {
      uVar3 = 0;
    }
  }
joined_r0x004390cc:
  puVar1 = (undefined4 *)(param_1 + 0x164);
  if (uVar3 < 0xd) {
    puVar1 = (undefined4 *)(param_1 + 0x164 + uVar3 * 4);
  }
  return *puVar1;
}

