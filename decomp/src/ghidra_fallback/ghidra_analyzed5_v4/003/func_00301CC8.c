#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00522B68(int param_1,int param_2);
extern int func_0054D964(int param_1,uint param_2);
extern undefined *DAT_00301fdc;
extern uint DAT_00301fe0;
extern int *DAT_00301fe4;

// USA 00301CC8 <- EU 00301CA4 (Ghidra, non-matching)
// GLOBAL DAT_00301fdc undefined *
// GLOBAL DAT_00301fe0 uint
// GLOBAL DAT_00301fe4 int *

void func_00301CC8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  float fVar12;
  ulonglong uVar13;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c ((uint *)(albw_frame + 0x4))
  iVar7 = *(int *)(param_1 + 0x478);
  if (0 < iVar7) {
    iVar1 = func_0010CEE0(iVar7 * 0x28,(int *)0x0,4);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_00100118(iVar1,DAT_00301fdc,0x28,iVar7);
    }
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x620) = iVar2;
      *(int *)(param_1 + 0x61c) = iVar7;
    }
  }
  piVar10 = *(int **)(param_1 + 0x480);
  puVar9 = (undefined4 *)0x0;
  piVar11 = piVar10 + *(int *)(param_1 + 0x478);
  if (piVar10 != piVar11) {
    uVar13 = (ulonglong)DAT_00301fe0;
    puVar8 = (uint *)(param_1 + 0x61c);
    do {
      piVar3 = (int *)func_0054D964(param_1,0);
      iVar7 = *piVar10;
      fVar12 = *(float *)(iVar7 + 8);
      iVar2 = *(int *)(iVar7 + 0xc);
      piVar3[1] = *(int *)(iVar7 + 4);
      piVar3[2] = (int)ALBW_AS_U32((fVar12 - ALBW_AS_F32(uVar13)));
      piVar3[3] = iVar2;
      func_004356B4(piVar3);
      *(undefined2 *)(piVar3 + 10) = 1;
      if (puVar9 < (undefined4 *)*puVar8) {
        iVar7 = *(int *)(param_1 + 0x620) + (int)puVar9 * 0x28;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x620);
      }
      *(int **)(iVar7 + 4) = piVar3;
      puVar4 = (undefined4 *)func_0010BAB4(0x48);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = func_004EDC9C(puVar4);
      }
      puVar4[6] = piVar3;
      func_004ED9C8((int)puVar4);
      local_3c[0] = *(uint *)(param_1 + 0x2cc);
      func_004EDAD0((int)puVar4,local_3c);
      *(undefined2 *)(puVar4 + 0xb) = *(undefined2 *)(param_1 + 0x54);
      func_004A879C(*DAT_00301fe4,(int)puVar4,2);
      if (puVar9 < (undefined4 *)*puVar8) {
        iVar7 = *(int *)(param_1 + 0x620) + (int)puVar9 * 0x28;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x620);
      }
      *(undefined4 **)(iVar7 + 8) = puVar4;
      puVar5 = (undefined4 *)*puVar8;
      puVar4 = puVar5;
      if (puVar9 < puVar5) {
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x620) + (int)puVar9 * 0x28);
      }
      if (puVar5 <= puVar9) {
        puVar4 = *(undefined4 **)(param_1 + 0x620);
      }
      if (puVar9 < *(undefined4 **)(param_1 + 0x604)) {
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x60c) + (int)puVar9 * 4);
      }
      else {
        uVar6 = 0;
      }
      *puVar4 = uVar6;
      if (puVar9 < *(undefined4 **)(param_1 + 0x61c)) {
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x620) + (int)puVar9 * 0x28);
      }
      else {
        puVar4 = *(undefined4 **)(param_1 + 0x620);
      }
      (**(code **)(*(int *)*puVar4 + 0x10))((int *)*puVar4,0x24);
      if (puVar9 < (undefined4 *)*puVar8) {
        iVar7 = *(int *)(param_1 + 0x620) + (int)puVar9 * 0x28;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x620);
      }
      *(undefined1 *)(iVar7 + 0x22) = 0;
      iVar7 = *(int *)(param_1 + 0x620);
      if (puVar9 < (undefined4 *)*puVar8) {
        iVar7 = iVar7 + (int)puVar9 * 0x28;
      }
      *(int *)(iVar7 + 0x1c) = *(short *)(*piVar10 + 0x28) * 0x14;
      iVar7 = *(int *)(param_1 + 0x620);
      if (puVar9 < (undefined4 *)*puVar8) {
        iVar7 = iVar7 + (int)puVar9 * 0x28;
      }
      *(undefined2 *)(iVar7 + 0x20) = *(undefined2 *)(*piVar10 + 0x32);
      iVar7 = *(int *)(param_1 + 0x620);
      if (puVar9 < (undefined4 *)*puVar8) {
        iVar7 = iVar7 + (int)puVar9 * 0x28;
      }
      *(undefined1 *)(iVar7 + 0x23) = *(undefined1 *)(*piVar10 + 0x30);
      puVar5 = (undefined4 *)*puVar8;
      puVar4 = puVar5;
      if (puVar9 < puVar5) {
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x620) + (int)puVar9 * 0x28);
      }
      iVar7 = *piVar10;
      if (puVar5 <= puVar9) {
        puVar4 = *(undefined4 **)(param_1 + 0x620);
      }
      puVar4[3] = *(undefined4 *)(iVar7 + 4);
      iVar2 = *(int *)(iVar7 + 8);
      puVar4[4] = iVar2;
      puVar4[5] = *(undefined4 *)(iVar7 + 0xc);
      puVar5 = (undefined4 *)*puVar8;
      puVar4 = puVar5;
      if (puVar9 < puVar5) {
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x620) + (int)puVar9 * 0x28);
      }
      if (puVar5 <= puVar9) {
        puVar4 = *(undefined4 **)(param_1 + 0x620);
      }
      puVar4[6] = *(undefined4 *)(*piVar10 + 0x20);
      if (puVar9 < (undefined4 *)*puVar8) {
        iVar7 = *(int *)(param_1 + 0x620) + (int)puVar9 * 0x28;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x620);
      }
      *(char *)(iVar7 + 0x24) = (char)puVar9;
      iVar7 = (int)*(short *)(*piVar10 + 0x2a);
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      else if (4 < iVar7) {
        iVar7 = 4;
      }
      puVar5 = (undefined4 *)*puVar8;
      iVar7 = param_1 + iVar7 * 4;
      puVar4 = puVar5;
      if (puVar9 < puVar5) {
        iVar2 = *(int *)(param_1 + 0x620);
        puVar4 = (undefined4 *)((int)puVar9 * 5);
      }
      if (puVar9 < puVar5) {
        piVar3 = (int *)(iVar2 + (int)puVar4 * 8);
      }
      else {
        piVar3 = *(int **)(param_1 + 0x620);
      }
      func_00522B68(*(int *)(iVar7 + 0x624),*piVar3);
      if (puVar9 < (undefined4 *)*puVar8) {
        piVar3 = (int *)(*(int *)(param_1 + 0x620) + (int)puVar9 * 0x28);
      }
      else {
        piVar3 = *(int **)(param_1 + 0x620);
      }
      func_00168E9C(*(int **)(iVar7 + 0x624),*piVar3,(int *)0x1);
      piVar10 = piVar10 + 1;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    } while (piVar10 != piVar11);
  }
  return;
}

