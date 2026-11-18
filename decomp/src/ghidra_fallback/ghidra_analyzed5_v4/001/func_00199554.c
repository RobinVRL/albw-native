#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_002313DC(int param_1);
extern int func_00232540(undefined4 *param_1);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_00659E20(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00199914;
extern undefined4 DAT_00199918;
extern undefined DAT_0019991c;
extern int DAT_00199924;
extern undefined4 *DAT_0019995c;
extern undefined *DAT_00199960;
extern int *DAT_00199c78;
extern char s_ChangeAction_00199930[];
extern char s_Invalid_00199928[];
extern char s_PositionDecide_0019994c[];
extern char s_PositionIn_00199940[];
extern char s_T_Action_00_00199c6c[];
extern char s_cState_Invalid_00199964[];
extern char s_cState_Invalidate_00199c58[];
extern char s_cState_Valid_00199c48[];
extern char s_cState_Validate_00199974[];

// USA 00199554 <- EU 00199554 (Ghidra, non-matching)
// GLOBAL DAT_00199914 undefined4
// GLOBAL DAT_00199918 undefined4
// GLOBAL DAT_0019991c undefined
// GLOBAL DAT_00199924 int
// GLOBAL DAT_0019995c undefined4 *
// GLOBAL DAT_00199960 undefined *
// GLOBAL DAT_00199c78 int *
// GLOBAL s_ChangeAction_00199930 string
// GLOBAL s_Invalid_00199928 string
// GLOBAL s_PositionDecide_0019994c string
// GLOBAL s_PositionIn_00199940 string
// GLOBAL s_T_Action_00_00199c6c string
// GLOBAL s_cState_Invalid_00199964 string
// GLOBAL s_cState_Invalidate_00199c58 string
// GLOBAL s_cState_Valid_00199c48 string
// GLOBAL s_cState_Validate_00199974 string

undefined4 * func_00199554(undefined4 *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  puVar4 = func_00232540(param_1);
  *puVar4 = DAT_00199914;
  puVar4 = func_0010A794(puVar4 + 8);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar9 = puVar4 + 9;
  *(undefined2 *)puVar9 = 0;
  uVar15 = DAT_00199918;
  *(undefined2 *)((int)puVar4 + 0x26) = 0xffff;
  puVar4[10] = uVar15;
  puVar4[0xb] = 0;
  *(undefined2 *)(puVar4 + 0xc) = 0;
  *(undefined2 *)((int)puVar4 + 0x32) = 0xffff;
  puVar4[0xd] = uVar15;
  puVar4[0xe] = 0;
  *(undefined2 *)(puVar4 + 0xf) = 0;
  *(undefined2 *)((int)puVar4 + 0x3e) = 0xffff;
  puVar4[0x10] = uVar15;
  puVar4[0x11] = 0;
  *(undefined2 *)(puVar4 + 0x12) = 0;
  *(undefined2 *)((int)puVar4 + 0x4a) = 0xffff;
  puVar4[0x13] = uVar15;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0;
  *(undefined1 *)(puVar4 + 0x16) = 0;
  *(undefined1 *)((int)puVar4 + 0x59) = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x74);
  piVar6 = (int *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    piVar6 = func_00168434(puVar5);
  }
  func_00168100(piVar6,param_2,param_3);
  puVar4[-1] = piVar6;
  puVar4[-2] = puVar4[-2] | 0x10;
  func_0016773C((int)piVar6,5);
  iVar2 = DAT_00199924;
  local_2c = (uint *)&DAT_0019991c;
  local_30 = DAT_00199924;
  func_00166C20(piVar6,0,&local_30,0);
  local_2c = (uint *)s_Invalid_00199928;
  local_30 = iVar2;
  func_00166C20(piVar6,1,&local_30,0);
  local_2c = (uint *)s_ChangeAction_00199930;
  local_30 = iVar2;
  func_00166C20(piVar6,2,&local_30,0);
  local_2c = (uint *)s_PositionIn_00199940;
  local_30 = iVar2;
  func_00166C20(piVar6,3,&local_30,0);
  local_2c = (uint *)s_PositionDecide_0019994c;
  local_30 = iVar2;
  func_00166C20(piVar6,4,&local_30,0);
  puVar4[0xb] = puVar4[-1];
  *(undefined2 *)((int)puVar4 + 0x26) = 1;
  *(undefined2 *)puVar9 = 0;
  func_002313DC((int)puVar9);
  *(undefined1 *)((int)puVar4 + 6) = 4;
  puVar4[5] = puVar4 + -8;
  iVar7 = func_0010BA78(0x40);
  puVar4[6] = iVar7;
  puVar9 = DAT_0019995c;
  puVar4[7] = iVar7 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar12 = 4;
  puVar5 = (undefined4 *)(iVar7 + -8);
  do {
    uVar15 = puVar9[0x13];
    iVar12 = iVar12 + -1;
    puVar5[2] = puVar9[0x12];
    puVar5[3] = uVar15;
    uVar15 = puVar9[0x13];
    puVar5[4] = puVar9[0x12];
    puVar5[5] = uVar15;
    puVar5 = puVar5 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar13 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar4[8] = puVar5;
  if (uVar13 != 0) {
    puVar8 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = puVar9[5];
      *puVar5 = puVar9[4];
      puVar5[1] = uVar15;
      puVar8 = puVar5;
    }
    for (iVar7 = (int)uVar13 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar15 = puVar9[5];
      puVar8[2] = puVar9[4];
      puVar8[3] = uVar15;
      uVar15 = puVar9[5];
      puVar8[4] = puVar9[4];
      puVar8[5] = uVar15;
      puVar8 = puVar8 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  puVar3 = DAT_00199960;
  iVar7 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar9[1] = 4;
    *puVar9 = 0x24;
    iVar7 = func_00100118((int)(puVar9 + 2),puVar3,0x24,4);
  }
  if (iVar7 != 0) {
    puVar4[3] = iVar7;
    puVar4[2] = 4;
  }
  local_2c = (uint *)s_cState_Invalid_00199964;
  local_30 = iVar2;
  iVar7 = puVar4[3];
  puVar14 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar2 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_0019984c;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_0019984c:
  iVar7 = *(int *)(iVar7 + 8);
  if (iVar7 <= (int)uVar13) {
    uVar13 = iVar7 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar14,local_2c,uVar13);
  puVar9 = DAT_0019995c;
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  puVar5 = (undefined4 *)puVar4[6];
  uVar15 = puVar9[1];
  uVar16 = puVar9[2];
  uVar17 = puVar9[4];
  uVar18 = puVar9[3];
  uVar19 = puVar9[5];
  *puVar5 = *puVar9;
  puVar5[1] = uVar15;
  puVar9 = (undefined4 *)puVar4[7];
  *puVar9 = uVar16;
  puVar9[1] = uVar18;
  puVar9 = (undefined4 *)puVar4[8];
  *puVar9 = uVar17;
  puVar9[1] = uVar19;
  local_2c = (uint *)s_cState_Validate_00199974;
  local_30 = iVar2;
  if ((uint)puVar4[2] < 2) {
    iVar7 = puVar4[3];
  }
  else {
    iVar7 = puVar4[3] + 0x24;
  }
  puVar14 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar2 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00199990;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00199990:
  if (*(int *)(iVar7 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar14,local_2c,uVar13);
  puVar9 = DAT_0019995c;
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  uVar17 = puVar9[4];
  iVar7 = puVar4[6];
  uVar15 = puVar9[5];
  uVar19 = puVar9[7];
  uVar16 = puVar9[8];
  uVar18 = puVar9[9];
  *(undefined4 *)(iVar7 + 8) = puVar9[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar19;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 8) = uVar16;
  *(undefined4 *)(iVar7 + 0xc) = uVar18;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 8) = uVar17;
  *(undefined4 *)(iVar7 + 0xc) = uVar15;
  local_2c = (uint *)s_cState_Valid_00199c48;
  local_30 = iVar2;
  if ((uint)puVar4[2] < 3) {
    iVar7 = puVar4[3];
  }
  else {
    iVar7 = puVar4[3] + 0x48;
  }
  puVar14 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar2 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00199a64;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00199a64:
  if (*(int *)(iVar7 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar14,local_2c,uVar13);
  puVar9 = DAT_0019995c;
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  iVar7 = puVar4[6];
  uVar17 = puVar9[0xd];
  uVar18 = puVar9[4];
  uVar16 = puVar9[0xb];
  uVar19 = puVar9[0xc];
  uVar15 = puVar9[5];
  *(undefined4 *)(iVar7 + 0x10) = puVar9[10];
  *(undefined4 *)(iVar7 + 0x14) = uVar16;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar19;
  *(undefined4 *)(iVar7 + 0x14) = uVar17;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 0x10) = uVar18;
  *(undefined4 *)(iVar7 + 0x14) = uVar15;
  local_2c = (uint *)s_cState_Invalidate_00199c58;
  local_30 = iVar2;
  if ((uint)puVar4[2] < 4) {
    iVar7 = puVar4[3];
  }
  else {
    iVar7 = puVar4[3] + 0x6c;
  }
  puVar14 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar2 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00199b38;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00199b38:
  if (*(int *)(iVar7 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar14,local_2c,uVar13);
  puVar9 = DAT_0019995c;
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  iVar7 = puVar4[6];
  uVar15 = puVar9[0xf];
  uVar17 = puVar9[0x10];
  uVar18 = puVar9[4];
  uVar16 = puVar9[0x11];
  uVar19 = puVar9[5];
  *(undefined4 *)(iVar7 + 0x18) = puVar9[0xe];
  *(undefined4 *)(iVar7 + 0x1c) = uVar15;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar17;
  *(undefined4 *)(iVar7 + 0x1c) = uVar16;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 0x18) = uVar18;
  *(undefined4 *)(iVar7 + 0x1c) = uVar19;
  func_00659E20(puVar4,0);
  puVar4[0xe] = piVar6;
  *(undefined2 *)((int)puVar4 + 0x32) = 0;
  *(undefined2 *)(puVar4 + 0xc) = 0;
  puVar4[0x11] = piVar6;
  *(undefined2 *)((int)puVar4 + 0x3e) = 2;
  *(undefined2 *)(puVar4 + 0xf) = 0;
  local_2c = (uint *)s_T_Action_00_00199c6c;
  local_30 = iVar2;
  piVar10 = (int *)func_005229AC((int *)puVar4[-1],&local_30);
  piVar6 = DAT_00199c78;
  if (piVar10 != (int *)0x0) {
    piVar11 = (int *)(**(code **)(*piVar10 + 8))(piVar10);
    do {
      if (piVar11 == piVar6) goto LAB_00199c1c;
      piVar11 = (int *)*piVar11;
    } while (piVar11 != (int *)0x0);
  }
  piVar10 = (int *)0x0;
LAB_00199c1c:
  puVar4[0x15] = piVar10;
  if (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 0x5c))(piVar10,s_cState_Valid_00199c48 + 0xc,0);
  }
  return puVar4 + -8;
}

