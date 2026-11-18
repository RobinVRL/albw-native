#include "ghidra_types.h"

extern int func_00273210(int param_1,short *param_2);
extern int func_005822A0(int param_1,uint param_2,undefined4 param_3);
extern uint *DAT_00273234;

// USA 00272FA4 <- EU 00272FCC (Ghidra, non-matching)
// GLOBAL DAT_00273234 uint *

undefined4 func_00272FA4(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  
  piVar2 = (int *)(param_1 + 0x7cb8);
  *piVar2 = 0;
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    do {
      if (uVar3 < *(uint *)(param_1 + 0x1c)) {
        iVar6 = *(int *)(param_1 + 0x24) + uVar3 * 0x620;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x24);
      }
      uVar3 = uVar3 + 1;
      *(undefined1 *)(iVar6 + 0x584) = 0;
    } while ((int)uVar3 < *(int *)(param_1 + 0x1c));
  }
  uVar3 = 0;
  uVar9 = *DAT_00273234;
  if (uVar9 != 0) {
    bVar1 = func_005822A0(uVar9,1,4);
    uVar3 = (uint)bVar1;
  }
  puVar10 = (uint *)(param_1 + 0x7cac);
  *puVar10 = 0xffffffff;
  uVar8 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    do {
      if (uVar8 < *(uint *)(param_1 + 0x1c)) {
        iVar6 = *(int *)(param_1 + 0x24) + uVar8 * 0x620;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x24);
      }
      if ((*(char *)(iVar6 + 0x581) < '\x03') && (-1 < *(char *)(iVar6 + 0x578))) {
        if (uVar9 == 0) {
          uVar4 = 0;
        }
        else {
          bVar1 = func_005822A0(uVar9,(uint)*(ushort *)(iVar6 + 0x576),
                                (uint)*(byte *)(iVar6 + 0x578));
          uVar4 = (uint)bVar1;
        }
        if (((-uVar3 & uVar9) != 0) && ((int)*(char *)(iVar6 + 0x579) == uVar4)) {
          *puVar10 = uVar8;
          *(undefined1 *)(iVar6 + 0x584) = 1;
          break;
        }
      }
      else {
        uVar4 = 0;
        if (0 < *(int *)(iVar6 + 0x5d4)) {
          do {
            psVar7 = *(short **)(iVar6 + 0x5dc);
            if (uVar4 < *(uint *)(iVar6 + 0x5d4)) {
              psVar7 = *(short **)(iVar6 + 0x5dc) + uVar4;
            }
            if (*psVar7 == *(short *)(param_1 + 0x7cb0)) {
              if (-1 < *(char *)(iVar6 + 0x578)) {
                if (uVar9 == 0) {
                  uVar4 = 0;
                }
                else {
                  bVar1 = func_005822A0(uVar9,(uint)*(ushort *)(iVar6 + 0x576),
                                        (uint)*(byte *)(iVar6 + 0x578));
                  uVar4 = (uint)bVar1;
                }
                if (((-uVar3 & uVar9) == 0) || ((int)*(char *)(iVar6 + 0x579) != uVar4)) break;
                *(undefined1 *)(iVar6 + 0x584) = 1;
              }
              uVar4 = *puVar10;
              if (-1 < (int)uVar4) {
                iVar5 = *(int *)(param_1 + 0x24);
                if (uVar4 < *(uint *)(param_1 + 0x1c)) {
                  iVar5 = iVar5 + uVar4 * 0x620;
                }
                if ((*(char *)(iVar6 + 0x578) <= *(char *)(iVar5 + 0x578)) &&
                   ((*(char *)(iVar6 + 0x578) != *(char *)(iVar5 + 0x578) ||
                    (*(ushort *)(iVar6 + 0x576) <= *(ushort *)(iVar5 + 0x576))))) break;
              }
              *puVar10 = uVar8;
              break;
            }
            uVar4 = uVar4 + 1;
          } while ((int)uVar4 < (int)*(uint *)(iVar6 + 0x5d4));
        }
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < *(int *)(param_1 + 0x1c));
    if (-1 < (int)*puVar10) {
      iVar6 = *piVar2;
      if (iVar6 < *(int *)(param_1 + 0x7cbc)) {
        *piVar2 = iVar6 + 1;
        *(short *)(*(int *)(param_1 + 0x7cc0) + iVar6 * 2) = (short)*puVar10;
      }
    }
  }
  return func_00273210(param_1,(short *)0x0);
}

