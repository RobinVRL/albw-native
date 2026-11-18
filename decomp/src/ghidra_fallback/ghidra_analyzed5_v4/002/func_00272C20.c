#include "ghidra_types.h"

extern int DAT_00272dd8;
extern int DAT_00272ddc;
extern float DAT_00272de0;
extern int *DAT_00272de4;

// USA 00272C20 <- EU 00272C48 (Ghidra, non-matching)
// GLOBAL DAT_00272dd8 int
// GLOBAL DAT_00272ddc int
// GLOBAL DAT_00272de0 float
// GLOBAL DAT_00272de4 int *

void func_00272C20(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar4 = *(uint *)(param_1 + 0x7cac);
  piVar2 = (int *)(param_1 + 0x3d68);
  if ((int)uVar4 < 0) {
    iVar3 = 0;
    iVar6 = iVar3;
  }
  else {
    if (uVar4 < *(uint *)(param_1 + 0x1c)) {
      iVar3 = *(int *)(param_1 + 0x24) + uVar4 * 0x620;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x24);
    }
    iVar6 = 0;
    if ((iVar3 != 0) && (uVar5 = (uint)*(char *)(DAT_00272dd8 + iVar3), (int)uVar5 < 3)) {
      iVar6 = *(int *)(param_1 + 0x24);
      if (uVar4 < *(uint *)(param_1 + 0x1c)) {
        iVar6 = iVar6 + uVar4 * 0x620;
      }
      piVar1 = piVar2;
      if (uVar5 < 3) {
        piVar1 = piVar2 + uVar5;
      }
      *piVar1 = iVar6;
      iVar3 = 0;
      iVar6 = 1;
    }
  }
  uVar7 = *(undefined4 *)(DAT_00272ddc + 0x70);
  uVar9 = *(undefined4 *)(DAT_00272ddc + 0x74);
  uVar8 = *(undefined4 *)(DAT_00272ddc + 0x78);
  if ((iVar3 == 0) || (*(float *)(iVar3 + 0x570) == DAT_00272de0)) {
    uVar4 = 2;
    do {
      piVar1 = piVar2;
      if (uVar4 < 3) {
        piVar1 = piVar2 + uVar4;
      }
      if (*(float *)(*piVar1 + 0x570) != DAT_00272de0) {
        piVar1 = piVar2;
        if (uVar4 < 3) {
          piVar1 = piVar2 + uVar4;
        }
        iVar3 = *piVar1;
        goto LAB_00272d0c;
      }
      uVar4 = uVar4 - 1;
    } while (-1 < (int)uVar4);
  }
  else {
LAB_00272d0c:
    uVar7 = *(undefined4 *)(iVar3 + 0x568);
    uVar9 = *(undefined4 *)(iVar3 + 0x56c);
    uVar8 = *(undefined4 *)(iVar3 + 0x570);
  }
  iVar3 = *DAT_00272de4;
  *(undefined4 *)(iVar3 + 0xf7c) = uVar7;
  *(undefined4 *)(iVar3 + 0xf80) = uVar9;
  *(undefined4 *)(iVar3 + 0xf84) = uVar8;
  if (iVar6 != 0) {
    uVar4 = *(uint *)(param_1 + 0x7cac);
    if (uVar4 < *(uint *)(param_1 + 0x1c)) {
      iVar6 = *(int *)(param_1 + 0x24) + uVar4 * 0x620;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x24);
    }
    piVar1 = (int *)(param_1 + 0x10);
    uVar4 = (uint)*(char *)(iVar6 + 0x581);
    if (uVar4 < 3) {
      piVar1 = piVar1 + uVar4;
      piVar2 = piVar2 + uVar4;
    }
    *piVar2 = *piVar1;
  }
  return;
}

