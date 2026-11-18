#include "ghidra_types.h"


// USA 00503970 <- EU 00503948 (Ghidra, non-matching)

void func_00503970(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 == 2) {
    return;
  }
  piVar2 = (int *)(param_1 + 0x10);
  if (param_2 < 0x11) {
    piVar2 = piVar2 + param_2;
  }
  if (*piVar2 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xac + param_2 * 4) = 0;
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    uVar4 = *(uint *)(param_1 + 100);
    do {
      puVar5 = *(uint **)(param_1 + 0x58);
      if (uVar3 < uVar4) {
        iVar7 = *(int *)(param_1 + 0x60) + uVar3;
        if (*(int *)(param_1 + 0x5c) <= iVar7) {
          iVar7 = iVar7 - *(int *)(param_1 + 0x5c);
        }
        puVar5 = *(uint **)(param_1 + 0x58) + iVar7;
      }
      if (*puVar5 == param_2) {
        if (0 < (int)uVar4) {
          bVar9 = uVar3 == 0;
          if (-1 < (int)uVar3) {
            bVar9 = uVar4 == uVar3;
          }
          if (!bVar9 && (-1 < (int)uVar3 && (int)uVar3 <= (int)uVar4)) {
            if ((int)uVar3 < (int)(uVar4 - 1)) {
              do {
                iVar6 = *(int *)(param_1 + 0x5c);
                iVar7 = *(int *)(param_1 + 0x60) + uVar3;
                if (iVar6 <= iVar7) {
                  iVar7 = iVar7 - iVar6;
                }
                iVar8 = uVar3 + 1 + *(int *)(param_1 + 0x60);
                if (iVar6 <= iVar8) {
                  iVar8 = iVar8 - iVar6;
                }
                uVar3 = uVar3 + 1;
                *(undefined4 *)(*(int *)(param_1 + 0x58) + iVar7 * 4) =
                     *(undefined4 *)(*(int *)(param_1 + 0x58) + iVar8 * 4);
              } while ((int)uVar3 < *(int *)(param_1 + 100) + -1);
            }
            *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
          }
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)uVar4);
  }
  puVar1 = (undefined4 *)(param_1 + 0x10);
  if (param_2 < 0x11) {
    puVar1 = puVar1 + param_2;
  }
  *puVar1 = 0;
  return;
}

