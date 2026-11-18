#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E338(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5, undefined8 param_6);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_00151358(int *param_1);
extern int func_0015137C(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_0039D5C8(int param_1);
extern int func_0039DC1C(int param_1,int param_2,int param_3);
extern int func_0039E1DC(int param_1);
extern int func_00435714(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00668934(undefined4 *param_1,undefined1 param_2);
extern int DAT_0039ecfc;
extern undefined4 *DAT_0039ed00;
extern int DAT_0039ed04;
extern undefined4 DAT_0039ed08;
extern undefined DAT_0039ed0c;
extern int DAT_0039ed24;
extern int DAT_0039ed28;
extern int *DAT_0039ed2c;
extern undefined4 DAT_0039ed30;
extern undefined *DAT_0039ed34;
extern int DAT_0039ed38;
extern int *DAT_0039f0c4;
extern char s__Mediumganon_Trident_0039ed0f[];
extern char s_cState_FadeHide_0039f0b4[];
extern char s_cState_Hide_0039f0a8[];
extern char s_cState_Parent_0039ed3c[];
extern char s_cState_ThrowAttack_0039f094[];
extern undefined4 _DAT_0039ed0c;

// USA 0039E924 <- EU 0039E900 (Ghidra, non-matching)
// GLOBAL DAT_0039ecfc int
// GLOBAL DAT_0039ed00 undefined4 *
// GLOBAL DAT_0039ed04 int
// GLOBAL DAT_0039ed08 undefined4
// GLOBAL DAT_0039ed0c undefined
// GLOBAL DAT_0039ed24 int
// GLOBAL DAT_0039ed28 int
// GLOBAL DAT_0039ed2c int *
// GLOBAL DAT_0039ed30 undefined4
// GLOBAL DAT_0039ed34 undefined *
// GLOBAL DAT_0039ed38 int
// GLOBAL DAT_0039f0c4 int *
// GLOBAL s_cState_FadeHide_0039f0b4 string
// GLOBAL s_cState_Hide_0039f0a8 string
// GLOBAL s_cState_Parent_0039ed3c string
// GLOBAL s_cState_ThrowAttack_0039f094 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * func_0039E924(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(uint * *)(albw_frame + 0x14))
  #define local_28 (*(uint *)(albw_frame + 0x18))
  piVar3 = func_00150E40(param_1,param_2);
  iVar8 = DAT_0039ecfc;
  *piVar3 = DAT_0039ecfc;
  piVar3[200] = iVar8 + 0x54;
  puVar4 = func_0010A794(piVar3 + 0x103);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar7 = DAT_0039ed00;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  uVar10 = puVar7[1];
  uVar16 = puVar7[2];
  puVar4[0xc] = *puVar7;
  puVar4[0xd] = uVar10;
  puVar4[0xe] = uVar16;
  uVar16 = _DAT_0039ed0c;
  iVar8 = DAT_0039ed04;
  uVar10 = puVar7[1];
  uVar11 = puVar7[2];
  puVar12 = puVar4 + -0x103;
  puVar4[0xf] = *puVar7;
  puVar4[0x10] = uVar10;
  puVar4[0x11] = uVar11;
  uVar10 = puVar7[1];
  uVar11 = puVar7[2];
  puVar4[0x12] = *puVar7;
  puVar4[0x13] = uVar10;
  puVar4[0x14] = uVar11;
  uVar10 = puVar7[1];
  uVar11 = puVar7[2];
  puVar4[0x15] = *puVar7;
  puVar4[0x16] = uVar10;
  puVar4[0x17] = uVar11;
  puVar4[0x24] = 0;
  uVar10 = *(undefined4 *)(iVar8 + 8);
  puVar4[0x28] = *(undefined4 *)(iVar8 + 4);
  puVar4[0x29] = uVar10;
  uVar10 = DAT_0039ed08;
  puVar4[0x26] = DAT_0039ed08;
  puVar4[0x27] = puVar12;
  uVar11 = *(undefined4 *)(iVar8 + 0x10);
  puVar4[0x2c] = *(undefined4 *)(iVar8 + 0xc);
  puVar4[0x2d] = uVar11;
  puVar4[0x2a] = uVar10;
  puVar4[0x2b] = puVar12;
  uVar11 = *(undefined4 *)(iVar8 + 0x18);
  puVar4[0x30] = *(undefined4 *)(iVar8 + 0x14);
  puVar4[0x31] = uVar11;
  puVar4[0x2e] = uVar10;
  puVar4[0x2f] = puVar12;
  puVar4[0x32] = 0;
  puVar4[0x33] = 0;
  puVar4[0x34] = 0;
  puVar4[0x35] = uVar16;
  puVar4[0x36] = 0;
  puVar4[0x37] = 0;
  puVar4[0x38] = uVar16;
  puVar4[0x39] = 0;
  puVar4[0x3a] = 0;
  puVar4[0x3b] = uVar16;
  puVar4[0x3c] = 0;
  puVar4[0x3d] = 0;
  puVar4[0x3e] = uVar16;
  *(undefined1 *)(puVar4 + 0x3f) = 1;
  *(undefined1 *)((int)puVar4 + 0xfd) = 0;
  uVar16 = *(undefined4 *)(iVar8 + 0x1c);
  uVar11 = *(undefined4 *)(iVar8 + 0x20);
  puVar4[0x40] = uVar10;
  puVar4[0x41] = puVar12;
  iVar14 = DAT_0039ed24;
  puVar4[0x42] = uVar16;
  puVar4[0x43] = uVar11;
  local_2c = (uint *)(s__Mediumganon_Trident_0039ed0f + 1);
  local_30 = iVar14;
  uVar10 = func_0014E338((int)puVar12,&local_30,1,0,1,0);
  puVar4[0x32] = uVar10;
  puVar4[-0x30] = uVar10;
  func_0039D5C8((int)puVar12);
  local_34 = 9;
  piVar3 = func_00435714(&local_34);
  iVar6 = DAT_0039ed28;
  puVar4[10] = piVar3;
  piVar3[0xb] = iVar6;
  *(undefined2 *)(puVar4[10] + 0x28) = 0xe0;
  puVar5 = (undefined4 *)func_0010BAB4(100);
  uVar10 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    uVar10 = func_004EE484(puVar5);
  }
  puVar4[9] = uVar10;
  puVar5 = (undefined4 *)func_0010BAB4(0x20);
  piVar3 = (int *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    piVar3 = func_0015137C(puVar5,puVar12,0);
  }
  piVar2 = DAT_0039ed2c;
  puVar4[0xb] = piVar3;
  piVar3[4] = *piVar2;
  piVar3[5] = piVar2[1];
  piVar3[6] = piVar2[2];
  func_00151358(piVar3);
  iVar6 = puVar4[0xb];
  *(undefined4 *)(iVar6 + 4) = *puVar7;
  *(undefined4 *)(iVar6 + 8) = puVar7[1];
  *(undefined4 *)(iVar6 + 0xc) = puVar7[2];
  local_28 = puVar4[-0x50];
  func_0014EB8C(puVar4[9],puVar4[10],(undefined2 *)puVar4[-0x1b],&local_28,
                *(undefined2 *)(puVar4 + -0xee),puVar4 + 0x2e,(short)DAT_0039ed30);
  *(undefined1 *)((int)puVar4 + 6) = 4;
  puVar4[5] = puVar12;
  iVar6 = func_0010BA78(0x40);
  puVar4[6] = iVar6;
  puVar4[7] = iVar6 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar9 = 4;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar10 = *(undefined4 *)(iVar8 + 0x88);
    iVar9 = iVar9 + -1;
    puVar7[2] = *(undefined4 *)(iVar8 + 0x84);
    puVar7[3] = uVar10;
    uVar10 = *(undefined4 *)(iVar8 + 0x88);
    puVar7[4] = *(undefined4 *)(iVar8 + 0x84);
    puVar7[5] = uVar10;
    puVar7 = puVar7 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar13 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar4[8] = puVar7;
  if (uVar13 != 0) {
    puVar5 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = *(undefined4 *)(iVar8 + 0x50);
      *puVar7 = *(undefined4 *)(iVar8 + 0x4c);
      puVar7[1] = uVar10;
      puVar5 = puVar7;
    }
    for (iVar6 = (int)uVar13 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar10 = *(undefined4 *)(iVar8 + 0x50);
      puVar5[2] = *(undefined4 *)(iVar8 + 0x4c);
      puVar5[3] = uVar10;
      uVar10 = *(undefined4 *)(iVar8 + 0x50);
      puVar5[4] = *(undefined4 *)(iVar8 + 0x4c);
      puVar5[5] = uVar10;
      puVar5 = puVar5 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 4;
    iVar6 = func_00100118((int)(puVar7 + 2),DAT_0039ed34,0x24,4);
  }
  if (iVar6 != 0) {
    puVar4[2] = 4;
    puVar4[3] = iVar6;
  }
  iVar6 = DAT_0039ed38;
  puVar4[-0x2e] = puVar4;
  *(undefined2 *)(iVar6 + (int)puVar12) = 4;
  local_2c = (uint *)s_cState_Parent_0039ed3c;
  local_30 = iVar14;
  iVar6 = puVar4[3];
  puVar15 = *(uint **)(iVar6 + 4);
  puVar7 = puVar4;
  (**(code **)(iVar14 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_0039ed58;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_0039ed58:
  iVar6 = *(int *)(iVar6 + 8);
  if (iVar6 <= (int)uVar13) {
    uVar13 = iVar6 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar15,local_2c,uVar13);
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  puVar5 = (undefined4 *)puVar4[6];
  uVar10 = *(undefined4 *)(iVar8 + 0x28);
  uVar16 = *(undefined4 *)(iVar8 + 0x2c);
  uVar11 = *(undefined4 *)(iVar8 + 0x34);
  uVar17 = *(undefined4 *)(iVar8 + 0x30);
  uVar18 = *(undefined4 *)(iVar8 + 0x38);
  *puVar5 = *(undefined4 *)(iVar8 + 0x24);
  puVar5[1] = uVar10;
  puVar5 = (undefined4 *)puVar4[7];
  *puVar5 = uVar16;
  puVar5[1] = uVar17;
  puVar5 = (undefined4 *)puVar4[8];
  *puVar5 = uVar11;
  puVar5[1] = uVar18;
  local_2c = (uint *)s_cState_ThrowAttack_0039f094;
  local_30 = iVar14;
  if ((uint)puVar4[2] < 2) {
    iVar6 = puVar4[3];
  }
  else {
    iVar6 = puVar4[3] + 0x24;
  }
  puVar15 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar14 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_0039ee24;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_0039ee24:
  if (*(int *)(iVar6 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar15,local_2c,uVar13);
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  iVar6 = puVar4[6];
  uVar10 = *(undefined4 *)(iVar8 + 0x40);
  uVar16 = *(undefined4 *)(iVar8 + 0x44);
  uVar11 = *(undefined4 *)(iVar8 + 0x48);
  uVar17 = *(undefined4 *)(iVar8 + 0x4c);
  uVar18 = *(undefined4 *)(iVar8 + 0x50);
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar8 + 0x3c);
  *(undefined4 *)(iVar6 + 0xc) = uVar10;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 8) = uVar16;
  *(undefined4 *)(iVar6 + 0xc) = uVar11;
  iVar6 = puVar4[8];
  *(undefined4 *)(iVar6 + 8) = uVar17;
  *(undefined4 *)(iVar6 + 0xc) = uVar18;
  local_2c = (uint *)s_cState_Hide_0039f0a8;
  local_30 = iVar14;
  if ((uint)puVar4[2] < 3) {
    iVar6 = puVar4[3];
  }
  else {
    iVar6 = puVar4[3] + 0x48;
  }
  puVar15 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar14 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_0039eee4;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_0039eee4:
  if (*(int *)(iVar6 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar15,local_2c,uVar13);
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  iVar6 = puVar4[6];
  uVar16 = *(undefined4 *)(iVar8 + 0x58);
  uVar11 = *(undefined4 *)(iVar8 + 0x5c);
  uVar17 = *(undefined4 *)(iVar8 + 0x60);
  uVar18 = *(undefined4 *)(iVar8 + 100);
  uVar10 = *(undefined4 *)(iVar8 + 0x68);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar8 + 0x54);
  *(undefined4 *)(iVar6 + 0x14) = uVar16;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x10) = uVar11;
  *(undefined4 *)(iVar6 + 0x14) = uVar17;
  iVar6 = puVar4[8];
  *(undefined4 *)(iVar6 + 0x10) = uVar18;
  *(undefined4 *)(iVar6 + 0x14) = uVar10;
  local_2c = (uint *)s_cState_FadeHide_0039f0b4;
  local_30 = iVar14;
  if ((uint)puVar4[2] < 4) {
    iVar6 = puVar4[3];
  }
  else {
    iVar6 = puVar4[3] + 0x6c;
  }
  puVar15 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar14 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_0039efac;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_0039efac:
  if (*(int *)(iVar6 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar15,local_2c,uVar13);
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  iVar14 = puVar4[6];
  uVar10 = *(undefined4 *)(iVar8 + 0x70);
  uVar17 = *(undefined4 *)(iVar8 + 0x74);
  uVar18 = *(undefined4 *)(iVar8 + 0x78);
  uVar16 = *(undefined4 *)(iVar8 + 0x7c);
  uVar11 = *(undefined4 *)(iVar8 + 0x80);
  *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(iVar8 + 0x6c);
  *(undefined4 *)(iVar14 + 0x1c) = uVar10;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar17;
  *(undefined4 *)(iVar8 + 0x1c) = uVar18;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x18) = uVar16;
  *(undefined4 *)(iVar8 + 0x1c) = uVar11;
  func_00668934(puVar7,0);
  func_0039DC1C((int)puVar12,0,0);
  iVar8 = func_0052FBA0(*DAT_0039f0c4 + 0x3dbbc,puVar4[-0xef]);
  if (iVar8 != 0) {
    *(undefined4 *)(iVar8 + 0xc90) = puVar4[-0x50];
    uVar10 = *(undefined4 *)(iVar8 + 0xe30);
    uVar16 = *(undefined4 *)(iVar8 + 0xe34);
    puVar4[0x23] = *(undefined4 *)(iVar8 + 0xe38);
    puVar4[0x21] = uVar10;
    puVar4[0x22] = uVar16;
  }
  func_0039D5C8((int)puVar12);
  func_0039E1DC((int)puVar12);
  return puVar12;
}

