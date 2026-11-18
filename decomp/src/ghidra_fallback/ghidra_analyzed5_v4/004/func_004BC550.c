#include "ghidra_types.h"

extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern int *DAT_004bc5d8;

// USA 004BC550 <- EU 004BC528 (Ghidra, non-matching)
// GLOBAL DAT_004bc5d8 int *

void func_004BC550(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = *DAT_004bc5d8;
  iVar2 = func_00581B9C(iVar1);
  if (((iVar2 == 1) && (puVar3 = (uint *)func_00582250(iVar1), param_2 < *puVar3)) &&
     (iVar1 = *(int *)(puVar3[2] + param_2 * 4), iVar1 != 0)) {
    piVar5 = *(int **)(iVar1 + 0x28);
    if (param_3 == 0) {
      if (piVar5 != (int *)0x0) {
        iVar1 = *(int *)(iVar1 + 0x20);
      }
      if (piVar5 == (int *)0x0 || iVar1 == 0) {
        return;
      }
      iVar1 = *piVar5;
    }
    else {
      if (piVar5 == (int *)0x0) {
        return;
      }
      uVar4 = *(uint *)(iVar1 + 0x20) - 1;
      if (*(uint *)(iVar1 + 0x20) <= uVar4) {
        return;
      }
      iVar1 = piVar5[uVar4];
    }
    if (iVar1 != 0) {
      uVar6 = *(undefined4 *)(iVar1 + 0x18);
      uVar7 = *(undefined4 *)(iVar1 + 0x1c);
      uVar8 = *(undefined4 *)(iVar1 + 0x20);
      *(undefined4 *)(param_1 + 0x368) = uVar6;
      *(undefined4 *)(param_1 + 0x36c) = uVar7;
      *(undefined4 *)(param_1 + 0x370) = uVar8;
      *(undefined4 *)(param_1 + 0x3d0) = uVar6;
      *(undefined4 *)(param_1 + 0x3d4) = uVar7;
      *(undefined4 *)(param_1 + 0x3d8) = uVar8;
    }
  }
  return;
}

