#include "ghidra_types.h"

extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern int *DAT_004bd96c;
extern int DAT_004bd970;

// USA 004BD89C <- EU 004BD874 (Ghidra, non-matching)
// GLOBAL DAT_004bd96c int *
// GLOBAL DAT_004bd970 int

void func_004BD89C(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  
  uVar7 = *(uint *)(param_2 + 0x29c);
  if ((int)uVar7 < 0) {
    return;
  }
  iVar8 = *DAT_004bd96c;
  iVar1 = func_00581B9C(iVar8);
  if ((iVar1 == 1) && (puVar2 = (uint *)func_00582250(iVar8), uVar7 < *puVar2)) {
    iVar1 = *(int *)(puVar2[2] + uVar7 * 4);
  }
  else {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x7c0) = iVar1;
  if (iVar1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x85b) = 1;
  piVar3 = *(int **)(iVar1 + 0x28);
  if (piVar3 != (int *)0x0) {
    iVar1 = *(int *)(iVar1 + 0x20);
  }
  if (piVar3 == (int *)0x0 || iVar1 == 0) {
    return;
  }
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    return;
  }
  iVar5 = *(int *)(iVar1 + 0x44);
  iVar8 = *(int *)(iVar1 + 0x48);
  if (iVar5 == 0) {
LAB_004bd930:
    *(undefined1 *)(param_1 + 0x857) = 1;
  }
  else {
    if (iVar5 == 1) {
      if (*(char *)(DAT_004bd970 + param_1) < '\x04') goto LAB_004bd930;
      uVar4 = 2;
    }
    else {
      if (iVar5 != 2) goto LAB_004bd93c;
      uVar4 = 3;
    }
    *(undefined1 *)(param_1 + 0x857) = uVar4;
  }
LAB_004bd93c:
  if (iVar8 == 0) {
    *(undefined1 *)(param_1 + 0x914) = 1;
  }
  uVar6 = *(undefined4 *)(iVar1 + 0x1c);
  uVar9 = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(iVar1 + 0x18);
  *(undefined4 *)(param_1 + 0x36c) = uVar6;
  *(undefined4 *)(param_1 + 0x370) = uVar9;
  uVar6 = *(undefined4 *)(iVar1 + 0x18);
  uVar9 = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(param_1 + 0x3d0) = uVar6;
  *(undefined4 *)(param_1 + 0x3d4) = uVar9;
  return;
}

