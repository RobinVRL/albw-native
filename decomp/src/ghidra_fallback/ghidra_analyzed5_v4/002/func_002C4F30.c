#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00111A64(uint *param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0058A7D4(void);
extern int func_00662F24(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_002c5270;
extern int DAT_002c5274;
extern undefined4 DAT_002c5278;
extern undefined4 DAT_002c527c;
extern undefined4 DAT_002c5280;
extern undefined4 DAT_002c5284;
extern int DAT_002c5288;
extern int DAT_002c528c;
extern undefined *DAT_002c5290;
extern int DAT_002c5294;
extern int DAT_002c52a4;
extern char s_cState_Die_002c5500[];
extern char s_cState_Move_002c52a8[];
extern char s_cState_Reaction_002c54f0[];
extern char s_cState_Wait_002c5298[];

// USA 002C4F30 <- EU 002C4F0C (Ghidra, non-matching)
// GLOBAL DAT_002c5270 uint *
// GLOBAL DAT_002c5274 int
// GLOBAL DAT_002c5278 undefined4
// GLOBAL DAT_002c527c undefined4
// GLOBAL DAT_002c5280 undefined4
// GLOBAL DAT_002c5284 undefined4
// GLOBAL DAT_002c5288 int
// GLOBAL DAT_002c528c int
// GLOBAL DAT_002c5290 undefined *
// GLOBAL DAT_002c5294 int
// GLOBAL DAT_002c52a4 int
// GLOBAL s_cState_Die_002c5500 string
// GLOBAL s_cState_Move_002c52a8 string
// GLOBAL s_cState_Reaction_002c54f0 string
// GLOBAL s_cState_Wait_002c5298 string

undefined4 * func_002C4F30(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float *in_r3;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  piVar4 = func_004FD464(param_1,param_2,DAT_002c5270);
  iVar11 = DAT_002c5274;
  *piVar4 = DAT_002c5274;
  piVar4[200] = iVar11 + 0x84;
  puVar5 = func_0010A794(piVar4 + 0x22f);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar15 = puVar5 + -0x22f;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  uVar17 = DAT_002c5278;
  puVar5[0xc] = 0;
  puVar5[0xd] = uVar17;
  puVar5[0xe] = DAT_002c527c;
  uVar17 = DAT_002c5280;
  puVar5[-0xf6] = DAT_002c5280;
  puVar5[-0xf5] = uVar17;
  puVar5[-0xf4] = uVar17;
  uVar17 = DAT_002c5284;
  puVar5[-0x119] = DAT_002c5284;
  puVar5[-0x118] = uVar17;
  puVar5[-0x117] = uVar17;
  puVar5[-0x113] = uVar17;
  puVar5[-0x112] = uVar17;
  puVar5[-0x111] = uVar17;
  puVar6 = (uint *)func_0058A7D4();
  uVar7 = func_00111A64(puVar6);
  iVar11 = ((int)((ulonglong)uVar7 * 2 >> 0x20) * 2 + 1) * 0x40000000;
  puVar5[9] = iVar11;
  puVar5[10] = iVar11;
  puVar5[-0x135] = 0;
  func_004FB344((int)puVar15,3);
  iVar11 = DAT_002c5288;
  uVar7 = 0;
  do {
    func_004FACA4((int)puVar15,uVar7,(int *)(iVar11 + uVar7 * 8));
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 3);
  func_004FB468((int)puVar15);
  func_004F5BD8((int)puVar15,(uint *)0x0,(int **)0x0,in_r3);
  puVar5[5] = puVar15;
  *(undefined1 *)((int)puVar5 + 6) = 4;
  iVar8 = func_0010BA78(0x40);
  iVar11 = DAT_002c528c;
  puVar5[6] = iVar8;
  puVar5[7] = iVar8 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar12 = 4;
  puVar9 = (undefined4 *)(iVar8 + -8);
  do {
    uVar17 = *(undefined4 *)(iVar11 + 0x50);
    iVar12 = iVar12 + -1;
    puVar9[2] = *(undefined4 *)(iVar11 + 0x4c);
    puVar9[3] = uVar17;
    uVar17 = *(undefined4 *)(iVar11 + 0x50);
    puVar9[4] = *(undefined4 *)(iVar11 + 0x4c);
    puVar9[5] = uVar17;
    puVar9 = puVar9 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar7 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar7 << 3);
  puVar5[8] = puVar9;
  if (uVar7 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar17 = *(undefined4 *)(iVar11 + 0x18);
      *puVar9 = *(undefined4 *)(iVar11 + 0x14);
      puVar9[1] = uVar17;
      puVar10 = puVar9;
    }
    for (iVar8 = (int)uVar7 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar17 = *(undefined4 *)(iVar11 + 0x18);
      puVar10[2] = *(undefined4 *)(iVar11 + 0x14);
      puVar10[3] = uVar17;
      uVar17 = *(undefined4 *)(iVar11 + 0x18);
      puVar10[4] = *(undefined4 *)(iVar11 + 0x14);
      puVar10[5] = uVar17;
      puVar10 = puVar10 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  puVar3 = DAT_002c5290;
  iVar11 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar9[1] = 4;
    *puVar9 = 0x24;
    iVar11 = func_00100118((int)(puVar9 + 2),puVar3,0x24,4);
  }
  if (iVar11 != 0) {
    puVar5[3] = iVar11;
    puVar5[2] = 4;
  }
  iVar11 = DAT_002c5294;
  puVar5[-0x15a] = puVar5;
  iVar8 = DAT_002c52a4;
  *(undefined2 *)(iVar11 + (int)puVar15) = 4;
  local_2c = (uint *)s_cState_Wait_002c5298;
  local_30 = iVar8;
  iVar11 = puVar5[3];
  puVar6 = *(uint **)(iVar11 + 4);
  (**(code **)(iVar8 + 8))(&local_30);
  uVar7 = 0;
  do {
    if (*(char *)((int)local_2c + uVar7) == '\0') {
      if ((int)uVar7 < 0x40001) goto LAB_002c51ac;
      break;
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x40001);
  uVar7 = 0;
LAB_002c51ac:
  iVar11 = *(int *)(iVar11 + 8);
  if (iVar11 <= (int)uVar7) {
    uVar7 = iVar11 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar6,local_2c,uVar7);
  *(undefined1 *)((int)puVar6 + uVar7) = 0;
  puVar9 = (undefined4 *)puVar5[6];
  uVar18 = *(undefined4 *)(DAT_002c528c + 8);
  uVar14 = *(undefined4 *)(DAT_002c528c + 0x14);
  uVar13 = *(undefined4 *)(DAT_002c528c + 0xc);
  uVar16 = *(undefined4 *)(DAT_002c528c + 0x10);
  uVar17 = *(undefined4 *)(DAT_002c528c + 0x18);
  *puVar9 = *(undefined4 *)(DAT_002c528c + 4);
  puVar9[1] = uVar18;
  puVar9 = (undefined4 *)puVar5[7];
  *puVar9 = uVar13;
  puVar9[1] = uVar16;
  puVar9 = (undefined4 *)puVar5[8];
  puVar9[1] = uVar17;
  *puVar9 = uVar14;
  local_2c = (uint *)s_cState_Move_002c52a8;
  local_30 = iVar8;
  if ((uint)puVar5[2] < 2) {
    iVar11 = puVar5[3];
  }
  else {
    iVar11 = puVar5[3] + 0x24;
  }
  puVar6 = *(uint **)(iVar11 + 4);
  (**(code **)(iVar8 + 8))(&local_30);
  uVar7 = 0;
  do {
    if (*(char *)((int)local_2c + uVar7) == '\0') {
      if ((int)uVar7 < 0x40001) goto LAB_002c52c0;
      break;
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x40001);
  uVar7 = 0;
LAB_002c52c0:
  if (*(int *)(iVar11 + 8) <= (int)uVar7) {
    uVar7 = *(int *)(iVar11 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar6,local_2c,uVar7);
  iVar11 = DAT_002c528c;
  *(undefined1 *)((int)puVar6 + uVar7) = 0;
  iVar12 = puVar5[6];
  uVar13 = *(undefined4 *)(iVar11 + 0x24);
  uVar14 = *(undefined4 *)(iVar11 + 0x14);
  uVar18 = *(undefined4 *)(iVar11 + 0x28);
  uVar17 = *(undefined4 *)(iVar11 + 0x18);
  uVar16 = *(undefined4 *)(iVar11 + 0x20);
  *(undefined4 *)(iVar12 + 8) = *(undefined4 *)(iVar11 + 0x1c);
  *(undefined4 *)(iVar12 + 0xc) = uVar16;
  iVar11 = puVar5[7];
  *(undefined4 *)(iVar11 + 8) = uVar13;
  *(undefined4 *)(iVar11 + 0xc) = uVar18;
  iVar11 = puVar5[8];
  *(undefined4 *)(iVar11 + 8) = uVar14;
  *(undefined4 *)(iVar11 + 0xc) = uVar17;
  local_2c = (uint *)s_cState_Reaction_002c54f0;
  local_30 = iVar8;
  if ((uint)puVar5[2] < 3) {
    iVar11 = puVar5[3];
  }
  else {
    iVar11 = puVar5[3] + 0x48;
  }
  puVar6 = *(uint **)(iVar11 + 4);
  (**(code **)(iVar8 + 8))(&local_30);
  uVar7 = 0;
  do {
    if (*(char *)((int)local_2c + uVar7) == '\0') {
      if ((int)uVar7 < 0x40001) goto LAB_002c5398;
      break;
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x40001);
  uVar7 = 0;
LAB_002c5398:
  if (*(int *)(iVar11 + 8) <= (int)uVar7) {
    uVar7 = *(int *)(iVar11 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar6,local_2c,uVar7);
  *(undefined1 *)((int)puVar6 + uVar7) = 0;
  iVar11 = DAT_002c528c;
  iVar12 = puVar5[6];
  uVar17 = *(undefined4 *)(DAT_002c528c + 0x34);
  uVar13 = *(undefined4 *)(DAT_002c528c + 0x14);
  uVar14 = *(undefined4 *)(DAT_002c528c + 0x30);
  uVar16 = *(undefined4 *)(DAT_002c528c + 0x38);
  uVar18 = *(undefined4 *)(DAT_002c528c + 0x18);
  *(undefined4 *)(iVar12 + 0x10) = *(undefined4 *)(DAT_002c528c + 0x2c);
  *(undefined4 *)(iVar12 + 0x14) = uVar14;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 0x10) = uVar17;
  *(undefined4 *)(iVar12 + 0x14) = uVar16;
  iVar12 = puVar5[8];
  *(undefined4 *)(iVar12 + 0x10) = uVar13;
  *(undefined4 *)(iVar12 + 0x14) = uVar18;
  local_2c = (uint *)s_cState_Die_002c5500;
  local_30 = iVar8;
  uVar7 = puVar5[2];
  if (uVar7 < 4) {
    iVar12 = puVar5[3];
    uVar2 = uVar7;
  }
  else {
    iVar12 = iVar8;
    uVar2 = puVar5[3];
  }
  if (3 < uVar7) {
    iVar12 = uVar2 + 0x6c;
  }
  puVar6 = *(uint **)(iVar12 + 4);
  (**(code **)(iVar8 + 8))(&local_30);
  uVar7 = 0;
  do {
    if (*(char *)((int)local_2c + uVar7) == '\0') {
      if ((int)uVar7 < 0x40001) goto LAB_002c5470;
      break;
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x40001);
  uVar7 = 0;
LAB_002c5470:
  if (*(int *)(iVar12 + 8) <= (int)uVar7) {
    uVar7 = *(int *)(iVar12 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar6,local_2c,uVar7);
  *(undefined1 *)((int)puVar6 + uVar7) = 0;
  uVar17 = *(undefined4 *)(iVar11 + 0x48);
  iVar8 = puVar5[6];
  uVar16 = *(undefined4 *)(iVar11 + 0x40);
  uVar18 = *(undefined4 *)(iVar11 + 0x44);
  uVar13 = *(undefined4 *)(iVar11 + 0x14);
  uVar14 = *(undefined4 *)(iVar11 + 0x18);
  *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(iVar11 + 0x3c);
  *(undefined4 *)(iVar8 + 0x1c) = uVar16;
  iVar11 = puVar5[7];
  *(undefined4 *)(iVar11 + 0x18) = uVar18;
  *(undefined4 *)(iVar11 + 0x1c) = uVar17;
  iVar11 = puVar5[8];
  *(undefined4 *)(iVar11 + 0x18) = uVar13;
  *(undefined4 *)(iVar11 + 0x1c) = uVar14;
  func_00662F24(puVar5,1);
  return puVar15;
}

