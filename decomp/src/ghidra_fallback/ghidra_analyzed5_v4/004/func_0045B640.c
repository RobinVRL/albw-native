#include "ghidra_types.h"

extern int func_00166620(int param_1,int param_2);
extern int func_00166C00(int param_1,int param_2);
extern void func_001B6DE0(int param_1);
extern int func_004B9528(int param_1,int param_2);
extern int func_005228A4(int param_1,int param_2);
extern int *DAT_0045b820;

// USA 0045B640 <- EU 0045B618 (Ghidra, non-matching)
// GLOBAL DAT_0045b820 int *

undefined4 func_0045B640(int param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  
  func_001B6DE0(param_1);
  uVar6 = 0;
  do {
    puVar2 = (uint *)(param_1 + 0x1e4);
    if (uVar6 < 3) {
      puVar2 = puVar2 + uVar6;
    }
    uVar3 = *puVar2;
    bVar8 = *(char *)(uVar3 + 0xd) == '\0';
    if (bVar8) {
      uVar3 = (uint)*(byte *)(uVar3 + 0xe);
    }
    if (!bVar8 || uVar3 != 0) {
      puVar4 = (undefined4 *)(param_1 + 0x1e4);
      if (uVar6 < 3) {
        puVar4 = puVar4 + uVar6;
      }
      piVar7 = (int *)*puVar4;
      (**(code **)(*piVar7 + 0x34))(piVar7);
      *(undefined1 *)((int)piVar7 + 0xe) = 0;
      *(undefined1 *)((int)piVar7 + 0xd) = 0;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 3);
  uVar6 = 0;
  do {
    puVar2 = (uint *)(param_1 + 0x1c4);
    if (uVar6 < 6) {
      puVar2 = puVar2 + uVar6;
    }
    uVar3 = *puVar2;
    bVar8 = *(char *)(uVar3 + 0xd) == '\0';
    if (bVar8) {
      uVar3 = (uint)*(byte *)(uVar3 + 0xe);
    }
    if (!bVar8 || uVar3 != 0) {
      puVar4 = (undefined4 *)(param_1 + 0x1c4);
      if (uVar6 < 6) {
        puVar4 = puVar4 + uVar6;
      }
      piVar7 = (int *)*puVar4;
      (**(code **)(*piVar7 + 0x34))(piVar7);
      *(undefined1 *)((int)piVar7 + 0xe) = 0;
      *(undefined1 *)((int)piVar7 + 0xd) = 0;
    }
    piVar7 = (int *)(param_1 + 0x1c4);
    if (uVar6 < 6) {
      piVar7 = piVar7 + uVar6;
    }
    func_004B9528(param_1,*piVar7);
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 6);
  piVar7 = *(int **)(param_1 + 0x1dc);
  cVar1 = *(char *)((int)piVar7 + 0xd);
  bVar8 = cVar1 == '\0';
  if (bVar8) {
    cVar1 = *(char *)((int)piVar7 + 0xe);
  }
  if (!bVar8 || cVar1 != '\0') {
    (**(code **)(*piVar7 + 0x34))(piVar7);
    *(undefined1 *)((int)piVar7 + 0xe) = 0;
    *(undefined1 *)((int)piVar7 + 0xd) = 0;
  }
  func_004B9528(param_1,*(int *)(param_1 + 0x1dc));
  piVar7 = *(int **)(param_1 + 0x1e0);
  cVar1 = *(char *)((int)piVar7 + 0xd);
  bVar8 = cVar1 == '\0';
  if (bVar8) {
    cVar1 = *(char *)((int)piVar7 + 0xe);
  }
  if (!bVar8 || cVar1 != '\0') {
    (**(code **)(*piVar7 + 0x34))(piVar7);
    *(undefined1 *)((int)piVar7 + 0xe) = 0;
    *(undefined1 *)((int)piVar7 + 0xd) = 0;
  }
  func_004B9528(param_1,*(int *)(param_1 + 0x1e0));
  uVar6 = 0;
  do {
    puVar2 = (uint *)(param_1 + 0x1e4);
    if (uVar6 < 3) {
      puVar2 = puVar2 + uVar6;
    }
    uVar3 = *puVar2;
    bVar8 = *(char *)(uVar3 + 0xd) == '\0';
    if (bVar8) {
      uVar3 = (uint)*(byte *)(uVar3 + 0xe);
    }
    if (!bVar8 || uVar3 != 0) {
      puVar4 = (undefined4 *)(param_1 + 0x1e4);
      if (uVar6 < 3) {
        puVar4 = puVar4 + uVar6;
      }
      piVar7 = (int *)*puVar4;
      (**(code **)(*piVar7 + 0x34))(piVar7);
      *(undefined1 *)((int)piVar7 + 0xe) = 0;
      *(undefined1 *)((int)piVar7 + 0xd) = 0;
    }
    piVar7 = (int *)(param_1 + 0x1e4);
    if (uVar6 < 3) {
      piVar7 = piVar7 + uVar6;
    }
    func_004B9528(param_1,*piVar7);
    piVar7 = DAT_0045b820;
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 3);
  func_00166C00(*DAT_0045b820,1);
  iVar5 = func_005228A4(*piVar7,param_1);
  if (iVar5 == 0) {
    return 0;
  }
  return func_00166620(*piVar7,param_1);
}

