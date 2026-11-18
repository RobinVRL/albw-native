#include "ghidra_types.h"

extern undefined4 DAT_004ad728;
extern undefined4 DAT_004ad72c;

// USA 004AD670 <- EU 004AD648 (Ghidra, non-matching)
// GLOBAL DAT_004ad728 undefined4
// GLOBAL DAT_004ad72c undefined4

undefined4 func_004AD670(int param_1,int *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  if (*(char *)(*param_2 + 5) != '\x01') {
    return 0;
  }
  uVar7 = 0;
  uVar8 = *(uint *)(param_1 + 0x7730);
  if (0 < (int)uVar8) {
    puVar4 = *(undefined4 **)(param_1 + 0x7738);
    do {
      puVar9 = puVar4;
      if (uVar7 < uVar8) {
        puVar9 = puVar4 + uVar7 * 7;
      }
      if ((int *)*puVar9 == param_2) {
        if (uVar7 < uVar8) {
          puVar4 = puVar4 + uVar7 * 7;
        }
        if (puVar4 != (undefined4 *)0x0) {
          return puVar4;
        }
        break;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar8);
  }
  if ((int)uVar8 < *(int *)(param_1 + 0x7734)) {
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0x7738) + uVar8 * 0x1c);
    *(uint *)(param_1 + 0x7730) = uVar8 + 1;
  }
  else {
    puVar4 = (undefined4 *)0x0;
  }
  *puVar4 = param_2;
  uVar3 = DAT_004ad72c;
  uVar2 = DAT_004ad728;
  iVar6 = *param_2;
  puVar4[4] = *(undefined4 *)(iVar6 + 8);
  bVar1 = *(byte *)(iVar6 + 4);
  bVar5 = bVar1 & 1;
  if ((bVar1 & 1) != 0) {
    bVar5 = 1;
  }
  *(byte *)(puVar4 + 6) = bVar5;
  puVar4[2] = uVar2;
  puVar4[1] = uVar2;
  puVar4[3] = uVar3;
  puVar4[5] = 0;
  return puVar4;
}

