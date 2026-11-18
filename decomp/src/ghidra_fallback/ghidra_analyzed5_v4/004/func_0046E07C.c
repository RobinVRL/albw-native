#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_002313DC(int param_1);
extern int func_002C0294(undefined4 *param_1);
extern int func_0031BF10(undefined4 *param_1,int *param_2,int *param_3);
extern int func_0037654C(int param_1,undefined4 param_2,undefined1 param_3);
extern int func_0037685C(undefined4 *param_1,int *param_2,int *param_3);
extern int func_00421C18(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_00421C24(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_00421CC8(undefined2 *param_1,undefined4 param_2,undefined2 param_3,int param_4, undefined2 param_5,int param_6);
extern int func_00421D24(undefined2 *param_1);
extern int func_004A06A0(undefined4 *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_004B948C(int param_1,int param_2);
extern int func_004B9660(int param_1,int param_2);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_0046e5f8;
extern undefined4 *DAT_0046e5fc;
extern undefined4 DAT_0046e600;
extern undefined *DAT_0046e604;
extern int DAT_0046e614;
extern undefined4 DAT_0046e624;
extern int DAT_0046e628;
extern int *DAT_0046e650;
extern int *DAT_0046e654;
extern int *DAT_0046e658;
extern int *DAT_0046e66c;
extern int *DAT_0046e7e4;
extern int *DAT_0046e7e8;
extern char s_L_ArrowL_00_0046e638[];
extern char s_L_ArrowR_00_0046e644[];
extern char s_L_Icon_00_0046e62c[];
extern char s_T_ItemNameL_00_0046e7d4[];
extern char s_T_ItemNameR_00_0046e65c[];
extern char s_cState_Anim_0046e618[];
extern char s_cState_Wait_0046e608[];

// USA 0046E07C <- EU 0046E054 (Ghidra, non-matching)
// GLOBAL DAT_0046e5f8 int
// GLOBAL DAT_0046e5fc undefined4 *
// GLOBAL DAT_0046e600 undefined4
// GLOBAL DAT_0046e604 undefined *
// GLOBAL DAT_0046e614 int
// GLOBAL DAT_0046e624 undefined4
// GLOBAL DAT_0046e628 int
// GLOBAL DAT_0046e650 int *
// GLOBAL DAT_0046e654 int *
// GLOBAL DAT_0046e658 int *
// GLOBAL DAT_0046e66c int *
// GLOBAL DAT_0046e7e4 int *
// GLOBAL DAT_0046e7e8 int *
// GLOBAL s_L_ArrowL_00_0046e638 string
// GLOBAL s_L_ArrowR_00_0046e644 string
// GLOBAL s_L_Icon_00_0046e62c string
// GLOBAL s_T_ItemNameL_00_0046e7d4 string
// GLOBAL s_T_ItemNameR_00_0046e65c string
// GLOBAL s_cState_Anim_0046e618 string
// GLOBAL s_cState_Wait_0046e608 string

int * func_0046E07C(undefined4 *param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  int *piVar17;
  uint *puVar18;
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(uint * *)(albw_frame + 0x4))
  #define local_38 ((int *)(albw_frame + 0x8))
  piVar2 = func_004B9A10(param_1,1);
  iVar8 = DAT_0046e5f8;
  *piVar2 = DAT_0046e5f8;
  piVar2[0xe] = iVar8 + 0x54;
  puVar3 = func_0010A794(piVar2 + 0x1d);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar4 = (undefined2 *)func_0010BAB4(0x40);
  uVar5 = 0;
  if (puVar4 != (undefined2 *)0x0) {
    uVar5 = func_00421D24(puVar4);
  }
  puVar3[0xd] = uVar5;
  puVar6 = (undefined4 *)func_0010BAB4(0x78);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_0017A520(puVar6,0x400,(int *)0x0,0);
  }
  puVar6 = DAT_0046e5fc;
  puVar3[0x11] = puVar7;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x29] = 0;
  uVar5 = puVar6[0x11];
  puVar3[0x2a] = puVar6[0x10];
  puVar3[0x2b] = uVar5;
  uVar5 = DAT_0046e600;
  puVar3[0x28] = DAT_0046e600;
  puVar3[0x2d] = 0;
  uVar14 = puVar6[0x10];
  uVar15 = puVar6[0x11];
  puVar3[0x2c] = uVar5;
  puVar3[0x2e] = uVar14;
  puVar3[0x2f] = uVar15;
  puVar3[0x31] = 0;
  uVar14 = puVar6[0x10];
  uVar15 = puVar6[0x11];
  puVar3[0x30] = uVar5;
  puVar3[0x32] = uVar14;
  puVar3[0x33] = uVar15;
  iVar8 = func_004A06A0(puVar3 + 0x34,in_s0,in_s1,in_s2,in_s3);
  piVar2 = (int *)(iVar8 + -0x144);
  *(undefined4 *)(iVar8 + 0x18) = 0x2d;
  *(undefined1 *)(iVar8 + -0xca) = 2;
  *(int **)(iVar8 + -0xbc) = piVar2;
  iVar9 = func_0010BA78(0x20);
  *(int *)(iVar8 + -0xb8) = iVar9;
  *(uint *)(iVar8 + -0xb4) = iVar9 + (uint)*(byte *)(iVar8 + -0xca) * 8;
  iVar10 = 2;
  puVar3 = (undefined4 *)(iVar9 + -8);
  do {
    uVar5 = puVar6[7];
    iVar10 = iVar10 + -1;
    puVar3[2] = puVar6[6];
    puVar3[3] = uVar5;
    uVar5 = puVar6[7];
    puVar3[4] = puVar6[6];
    puVar3[5] = uVar5;
    puVar3 = puVar3 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)(iVar8 + -0xca);
  uVar16 = (uint)bVar1;
  puVar3 = (undefined4 *)func_0010BA78(uVar16 << 3);
  *(undefined4 **)(iVar8 + -0xb0) = puVar3;
  if (uVar16 != 0) {
    puVar7 = puVar3 + -2;
    if ((bVar1 & 1) != 0) {
      uVar5 = puVar6[5];
      *puVar3 = puVar6[4];
      puVar3[1] = uVar5;
      puVar7 = puVar3;
    }
    for (iVar9 = (int)uVar16 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar5 = puVar6[5];
      puVar7[2] = puVar6[4];
      puVar7[3] = uVar5;
      uVar5 = puVar6[5];
      puVar7[4] = puVar6[4];
      puVar7[5] = uVar5;
      puVar7 = puVar7 + 4;
    }
  }
  puVar3 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar9 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0x24;
    puVar3[1] = 2;
    iVar9 = func_00100118((int)(puVar3 + 2),DAT_0046e604,0x24,2);
  }
  if (iVar9 != 0) {
    *(int *)(iVar8 + -0xc4) = iVar9;
    *(undefined4 *)(iVar8 + -200) = 2;
  }
  iVar9 = DAT_0046e614;
  local_3c = (uint *)s_cState_Wait_0046e608;
  local_40 = DAT_0046e614;
  iVar10 = *(int *)(iVar8 + -0xc4);
  puVar18 = *(uint **)(iVar10 + 4);
  (**(code **)(DAT_0046e614 + 8))(&local_40);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_3c + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_0046e2b4;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_0046e2b4:
  iVar10 = *(int *)(iVar10 + 8);
  if (iVar10 <= (int)uVar16) {
    uVar16 = iVar10 - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar18,local_3c,uVar16);
  *(undefined1 *)((int)puVar18 + uVar16) = 0;
  puVar3 = *(undefined4 **)(iVar8 + -0xb8);
  uVar5 = puVar6[1];
  uVar14 = puVar6[2];
  uVar15 = puVar6[3];
  uVar19 = puVar6[4];
  uVar20 = puVar6[5];
  *puVar3 = *puVar6;
  puVar3[1] = uVar5;
  puVar3 = *(undefined4 **)(iVar8 + -0xb4);
  *puVar3 = uVar14;
  puVar3[1] = uVar15;
  puVar3 = *(undefined4 **)(iVar8 + -0xb0);
  *puVar3 = uVar19;
  puVar3[1] = uVar20;
  local_3c = (uint *)s_cState_Anim_0046e618;
  local_40 = iVar9;
  if (*(uint *)(iVar8 + -200) < 2) {
    iVar10 = *(int *)(iVar8 + -0xc4);
  }
  else {
    iVar10 = *(int *)(iVar8 + -0xc4) + 0x24;
  }
  puVar18 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar9 + 8))(&local_40);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_3c + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_0046e364;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_0046e364:
  if (*(int *)(iVar10 + 8) <= (int)uVar16) {
    uVar16 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar18,local_3c,uVar16);
  *(undefined1 *)((int)puVar18 + uVar16) = 0;
  uVar5 = DAT_0046e624;
  iVar10 = *(int *)(iVar8 + -0xb8);
  uVar14 = puVar6[4];
  uVar15 = puVar6[5];
  uVar19 = puVar6[7];
  uVar20 = puVar6[8];
  uVar21 = puVar6[9];
  *(undefined4 *)(iVar10 + 8) = puVar6[6];
  *(undefined4 *)(iVar10 + 0xc) = uVar19;
  iVar10 = *(int *)(iVar8 + -0xb4);
  *(undefined4 *)(iVar10 + 8) = uVar20;
  *(undefined4 *)(iVar10 + 0xc) = uVar21;
  iVar10 = *(int *)(iVar8 + -0xb0);
  *(undefined4 *)(iVar10 + 8) = uVar14;
  *(undefined4 *)(iVar10 + 0xc) = uVar15;
  (**(code **)(*piVar2 + 0x38))(piVar2,uVar5,0);
  piVar17 = *(int **)(iVar8 + -0x128);
  func_0016773C((int)piVar17,4);
  iVar10 = DAT_0046e628;
  uVar16 = 0;
  do {
    func_00166C20(piVar17,uVar16,(int *)(iVar10 + uVar16 * 8),0);
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 4);
  *(int **)(iVar8 + -0x11c) = piVar17;
  *(undefined2 *)(iVar8 + -0x122) = 0;
  *(undefined2 *)(iVar8 + -0x124) = 0;
  func_002313DC(iVar8 + -0x124);
  *(int **)(iVar8 + -0x110) = piVar17;
  *(undefined2 *)(iVar8 + -0x116) = 1;
  *(undefined2 *)(iVar8 + -0x118) = 0;
  puVar3 = (undefined4 *)func_0010BAB4(0x50);
  piVar11 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    local_3c = (uint *)s_L_Icon_00_0046e62c;
    local_40 = iVar9;
    piVar11 = func_0031BF10(puVar3,piVar17,&local_40);
  }
  *(int **)(iVar8 + -0xa0) = piVar11;
  puVar7 = (undefined4 *)func_0010BAB4(0x6c);
  puVar3 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    local_3c = (uint *)s_L_ArrowL_00_0046e638;
    local_40 = iVar9;
    puVar3 = func_0037685C(puVar7,piVar17,&local_40);
  }
  *(undefined4 **)(iVar8 + -0xa8) = puVar3;
  func_0037654C((int)puVar3,0x440000,0);
  func_004B948C((int)piVar2,*(int *)(iVar8 + -0xa8));
  puVar7 = (undefined4 *)func_0010BAB4(0x6c);
  puVar3 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    local_3c = (uint *)s_L_ArrowR_00_0046e644;
    local_40 = iVar9;
    puVar3 = func_0037685C(puVar7,piVar17,&local_40);
  }
  *(undefined4 **)(iVar8 + -0xa4) = puVar3;
  func_0037654C((int)puVar3,0x880000,1);
  func_004B948C((int)piVar2,*(int *)(iVar8 + -0xa4));
  puVar7 = (undefined4 *)func_0010BAB4(0x20);
  puVar3 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar3 = func_002C0294(puVar7);
  }
  *(undefined4 **)(iVar8 + -0x130) = puVar3;
  puVar3[4] = 2;
  *(undefined1 *)(*(int *)(iVar8 + -0x130) + 0x14) = 2;
  func_004B9660((int)piVar2,*(int *)(iVar8 + -0x130));
  puVar7 = (undefined4 *)func_0010BAB4(0x20);
  puVar3 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar3 = func_002C0294(puVar7);
  }
  *(undefined4 **)(iVar8 + -0x80) = puVar3;
  puVar3[4] = 1;
  *(undefined1 *)(*(int *)(iVar8 + -0x80) + 0x14) = 3;
  func_004B9660((int)piVar2,*(int *)(iVar8 + -0x80));
  uVar5 = func_005229AC(piVar17,DAT_0046e650);
  *(undefined4 *)(iVar8 + -0x98) = uVar5;
  uVar5 = func_005229AC(piVar17,DAT_0046e654);
  *(undefined4 *)(iVar8 + -0x94) = uVar5;
  uVar5 = func_005229AC(piVar17,DAT_0046e658);
  *(undefined4 *)(iVar8 + -0x90) = uVar5;
  local_3c = (uint *)s_T_ItemNameR_00_0046e65c;
  local_40 = iVar9;
  piVar12 = (int *)func_005229AC(piVar17,&local_40);
  piVar11 = DAT_0046e66c;
  if (piVar12 != (int *)0x0) {
    piVar13 = (int *)(**(code **)(*piVar12 + 8))(piVar12);
    do {
      if (piVar13 == piVar11) goto LAB_0046e680;
      piVar13 = (int *)*piVar13;
    } while (piVar13 != (int *)0x0);
  }
  piVar12 = (int *)0x0;
