#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002353B8(int param_1,uint param_2,int *param_3,int *param_4);
extern int func_0023542C(int param_1,uint param_2);
extern int func_0036D0C8(int *param_1,int param_2);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_004CE68C(int param_1,uint param_2,int param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern undefined4 *DAT_00506660;
extern undefined *DAT_00506664;
extern undefined4 DAT_00506668;
extern undefined4 DAT_0050666c;
extern undefined4 DAT_00506670;
extern int *DAT_00506674;
extern int *DAT_00506678;
extern int *DAT_0050667c;
extern int DAT_00506680;

// USA 00506068 <- EU 00506040 (Ghidra, non-matching)
// GLOBAL DAT_00506660 undefined4 *
// GLOBAL DAT_00506664 undefined *
// GLOBAL DAT_00506668 undefined4
// GLOBAL DAT_0050666c undefined4
// GLOBAL DAT_00506670 undefined4
// GLOBAL DAT_00506674 int *
// GLOBAL DAT_00506678 int *
// GLOBAL DAT_0050667c int *
// GLOBAL DAT_00506680 int

void func_00506068(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  int *piVar18;
  undefined4 uVar19;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((uint *)(albw_frame + 0x8))
  iVar5 = func_00588BE4(param_1);
  func_0036D0C8((int *)(param_1 + 0x64c),0);
  puVar9 = DAT_00506660;
  iVar10 = *(int *)(param_1 + 0x64c);
  if (iVar10 == 0) {
    iVar10 = 1;
  }
  else {
    iVar10 = func_0010983C(*DAT_00506660,iVar10);
  }
  iVar14 = *(int *)(param_1 + 0x478);
  if (0 < iVar14) {
    puVar6 = (undefined4 *)func_0010CEE0(iVar14 * 0x104 + 8,(int *)0x0,4);
    iVar7 = 0;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = 0x104;
      puVar6[1] = iVar14;
      iVar7 = func_00100118((int)(puVar6 + 2),DAT_00506664,0x104,iVar14);
    }
    if (iVar7 != 0) {
      *(int *)(param_1 + 0x634) = iVar7;
      *(int *)(param_1 + 0x630) = iVar14;
    }
  }
  if (iVar10 != 1) {
    func_0010983C(*puVar9,iVar10);
  }
  uVar3 = DAT_00506670;
  uVar2 = DAT_0050666c;
  uVar1 = DAT_00506668;
  piVar17 = *(int **)(param_1 + 0x480);
  uVar15 = 0xffffffff;
  piVar18 = piVar17 + *(int *)(param_1 + 0x478);
  for (; piVar17 != piVar18; piVar17 = piVar17 + 1) {
    uVar15 = uVar15 + 1;
    func_0023542C(param_1,uVar15);
    piVar8 = (int *)func_0054D964(param_1,0);
    *(undefined2 *)(piVar8 + 10) = 0x84;
    func_002353B8(param_1,uVar15,(int *)(*piVar17 + 4),piVar8);
    iVar10 = *(int *)(param_1 + 0x634);
    if (uVar15 < *(uint *)(param_1 + 0x630)) {
      iVar10 = iVar10 + uVar15 * 0x104;
    }
    *(int **)(iVar10 + 0x1c) = piVar8;
    puVar9 = (undefined4 *)func_0010BAB4(0x48);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = func_004EDC9C(puVar9);
    }
    iVar10 = *(int *)(param_1 + 0x634);
    if (uVar15 < *(uint *)(param_1 + 0x630)) {
      iVar10 = iVar10 + uVar15 * 0x104;
    }
    *(undefined4 **)(iVar10 + 0x88) = puVar9;
    if (uVar15 < *(uint *)(param_1 + 0x630)) {
      iVar10 = *(int *)(param_1 + 0x634) + uVar15 * 0x104;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x634);
    }
    *(int **)(*(int *)(iVar10 + 0x88) + 0x18) = piVar8;
    local_38[0] = *(uint *)(param_1 + 0x2cc);
    if (uVar15 < *(uint *)(param_1 + 0x630)) {
      iVar10 = *(int *)(param_1 + 0x634) + uVar15 * 0x104;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x634);
    }
    func_004EDAD0(*(int *)(iVar10 + 0x88),local_38);
    piVar4 = DAT_00506674;
    if (uVar15 < *(uint *)(param_1 + 0x630)) {
      iVar10 = *(int *)(param_1 + 0x634) + uVar15 * 0x104;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x634);
    }
    *(undefined2 *)(*(int *)(iVar10 + 0x88) + 0x2c) = *(undefined2 *)(param_1 + 0x54);
    if (uVar15 < *(uint *)(param_1 + 0x630)) {
      iVar10 = *(int *)(param_1 + 0x634) + uVar15 * 0x104;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x634);
    }
    if (uVar15 < *(uint *)(param_1 + 0x630)) {
      iVar14 = *(int *)(param_1 + 0x634) + uVar15 * 0x104;
    }
    else {
      iVar14 = *(int *)(param_1 + 0x634);
    }
    *(int *)(*(int *)(iVar10 + 0x88) + 0x28) = iVar14 + 0xbc;
    if (uVar15 < *(uint *)(param_1 + 0x630)) {
      iVar10 = *(int *)(param_1 + 0x634) + uVar15 * 0x104;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x634);
    }
    func_004A879C(*piVar4,*(int *)(iVar10 + 0x88),2);
    if (uVar15 < *(uint *)(param_1 + 0x630)) {
      iVar10 = *(int *)(param_1 + 0x634) + uVar15 * 0x104;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x634);
    }
    *(int **)(iVar10 + 0x30) = piVar8;
    local_38[0] = *(uint *)(param_1 + 0x2cc);
    if (uVar15 < *(uint *)(param_1 + 0x630)) {
      iVar10 = *(int *)(param_1 + 0x634) + uVar15 * 0x104;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x634);
    }
    func_004EDEA0(iVar10 + 0x20,local_38);
    if (uVar15 < *(uint *)(param_1 + 0x630)) {
      iVar10 = *(int *)(param_1 + 0x634) + uVar15 * 0x104;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x634);
    }
    *(uint *)(iVar10 + 0x58) = uVar15;
    iVar10 = *(int *)(param_1 + 0x634);
    if (uVar15 < *(uint *)(param_1 + 0x630)) {
      iVar10 = iVar10 + uVar15 * 0x104;
    }
    *(undefined2 *)(iVar10 + 0x38) = *(undefined2 *)(param_1 + 0x54);
    if (uVar15 < *(uint *)(param_1 + 0x630)) {
      iVar10 = *(int *)(param_1 + 0x634) + uVar15 * 0x104;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x634);
    }
    *(undefined1 *)(iVar10 + 0x41) = 0;
    *(undefined1 *)(iVar10 + 0x42) = 0;
    *(undefined2 *)(iVar10 + 0x50) = 0;
    if (uVar15 < *(uint *)(param_1 + 0x630)) {
      iVar10 = *(int *)(param_1 + 0x634) + uVar15 * 0x104;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x634);
    }
    func_004A8BFC(*piVar4,iVar10 + 0x20,0xd);
    if ((iVar5 == *DAT_00506678) || (iVar5 == *DAT_0050667c)) {
      if (uVar15 < *(uint *)(param_1 + 0x630)) {
        iVar10 = *(int *)(param_1 + 0x634) + uVar15 * 0x104;
      }
      else {
        iVar10 = *(int *)(param_1 + 0x634);
      }
      *(char *)(iVar10 + 0xea) = (char)*(undefined2 *)(*piVar17 + 0x2a);
      iVar10 = *(int *)(param_1 + 0x634);
      if (uVar15 < *(uint *)(param_1 + 0x630)) {
        iVar10 = iVar10 + uVar15 * 0x104;
      }
      if (1 < *(byte *)(iVar10 + 0xea)) {
        if (uVar15 < *(uint *)(param_1 + 0x630)) {
          iVar10 = *(int *)(param_1 + 0x634) + uVar15 * 0x104;
        }
        else {
          iVar10 = *(int *)(param_1 + 0x634);
        }
        *(undefined1 *)(iVar10 + 0xea) = 0;
      }
      if (uVar15 < *(uint *)(param_1 + 0x630)) {
        iVar10 = *(int *)(param_1 + 0x634) + uVar15 * 0x104;
      }
      else {
        iVar10 = *(int *)(param_1 + 0x634);
      }
      uVar16 = (uint)*(byte *)(iVar10 + 0xea);
      puVar6 = (undefined4 *)func_0010BAB4(0x44);
      puVar9 = (undefined4 *)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        puVar9 = func_0010CE7C(puVar6);
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[6] = puVar9;
        puVar9[7] = 0;
        puVar9[8] = 0;
        *(undefined1 *)(puVar9 + 0xe) = 0;
        *puVar9 = uVar1;
        uVar13 = *(undefined4 *)(DAT_00506680 + 0x20);
        uVar19 = *(undefined4 *)(DAT_00506680 + 0x24);
        puVar6 = puVar9 + 9;
        if (puVar6 != (undefined4 *)0x0) {
          puVar9[10] = puVar9;
          puVar9[0xb] = uVar13;
          puVar9[0xc] = uVar19;
          *puVar6 = uVar2;
        }
        puVar9[8] = puVar6;
        *puVar9 = uVar3;
        puVar9[0xf] = 0;
        puVar9[0x10] = 0;
      }
      iVar10 = *(int *)(param_1 + 0x634);
      if (uVar15 < *(uint *)(param_1 + 0x630)) {
        iVar10 = iVar10 + uVar15 * 0x104;
      }
      *(undefined4 **)(iVar10 + 0x14) = puVar9;
      puVar6 = (undefined4 *)func_0010BAB4(0x44);
      puVar9 = (undefined4 *)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        puVar9 = func_0010CE7C(puVar6);
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[6] = puVar9;
        puVar9[7] = 0;
        puVar9[8] = 0;
        *(undefined1 *)(puVar9 + 0xe) = 0;
        *puVar9 = uVar1;
        uVar13 = *(undefined4 *)(DAT_00506680 + 0x24);
        uVar19 = *(undefined4 *)(DAT_00506680 + 0x20);
        puVar6 = puVar9 + 9;
        if (puVar6 != (undefined4 *)0x0) {
          puVar9[10] = puVar9;
          puVar9[0xb] = uVar19;
          puVar9[0xc] = uVar13;
          *puVar6 = uVar2;
        }
        puVar9[8] = puVar6;
        *puVar9 = uVar3;
        puVar9[0xf] = 0;
        puVar9[0x10] = 0;
      }
      iVar10 = *(int *)(param_1 + 0x634);
      if (uVar15 < *(uint *)(param_1 + 0x630)) {
        iVar10 = iVar10 + uVar15 * 0x104;
      }
      *(undefined4 **)(iVar10 + 0x18) = puVar9;
      if (uVar15 < *(uint *)(param_1 + 0x630)) {
        iVar10 = *(int *)(param_1 + 0x634) + uVar15 * 0x104;
      }
      else {
        iVar10 = *(int *)(param_1 + 0x634);
      }
      piVar8 = *(int **)(iVar10 + 8);
      iVar10 = *(int *)(param_1 + 0x634);
      iVar14 = *(int *)(piVar8[0x14] + 4);
      if (uVar15 < *(uint *)(param_1 + 0x630)) {
        iVar10 = iVar10 + uVar15 * 0x104;
      }
      iVar10 = *(int *)(iVar10 + 0x14);
      *(undefined4 *)(iVar10 + 0x3c) =
           *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x30) + 0x24) + uVar16 * 4);
      *(undefined4 *)(iVar10 + 0x40) = 0;
      uVar11 = *(uint *)(param_1 + 0x630);
      iVar10 = *(int *)(param_1 + 0x634);
      uVar12 = uVar11;
      if (uVar15 < uVar11) {
        uVar12 = uVar15 * 0x41;
      }
      if (uVar15 < uVar11) {
        iVar10 = iVar10 + uVar12 * 4;
      }
      iVar10 = *(int *)(iVar10 + 0x18);
      *(undefined4 *)(iVar10 + 0x3c) =
           *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x30) + 0x24) + uVar16 * 4);
      *(undefined4 *)(iVar10 + 0x40) = 0;
      if (uVar15 < *(uint *)(param_1 + 0x630)) {
        iVar10 = *(int *)(param_1 + 0x634) + uVar15 * 0x104;
      }
      else {
        iVar10 = *(int *)(param_1 + 0x634);
      }
      func_004CE68C((int)piVar8,0,*(int *)(iVar10 + 0x14));
      if (uVar15 < *(uint *)(param_1 + 0x630)) {
        iVar10 = *(int *)(param_1 + 0x634) + uVar15 * 0x104;
      }
      else {
        iVar10 = *(int *)(param_1 + 0x634);
      }
      func_004CE68C((int)piVar8,1,*(int *)(iVar10 + 0x18));
      (**(code **)(*piVar8 + 0x10))(piVar8,uVar16 + 0x24 & 0xff);
    }
  }
  return;
}

