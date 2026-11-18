#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001B6E04(undefined4 *param_1);
extern int func_0034C698(undefined4 *param_1,uint param_2);
extern undefined4 DAT_0036b494;
extern undefined4 DAT_0036b498;
extern undefined4 *DAT_0036b49c;
extern undefined *DAT_0036b4a0;
extern int DAT_0036b4b4;
extern char s_cState_ChangeStandby_0036b62c[];
extern char s_cState_Counting_0036b4a4[];
extern char s_cState_Hold_0036b4c8[];
extern char s_cState_LastOne_0036b4b8[];

// USA 0036B150 <- EU 0036B12C (Ghidra, non-matching)
// GLOBAL DAT_0036b494 undefined4
// GLOBAL DAT_0036b498 undefined4
// GLOBAL DAT_0036b49c undefined4 *
// GLOBAL DAT_0036b4a0 undefined *
// GLOBAL DAT_0036b4b4 int
// GLOBAL s_cState_ChangeStandby_0036b62c string
// GLOBAL s_cState_Counting_0036b4a4 string
// GLOBAL s_cState_Hold_0036b4c8 string
// GLOBAL s_cState_LastOne_0036b4b8 string

int func_0036B150(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  puVar3 = func_001B6E04(param_1);
  *puVar3 = DAT_0036b494;
  puVar3[0xe] = 0;
  puVar4 = func_0010A794(puVar3 + 0xf);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x5c);
  puVar3 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar3 = func_0034C698(puVar5,4);
  }
  puVar4[0xb] = 0xffffffff;
  puVar4[9] = puVar3;
  puVar4[10] = param_2;
  uVar12 = DAT_0036b498;
  puVar4[0xc] = 0xffffffff;
  puVar4[0xd] = 0;
  puVar4[0xe] = uVar12;
  *(undefined1 *)(puVar4 + 0xf) = 0;
  *(undefined1 *)(puVar4 + 0x15) = 0;
  *(undefined1 *)((int)puVar4 + 6) = 4;
  puVar4[5] = puVar4 + -0xf;
  iVar6 = func_0010BA78(0x40);
  puVar4[6] = iVar6;
  puVar3 = DAT_0036b49c;
  puVar4[7] = iVar6 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar8 = 4;
  puVar5 = (undefined4 *)(iVar6 + -8);
  do {
    uVar12 = puVar3[0xb];
    iVar8 = iVar8 + -1;
    puVar5[2] = puVar3[10];
    puVar5[3] = uVar12;
    uVar12 = puVar3[0xb];
    puVar5[4] = puVar3[10];
    puVar5[5] = uVar12;
    puVar5 = puVar5 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar10 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar10 << 3);
  puVar4[8] = puVar5;
  if (uVar10 != 0) {
    puVar7 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = puVar3[5];
      *puVar5 = puVar3[4];
      puVar5[1] = uVar12;
      puVar7 = puVar5;
    }
    for (iVar6 = (int)uVar10 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar12 = puVar3[5];
      puVar7[2] = puVar3[4];
      puVar7[3] = uVar12;
      uVar12 = puVar3[5];
      puVar7[4] = puVar3[4];
      puVar7[5] = uVar12;
      puVar7 = puVar7 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar6 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 4;
    iVar6 = func_00100118((int)(puVar5 + 2),DAT_0036b4a0,0x24,4);
  }
  if (iVar6 != 0) {
    puVar4[3] = iVar6;
    puVar4[2] = 4;
  }
  iVar6 = DAT_0036b4b4;
  local_2c = (uint *)s_cState_Counting_0036b4a4;
  local_30 = DAT_0036b4b4;
  iVar8 = puVar4[3];
  puVar11 = *(uint **)(iVar8 + 4);
  (**(code **)(DAT_0036b4b4 + 8))(&local_30);
  uVar10 = 0;
  do {
    if (*(char *)((int)local_2c + uVar10) == '\0') {
      if ((int)uVar10 < 0x40001) goto LAB_0036b314;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x40001);
  uVar10 = 0;
LAB_0036b314:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar10) {
    uVar10 = iVar8 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar11,local_2c,uVar10);
  *(undefined1 *)((int)puVar11 + uVar10) = 0;
  puVar5 = (undefined4 *)puVar4[6];
  uVar9 = puVar3[1];
  uVar12 = puVar3[5];
  uVar13 = puVar3[2];
  uVar14 = puVar3[4];
  uVar15 = puVar3[3];
  *puVar5 = *puVar3;
  puVar5[1] = uVar9;
  puVar5 = (undefined4 *)puVar4[7];
  *puVar5 = uVar13;
  puVar5[1] = uVar15;
  puVar5 = (undefined4 *)puVar4[8];
  *puVar5 = uVar14;
  puVar5[1] = uVar12;
  local_2c = (uint *)s_cState_LastOne_0036b4b8;
  local_30 = iVar6;
  if ((uint)puVar4[2] < 2) {
    iVar8 = puVar4[3];
  }
  else {
    iVar8 = puVar4[3] + 0x24;
  }
  puVar11 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar6 + 8))(&local_30);
  uVar10 = 0;
  do {
    if (*(char *)((int)local_2c + uVar10) == '\0') {
      if ((int)uVar10 < 0x40001) goto LAB_0036b3e0;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x40001);
  uVar10 = 0;
LAB_0036b3e0:
  if (*(int *)(iVar8 + 8) <= (int)uVar10) {
    uVar10 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar11,local_2c,uVar10);
  *(undefined1 *)((int)puVar11 + uVar10) = 0;
  iVar8 = puVar4[6];
  uVar12 = puVar3[4];
  uVar9 = puVar3[5];
  uVar13 = puVar3[7];
  uVar14 = puVar3[8];
  uVar15 = puVar3[9];
  *(undefined4 *)(iVar8 + 8) = puVar3[6];
  *(undefined4 *)(iVar8 + 0xc) = uVar13;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 8) = uVar14;
  *(undefined4 *)(iVar8 + 0xc) = uVar15;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 8) = uVar12;
  *(undefined4 *)(iVar8 + 0xc) = uVar9;
  local_2c = (uint *)s_cState_Hold_0036b4c8;
  local_30 = iVar6;
  if ((uint)puVar4[2] < 3) {
    iVar8 = puVar4[3];
  }
  else {
    iVar8 = puVar4[3] + 0x48;
  }
  puVar11 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar6 + 8))(&local_30);
  uVar10 = 0;
  do {
    if (*(char *)((int)local_2c + uVar10) == '\0') {
      if ((int)uVar10 < 0x40001) goto LAB_0036b4e0;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x40001);
  uVar10 = 0;
LAB_0036b4e0:
  if (*(int *)(iVar8 + 8) <= (int)uVar10) {
    uVar10 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar11,local_2c,uVar10);
  *(undefined1 *)((int)puVar11 + uVar10) = 0;
  iVar8 = puVar4[6];
  uVar15 = puVar3[0xb];
  uVar12 = puVar3[0xc];
  uVar14 = puVar3[0xd];
  uVar9 = puVar3[5];
  uVar13 = puVar3[4];
  *(undefined4 *)(iVar8 + 0x10) = puVar3[10];
  *(undefined4 *)(iVar8 + 0x14) = uVar15;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar12;
  *(undefined4 *)(iVar8 + 0x14) = uVar14;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x10) = uVar13;
  *(undefined4 *)(iVar8 + 0x14) = uVar9;
  local_2c = (uint *)s_cState_ChangeStandby_0036b62c;
  local_30 = iVar6;
  uVar10 = puVar4[2];
  if (uVar10 < 4) {
    iVar8 = puVar4[3];
    uVar2 = uVar10;
  }
  else {
    iVar8 = iVar6;
    uVar2 = puVar4[3];
  }
  if (3 < uVar10) {
    iVar8 = uVar2 + 0x6c;
  }
  puVar11 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar6 + 8))(&local_30);
  uVar10 = 0;
  do {
    if (*(char *)((int)local_2c + uVar10) == '\0') {
      if ((int)uVar10 < 0x40001) goto LAB_0036b5b4;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x40001);
  uVar10 = 0;
LAB_0036b5b4:
  if (*(int *)(iVar8 + 8) <= (int)uVar10) {
    uVar10 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar11,local_2c,uVar10);
  *(undefined1 *)((int)puVar11 + uVar10) = 0;
  iVar6 = puVar4[6];
  uVar12 = puVar3[0xf];
  uVar13 = puVar3[0x10];
  uVar9 = puVar3[0x11];
  uVar14 = puVar3[5];
  uVar15 = puVar3[4];
  *(undefined4 *)(iVar6 + 0x18) = puVar3[0xe];
  *(undefined4 *)(iVar6 + 0x1c) = uVar12;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x18) = uVar13;
  *(undefined4 *)(iVar6 + 0x1c) = uVar9;
  iVar6 = puVar4[8];
  *(undefined4 *)(iVar6 + 0x18) = uVar15;
  *(undefined4 *)(iVar6 + 0x1c) = uVar14;
  return (int)(puVar4 + -0xf);
}

