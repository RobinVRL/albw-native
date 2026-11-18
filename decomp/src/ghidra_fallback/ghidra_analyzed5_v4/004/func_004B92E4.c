#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_00369EF0(undefined4 *param_1);
extern int func_0036B150(undefined4 *param_1,undefined4 param_2);
extern int func_0037B818(undefined4 *param_1);
extern int func_003A1098(undefined4 *param_1);
extern int func_0049F434(int *param_1,int param_2,undefined *param_3);
extern int func_004B948C(int param_1,int param_2);
extern undefined *DAT_004b94f8;
extern undefined *DAT_004b94fc;

// USA 004B92E4 <- EU 004B92BC (Ghidra, non-matching)
// GLOBAL DAT_004b94f8 undefined *
// GLOBAL DAT_004b94fc undefined *

undefined4 func_004B92E4(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1c);
  puVar2 = (undefined4 *)func_0010BAB4(0x7c);
  if (puVar2 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = func_00369EF0(puVar2);
  }
  if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x38)) {
    *(int **)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x34) * 4) = piVar5;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  (**(code **)(*piVar5 + 0x3c))(piVar5,uVar6,*(undefined4 *)(param_1 + 0x30));
  func_004B948C(*(int *)(param_1 + 0x30),(int)piVar5);
  *(int **)(param_1 + 0x70) = piVar5;
  puVar2 = (undefined4 *)func_0010BAB4(0x94);
  if (puVar2 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)func_0036B150(puVar2,*(int *)(param_1 + 0x70) + 0x78);
  }
  if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x38)) {
    *(int **)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x34) * 4) = piVar5;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  (**(code **)(*piVar5 + 0x3c))(piVar5,uVar6,*(undefined4 *)(param_1 + 0x30));
  func_004B948C(*(int *)(param_1 + 0x30),(int)piVar5);
  *(int **)(param_1 + 0x6c) = piVar5;
  puVar2 = (undefined4 *)func_0010BAB4(0x90);
  if (puVar2 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = func_0037B818(puVar2);
  }
  if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x38)) {
    *(int **)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x34) * 4) = piVar5;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  (**(code **)(*piVar5 + 0x3c))(piVar5,uVar6,*(undefined4 *)(param_1 + 0x30));
  func_004B948C(*(int *)(param_1 + 0x30),(int)piVar5);
  puVar2 = (undefined4 *)func_0010BAB4(0x90);
  if (puVar2 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = func_003A1098(puVar2);
  }
  if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x38)) {
    *(int **)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x34) * 4) = piVar5;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  (**(code **)(*piVar5 + 0x3c))(piVar5,uVar6,*(undefined4 *)(param_1 + 0x30));
  iVar3 = *(int *)(param_1 + 0x30);
  piVar5[4] = iVar3;
  func_0010F1DC((int *)(iVar3 + 0x48),(int *)(*(int *)(iVar3 + 0x54) + (int)piVar5));
  *(int *)(iVar3 + 0x50) = *(int *)(iVar3 + 0x50) + 1;
  iVar4 = piVar5[5];
  if (iVar4 != 0) {
    if (*(char *)(iVar4 + 0x14) < '\0') {
      *(char *)(iVar4 + 0x14) = (char)*(undefined4 *)(iVar3 + 0x60);
    }
    func_0010F1DC((int *)(iVar3 + 0x58),(int *)(*(int *)(iVar3 + 100) + piVar5[5]));
    puVar1 = DAT_004b94f8;
    *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
    func_0049F434((int *)(iVar3 + 0x58),*(int *)(iVar3 + 100),puVar1);
  }
  return func_0049F434((int *)(iVar3 + 0x48),*(int *)(iVar3 + 0x54),DAT_004b94fc);
}

