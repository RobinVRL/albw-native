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
extern int func_001B6E04(undefined4 *param_1);
extern int func_002313DC(int param_1);
extern undefined4 DAT_004a4f4c;
extern undefined4 DAT_004a4f50;
extern undefined4 DAT_004a4f54;
extern undefined4 *DAT_004a4f58;
extern undefined *DAT_004a4f5c;
extern int DAT_004a4f6c;
extern int DAT_004a50bc;
extern char s_cState_Down_004a4f70[];
extern char s_cState_Up_004a4f7c[];
extern char s_cState_Wait_004a4f60[];

// USA 004A4BD4 <- EU 004A4BAC (Ghidra, non-matching)
// GLOBAL DAT_004a4f4c undefined4
// GLOBAL DAT_004a4f50 undefined4
// GLOBAL DAT_004a4f54 undefined4
// GLOBAL DAT_004a4f58 undefined4 *
// GLOBAL DAT_004a4f5c undefined *
// GLOBAL DAT_004a4f6c int
// GLOBAL DAT_004a50bc int
// GLOBAL s_cState_Down_004a4f70 string
// GLOBAL s_cState_Up_004a4f7c string
// GLOBAL s_cState_Wait_004a4f60 string

int func_004A4BD4(undefined4 *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(uint * *)(albw_frame + 0x4))
  #define puStack_30 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_2c (*(int * *)(albw_frame + 0x14))
  #define piStack_28 (*(int * *)(albw_frame + 0x18))
  puStack_30 = param_1;
  local_2c = param_2;
  piStack_28 = param_3;
  puVar3 = func_001B6E04(param_1);
  *puVar3 = DAT_004a4f4c;
  puVar4 = func_0010A794(puVar3 + 0xe);
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined2 *)(puVar4 + 9) = 0;
  uVar13 = DAT_004a4f50;
  *(undefined2 *)((int)puVar4 + 0x26) = 0xffff;
  puVar4[10] = uVar13;
  puVar4[0xb] = 0;
  *(undefined2 *)(puVar4 + 0xc) = 0;
  *(undefined2 *)((int)puVar4 + 0x32) = 0xffff;
  puVar4[0xd] = uVar13;
  puVar4[0xe] = 0;
  *(undefined2 *)(puVar4 + 0xf) = 0;
  *(undefined2 *)((int)puVar4 + 0x3e) = 0xffff;
  puVar4[0x10] = uVar13;
  puVar4[0x11] = 0;
  *(undefined2 *)(puVar4 + 0x12) = 0;
  *(undefined2 *)((int)puVar4 + 0x4a) = 0xffff;
  puVar4[0x13] = uVar13;
  puVar4[0x14] = 0;
  *(undefined2 *)(puVar4 + 0x15) = 0;
  *(undefined2 *)((int)puVar4 + 0x56) = 0xffff;
  puVar4[0x16] = uVar13;
  uVar13 = DAT_004a4f54;
  puVar4[0x17] = 0;
  puVar4[0x18] = uVar13;
  *(undefined1 *)(puVar4 + 0x19) = 4;
  *(undefined1 *)((int)puVar4 + 0x65) = 1;
  *(undefined1 *)((int)puVar4 + 6) = 3;
  puVar4[5] = puVar4 + -0xe;
  iVar5 = func_0010BA78(0x30);
  puVar4[6] = iVar5;
  puVar3 = DAT_004a4f58;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar8 = 3;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar13 = puVar3[0xf];
    iVar8 = iVar8 + -1;
    puVar6[2] = puVar3[0xe];
    puVar6[3] = uVar13;
    uVar13 = puVar3[0xf];
    puVar6[4] = puVar3[0xe];
    puVar6[5] = uVar13;
    puVar6 = puVar6 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar10 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar10 << 3);
  puVar4[8] = puVar6;
  if (uVar10 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar3[5];
      *puVar6 = puVar3[4];
      puVar6[1] = uVar13;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar10 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar13 = puVar3[5];
      puVar7[2] = puVar3[4];
      puVar7[3] = uVar13;
      uVar13 = puVar3[5];
      puVar7[4] = puVar3[4];
      puVar7[5] = uVar13;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  puVar2 = DAT_004a4f5c;
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[1] = 3;
    *puVar6 = 0x24;
    iVar5 = func_00100118((int)(puVar6 + 2),puVar2,0x24,3);
  }
  if (iVar5 != 0) {
    puVar4[3] = iVar5;
    puVar4[2] = 3;
  }
  iVar5 = DAT_004a4f6c;
  local_3c = (uint *)s_cState_Wait_004a4f60;
  local_40 = DAT_004a4f6c;
  iVar8 = puVar4[3];
  puVar12 = *(uint **)(iVar8 + 4);
  (**(code **)(DAT_004a4f6c + 8))(&local_40);
  uVar10 = 0;
  do {
    if (*(char *)((int)local_3c + uVar10) == '\0') {
      if ((int)uVar10 < 0x40001) goto LAB_004a4dbc;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x40001);
  uVar10 = 0;
LAB_004a4dbc:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar10) {
    uVar10 = iVar8 - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar12,local_3c,uVar10);
  *(undefined1 *)((int)puVar12 + uVar10) = 0;
  puVar6 = (undefined4 *)puVar4[6];
  uVar13 = puVar3[4];
  uVar9 = puVar3[2];
  uVar15 = puVar3[1];
  uVar16 = puVar3[3];
  uVar14 = puVar3[5];
  *puVar6 = *puVar3;
  puVar6[1] = uVar15;
  puVar6 = (undefined4 *)puVar4[7];
  *puVar6 = uVar9;
  puVar6[1] = uVar16;
  puVar6 = (undefined4 *)puVar4[8];
  *puVar6 = uVar13;
  puVar6[1] = uVar14;
  local_3c = (uint *)s_cState_Down_004a4f70;
  local_40 = iVar5;
  if ((uint)puVar4[2] < 2) {
    iVar8 = puVar4[3];
  }
  else {
    iVar8 = puVar4[3] + 0x24;
  }
  puVar12 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar5 + 8))(&local_40);
  uVar10 = 0;
  do {
    if (*(char *)((int)local_3c + uVar10) == '\0') {
      if ((int)uVar10 < 0x40001) goto LAB_004a4e88;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x40001);
  uVar10 = 0;
LAB_004a4e88:
  if (*(int *)(iVar8 + 8) <= (int)uVar10) {
    uVar10 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar12,local_3c,uVar10);
  *(undefined1 *)((int)puVar12 + uVar10) = 0;
  iVar8 = puVar4[6];
  uVar13 = puVar3[8];
  uVar9 = puVar3[4];
  uVar14 = puVar3[5];
  uVar15 = puVar3[9];
  uVar16 = puVar3[7];
  *(undefined4 *)(iVar8 + 8) = puVar3[6];
  *(undefined4 *)(iVar8 + 0xc) = uVar16;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 8) = uVar13;
  *(undefined4 *)(iVar8 + 0xc) = uVar15;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 8) = uVar9;
  *(undefined4 *)(iVar8 + 0xc) = uVar14;
  local_3c = (uint *)s_cState_Up_004a4f7c;
  local_40 = iVar5;
  if ((uint)puVar4[2] < 3) {
    iVar8 = puVar4[3];
  }
  else {
    iVar8 = puVar4[3] + 0x48;
  }
  puVar12 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar5 + 8))(&local_40);
  uVar10 = 0;
  do {
    if (*(char *)((int)local_3c + uVar10) == '\0') {
      if ((int)uVar10 < 0x40001) goto LAB_004a4f94;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x40001);
  uVar10 = 0;
LAB_004a4f94:
  if (*(int *)(iVar8 + 8) <= (int)uVar10) {
    uVar10 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar12,local_3c,uVar10);
  *(undefined1 *)((int)puVar12 + uVar10) = 0;
  uVar14 = puVar3[4];
  iVar5 = puVar4[6];
  uVar13 = puVar3[5];
  uVar16 = puVar3[0xb];
  uVar15 = puVar3[0xc];
  uVar9 = puVar3[0xd];
  *(undefined4 *)(iVar5 + 0x10) = puVar3[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar16;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar15;
  *(undefined4 *)(iVar5 + 0x14) = uVar9;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x10) = uVar14;
  *(undefined4 *)(iVar5 + 0x14) = uVar13;
  puVar3 = (undefined4 *)func_0010BAB4(0x74);
  if (puVar3 == (undefined4 *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = func_00168434(puVar3);
  }
  func_00168100(piVar11,local_2c,piStack_28);
  puVar4[-7] = piVar11;
  puVar4[-8] = puVar4[-8] | 0x10;
  *(byte *)(piVar11 + 0x1c) = *(byte *)(piVar11 + 0x1c) | 8;
  func_0016773C((int)piVar11,0xc);
  iVar5 = DAT_004a50bc;
  uVar10 = 0;
  do {
    func_00166C20(piVar11,uVar10,(int *)(iVar5 + uVar10 * 8),0);
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0xc);
  puVar4[-4] = piVar11;
  *(undefined2 *)((int)puVar4 + -0x16) = 8;
  *(undefined2 *)(puVar4 + -6) = 0;
  func_002313DC((int)(puVar4 + -6));
  puVar4[0xe] = piVar11;
  *(undefined2 *)((int)puVar4 + 0x32) = 0xb;
  *(undefined2 *)(puVar4 + 0xc) = 0;
  return (int)(puVar4 + -0xe);
}

