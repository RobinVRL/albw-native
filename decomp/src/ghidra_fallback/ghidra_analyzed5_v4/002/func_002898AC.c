#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014DF18(int param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5, undefined1 param_6);
extern int func_0014E4B0(int param_1,uint param_2);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_003AE524(int *param_1,int param_2);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_006615C4(undefined4 *param_1,undefined1 param_2);
extern int DAT_00289c80;
extern undefined4 *DAT_00289c84;
extern undefined4 DAT_00289c88;
extern undefined4 DAT_00289c8c;
extern undefined4 *DAT_00289c90;
extern undefined4 DAT_00289c94;
extern undefined *DAT_00289c98;
extern int DAT_00289c9c;
extern int DAT_00289cac;
extern undefined4 *DAT_00289cb0;
extern int *DAT_00289f18;
extern uint *DAT_00289f1c;
extern undefined4 *DAT_00289f20;
extern undefined4 DAT_00289f24;
extern uint *DAT_00289f28;
extern undefined4 *DAT_00289f2c;
extern undefined4 DAT_00289f30;
extern char s_cState_Break_00289cb4[];
extern char s_cState_Idle_00289f0c[];
extern char s_cState_Move_00289ca0[];

// USA 002898AC <- EU 002898D4 (Ghidra, non-matching)
// GLOBAL DAT_00289c80 int
// GLOBAL DAT_00289c84 undefined4 *
// GLOBAL DAT_00289c88 undefined4
// GLOBAL DAT_00289c8c undefined4
// GLOBAL DAT_00289c90 undefined4 *
// GLOBAL DAT_00289c94 undefined4
// GLOBAL DAT_00289c98 undefined *
// GLOBAL DAT_00289c9c int
// GLOBAL DAT_00289cac int
// GLOBAL DAT_00289cb0 undefined4 *
// GLOBAL DAT_00289f18 int *
// GLOBAL DAT_00289f1c uint *
// GLOBAL DAT_00289f20 undefined4 *
// GLOBAL DAT_00289f24 undefined4
// GLOBAL DAT_00289f28 uint *
// GLOBAL DAT_00289f2c undefined4 *
// GLOBAL DAT_00289f30 undefined4
// GLOBAL s_cState_Break_00289cb4 string
// GLOBAL s_cState_Idle_00289f0c string
// GLOBAL s_cState_Move_00289ca0 string

