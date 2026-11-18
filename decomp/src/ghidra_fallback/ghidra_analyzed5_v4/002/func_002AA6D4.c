#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_006623B0(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_002aaa20;
extern int DAT_002aaa24;
extern undefined4 DAT_002aaa28;
extern undefined4 DAT_002aaa2c;
extern int DAT_002aaa30;
extern undefined4 DAT_002aaa34;
extern int DAT_002aaa38;
extern undefined4 DAT_002aaa3c;
extern undefined *DAT_002aaa40;
extern int DAT_002aaa44;
extern int DAT_002aaa54;
extern float DAT_002aad3c;
extern char s_cState_Die_002aad30[];
extern char s_cState_Move_002aaa58[];
extern char s_cState_Reaction_002aad20[];
extern char s_cState_Wait_002aaa48[];

// USA 002AA6D4 <- EU 002AA6B0 (Ghidra, non-matching)
// GLOBAL DAT_002aaa20 uint *
// GLOBAL DAT_002aaa24 int
// GLOBAL DAT_002aaa28 undefined4
// GLOBAL DAT_002aaa2c undefined4
// GLOBAL DAT_002aaa30 int
// GLOBAL DAT_002aaa34 undefined4
// GLOBAL DAT_002aaa38 int
// GLOBAL DAT_002aaa3c undefined4
// GLOBAL DAT_002aaa40 undefined *
// GLOBAL DAT_002aaa44 int
// GLOBAL DAT_002aaa54 int
// GLOBAL DAT_002aad3c float
// GLOBAL s_cState_Die_002aad30 string
// GLOBAL s_cState_Move_002aaa58 string
// GLOBAL s_cState_Reaction_002aad20 string
// GLOBAL s_cState_Wait_002aaa48 string

