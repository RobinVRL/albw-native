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
extern int func_002C00D4(undefined4 *param_1,undefined4 param_2,int *param_3);
extern int func_002C0294(undefined4 *param_1);
extern int func_00667638(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00376b5c;
extern undefined4 DAT_00376b60;
extern int DAT_00376b64;
extern undefined4 *DAT_00376b68;
extern undefined *DAT_00376b6c;
extern int DAT_00376b7c;
extern char s_cState_DecideAnim_00376dc0[];
extern char s_cState_OnAnim_00376b80[];
extern char s_cState_OnWait_00376db0[];
extern char s_cState_Wait_00376b70[];

// USA 0037685C <- EU 00376838 (Ghidra, non-matching)
// GLOBAL DAT_00376b5c undefined4
// GLOBAL DAT_00376b60 undefined4
// GLOBAL DAT_00376b64 int
// GLOBAL DAT_00376b68 undefined4 *
// GLOBAL DAT_00376b6c undefined *
// GLOBAL DAT_00376b7c int
// GLOBAL s_cState_DecideAnim_00376dc0 string
// GLOBAL s_cState_OnAnim_00376b80 string
// GLOBAL s_cState_OnWait_00376db0 string
// GLOBAL s_cState_Wait_00376b70 string

undefined4 * func_0037685C(undefined4 *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  puVar4 = func_001B6E04(param_1);
  *puVar4 = DAT_00376b5c;
  puVar4 = func_0010A794(puVar4 + 0xe);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined2 *)(puVar4 + 9) = 0;
  uVar17 = DAT_00376b60;
  *(undefined2 *)((int)puVar4 + 0x26) = 0xffff;
  puVar4[10] = uVar17;
  puVar4[0xb] = 0;
  *(undefined1 *)(puVar4 + 0xc) = 1;
  puVar12 = puVar4 + -0xe;
  puVar5 = (undefined4 *)func_0010BAB4(0x74);
  piVar6 = (int *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    piVar6 = func_00168434(puVar5);
  }
  func_00168100(piVar6,param_2,param_3);
  puVar4[-7] = piVar6;
  puVar4[-8] = puVar4[-8] | 0x10;
  func_0016773C((int)piVar6,4);
  iVar8 = DAT_00376b64;
  uVar13 = 0;
  do {
    func_00166C20(piVar6,uVar13,(int *)(iVar8 + uVar13 * 8),0);
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 4);
  puVar4[-4] = piVar6;
  *(undefined2 *)((int)puVar4 + -0x16) = 0;
  *(undefined2 *)(puVar4 + -6) = 0;
  puVar4[-1] = piVar6;
  *(undefined2 *)((int)puVar4 + -10) = 1;
  *(undefined2 *)(puVar4 + -3) = 2;
  func_002313DC((int)(puVar4 + -6));
  puVar7 = (undefined4 *)func_0010BAB4(0x20);
  puVar5 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar5 = func_002C0294(puVar7);
  }
  puVar4[-9] = puVar5;
  func_002C00D4(puVar5,puVar12,piVar6);
  puVar4[5] = puVar12;
  *(undefined1 *)((int)puVar4 + 6) = 4;
  iVar8 = func_0010BA78(0x40);
  puVar5 = DAT_00376b68;
  puVar4[6] = iVar8;
  puVar4[7] = iVar8 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar10 = 4;
  puVar7 = (undefined4 *)(iVar8 + -8);
  do {
    uVar17 = puVar5[0xb];
    iVar10 = iVar10 + -1;
    puVar7[2] = puVar5[10];
    puVar7[3] = uVar17;
    uVar17 = puVar5[0xb];
    puVar7[4] = puVar5[10];
    puVar7[5] = uVar17;
    puVar7 = puVar7 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar13 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar4[8] = puVar7;
  if (uVar13 != 0) {
    puVar9 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar17 = puVar5[5];
      *puVar7 = puVar5[4];
      puVar7[1] = uVar17;
      puVar9 = puVar7;
    }
    for (iVar8 = (int)uVar13 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar17 = puVar5[5];
      puVar9[2] = puVar5[4];
      puVar9[3] = uVar17;
      uVar17 = puVar5[5];
      puVar9[4] = puVar5[4];
      puVar9[5] = uVar17;
      puVar9 = puVar9 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  puVar3 = DAT_00376b6c;
  iVar8 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 4;
    *puVar7 = 0x24;
    iVar8 = func_00100118((int)(puVar7 + 2),puVar3,0x24,4);
  }
  if (iVar8 != 0) {
    puVar4[3] = iVar8;
    puVar4[2] = 4;
  }
  iVar8 = DAT_00376b7c;
  local_2c = (uint *)s_cState_Wait_00376b70;
  local_30 = DAT_00376b7c;
  iVar10 = puVar4[3];
  puVar16 = *(uint **)(iVar10 + 4);
  (**(code **)(DAT_00376b7c + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00376ab8;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00376ab8:
  iVar10 = *(int *)(iVar10 + 8);
  if (iVar10 <= (int)uVar13) {
    uVar13 = iVar10 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar13);
  *(undefined1 *)((int)puVar16 + uVar13) = 0;
  puVar7 = (undefined4 *)puVar4[6];
  uVar17 = puVar5[1];
  uVar11 = puVar5[2];
  uVar14 = puVar5[3];
  uVar15 = puVar5[4];
  uVar18 = puVar5[5];
  *puVar7 = *puVar5;
  puVar7[1] = uVar17;
  puVar7 = (undefined4 *)puVar4[7];
  *puVar7 = uVar11;
  puVar7[1] = uVar14;
  puVar7 = (undefined4 *)puVar4[8];
  *puVar7 = uVar15;
  puVar7[1] = uVar18;
  local_2c = (uint *)s_cState_OnAnim_00376b80;
  local_30 = iVar8;
  if ((uint)puVar4[2] < 2) {
    iVar10 = puVar4[3];
  }
  else {
    iVar10 = puVar4[3] + 0x24;
  }
  puVar16 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar8 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00376b9c;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00376b9c:
  if (*(int *)(iVar10 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar13);
  *(undefined1 *)((int)puVar16 + uVar13) = 0;
  iVar10 = puVar4[6];
  uVar17 = puVar5[4];
  uVar11 = puVar5[5];
  uVar14 = puVar5[7];
  uVar15 = puVar5[8];
  uVar18 = puVar5[9];
  *(undefined4 *)(iVar10 + 8) = puVar5[6];
  *(undefined4 *)(iVar10 + 0xc) = uVar14;
  iVar10 = puVar4[7];
  *(undefined4 *)(iVar10 + 8) = uVar15;
  *(undefined4 *)(iVar10 + 0xc) = uVar18;
  iVar10 = puVar4[8];
  *(undefined4 *)(iVar10 + 8) = uVar17;
  *(undefined4 *)(iVar10 + 0xc) = uVar11;
  local_2c = (uint *)s_cState_OnWait_00376db0;
  local_30 = iVar8;
  if ((uint)puVar4[2] < 3) {
    iVar10 = puVar4[3];
  }
  else {
    iVar10 = puVar4[3] + 0x48;
  }
  puVar16 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar8 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00376c5c;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00376c5c:
  if (*(int *)(iVar10 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar13);
  *(undefined1 *)((int)puVar16 + uVar13) = 0;
  iVar10 = puVar4[6];
  uVar11 = puVar5[0xb];
  uVar14 = puVar5[0xc];
  uVar17 = puVar5[0xd];
  uVar15 = puVar5[5];
  uVar18 = puVar5[4];
  *(undefined4 *)(iVar10 + 0x10) = puVar5[10];
  *(undefined4 *)(iVar10 + 0x14) = uVar11;
  iVar10 = puVar4[7];
  *(undefined4 *)(iVar10 + 0x10) = uVar14;
  *(undefined4 *)(iVar10 + 0x14) = uVar17;
  iVar10 = puVar4[8];
  *(undefined4 *)(iVar10 + 0x10) = uVar18;
  *(undefined4 *)(iVar10 + 0x14) = uVar15;
  local_2c = (uint *)s_cState_DecideAnim_00376dc0;
  local_30 = iVar8;
  uVar13 = puVar4[2];
  if (uVar13 < 4) {
    iVar10 = puVar4[3];
    uVar2 = uVar13;
  }
  else {
    iVar10 = iVar8;
    uVar2 = puVar4[3];
  }
  if (3 < uVar13) {
    iVar10 = uVar2 + 0x6c;
  }
  puVar16 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar8 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00376d30;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00376d30:
  if (*(int *)(iVar10 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar13);
  *(undefined1 *)((int)puVar16 + uVar13) = 0;
  uVar17 = puVar5[0x11];
  iVar8 = puVar4[6];
  uVar11 = puVar5[0xf];
  uVar15 = puVar5[0x10];
  uVar14 = puVar5[4];
  uVar18 = puVar5[5];
  *(undefined4 *)(iVar8 + 0x18) = puVar5[0xe];
  *(undefined4 *)(iVar8 + 0x1c) = uVar11;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar15;
  *(undefined4 *)(iVar8 + 0x1c) = uVar17;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x18) = uVar14;
  *(undefined4 *)(iVar8 + 0x1c) = uVar18;
  func_00667638(puVar4,0);
  return puVar12;
}