LAB_0046e680:
  *(int **)(iVar8 + -0x88) = piVar12;
  local_3c = (uint *)s_T_ItemNameL_00_0046e7d4;
  local_40 = iVar9;
  piVar12 = (int *)func_005229AC(piVar17,&local_40);
  piVar11 = DAT_0046e66c;
  if (piVar12 != (int *)0x0) {
    piVar13 = (int *)(**(code **)(*piVar12 + 8))(piVar12);
    do {
      if (piVar13 == piVar11) goto LAB_0046e6d0;
      piVar13 = (int *)*piVar13;
    } while (piVar13 != (int *)0x0);
  }
  piVar12 = (int *)0x0;
LAB_0046e6d0:
  *(int **)(iVar8 + -0x84) = piVar12;
  local_38[3] = 0xffffffff;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  func_005826A4(*DAT_0046e7e8,local_38,DAT_0046e7e4 + -10,DAT_0046e7e4);
  *(int *)(iVar8 + -0xac) = local_38[0];
  uVar5 = puVar6[10];
  uVar14 = puVar6[0xb];
  *(int **)(iVar8 + -0x2c) = piVar2;
  *(undefined4 *)(iVar8 + -0x28) = uVar5;
  *(undefined4 *)(iVar8 + -0x24) = uVar14;
  uVar5 = puVar6[0xc];
  uVar14 = puVar6[0xd];
  *(int **)(iVar8 + -0x1c) = piVar2;
  *(undefined4 *)(iVar8 + -0x18) = uVar5;
  *(undefined4 *)(iVar8 + -0x14) = uVar14;
  uVar5 = puVar6[0xe];
  uVar14 = puVar6[0xf];
  *(int **)(iVar8 + -0xc) = piVar2;
  *(undefined4 *)(iVar8 + -8) = uVar5;
  *(undefined4 *)(iVar8 + -4) = uVar14;
  func_00421CC8(*(undefined2 **)(iVar8 + -0x9c),piVar17,2,0,3,0);
  *(int *)(*(int *)(iVar8 + -0x9c) + 0x28) = *(int *)(iVar8 + -0x9c) + 0xc;
  func_00421C18(*(int *)(iVar8 + -0x9c),iVar8 + -0x30,iVar8 + -0x20);
  func_00421C24(*(int *)(iVar8 + -0x9c),iVar8 + -0x10,iVar8 + -0x10);
  iVar10 = *(int *)(iVar8 + -0xf0);
  for (iVar9 = *(int *)(iVar8 + -0xf8); iVar9 = iVar9 - iVar10,
      iVar9 != (iVar8 + -0xfc) - *(int *)(iVar8 + -0xf0); iVar9 = *(int *)(iVar9 + iVar10 + 4)) {
    *(undefined1 *)(iVar9 + 0xe) = 1;
  }
  func_004B9958((int)piVar2,2);
  return piVar2;
}