undefined4 * func_002AA6D4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float *pfVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uVar17;
  uint *puVar18;
  undefined4 uVar19;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  piVar3 = func_004FD464(param_1,param_2,DAT_002aaa20);
  iVar8 = DAT_002aaa24;
  *piVar3 = DAT_002aaa24;
  piVar3[200] = iVar8 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  uVar10 = DAT_002aaa28;
  puVar4[9] = param_2[0x13];
  uVar11 = DAT_002aaa2c;
  puVar4[0xb] = uVar10;
  puVar4[0xc] = uVar11;
  puVar4[10] = 0;
  puVar14 = puVar4 + -0x22f;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  iVar8 = DAT_002aaa30;
  puVar4[0xf] = 0;
  *(undefined1 *)(puVar4 + 0x10) = 0;
  *(undefined1 *)((int)puVar4 + 0x41) = 1;
  *(undefined1 *)((int)puVar4 + 0x42) = 1;
  *(undefined1 *)((int)puVar4 + 0x43) = 0;
  uVar10 = *(undefined4 *)(iVar8 + 8);
  puVar4[0x13] = *(undefined4 *)(iVar8 + 4);
  puVar4[0x14] = uVar10;
  uVar10 = DAT_002aaa34;
  puVar4[0x11] = DAT_002aaa34;
  puVar4[0x12] = puVar14;
  pfVar12 = *(float **)(iVar8 + 0x10);
  puVar4[0x17] = *(undefined4 *)(iVar8 + 0xc);
  puVar4[0x18] = pfVar12;
  puVar4[0x15] = uVar10;
  puVar4[0x16] = puVar14;
  puVar4[-0x134] = puVar4 + 0x15;
  puVar4[-0x11d] = puVar4 + 0x11;
  func_004FB344((int)puVar14,8);
  iVar5 = DAT_002aaa38;
  uVar15 = 0;
  do {
    func_004FACA4((int)puVar14,uVar15,(int *)(iVar5 + uVar15 * 8));
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 8);
  func_004FB468((int)puVar14);
  puVar4[-0xd2] = DAT_002aaa3c;
  func_004F5BD8((int)puVar14,(uint *)0x0,(int **)0x0,pfVar12);
  *(undefined1 *)((int)puVar4 + 6) = 4;
  puVar4[5] = puVar14;
  iVar5 = func_0010BA78(0x40);
  puVar4[6] = iVar5;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar9 = 4;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar10 = *(undefined4 *)(iVar8 + 0x60);
    iVar9 = iVar9 + -1;
    puVar6[2] = *(undefined4 *)(iVar8 + 0x5c);
    puVar6[3] = uVar10;
    uVar10 = *(undefined4 *)(iVar8 + 0x60);
    puVar6[4] = *(undefined4 *)(iVar8 + 0x5c);
    puVar6[5] = uVar10;
    puVar6 = puVar6 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar15 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar4[8] = puVar6;
  if (uVar15 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = *(undefined4 *)(iVar8 + 0x28);
      *puVar6 = *(undefined4 *)(iVar8 + 0x24);
      puVar6[1] = uVar10;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar15 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar10 = *(undefined4 *)(iVar8 + 0x28);
      puVar7[2] = *(undefined4 *)(iVar8 + 0x24);
      puVar7[3] = uVar10;
      uVar10 = *(undefined4 *)(iVar8 + 0x28);
      puVar7[4] = *(undefined4 *)(iVar8 + 0x24);
      puVar7[5] = uVar10;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar8 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 4;
    iVar8 = func_00100118((int)(puVar6 + 2),DAT_002aaa40,0x24,4);
  }
  if (iVar8 != 0) {
    puVar4[3] = iVar8;
    puVar4[2] = 4;
  }
  iVar8 = DAT_002aaa44;
  puVar4[-0x15a] = puVar4;
  iVar5 = DAT_002aaa54;
  *(undefined2 *)(iVar8 + (int)puVar14) = 4;
  local_2c = (uint *)s_cState_Wait_002aaa48;
  local_30 = iVar5;
  iVar8 = puVar4[3];
  puVar18 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar5 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_002aa95c;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_002aa95c:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar15) {
    uVar15 = iVar8 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar18,local_2c,uVar15);
  *(undefined1 *)((int)puVar18 + uVar15) = 0;
  puVar6 = (undefined4 *)puVar4[6];
  uVar17 = *(undefined4 *)(DAT_002aaa30 + 0x18);
  uVar13 = *(undefined4 *)(DAT_002aaa30 + 0x24);
  uVar11 = *(undefined4 *)(DAT_002aaa30 + 0x1c);
  uVar19 = *(undefined4 *)(DAT_002aaa30 + 0x20);
  uVar10 = *(undefined4 *)(DAT_002aaa30 + 0x28);
  *puVar6 = *(undefined4 *)(DAT_002aaa30 + 0x14);
  puVar6[1] = uVar17;
  puVar6 = (undefined4 *)puVar4[7];
  *puVar6 = uVar11;
  puVar6[1] = uVar19;
  puVar6 = (undefined4 *)puVar4[8];
  puVar6[1] = uVar10;
  *puVar6 = uVar13;
  local_2c = (uint *)s_cState_Move_002aaa58;
  local_30 = iVar5;
  if ((uint)puVar4[2] < 2) {
    iVar8 = puVar4[3];
  }
  else {
    iVar8 = puVar4[3] + 0x24;
  }
  puVar18 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar5 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_002aaa70;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_002aaa70:
  if (*(int *)(iVar8 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar18,local_2c,uVar15);
  iVar8 = DAT_002aaa30;
  *(undefined1 *)((int)puVar18 + uVar15) = 0;
  iVar9 = puVar4[6];
  uVar10 = *(undefined4 *)(iVar8 + 0x24);
  uVar19 = *(undefined4 *)(iVar8 + 0x34);
  uVar17 = *(undefined4 *)(iVar8 + 0x30);
  uVar13 = *(undefined4 *)(iVar8 + 0x38);
  uVar11 = *(undefined4 *)(iVar8 + 0x28);
  *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar8 + 0x2c);
  *(undefined4 *)(iVar9 + 0xc) = uVar17;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 8) = uVar19;
  *(undefined4 *)(iVar8 + 0xc) = uVar13;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 8) = uVar10;
  *(undefined4 *)(iVar8 + 0xc) = uVar11;
  local_2c = (uint *)s_cState_Reaction_002aad20;
  local_30 = iVar5;
  if ((uint)puVar4[2] < 3) {
    iVar8 = puVar4[3];
  }
  else {
    iVar8 = puVar4[3] + 0x48;
  }
  puVar18 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar5 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_002aab48;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_002aab48:
  if (*(int *)(iVar8 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar18,local_2c,uVar15);
  iVar8 = DAT_002aaa30;
  *(undefined1 *)((int)puVar18 + uVar15) = 0;
  iVar9 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar8 + 0x44);
  uVar10 = *(undefined4 *)(iVar8 + 0x40);
  uVar11 = *(undefined4 *)(iVar8 + 0x48);
  uVar17 = *(undefined4 *)(iVar8 + 0x24);
  uVar19 = *(undefined4 *)(iVar8 + 0x28);
  *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar8 + 0x3c);
  *(undefined4 *)(iVar9 + 0x14) = uVar10;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 0x10) = uVar13;
  *(undefined4 *)(iVar9 + 0x14) = uVar11;
  iVar9 = puVar4[8];
  *(undefined4 *)(iVar9 + 0x10) = uVar17;
  *(undefined4 *)(iVar9 + 0x14) = uVar19;
  local_2c = (uint *)s_cState_Die_002aad30;
  local_30 = iVar5;
  uVar15 = puVar4[2];
  if (uVar15 < 4) {
    puVar18 = (uint *)puVar4[3];
    uVar2 = uVar15;
  }
  else {
    uVar2 = puVar4[3];
  }
  if (3 < uVar15) {
    puVar18 = (uint *)(uVar2 + 0x6c);
  }
  puVar16 = (uint *)puVar18[1];
  (**(code **)(iVar5 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_002aac20;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_002aac20:
  if ((int)puVar18[2] <= (int)uVar15) {
    uVar15 = puVar18[2] - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar15);
  *(undefined1 *)((int)puVar16 + uVar15) = 0;
  uVar13 = *(undefined4 *)(iVar8 + 0x58);
  iVar5 = puVar4[6];
  uVar10 = *(undefined4 *)(iVar8 + 0x50);
  uVar17 = *(undefined4 *)(iVar8 + 0x54);
  uVar11 = *(undefined4 *)(iVar8 + 0x24);
  uVar19 = *(undefined4 *)(iVar8 + 0x28);
  *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar8 + 0x4c);
  *(undefined4 *)(iVar5 + 0x1c) = uVar10;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar17;
  *(undefined4 *)(iVar8 + 0x1c) = uVar13;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x18) = uVar11;
  *(undefined4 *)(iVar8 + 0x1c) = uVar19;
  func_006623B0(puVar4,0);
  puVar4[-200] = puVar4[-200] | 0x8000;
  func_002AF5FC((int)puVar14,5,-1);
  *(undefined1 *)((int)puVar4 + -0x13f) = 6;
  *(undefined1 *)((int)puVar4 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar4 + -0x13d) = 0;
  func_004FC218((int)puVar14,'\x04',0,0x7fff);
  func_004FBA18((int)puVar14,7,0xff,0,-1,0,0x7fff,DAT_002aad3c,DAT_002aad3c);
  func_004F87F8((int)puVar14,1);
  return puVar14;
}

