#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_00522B68(int param_1,int param_2);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern undefined *DAT_00301510;
extern uint DAT_00301514;

// USA 003011EC <- EU 003011C8 (Ghidra, non-matching)
// GLOBAL DAT_00301510 undefined *
// GLOBAL DAT_00301514 uint

void func_003011EC(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  ulonglong uVar11;
  
  iVar6 = *(int *)(param_1 + 0x478);
  if (0 < iVar6) {
    puVar1 = (undefined4 *)func_0010CEE0(iVar6 * 0xcc + 8,(int *)0x0,4);
    iVar2 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0xcc;
      puVar1[1] = iVar6;
      iVar2 = func_00100118((int)(puVar1 + 2),DAT_00301510,0xcc,iVar6);
    }
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x620) = iVar2;
      *(int *)(param_1 + 0x61c) = iVar6;
    }
  }
  piVar9 = *(int **)(param_1 + 0x480);
  uVar8 = 0;
  piVar10 = piVar9 + *(int *)(param_1 + 0x478);
  if (piVar9 != piVar10) {
    uVar11 = (ulonglong)DAT_00301514;
    puVar7 = (uint *)(param_1 + 0x61c);
    do {
      piVar3 = (int *)func_0054D964(param_1,0);
      iVar6 = *piVar9;
      piVar3[1] = *(int *)(iVar6 + 4);
      piVar3[2] = *(int *)(iVar6 + 8);
      piVar3[3] = *(int *)(iVar6 + 0xc);
      func_004356B4(piVar3);
      if (uVar8 < *puVar7) {
        iVar6 = *(int *)(param_1 + 0x620) + uVar8 * 0xcc;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x620);
      }
      *(int **)(iVar6 + 0x18) = piVar3;
      if (uVar8 < *puVar7) {
        iVar6 = *(int *)(param_1 + 0x620) + uVar8 * 0xcc;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x620);
      }
      if (uVar8 < *(uint *)(param_1 + 0x604)) {
        uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x60c) + uVar8 * 4);
      }
      else {
        uVar5 = 0;
      }
      *(undefined4 *)(iVar6 + 0x10) = uVar5;
      iVar6 = *(int *)(param_1 + 0x620);
      if (uVar8 < *puVar7) {
        iVar6 = iVar6 + uVar8 * 0xcc;
      }
      *(short *)(iVar6 + 8) = *(short *)(*piVar9 + 0x28) * 0x3c;
      if (uVar8 < *puVar7) {
        iVar6 = *(int *)(param_1 + 0x620) + uVar8 * 0xcc;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x620);
      }
      iVar2 = *piVar9;
      *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(iVar2 + 4);
      *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar2 + 8);
      *(undefined4 *)(iVar6 + 0x2c) = *(undefined4 *)(iVar2 + 0xc);
      if (uVar8 < *puVar7) {
        iVar6 = *(int *)(param_1 + 0x620) + uVar8 * 0xcc;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x620);
      }
      uVar5 = (undefined4)uVar11;
      *(undefined4 *)(iVar6 + 0x3c) = uVar5;
      *(undefined4 *)(iVar6 + 0x40) = uVar5;
      *(undefined4 *)(iVar6 + 0x44) = uVar5;
      puVar4 = (undefined4 *)func_0010BAB4(0x48);
      puVar1 = (undefined4 *)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        puVar1 = func_0034CAA0(puVar4);
      }
      if (uVar8 < *(uint *)(param_1 + 0x61c)) {
        iVar6 = *(int *)(param_1 + 0x620) + uVar8 * 0xcc;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x620);
      }
      *(undefined4 **)(iVar6 + 0x1c) = puVar1;
      if (uVar8 < *puVar7) {
        iVar6 = *(int *)(param_1 + 0x620) + uVar8 * 0xcc;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x620);
      }
      *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(param_1 + 0x3a0);
      if (uVar8 < *(uint *)(param_1 + 0x61c)) {
        iVar6 = *(int *)(param_1 + 0x620) + uVar8 * 0xcc;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x620);
      }
      (**(code **)(**(int **)(iVar6 + 0x10) + 0x10))(*(int **)(iVar6 + 0x10),0x24);
      iVar6 = func_0054D89C(param_1,0);
      if (uVar8 < *puVar7) {
        iVar2 = *(int *)(param_1 + 0x620) + uVar8 * 0xcc;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x620);
      }
      *(int *)(iVar2 + 0x14) = iVar6;
      func_00151148(iVar6,0);
      if (uVar8 < *puVar7) {
        iVar6 = *(int *)(param_1 + 0x620) + uVar8 * 0xcc;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x620);
      }
      *(char *)(iVar6 + 10) = (char)uVar8;
      iVar6 = (int)*(short *)(*piVar9 + 0x2a);
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (4 < iVar6) {
        iVar6 = 4;
      }
      if (uVar8 < *puVar7) {
        iVar2 = *(int *)(param_1 + 0x620) + uVar8 * 0xcc;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x620);
      }
      iVar6 = param_1 + iVar6 * 4;
      func_00522B68(*(int *)(iVar6 + 0x630),*(int *)(iVar2 + 0x10));
      if (uVar8 < *puVar7) {
        iVar2 = *(int *)(param_1 + 0x620) + uVar8 * 0xcc;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x620);
      }
      func_00168E9C(*(int **)(iVar6 + 0x630),*(int *)(iVar2 + 0x10),(int *)0x1);
      piVar9 = piVar9 + 1;
      uVar8 = uVar8 + 1;
    } while (piVar9 != piVar10);
  }
  return;
}

