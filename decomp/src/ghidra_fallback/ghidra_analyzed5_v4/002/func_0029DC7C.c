#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0025D9E8(int param_1,int *param_2,int param_3);
extern int func_002DF3E4(int param_1);
extern int func_00661D5C(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0029dfac;
extern int *DAT_0029dfb0;
extern undefined4 *DAT_0029dfb4;
extern undefined *DAT_0029dfb8;
extern int DAT_0029dfcc;
extern char s_cState_DispInfo_0029dfe4[];
extern char s_cState_DispRecord_0029dfd0[];
extern char s_cState_End_0029e158[];
extern char s_cState_Sleep_0029dfbc[];

// USA 0029DC7C <- EU 0029DC58 (Ghidra, non-matching)
// GLOBAL DAT_0029dfac undefined4
// GLOBAL DAT_0029dfb0 int *
// GLOBAL DAT_0029dfb4 undefined4 *
// GLOBAL DAT_0029dfb8 undefined *
// GLOBAL DAT_0029dfcc int
// GLOBAL s_cState_DispInfo_0029dfe4 string
// GLOBAL s_cState_DispRecord_0029dfd0 string
// GLOBAL s_cState_End_0029e158 string
// GLOBAL s_cState_Sleep_0029dfbc string

undefined4 * func_0029DC7C(int param_1,int *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  puVar2 = (undefined4 *)func_0025D9E8(param_1,param_2,(int)"TaskPlayRecord" /* EU 0029DF9C */);
  *puVar2 = DAT_0029dfac;
  puVar3 = func_0010A794(puVar2 + 0x2f);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  func_002DF3E4(*DAT_0029dfb0);
  *(undefined1 *)((int)puVar3 + 6) = 4;
  puVar3[5] = puVar3 + -0x2f;
  iVar4 = func_0010BA78(0x40);
  puVar3[6] = iVar4;
  puVar2 = DAT_0029dfb4;
  puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar5 = 4;
  puVar6 = (undefined4 *)(iVar4 + -8);
  do {
    uVar13 = puVar2[0x13];
    iVar5 = iVar5 + -1;
    puVar6[2] = puVar2[0x12];
    puVar6[3] = uVar13;
    uVar13 = puVar2[0x13];
    puVar6[4] = puVar2[0x12];
    puVar6[5] = uVar13;
    puVar6 = puVar6 + 4;
  } while (iVar5 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar9 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar9 << 3);
  puVar3[8] = puVar6;
  if (uVar9 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar2[5];
      *puVar6 = puVar2[4];
      puVar6[1] = uVar13;
      puVar7 = puVar6;
    }
    for (iVar4 = (int)uVar9 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar13 = puVar2[5];
      puVar7[2] = puVar2[4];
      puVar7[3] = uVar13;
      uVar13 = puVar2[5];
      puVar7[4] = puVar2[4];
      puVar7[5] = uVar13;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar4 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 4;
    iVar4 = func_00100118((int)(puVar6 + 2),DAT_0029dfb8,0x24,4);
  }
  if (iVar4 != 0) {
    puVar3[3] = iVar4;
    puVar3[2] = 4;
  }
  iVar4 = DAT_0029dfcc;
  local_2c = (uint *)s_cState_Sleep_0029dfbc;
  local_30 = DAT_0029dfcc;
  iVar5 = puVar3[3];
  puVar12 = *(uint **)(iVar5 + 4);
  (**(code **)(DAT_0029dfcc + 8))(&local_30);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_2c + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_0029de08;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_0029de08:
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 <= (int)uVar9) {
    uVar9 = iVar5 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar12,local_2c,uVar9);
  *(undefined1 *)((int)puVar12 + uVar9) = 0;
  puVar6 = (undefined4 *)puVar3[6];
  uVar8 = puVar2[2];
  uVar10 = *puVar2;
  uVar13 = puVar2[3];
  uVar14 = puVar2[4];
  uVar11 = puVar2[5];
  puVar6[1] = puVar2[1];
  *puVar6 = uVar10;
  puVar6 = (undefined4 *)puVar3[7];
  puVar6[1] = uVar13;
  *puVar6 = uVar8;
  puVar6 = (undefined4 *)puVar3[8];
  puVar6[1] = uVar11;
  *puVar6 = uVar14;
  local_2c = (uint *)s_cState_DispRecord_0029dfd0;
  local_30 = iVar4;
  if ((uint)puVar3[2] < 2) {
    iVar5 = puVar3[3];
  }
  else {
    iVar5 = puVar3[3] + 0x24;
  }
  puVar12 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar4 + 8))(&local_30);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_2c + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_0029ded8;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_0029ded8:
  if (*(int *)(iVar5 + 8) <= (int)uVar9) {
    uVar9 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar12,local_2c,uVar9);
  *(undefined1 *)((int)puVar12 + uVar9) = 0;
  iVar5 = puVar3[6];
  uVar8 = puVar2[8];
  uVar10 = puVar2[4];
  uVar14 = puVar2[5];
  uVar11 = puVar2[7];
  uVar13 = puVar2[9];
  *(undefined4 *)(iVar5 + 8) = puVar2[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar11;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 8) = uVar8;
  *(undefined4 *)(iVar5 + 0xc) = uVar13;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 8) = uVar10;
  *(undefined4 *)(iVar5 + 0xc) = uVar14;
  local_2c = (uint *)s_cState_DispInfo_0029dfe4;
  local_30 = iVar4;
  if ((uint)puVar3[2] < 3) {
    iVar5 = puVar3[3];
  }
  else {
    iVar5 = puVar3[3] + 0x48;
  }
  puVar12 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar4 + 8))(&local_30);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_2c + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_0029e000;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_0029e000:
  if (*(int *)(iVar5 + 8) <= (int)uVar9) {
    uVar9 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar12,local_2c,uVar9);
  *(undefined1 *)((int)puVar12 + uVar9) = 0;
  iVar5 = puVar3[6];
  uVar14 = puVar2[0xb];
  uVar10 = puVar2[0xc];
  uVar11 = puVar2[0xd];
  uVar13 = puVar2[5];
  uVar8 = puVar2[4];
  *(undefined4 *)(iVar5 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar14;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar10;
  *(undefined4 *)(iVar5 + 0x14) = uVar11;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 0x10) = uVar8;
  *(undefined4 *)(iVar5 + 0x14) = uVar13;
  local_2c = (uint *)s_cState_End_0029e158;
  local_30 = iVar4;
  if ((uint)puVar3[2] < 4) {
    iVar5 = puVar3[3];
  }
  else {
    iVar5 = puVar3[3] + 0x6c;
  }
  puVar12 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar4 + 8))(&local_30);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_2c + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_0029e0d4;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_0029e0d4:
  if (*(int *)(iVar5 + 8) <= (int)uVar9) {
    uVar9 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar12,local_2c,uVar9);
  *(undefined1 *)((int)puVar12 + uVar9) = 0;
  iVar4 = puVar3[6];
  uVar13 = puVar2[0xf];
  uVar14 = puVar2[0x10];
  uVar8 = puVar2[0x11];
  uVar10 = puVar2[5];
  uVar11 = puVar2[4];
  *(undefined4 *)(iVar4 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar4 + 0x1c) = uVar13;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x18) = uVar14;
  *(undefined4 *)(iVar4 + 0x1c) = uVar8;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 0x18) = uVar11;
  *(undefined4 *)(iVar4 + 0x1c) = uVar10;
  func_00661D5C(puVar3,0);
  return puVar3 + -0x2f;
}

