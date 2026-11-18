#include "ghidra_types.h"

extern int func_0051E300(int param_1);
extern int *DAT_0012ea30;
extern int DAT_0012ea34;

// USA 0012E878 <- EU 0012E878 (Ghidra, non-matching)
// GLOBAL DAT_0012ea30 int *
// GLOBAL DAT_0012ea34 int

void func_0012E878(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  
  cVar2 = *(char *)(*DAT_0012ea30 + 0x22);
  piVar5 = *(int **)(DAT_0012ea34 + param_1);
  iVar3 = func_0051E300((int)piVar5);
  if (iVar3 != 0) {
    (**(code **)(*piVar5 + 0xc))(piVar5);
  }
  piVar5 = *(int **)(param_1 + 0xe18);
  piVar7 = piVar5 + *(int *)(param_1 + 0xe10);
  for (; piVar5 != piVar7; piVar5 = piVar5 + 1) {
    piVar9 = (int *)*piVar5;
    if (((piVar9[0x1a] & 0x18U) == 0) &&
       (((cVar2 == '\0' || ((piVar9[6] & 0x40U) != 0)) &&
        (iVar3 = func_0051E300((int)piVar9), iVar3 != 0)))) {
      (**(code **)(*piVar9 + 0xc))(piVar9);
    }
  }
  for (piVar5 = *(int **)(param_1 + 0xe18); piVar5 != piVar7; piVar5 = piVar5 + 1) {
    piVar9 = (int *)*piVar5;
    if (((piVar9[0x1a] & 0x18U) == 0) && ((cVar2 == '\0' || ((piVar9[6] & 0x40U) != 0)))) {
      (**(code **)(*piVar9 + 8))(piVar9);
    }
  }
  iVar10 = *(int *)(param_1 + 0xf1c);
  iVar3 = param_1;
  if (0 < iVar10) {
    iVar3 = param_1 + 0x400;
  }
  uVar6 = 0;
  if (0 < iVar10) {
    do {
      if (uVar6 < *(uint *)(param_1 + 0xf1c)) {
        puVar8 = *(undefined4 **)(*(int *)(param_1 + 0xf24) + uVar6 * 4);
      }
      else {
        puVar8 = (undefined4 *)0x0;
      }
      if (puVar8[4] == 0) {
        bVar1 = *(byte *)(puVar8 + 0x1c);
        if (puVar8[1] == 0) {
          if ((bVar1 & 4) != 0) {
            piVar5 = (int *)*puVar8;
            if ((bVar1 & 2) == 0) goto LAB_0012e9ec;
LAB_0012e9e4:
            uVar4 = 1;
            goto LAB_0012e9f0;
          }
        }
        else if (((bVar1 & 4) != 0) && ((*(byte *)(puVar8[1] + 0x70) & 4) == 0)) {
          piVar5 = (int *)*puVar8;
          if ((bVar1 & 2) != 0) goto LAB_0012e9e4;
LAB_0012e9ec:
          uVar4 = 0;
LAB_0012e9f0:
          (**(code **)(*piVar5 + 0x30))(piVar5,iVar3 + 0x2b4,uVar4);
        }
        *(byte *)(puVar8 + 0x1c) = *(byte *)(puVar8 + 0x1c) & 0xf9;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar10);
  }
  *(uint *)(param_1 + 0xf1c) = 0;
  return;
}