undefined4 * func_002898AC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 (*(uint *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(uint * *)(albw_frame + 0x14))
  piVar2 = func_00150E40(param_1,param_2);
  iVar11 = DAT_00289c80;
  *piVar2 = DAT_00289c80;
  piVar2[200] = iVar11 + 0x54;
  puVar3 = func_0010A794(piVar2 + 0x103);
  puVar7 = DAT_00289c84;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  uVar4 = *puVar7;
  uVar10 = puVar7[1];
  puVar3[0xc] = puVar3 + -0x103;
  puVar3[0xd] = uVar4;
  puVar3[0xe] = uVar10;
  uVar10 = DAT_00289c8c;
  uVar4 = DAT_00289c88;
  puVar13 = puVar3 + -0x103;
  puVar3[0xb] = DAT_00289c88;
  uVar8 = puVar7[3];
  puVar3[0x11] = puVar7[2];
  puVar3[0x12] = uVar8;
  puVar3[0xf] = uVar4;
  puVar3[0x10] = puVar13;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x16] = 1;
  puVar3[0x15] = 0;
  puVar3[0x17] = uVar10;
  puVar5 = DAT_00289c90;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  puVar3[0x1a] = uVar10;
  uVar4 = puVar5[1];
  uVar10 = puVar5[2];
  puVar3[0x1b] = *puVar5;
  puVar3[0x1c] = uVar4;
  puVar3[0x1d] = uVar10;
  *(undefined1 *)(puVar3 + 0x1e) = 0;
  piVar2 = func_0014DF18(*param_2,0,0,0,0,0);
  puVar3[0x13] = piVar2;
  puVar3[-0x30] = piVar2;
  func_0014E4B0((int)puVar13,param_2[8]);
  piVar2 = (int *)func_0054D964((int)puVar13,0);
  iVar11 = puVar3[-0xe];
  iVar12 = puVar3[-0xd];
  piVar2[1] = puVar3[-0xf];
  piVar2[2] = iVar11;
  piVar2[3] = iVar12;
  func_004356B4(piVar2);
  puVar3[10] = piVar2;
  uVar9 = piVar2[0xb];
  piVar2[0xb] = uVar9 & 0xfffffff7;
  *(uint *)(puVar3[10] + 0x2c) = uVar9 & 0xfffffff7 | 0x40000;
  puVar5 = (undefined4 *)func_0010BAB4(100);
  iVar11 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    iVar11 = func_004EE484(puVar5);
  }
  puVar3[9] = iVar11;
  local_34 = puVar3[-0x50];
  func_0014EB8C(iVar11,puVar3[10],(undefined2 *)puVar3[-0x1b],&local_34,
                *(undefined2 *)(puVar3 + -0xee),puVar3 + 0xf,(short)DAT_00289c94);
  *(undefined1 *)((int)puVar3 + 6) = 3;
  puVar3[5] = puVar13;
  puVar17 = puVar3;
  iVar11 = func_0010BA78(0x30);
  puVar3[6] = iVar11;
  puVar3[7] = iVar11 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar12 = 3;
  puVar5 = (undefined4 *)(iVar11 + -8);
  do {
    uVar4 = puVar7[0x15];
    iVar12 = iVar12 + -1;
    puVar5[2] = puVar7[0x14];
    puVar5[3] = uVar4;
    uVar4 = puVar7[0x15];
    puVar5[4] = puVar7[0x14];
    puVar5[5] = uVar4;
    puVar5 = puVar5 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar9 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar9 << 3);
  puVar3[8] = puVar5;
  if (uVar9 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar4 = puVar7[9];
      *puVar5 = puVar7[8];
      puVar5[1] = uVar4;
      puVar6 = puVar5;
    }
    for (iVar11 = (int)uVar9 >> 1; iVar11 != 0; iVar11 = iVar11 + -1) {
      uVar4 = puVar7[9];
      puVar6[2] = puVar7[8];
      puVar6[3] = uVar4;
      uVar4 = puVar7[9];
      puVar6[4] = puVar7[8];
      puVar6[5] = uVar4;
      puVar6 = puVar6 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar11 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 3;
    iVar11 = func_00100118((int)(puVar7 + 2),DAT_00289c98,0x24,3);
  }
  if (iVar11 != 0) {
    puVar3[2] = 3;
    puVar3[3] = iVar11;
  }
  iVar12 = DAT_00289cac;
  iVar11 = DAT_00289c9c;
  puVar3[-0x2e] = puVar17;
  *(undefined2 *)(iVar11 + (int)puVar13) = 3;
  local_2c = (uint *)s_cState_Move_00289ca0;
  local_30 = iVar12;
  iVar11 = puVar3[3];
  puVar14 = *(uint **)(iVar11 + 4);
  (**(code **)(iVar12 + 8))(&local_30);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_2c + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_00289bd4;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_00289bd4:
  iVar11 = *(int *)(iVar11 + 8);
  if (iVar11 <= (int)uVar9) {
    uVar9 = iVar11 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar14,local_2c,uVar9);
  *(undefined1 *)((int)puVar14 + uVar9) = 0;
  puVar7 = (undefined4 *)puVar3[6];
  uVar4 = DAT_00289cb0[1];
  uVar10 = DAT_00289cb0[2];
  uVar8 = DAT_00289cb0[3];
  uVar15 = DAT_00289cb0[4];
  uVar16 = DAT_00289cb0[5];
  *puVar7 = *DAT_00289cb0;
  puVar7[1] = uVar4;
  puVar7 = (undefined4 *)puVar3[7];
  *puVar7 = uVar10;
  puVar7[1] = uVar8;
  puVar7 = (undefined4 *)puVar3[8];
  *puVar7 = uVar15;
  puVar7[1] = uVar16;
  local_2c = (uint *)s_cState_Break_00289cb4;
  local_30 = iVar12;
  if ((uint)puVar3[2] < 2) {
    iVar11 = puVar3[3];
  }
  else {
    iVar11 = puVar3[3] + 0x24;
  }
  puVar14 = *(uint **)(iVar11 + 4);
  (**(code **)(iVar12 + 8))(&local_30);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_2c + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_00289cd0;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_00289cd0:
  if (*(int *)(iVar11 + 8) <= (int)uVar9) {
    uVar9 = *(int *)(iVar11 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar14,local_2c,uVar9);
  puVar7 = DAT_00289c84;
  *(undefined1 *)((int)puVar14 + uVar9) = 0;
  iVar11 = puVar3[6];
  uVar15 = puVar7[8];
  uVar10 = puVar7[0xb];
  uVar8 = puVar7[0xc];
  uVar16 = puVar7[0xd];
  uVar4 = puVar7[9];
  *(undefined4 *)(iVar11 + 8) = puVar7[10];
  *(undefined4 *)(iVar11 + 0xc) = uVar10;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 8) = uVar8;
  *(undefined4 *)(iVar11 + 0xc) = uVar16;
  iVar11 = puVar3[8];
  *(undefined4 *)(iVar11 + 8) = uVar15;
  *(undefined4 *)(iVar11 + 0xc) = uVar4;
  local_2c = (uint *)s_cState_Idle_00289f0c;
  local_30 = iVar12;
  if ((uint)puVar3[2] < 3) {
    iVar11 = puVar3[3];
  }
  else {
    iVar11 = puVar3[3] + 0x48;
  }
  puVar14 = *(uint **)(iVar11 + 4);
  (**(code **)(iVar12 + 8))(&local_30);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_2c + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_00289da0;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_00289da0:
  if (*(int *)(iVar11 + 8) <= (int)uVar9) {
    uVar9 = *(int *)(iVar11 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar14,local_2c,uVar9);
  puVar7 = DAT_00289c84;
  *(undefined1 *)((int)puVar14 + uVar9) = 0;
  iVar11 = puVar3[6];
  uVar15 = puVar7[0xf];
  uVar10 = puVar7[0x10];
  uVar8 = puVar7[0x11];
  uVar16 = puVar7[0x12];
  uVar4 = puVar7[0x13];
  *(undefined4 *)(iVar11 + 0x10) = puVar7[0xe];
  *(undefined4 *)(iVar11 + 0x14) = uVar15;
  iVar11 = puVar3[7];
  *(undefined4 *)(iVar11 + 0x10) = uVar10;
  *(undefined4 *)(iVar11 + 0x14) = uVar8;
  iVar11 = puVar3[8];
  *(undefined4 *)(iVar11 + 0x10) = uVar16;
  *(undefined4 *)(iVar11 + 0x14) = uVar4;
  func_006615C4(puVar17,2);
  puVar7 = (undefined4 *)func_0052FBA0(*DAT_00289f18 + 0x3dbbc,param_2[0x13]);
  if (puVar7 != (undefined4 *)0x0) {
    if (((*DAT_00289f1c & 1) == 0) && (iVar11 = func_00100174((int *)DAT_00289f1c), iVar11 != 0)) {
      *DAT_00289f20 = DAT_00289f24;
    }
    iVar11 = (**(code **)*puVar7)(puVar7,DAT_00289f20);
    if (iVar11 == 0) {
      puVar7 = (undefined4 *)0x0;
    }
    if (((*DAT_00289f28 & 1) == 0) && (iVar11 = func_00100174((int *)DAT_00289f28), iVar11 != 0)) {
      *DAT_00289f2c = DAT_00289f30;
    }
    if ((puVar7 == (undefined4 *)0x0) ||
       (iVar11 = (**(code **)*puVar7)(puVar7,DAT_00289f2c), iVar11 == 0)) {
      puVar7 = (undefined4 *)0x0;
    }
    func_003AE524(puVar7 + 0x22f,(int)puVar13);
  }
  return puVar13;
}

