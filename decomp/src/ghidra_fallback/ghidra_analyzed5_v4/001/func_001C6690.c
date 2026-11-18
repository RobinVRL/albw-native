#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001C6354(int param_1);
extern int func_002758CC(undefined4 *param_1,int *param_2);
extern int func_004356B4(int *param_1);
extern int func_00491938(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0065BE00(undefined4 *param_1,undefined1 param_2);
extern int DAT_001c6af0;
extern undefined4 *DAT_001c6af4;
extern undefined4 DAT_001c6af8;
extern undefined4 DAT_001c6afc;
extern undefined4 *DAT_001c6b00;
extern undefined4 DAT_001c6b04;
extern undefined4 DAT_001c6b08;
extern undefined *DAT_001c6b0c;
extern int DAT_001c6b10;
extern int DAT_001c6b20;
extern undefined4 *DAT_001c6c90;
extern char s_cState_Move_001c6b14[];
extern char s_cState_Recover_001c6c94[];
extern char s_cState_Stop_001c6b24[];

// USA 001C6690 <- EU 001C6690 (Ghidra, non-matching)
// GLOBAL DAT_001c6af0 int
// GLOBAL DAT_001c6af4 undefined4 *
// GLOBAL DAT_001c6af8 undefined4
// GLOBAL DAT_001c6afc undefined4
// GLOBAL DAT_001c6b00 undefined4 *
// GLOBAL DAT_001c6b04 undefined4
// GLOBAL DAT_001c6b08 undefined4
// GLOBAL DAT_001c6b0c undefined *
// GLOBAL DAT_001c6b10 int
// GLOBAL DAT_001c6b20 int
// GLOBAL DAT_001c6c90 undefined4 *
// GLOBAL s_cState_Move_001c6b14 string
// GLOBAL s_cState_Recover_001c6c94 string
// GLOBAL s_cState_Stop_001c6b24 string

int func_001C6690(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint *puVar16;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 (*(uint *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(uint * *)(albw_frame + 0x14))
  piVar2 = func_00150E40(param_1,param_2);
  iVar11 = DAT_001c6af0 + 0x54;
  *piVar2 = DAT_001c6af0;
  piVar2[200] = iVar11;
  iVar11 = func_0014E428((int)piVar2,1,0,0,1,0,0);
  piVar2[0x103] = iVar11;
  iVar11 = func_0054D89C((int)piVar2,0);
  piVar2[0x104] = iVar11;
  puVar3 = func_0010A794(piVar2 + 0x105);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x88);
  piVar2 = (int *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    piVar2 = func_002758CC(puVar4,(int *)param_2);
  }
  puVar3[9] = piVar2;
  iVar11 = func_004EE484(puVar3 + 10);
  iVar13 = iVar11 + -0x43c;
  iVar5 = func_0054D964(iVar13,0);
  puVar3 = DAT_001c6af4;
  *(int *)(iVar11 + 100) = iVar5;
  puVar4 = DAT_001c6b00;
  uVar9 = DAT_001c6af8;
  uVar6 = *puVar3;
  uVar12 = puVar3[1];
  *(undefined4 *)(iVar11 + 0x70) = puVar3[2];
  *(undefined4 *)(iVar11 + 0x68) = uVar6;
  *(undefined4 *)(iVar11 + 0x6c) = uVar12;
  *(undefined4 *)(iVar11 + 0x74) = 0;
  *(undefined4 *)(iVar11 + 0x78) = 0;
  *(undefined4 *)(iVar11 + 0x7c) = uVar9;
  uVar9 = DAT_001c6afc;
  *(undefined4 *)(iVar11 + 0x80) = 0;
  *(undefined4 *)(iVar11 + 0x84) = uVar9;
  *(undefined2 *)(iVar11 + 0x88) = 0;
  uVar9 = puVar4[1];
  *(undefined4 *)(iVar11 + 0x94) = *puVar4;
  *(undefined4 *)(iVar11 + 0x98) = uVar9;
  *(undefined4 *)(iVar11 + 0x8c) = DAT_001c6b04;
  *(int *)(iVar11 + 0x90) = iVar13;
  iVar5 = *(int *)(iVar11 + -0x30);
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  func_00491938((float *)(iVar5 + 0x80),0,*(uint *)(iVar11 + -0x54),0);
  iVar5 = *(int *)(iVar11 + -0x30);
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar5 + 0x8c) = *(undefined4 *)(iVar11 + -0x6c);
  *(undefined4 *)(iVar5 + 0x9c) = *(undefined4 *)(iVar11 + -0x68);
  *(undefined4 *)(iVar5 + 0xac) = *(undefined4 *)(iVar11 + -100);
  iVar5 = *(int *)(iVar11 + 100);
  *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar11 + -0x6c);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar11 + -0x68);
  *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar11 + -100);
  func_004356B4(*(int **)(iVar11 + 100));
  *(undefined2 *)(*(int *)(iVar11 + 100) + 0x28) = 0xe4;
  *(uint *)(*(int *)(iVar11 + 100) + 0x2c) = *(uint *)(*(int *)(iVar11 + 100) + 0x2c) | 0x2000;
  local_34 = *(uint *)(iVar11 + -0x170);
  func_0014EB8C(iVar11,*(undefined4 *)(iVar11 + 100),*(undefined2 **)(iVar11 + -0x9c),&local_34,
                (short)param_2[0x14],0,(short)DAT_001c6b08);
  uVar7 = *(uint *)(*(int *)(iVar11 + 100) + 0x2c);
  *(uint *)(*(int *)(iVar11 + 100) + 0x2c) = uVar7 | 8;
  *(uint *)(*(int *)(iVar11 + 100) + 0x2c) = uVar7 & 0xffffe7ff | 0x1008;
  *(uint *)(*(int *)(iVar11 + 100) + 0x2c) = *(uint *)(*(int *)(iVar11 + 100) + 0x2c) | 0x100000;
  *(undefined1 *)(iVar11 + -0x22) = 3;
  *(int *)(iVar11 + -0x14) = iVar13;
  iVar5 = func_0010BA78(0x30);
  *(int *)(iVar11 + -0x10) = iVar5;
  *(uint *)(iVar11 + -0xc) = iVar5 + (uint)*(byte *)(iVar11 + -0x22) * 8;
  iVar10 = 3;
  puVar3 = (undefined4 *)(iVar5 + -8);
  do {
    uVar9 = puVar4[0x13];
    iVar10 = iVar10 + -1;
    puVar3[2] = puVar4[0x12];
    puVar3[3] = uVar9;
    uVar9 = puVar4[0x13];
    puVar3[4] = puVar4[0x12];
    puVar3[5] = uVar9;
    puVar3 = puVar3 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)(iVar11 + -0x22);
  uVar7 = (uint)bVar1;
  puVar3 = (undefined4 *)func_0010BA78(uVar7 << 3);
  *(undefined4 **)(iVar11 + -8) = puVar3;
  if (uVar7 != 0) {
    puVar8 = puVar3 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = puVar4[7];
      *puVar3 = puVar4[6];
      puVar3[1] = uVar9;
      puVar8 = puVar3;
    }
    for (iVar5 = (int)uVar7 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar9 = puVar4[7];
      puVar8[2] = puVar4[6];
      puVar8[3] = uVar9;
      uVar9 = puVar4[7];
      puVar8[4] = puVar4[6];
      puVar8[5] = uVar9;
      puVar8 = puVar8 + 4;
    }
  }
  puVar3 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar5 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0x24;
    puVar3[1] = 3;
    iVar5 = func_00100118((int)(puVar3 + 2),DAT_001c6b0c,0x24,3);
  }
  if (iVar5 != 0) {
    *(int *)(iVar11 + -0x1c) = iVar5;
    *(undefined4 *)(iVar11 + -0x20) = 3;
  }
  iVar5 = DAT_001c6b10;
  *(undefined4 **)(iVar11 + -0xe8) = (undefined4 *)(iVar11 + -0x28);
  iVar10 = DAT_001c6b20;
  *(undefined2 *)(iVar5 + iVar13) = 3;
  local_2c = (uint *)s_cState_Move_001c6b14;
  local_30 = iVar10;
  iVar5 = *(int *)(iVar11 + -0x1c);
  puVar16 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar10 + 8))(&local_30);
  uVar7 = 0;
  do {
    if (*(char *)((int)local_2c + uVar7) == '\0') {
      if ((int)uVar7 < 0x40001) goto LAB_001c6a30;
      break;
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x40001);
  uVar7 = 0;
LAB_001c6a30:
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 <= (int)uVar7) {
    uVar7 = iVar5 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar7);
  puVar3 = DAT_001c6b00;
  *(undefined1 *)((int)puVar16 + uVar7) = 0;
  puVar4 = *(undefined4 **)(iVar11 + -0x10);
  uVar15 = puVar3[3];
  uVar9 = puVar3[6];
  uVar12 = puVar3[4];
  uVar14 = puVar3[5];
  uVar6 = puVar3[7];
  *puVar4 = puVar3[2];
  puVar4[1] = uVar15;
  puVar3 = *(undefined4 **)(iVar11 + -0xc);
  *puVar3 = uVar12;
  puVar3[1] = uVar14;
  puVar3 = *(undefined4 **)(iVar11 + -8);
  *puVar3 = uVar9;
  puVar3[1] = uVar6;
  local_2c = (uint *)s_cState_Stop_001c6b24;
  local_30 = iVar10;
  if (*(uint *)(iVar11 + -0x20) < 2) {
    iVar5 = *(int *)(iVar11 + -0x1c);
  }
  else {
    iVar5 = *(int *)(iVar11 + -0x1c) + 0x24;
  }
  puVar16 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar10 + 8))(&local_30);
  uVar7 = 0;
  do {
    if (*(char *)((int)local_2c + uVar7) == '\0') {
      if ((int)uVar7 < 0x40001) goto LAB_001c6b3c;
      break;
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x40001);
  uVar7 = 0;
LAB_001c6b3c:
  if (*(int *)(iVar5 + 8) <= (int)uVar7) {
    uVar7 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar7);
  *(undefined1 *)((int)puVar16 + uVar7) = 0;
  iVar5 = *(int *)(iVar11 + -0x10);
  uVar9 = *DAT_001c6c90;
  uVar6 = DAT_001c6c90[1];
  uVar12 = DAT_001c6c90[3];
  uVar14 = DAT_001c6c90[4];
  uVar15 = DAT_001c6c90[5];
  *(undefined4 *)(iVar5 + 8) = DAT_001c6c90[2];
  *(undefined4 *)(iVar5 + 0xc) = uVar12;
  iVar5 = *(int *)(iVar11 + -0xc);
  *(undefined4 *)(iVar5 + 8) = uVar14;
  *(undefined4 *)(iVar5 + 0xc) = uVar15;
  iVar5 = *(int *)(iVar11 + -8);
  *(undefined4 *)(iVar5 + 8) = uVar9;
  *(undefined4 *)(iVar5 + 0xc) = uVar6;
  local_2c = (uint *)s_cState_Recover_001c6c94;
  local_30 = iVar10;
  if (*(uint *)(iVar11 + -0x20) < 3) {
    iVar5 = *(int *)(iVar11 + -0x1c);
  }
  else {
    iVar5 = *(int *)(iVar11 + -0x1c) + 0x48;
  }
  puVar16 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar10 + 8))(&local_30);
  uVar7 = 0;
  do {
    if (*(char *)((int)local_2c + uVar7) == '\0') {
      if ((int)uVar7 < 0x40001) goto LAB_001c6c00;
      break;
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x40001);
  uVar7 = 0;
LAB_001c6c00:
  if (*(int *)(iVar5 + 8) <= (int)uVar7) {
    uVar7 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar7);
  puVar3 = DAT_001c6b00;
  *(undefined1 *)((int)puVar16 + uVar7) = 0;
  iVar5 = *(int *)(iVar11 + -0x10);
  uVar6 = puVar3[0x10];
  uVar9 = puVar3[0xd];
  uVar14 = puVar3[0xe];
  uVar15 = puVar3[0xf];
  uVar12 = puVar3[0x11];
  *(undefined4 *)(iVar5 + 0x10) = puVar3[0xc];
  *(undefined4 *)(iVar5 + 0x14) = uVar9;
  iVar5 = *(int *)(iVar11 + -0xc);
  *(undefined4 *)(iVar5 + 0x10) = uVar14;
  *(undefined4 *)(iVar5 + 0x14) = uVar15;
  iVar5 = *(int *)(iVar11 + -8);
  *(undefined4 *)(iVar5 + 0x10) = uVar6;
  *(undefined4 *)(iVar5 + 0x14) = uVar12;
  func_0065BE00((undefined4 *)(iVar11 + -0x28),0);
  func_001C6354(iVar13);
  return iVar13;
}

