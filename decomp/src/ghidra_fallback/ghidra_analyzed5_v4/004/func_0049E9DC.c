#include "ghidra_types.h"

extern int func_0010B64C(int param_1);
extern int func_0010B6E0(int *param_1);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DB90(void);
extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_00493EAC(undefined4 *param_1);
extern int func_0049F688(int param_1);
extern undefined4 DAT_0049ebcc;

// USA 0049E9DC <- EU 0049E9B4 (Ghidra, non-matching)
// GLOBAL DAT_0049ebcc undefined4

void func_0049E9DC(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_3 == (int *)0x0) {
    uVar5 = func_0010DB90();
    *(undefined4 *)(param_1 + 0x34) = uVar5;
  }
  else {
    *(int **)(param_1 + 0x34) = param_3;
  }
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x10);
    iVar1 = *(int *)(param_2 + 0x1c);
    while (iVar1 != 0) {
      piVar2 = func_0049F688(param_2 + 0x14);
      if (piVar2 != (int *)0x0) {
        piVar2 = (int *)((int)piVar2 - *(int *)(param_2 + 0x20));
      }
      func_0010F1DC((int *)(param_1 + 0x24),(int *)(*(int *)(param_1 + 0x30) + (int)piVar2));
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      iVar1 = *(int *)(param_2 + 0x1c);
    }
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    piVar3 = (int *)func_0010CF28(0x8c,param_3,4);
    piVar2 = (int *)0x0;
    if (piVar3 != (int *)0x0) {
      piVar2 = func_0010B6E0(piVar3);
    }
    *(int **)(param_1 + 0x14) = piVar2;
    *(undefined1 *)(param_1 + 0x39) = 1;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = func_0010CF28(0x16c,param_3,4);
    puVar4 = (undefined4 *)0x0;
    if (iVar1 != 0) {
      puVar4 = func_0010B64C(iVar1);
    }
    *(undefined4 **)(param_1 + 0x1c) = puVar4;
    *(undefined1 *)(param_1 + 0x3b) = 1;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar4 = (undefined4 *)func_0010CF28(0x10,param_3,4);
    uVar5 = 0;
    if (puVar4 != (undefined4 *)0x0) {
      uVar5 = func_00493EAC(puVar4);
    }
    *(undefined4 *)(param_1 + 0x18) = uVar5;
    *(undefined1 *)(param_1 + 0x3a) = 1;
  }
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x10))(*(int **)(param_1 + 0x14));
  }
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x10))(*(int **)(param_1 + 0x1c));
  }
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2,param_1);
  }
  piVar2 = *(int **)(param_1 + 0x20);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar6 = *(int *)(param_1 + 0x30);
    iVar1 = *(int *)(param_1 + 0x28);
    while (piVar2 = (int *)(iVar1 - iVar6),
          piVar2 != (int *)((param_1 + 0x24) - *(int *)(param_1 + 0x30))) {
      (**(code **)(*piVar2 + 0x14))(piVar2,param_1,param_3);
      iVar1 = *(int *)((int)piVar2 + iVar6 + 4);
    }
  }
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(*(int **)(param_1 + 0x20));
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}

