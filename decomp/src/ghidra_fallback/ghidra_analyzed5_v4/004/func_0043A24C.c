#include "ghidra_types.h"

extern int func_00166620(int param_1,int param_2);
extern int func_00166C00(int param_1,int param_2);
extern void func_001B6DE0(int param_1);
extern int func_00231524(int param_1);
extern int func_004B9528(int param_1,int param_2);
extern int *DAT_0043a4a0;

// USA 0043A24C <- EU 0043A22C (Ghidra, non-matching)
// GLOBAL DAT_0043a4a0 int *

void func_0043A24C(int param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  
  func_001B6DE0(param_1);
  func_00231524(param_1 + 0x98);
  func_00231524(param_1 + 0xa4);
  func_00231524(param_1 + 0xb0);
  piVar6 = DAT_0043a4a0;
  func_00166620(*DAT_0043a4a0,param_1);
  func_00166C00(*piVar6,1);
  uVar5 = 0;
  if (*(int *)(param_1 + 0x1b4) == -1) {
    do {
      puVar2 = (uint *)(param_1 + 0xec);
      if (uVar5 < 0xd) {
        puVar2 = puVar2 + uVar5;
      }
      uVar3 = *puVar2;
      bVar7 = *(char *)(uVar3 + 0xd) == '\0';
      if (bVar7) {
        uVar3 = (uint)*(byte *)(uVar3 + 0xe);
      }
      if (!bVar7 || uVar3 != 0) {
        puVar4 = (undefined4 *)(param_1 + 0xec);
        if (uVar5 < 0xd) {
          puVar4 = puVar4 + uVar5;
        }
        piVar6 = (int *)*puVar4;
        (**(code **)(*piVar6 + 0x34))(piVar6);
        *(undefined1 *)((int)piVar6 + 0xe) = 0;
        *(undefined1 *)((int)piVar6 + 0xd) = 0;
      }
      piVar6 = (int *)(param_1 + 0xec);
      if (uVar5 < 0xd) {
        piVar6 = piVar6 + uVar5;
      }
      func_004B9528(param_1,*piVar6);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0xd);
    piVar6 = *(int **)(param_1 + 0x1a4);
    cVar1 = *(char *)((int)piVar6 + 0xd);
    bVar7 = cVar1 == '\0';
    if (bVar7) {
      cVar1 = *(char *)((int)piVar6 + 0xe);
    }
    if (!bVar7 || cVar1 != '\0') {
      (**(code **)(*piVar6 + 0x34))(piVar6);
      *(undefined1 *)((int)piVar6 + 0xe) = 0;
      *(undefined1 *)((int)piVar6 + 0xd) = 0;
    }
    func_004B9528(param_1,*(int *)(param_1 + 0x1a4));
    piVar6 = *(int **)(param_1 + 0x1a8);
    cVar1 = *(char *)((int)piVar6 + 0xd);
    bVar7 = cVar1 == '\0';
    if (bVar7) {
      cVar1 = *(char *)((int)piVar6 + 0xe);
    }
    if (!bVar7 || cVar1 != '\0') {
      (**(code **)(*piVar6 + 0x34))(piVar6);
      *(undefined1 *)((int)piVar6 + 0xe) = 0;
      *(undefined1 *)((int)piVar6 + 0xd) = 0;
    }
    func_004B9528(param_1,*(int *)(param_1 + 0x1a8));
    piVar6 = *(int **)(param_1 + 0x1ac);
    cVar1 = *(char *)((int)piVar6 + 0xd);
    bVar7 = cVar1 == '\0';
    if (bVar7) {
      cVar1 = *(char *)((int)piVar6 + 0xe);
    }
    if (!bVar7 || cVar1 != '\0') {
      (**(code **)(*piVar6 + 0x34))(piVar6);
      *(undefined1 *)((int)piVar6 + 0xe) = 0;
      *(undefined1 *)((int)piVar6 + 0xd) = 0;
    }
    func_004B9528(param_1,*(int *)(param_1 + 0x1ac));
  }
  else {
    do {
      puVar2 = (uint *)(param_1 + 0x120);
      if (uVar5 < 0xd) {
        puVar2 = puVar2 + uVar5;
      }
      uVar3 = *puVar2;
      bVar7 = *(char *)(uVar3 + 0xd) == '\0';
      if (bVar7) {
        uVar3 = (uint)*(byte *)(uVar3 + 0xe);
      }
      if (!bVar7 || uVar3 != 0) {
        puVar4 = (undefined4 *)(param_1 + 0x120);
        if (uVar5 < 0xd) {
          puVar4 = puVar4 + uVar5;
        }
        piVar6 = (int *)*puVar4;
        (**(code **)(*piVar6 + 0x34))(piVar6);
        *(undefined1 *)((int)piVar6 + 0xe) = 0;
        *(undefined1 *)((int)piVar6 + 0xd) = 0;
      }
      piVar6 = (int *)(param_1 + 0x120);
      if (uVar5 < 0xd) {
        piVar6 = piVar6 + uVar5;
      }
      func_004B9528(param_1,*piVar6);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0xd);
    *(undefined4 *)(param_1 + 0x1b4) = 0xffffffff;
  }
  uVar5 = 0;
  do {
    puVar2 = (uint *)(param_1 + 0x198);
    if (uVar5 < 2) {
      puVar2 = puVar2 + uVar5;
    }
    uVar3 = *puVar2;
    bVar7 = *(char *)(uVar3 + 0xd) == '\0';
    if (bVar7) {
      uVar3 = (uint)*(byte *)(uVar3 + 0xe);
    }
    if (!bVar7 || uVar3 != 0) {
      puVar4 = (undefined4 *)(param_1 + 0x198);
      if (uVar5 < 2) {
        puVar4 = puVar4 + uVar5;
      }
      piVar6 = (int *)*puVar4;
      (**(code **)(*piVar6 + 0x34))(piVar6);
      *(undefined1 *)((int)piVar6 + 0xe) = 0;
      *(undefined1 *)((int)piVar6 + 0xd) = 0;
    }
    piVar6 = (int *)(param_1 + 0x198);
    if (uVar5 < 2) {
      piVar6 = piVar6 + uVar5;
    }
    func_004B9528(param_1,*piVar6);
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 2);
  return;
}

