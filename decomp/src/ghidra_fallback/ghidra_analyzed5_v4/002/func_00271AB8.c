#include "ghidra_types.h"

extern int func_0016A7E8(int param_1,int param_2);
extern int DAT_00271db0;
extern uint DAT_00271db4;
extern uint DAT_00271db8;

// USA 00271AB8 <- EU 00271AE0 (Ghidra, non-matching)
// GLOBAL DAT_00271db0 int
// GLOBAL DAT_00271db4 uint
// GLOBAL DAT_00271db8 uint

void func_00271AB8(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  
  piVar10 = (int *)(param_1 + 0x3d68);
  uVar4 = *(uint *)(param_1 + 0x7cac);
  if ((int)uVar4 < 0) {
    iVar11 = 0;
    iVar12 = iVar11;
  }
  else {
    if (uVar4 < *(uint *)(param_1 + 0x1c)) {
      iVar11 = *(int *)(param_1 + 0x24) + uVar4 * 0x620;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x24);
    }
    iVar12 = 0;
    if ((iVar11 != 0) && (uVar5 = (uint)*(char *)(DAT_00271db0 + iVar11), (int)uVar5 < 3)) {
      iVar8 = *(int *)(param_1 + 0x24);
      if (uVar4 < *(uint *)(param_1 + 0x1c)) {
        iVar8 = iVar8 + uVar4 * 0x620;
      }
      piVar7 = piVar10;
      if (uVar5 < 3) {
        piVar7 = piVar10 + uVar5;
      }
      iVar11 = 0;
      iVar12 = 1;
      *piVar7 = iVar8;
    }
  }
  puVar13 = (uint *)(param_1 + 0x7ac0);
  uVar4 = 0;
  if (0 < (int)*puVar13) {
    do {
      if (uVar4 < *puVar13) {
        puVar6 = (undefined4 *)(*(int *)(param_1 + 0x7ac4) + uVar4 * 4);
      }
      else {
        puVar6 = *(undefined4 **)(param_1 + 0x7ac4);
      }
      uVar4 = uVar4 + 1;
      *puVar6 = 0xff000000;
    } while ((int)uVar4 < (int)*puVar13);
  }
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x7ac8)) {
    uVar1 = DAT_00271db4 >> 8;
    uVar5 = DAT_00271db4 << 0x18;
    uVar2 = DAT_00271db4 >> 0x10;
    uVar3 = DAT_00271db4 >> 0x18;
    do {
      if (uVar4 < *(uint *)(param_1 + 0x7ac8)) {
        puVar9 = (uint *)(*(int *)(param_1 + 0x7acc) + uVar4 * 4);
      }
      else {
        puVar9 = *(uint **)(param_1 + 0x7acc);
      }
      uVar4 = uVar4 + 1;
      *puVar9 = uVar5 | (uVar1 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3;
    } while ((int)uVar4 < (int)*(uint *)(param_1 + 0x7ac8));
  }
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x7ad0)) {
    uVar1 = DAT_00271db8 >> 8;
    uVar5 = DAT_00271db8 << 0x18;
    uVar2 = DAT_00271db8 >> 0x10;
    uVar3 = DAT_00271db8 >> 0x18;
    do {
      if (uVar4 < *(uint *)(param_1 + 0x7ad0)) {
        puVar9 = (uint *)(*(int *)(param_1 + 0x7ad4) + uVar4 * 4);
      }
      else {
        puVar9 = *(uint **)(param_1 + 0x7ad4);
      }
      uVar4 = uVar4 + 1;
      *puVar9 = uVar5 | (uVar1 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3;
    } while ((int)uVar4 < (int)*(uint *)(param_1 + 0x7ad0));
  }
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x7ad8)) {
    do {
      if (uVar4 < *(uint *)(param_1 + 0x7ad8)) {
        puVar6 = (undefined4 *)(*(int *)(param_1 + 0x7adc) + uVar4 * 4);
      }
      else {
        puVar6 = *(undefined4 **)(param_1 + 0x7adc);
      }
      uVar4 = uVar4 + 1;
      *puVar6 = 0xff000000;
    } while ((int)uVar4 < (int)*(uint *)(param_1 + 0x7ad8));
  }
  uVar4 = 0;
  do {
    piVar7 = piVar10;
    if (uVar4 < 3) {
      piVar7 = piVar10 + uVar4;
    }
    if (**(char **)(*piVar7 + 0x2b4) != '\0') {
      piVar7 = piVar10;
      if (uVar4 < 3) {
        piVar7 = piVar10 + uVar4;
      }
      func_0016A7E8((int)puVar13,*piVar7 + 0x380);
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 3);
  if ((iVar11 != 0) && (**(char **)(iVar11 + 0x2b4) != '\0')) {
    func_0016A7E8((int)puVar13,iVar11 + 0x380);
  }
  if (iVar12 != 0) {
    uVar4 = *(uint *)(param_1 + 0x7cac);
    if (uVar4 < *(uint *)(param_1 + 0x1c)) {
      iVar12 = *(int *)(param_1 + 0x24) + uVar4 * 0x620;
    }
    else {
      iVar12 = *(int *)(param_1 + 0x24);
    }
    piVar7 = (int *)(param_1 + 0x10);
    uVar4 = (uint)*(char *)(iVar12 + 0x581);
    if (uVar4 < 3) {
      piVar7 = piVar7 + uVar4;
      piVar10 = piVar10 + uVar4;
    }
    *piVar10 = *piVar7;
  }
  return;
}

