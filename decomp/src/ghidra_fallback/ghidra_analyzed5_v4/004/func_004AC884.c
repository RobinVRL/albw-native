#include "ghidra_types.h"

extern int func_004ACBA0(int param_1,uint param_2);
extern int DAT_004acb74;

// USA 004AC884 <- EU 004AC85C (Ghidra, non-matching)
// GLOBAL DAT_004acb74 int

void func_004AC884(int param_1,char *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  
  uVar5 = (uint)*param_2;
  bVar12 = 4 < uVar5;
  bVar11 = uVar5 == 5;
  if (5 < uVar5) {
    bVar12 = 3 < uVar5 - 0x16;
    bVar11 = uVar5 - 0x16 == 4;
  }
  if (bVar12 && !bVar11) {
    return;
  }
  iVar10 = *(int *)(param_2 + 4);
  piVar9 = (int *)(param_1 + 0x7684);
  if (*(int *)(DAT_004acb74 + param_1) == 0) {
    if (*(int *)(param_1 + 0x7688) < 1) {
      return;
    }
    *(undefined4 *)(param_1 + 0x7690) = 1;
    iVar8 = *(int *)(param_1 + 0x768c);
    iVar6 = *(int *)(param_1 + 0x7688);
    if (iVar8 < iVar6) goto LAB_004acb68;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x7690);
    iVar6 = 0;
    if (iVar8 != 0) {
      do {
        iVar3 = *(int *)(param_1 + 0x768c) + iVar6;
        if (*(int *)(param_1 + 0x7688) <= iVar3) {
          iVar3 = iVar3 - *(int *)(param_1 + 0x7688);
        }
        if (*(int *)(*piVar9 + iVar3 * 4) == iVar10) {
          if (iVar8 == 1) {
            return;
          }
          if (iVar8 < 1) {
            piVar1 = (int *)*piVar9;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x768c);
            if (*(int *)(param_1 + 0x7688) <= iVar6) {
              iVar6 = iVar6 - *(int *)(param_1 + 0x7688);
            }
            piVar1 = (int *)(*piVar9 + iVar6 * 4);
          }
          iVar6 = *piVar1;
          if (0 < iVar8) {
            iVar8 = iVar8 + -1;
            iVar3 = *(int *)(param_1 + 0x768c) + 1;
            *(int *)(param_1 + 0x768c) = iVar3;
            if (*(int *)(param_1 + 0x7688) <= iVar3) {
              *(undefined4 *)(param_1 + 0x768c) = 0;
            }
            *(int *)(param_1 + 0x7690) = iVar8;
          }
          if (iVar8 < 1) {
            puVar2 = (undefined4 *)*piVar9;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x768c);
            if (*(int *)(param_1 + 0x7688) <= iVar3) {
              iVar3 = iVar3 - *(int *)(param_1 + 0x7688);
            }
            puVar2 = (undefined4 *)(*piVar9 + iVar3 * 4);
          }
          uVar7 = *puVar2;
          if (0 < iVar8) {
            iVar8 = iVar8 + -1;
            iVar3 = *(int *)(param_1 + 0x768c) + 1;
            *(int *)(param_1 + 0x768c) = iVar3;
            if (*(int *)(param_1 + 0x7688) <= iVar3) {
              *(undefined4 *)(param_1 + 0x768c) = 0;
            }
            *(int *)(param_1 + 0x7690) = iVar8;
          }
          iVar3 = *(int *)(param_1 + 0x7688);
          if (iVar6 == iVar10) {
            if (iVar8 < iVar3) {
              *(int *)(param_1 + 0x7690) = iVar8 + 1;
              iVar8 = iVar8 + *(int *)(param_1 + 0x768c);
              if (iVar3 <= iVar8) {
                iVar8 = iVar8 - iVar3;
              }
              *(undefined4 *)(*piVar9 + iVar8 * 4) = uVar7;
            }
            iVar10 = *(int *)(param_1 + 0x7690);
            iVar8 = *(int *)(param_1 + 0x7688);
            if (iVar8 <= iVar10) {
              return;
            }
            *(int *)(param_1 + 0x7690) = iVar10 + 1;
            iVar10 = iVar10 + *(int *)(param_1 + 0x768c);
            if (iVar8 <= iVar10) {
              iVar10 = iVar10 - iVar8;
            }
            *(int *)(*piVar9 + iVar10 * 4) = iVar6;
            return;
          }
          if (iVar8 < iVar3) {
            *(int *)(param_1 + 0x7690) = iVar8 + 1;
            iVar8 = iVar8 + *(int *)(param_1 + 0x768c);
            if (iVar3 <= iVar8) {
              iVar8 = iVar8 - iVar3;
            }
            *(int *)(*piVar9 + iVar8 * 4) = iVar6;
          }
          iVar10 = *(int *)(param_1 + 0x7690);
          iVar8 = *(int *)(param_1 + 0x7688);
          if (iVar8 <= iVar10) {
            return;
          }
          *(int *)(param_1 + 0x7690) = iVar10 + 1;
          iVar10 = iVar10 + *(int *)(param_1 + 0x768c);
          if (iVar8 <= iVar10) {
            iVar10 = iVar10 - iVar8;
          }
          *(undefined4 *)(*piVar9 + iVar10 * 4) = uVar7;
          return;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != iVar8);
    }
    iVar6 = *(int *)(param_1 + 0x7688);
    if (iVar6 <= iVar8) {
      if (iVar8 < 1) {
        puVar4 = (uint *)*piVar9;
      }
      else {
        iVar8 = *(int *)(param_1 + 0x768c);
        if (iVar6 <= iVar8) {
          iVar8 = iVar8 - iVar6;
        }
        puVar4 = (uint *)(*piVar9 + iVar8 * 4);
      }
      uVar5 = *puVar4;
      if (uVar5 < *(uint *)(param_1 + 0x769c)) {
        puVar2 = (undefined4 *)(*(int *)(param_1 + 0x76a0) + uVar5 * 0x38);
      }
      else {
        puVar2 = *(undefined4 **)(param_1 + 0x76a0);
      }
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      if (0 < *(int *)(param_1 + 0x7690)) {
        iVar8 = *(int *)(param_1 + 0x768c) + 1;
        *(int *)(param_1 + 0x768c) = iVar8;
        if (*(int *)(param_1 + 0x7688) <= iVar8) {
          *(undefined4 *)(param_1 + 0x768c) = 0;
        }
        *(int *)(param_1 + 0x7690) = *(int *)(param_1 + 0x7690) + -1;
      }
      func_004ACBA0(param_1,uVar5);
    }
    iVar8 = *(int *)(param_1 + 0x7690);
    if (*(int *)(param_1 + 0x7688) <= iVar8) {
      return;
    }
    *(int *)(param_1 + 0x7690) = iVar8 + 1;
    iVar6 = *(int *)(param_1 + 0x7688);
    iVar8 = iVar8 + *(int *)(param_1 + 0x768c);
    if (iVar8 < iVar6) goto LAB_004acb68;
  }
  iVar8 = iVar8 - iVar6;
LAB_004acb68:
  *(int *)(*piVar9 + iVar8 * 4) = iVar10;
  return;
}

