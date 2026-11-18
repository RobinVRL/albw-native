#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_004CE68C(int param_1,uint param_2,int param_3);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern undefined *DAT_00506dec;
extern undefined4 DAT_00506df0;
extern undefined4 DAT_00506df4;
extern undefined4 DAT_00506df8;
extern undefined4 *DAT_00506dfc;
extern undefined *DAT_00506e00;

// USA 00506B68 <- EU 00506B40 (Ghidra, non-matching)
// GLOBAL DAT_00506dec undefined *
// GLOBAL DAT_00506df0 undefined4
// GLOBAL DAT_00506df4 undefined4
// GLOBAL DAT_00506df8 undefined4
// GLOBAL DAT_00506dfc undefined4 *
// GLOBAL DAT_00506e00 undefined *

void func_00506B68(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int *piVar13;
  int *piVar14;
  undefined4 uVar15;
  
  iVar10 = *(int *)(param_1 + 0x478);
  if (0 < iVar10) {
    iVar4 = func_0010CEE0(iVar10 * 0x30,(int *)0x0,4);
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar5 = func_00100118(iVar4,DAT_00506dec,0x30,iVar10);
    }
    if (iVar5 != 0) {
      *(int *)(param_1 + 0x620) = iVar5;
      *(int *)(param_1 + 0x61c) = iVar10;
    }
  }
  uVar3 = DAT_00506df8;
  uVar2 = DAT_00506df4;
  uVar1 = DAT_00506df0;
  piVar13 = *(int **)(param_1 + 0x480);
  uVar11 = 0xffffffff;
  piVar14 = piVar13 + *(int *)(param_1 + 0x478);
  if (piVar13 != piVar14) {
    puVar12 = (uint *)(param_1 + 0x61c);
    do {
      uVar11 = uVar11 + 1;
      piVar6 = (int *)func_0054D964(param_1,0);
      iVar10 = *piVar13;
      iVar5 = *(int *)(iVar10 + 8);
      iVar4 = *(int *)(iVar10 + 0xc);
      piVar6[1] = *(int *)(iVar10 + 4);
      piVar6[2] = iVar5;
      piVar6[3] = iVar4;
      func_004356B4(piVar6);
      piVar6[0xb] = piVar6[0xb] | 1;
      *(undefined2 *)(piVar6 + 10) = 7;
      iVar10 = *(int *)(param_1 + 0x620);
      if (uVar11 < *puVar12) {
        iVar10 = iVar10 + uVar11 * 0x30;
      }
      if (uVar11 < *(uint *)(param_1 + 0x604)) {
        uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x60c) + uVar11 * 4);
      }
      else {
        uVar9 = 0;
      }
      *(undefined4 *)(iVar10 + 4) = uVar9;
      puVar7 = (undefined4 *)func_0010BAB4(0x58);
      iVar10 = 0;
      if (puVar7 != (undefined4 *)0x0) {
        func_00110490(puVar7,0x58);
        puVar8 = func_0010CE7C(puVar7);
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = puVar8;
        puVar8[7] = 0;
        puVar8[8] = 0;
        *(undefined1 *)(puVar8 + 0xe) = 0;
        puVar7 = DAT_00506dfc;
        *puVar8 = uVar1;
        uVar9 = *puVar7;
        uVar15 = puVar7[1];
        puVar7 = puVar8 + 9;
        if (puVar7 != (undefined4 *)0x0) {
          puVar8[10] = puVar8;
          puVar8[0xb] = uVar9;
          puVar8[0xc] = uVar15;
          *puVar7 = uVar2;
        }
        puVar8[8] = puVar7;
        *puVar8 = uVar3;
        iVar10 = func_00100118((int)puVar8 + 0x39,DAT_00506e00,5,6);
        iVar10 = iVar10 + -0x39;
      }
      iVar5 = *(int *)(param_1 + 0x620);
      if (uVar11 < *(uint *)(param_1 + 0x61c)) {
        iVar5 = iVar5 + uVar11 * 0x30;
      }
      *(int *)(iVar5 + 8) = iVar10;
      if (uVar11 < *(uint *)(param_1 + 0x61c)) {
        iVar10 = *(int *)(param_1 + 0x620) + uVar11 * 0x30;
        iVar5 = uVar11 * 3;
      }
      else {
        iVar10 = *(int *)(param_1 + 0x620);
      }
      iVar4 = *(int *)(iVar10 + 8);
      iVar10 = *(int *)(param_1 + 0x620);
      if (uVar11 < *(uint *)(param_1 + 0x61c)) {
        iVar10 = iVar10 + iVar5 * 0x10;
      }
      puVar7 = (undefined4 *)func_00584CA8(*(int *)(iVar10 + 4),0,5);
      *(undefined1 *)(iVar4 + 0x56) = 1;
      *(undefined4 *)(iVar4 + 0x52) = *puVar7;
      if (uVar11 < *puVar12) {
        iVar10 = *(int *)(param_1 + 0x620) + uVar11 * 0x30;
        iVar5 = *(int *)(param_1 + 0x620) + uVar11 * 0x30;
      }
      else {
        iVar10 = *(int *)(param_1 + 0x620);
        iVar5 = *(int *)(param_1 + 0x620);
      }
      func_004CE68C(*(int *)(iVar10 + 4),0,*(int *)(iVar5 + 8));
      if (uVar11 < *puVar12) {
        iVar10 = *(int *)(param_1 + 0x620) + uVar11 * 0x30;
      }
      else {
        iVar10 = *(int *)(param_1 + 0x620);
      }
      *(int **)(iVar10 + 0xc) = piVar6;
      puVar7 = (undefined4 *)func_0010BAB4(0x48);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = func_0034CAA0(puVar7);
      }
      piVar13 = piVar13 + 1;
      if (uVar11 < *(uint *)(param_1 + 0x61c)) {
        iVar10 = *(int *)(param_1 + 0x620) + uVar11 * 0x30;
      }
      else {
        iVar10 = *(int *)(param_1 + 0x620);
      }
      *(undefined4 **)(iVar10 + 0x10) = puVar7;
    } while (piVar13 != piVar14);
  }
  return;
}

