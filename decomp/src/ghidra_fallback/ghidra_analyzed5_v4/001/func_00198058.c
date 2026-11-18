#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_00197CA0(int param_1);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004EE484(undefined4 *param_1);
extern int func_00521028(int param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00659B98(undefined4 *param_1,undefined1 param_2);
extern int DAT_001983f8;
extern undefined4 DAT_001983fc;
extern undefined4 DAT_00198400;
extern undefined4 *DAT_00198404;
extern undefined4 DAT_00198408;
extern undefined *DAT_0019840c;
extern int DAT_00198410;
extern int DAT_00198424;
extern undefined4 *DAT_001986b0;
extern char s_cState_Erase_001986c8[];
extern char s_cState_HeatPoint_00198428[];
extern char s_cState_Laser_00198414[];
extern char s_cState_WaterPillar_001986b4[];

// USA 00198058 <- EU 00198058 (Ghidra, non-matching)
// GLOBAL DAT_001983f8 int
// GLOBAL DAT_001983fc undefined4
// GLOBAL DAT_00198400 undefined4
// GLOBAL DAT_00198404 undefined4 *
// GLOBAL DAT_00198408 undefined4
// GLOBAL DAT_0019840c undefined *
// GLOBAL DAT_00198410 int
// GLOBAL DAT_00198424 int
// GLOBAL DAT_001986b0 undefined4 *
// GLOBAL s_cState_Erase_001986c8 string
// GLOBAL s_cState_HeatPoint_00198428 string
// GLOBAL s_cState_Laser_00198414 string
// GLOBAL s_cState_WaterPillar_001986b4 string

undefined4 * func_00198058(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined4 uVar16;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_54 (*(uint *)(albw_frame + 0xc))
  #define local_50 (*(int *)(albw_frame + 0x10))
  #define local_4c (*(uint * *)(albw_frame + 0x14))
  #define auStack_48 ((undefined4 *)(albw_frame + 0x18))
  piVar2 = func_00150E40(param_1,param_2);
  iVar4 = DAT_001983f8;
  *piVar2 = DAT_001983f8;
  piVar2[200] = iVar4 + 0x5c;
  puVar3 = func_0010A794(piVar2 + 0x103);
  puVar3[5] = 0;
  uVar8 = DAT_001983fc;
  puVar3[6] = 0;
  puVar3[7] = 0;
  uVar11 = DAT_00198400;
  puVar3[8] = 0;
  puVar3[0xe] = uVar8;
  puVar7 = DAT_00198404;
  puVar3[0xf] = uVar11;
  puVar3[0xd] = 0;
  puVar3[0x20] = 0;
  uVar8 = puVar7[0x17];
  puVar13 = puVar3 + -0x103;
  puVar3[0x21] = puVar7[0x16];
  puVar3[0x22] = uVar8;
  puVar3[0x1f] = DAT_00198408;
  *(undefined1 *)(puVar3 + 0x23) = 0;
  iVar4 = func_0054D964((int)puVar13,1);
  puVar3[10] = iVar4;
  uVar9 = *(uint *)(iVar4 + 0x2c);
  *(uint *)(iVar4 + 0x2c) = uVar9 | 0x20000;
  *(uint *)(puVar3[10] + 0x2c) = uVar9 | 0x60000;
  puVar5 = (undefined4 *)func_0010BAB4(100);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    iVar4 = func_004EE484(puVar5);
  }
  puVar3[0xc] = iVar4;
  *(undefined1 *)(iVar4 + 0x61) = 1;
  uVar8 = *puVar7;
  uVar11 = puVar7[1];
  puVar3[0x20] = puVar13;
  puVar3[0x21] = uVar8;
  puVar3[0x22] = uVar11;
  local_54 = puVar3[-0x50];
  func_0014EB8C(puVar3[0xc],puVar3[10],(undefined2 *)puVar3[-0x1b],&local_54,(short)param_2[0x14],
                puVar3 + 0x1f,0x800);
  iVar4 = func_0054D964((int)puVar13,0);
  puVar3[9] = iVar4;
  *(uint *)(iVar4 + 0x2c) = *(uint *)(iVar4 + 0x2c) | 0x8000;
  puVar5 = (undefined4 *)func_0010BAB4(100);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    iVar4 = func_004EE484(puVar5);
  }
  puVar3[0xb] = iVar4;
  *(undefined1 *)(iVar4 + 0x61) = 0;
  func_0014EB8C(puVar3[0xb],puVar3[9],(undefined2 *)puVar3[-0x1b],param_2 + 0x13,
                (short)param_2[0x14],0,0x100);
  *(undefined1 *)((int)puVar3 + 6) = 4;
  puVar3[5] = puVar13;
  iVar4 = func_0010BA78(0x40);
  puVar3[6] = iVar4;
  puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar10 = 4;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar8 = puVar7[0x15];
    iVar10 = iVar10 + -1;
    puVar5[2] = puVar7[0x14];
    puVar5[3] = uVar8;
    uVar8 = puVar7[0x15];
    puVar5[4] = puVar7[0x14];
    puVar5[5] = uVar8;
    puVar5 = puVar5 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar9 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar9 << 3);
  puVar3[8] = puVar5;
  if (uVar9 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar8 = puVar7[7];
      *puVar5 = puVar7[6];
      puVar5[1] = uVar8;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar9 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar8 = puVar7[7];
      puVar6[2] = puVar7[6];
      puVar6[3] = uVar8;
      uVar8 = puVar7[7];
      puVar6[4] = puVar7[6];
      puVar6[5] = uVar8;
      puVar6 = puVar6 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar4 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 4;
    iVar4 = func_00100118((int)(puVar7 + 2),DAT_0019840c,0x24,4);
  }
  if (iVar4 != 0) {
    puVar3[3] = iVar4;
    puVar3[2] = 4;
  }
  iVar4 = DAT_00198410;
  puVar3[-0x2e] = puVar3;
  iVar10 = DAT_00198424;
  *(undefined2 *)(iVar4 + (int)puVar13) = 4;
  local_4c = (uint *)s_cState_Laser_00198414;
  local_50 = iVar10;
  iVar4 = puVar3[3];
  puVar15 = *(uint **)(iVar4 + 4);
  (**(code **)(iVar10 + 8))(&local_50);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_4c + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_00198334;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_00198334:
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 <= (int)uVar9) {
    uVar9 = iVar4 - 1;
  }
  (**(code **)(local_50 + 8))(&local_50);
  func_0010E3C4(puVar15,local_4c,uVar9);
  *(undefined1 *)((int)puVar15 + uVar9) = 0;
  puVar7 = (undefined4 *)puVar3[6];
  uVar11 = DAT_00198404[6];
  uVar14 = DAT_00198404[3];
  uVar16 = DAT_00198404[4];
  uVar12 = DAT_00198404[5];
  uVar8 = DAT_00198404[7];
  *puVar7 = DAT_00198404[2];
  puVar7[1] = uVar14;
  puVar7 = (undefined4 *)puVar3[7];
  puVar7[1] = uVar12;
  *puVar7 = uVar16;
  puVar7 = (undefined4 *)puVar3[8];
  puVar7[1] = uVar8;
  *puVar7 = uVar11;
  local_4c = (uint *)s_cState_HeatPoint_00198428;
  local_50 = iVar10;
  if ((uint)puVar3[2] < 2) {
    iVar4 = puVar3[3];
  }
  else {
    iVar4 = puVar3[3] + 0x24;
  }
  puVar15 = *(uint **)(iVar4 + 4);
  (**(code **)(iVar10 + 8))(&local_50);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_4c + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_00198448;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_00198448:
  if (*(int *)(iVar4 + 8) <= (int)uVar9) {
    uVar9 = *(int *)(iVar4 + 8) - 1;
  }
  (**(code **)(local_50 + 8))(&local_50);
  func_0010E3C4(puVar15,local_4c,uVar9);
  *(undefined1 *)((int)puVar15 + uVar9) = 0;
  iVar4 = puVar3[6];
  uVar8 = *DAT_001986b0;
  uVar11 = DAT_001986b0[1];
  uVar12 = DAT_001986b0[3];
  uVar14 = DAT_001986b0[4];
  uVar16 = DAT_001986b0[5];
  *(undefined4 *)(iVar4 + 8) = DAT_001986b0[2];
  *(undefined4 *)(iVar4 + 0xc) = uVar12;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 8) = uVar14;
  *(undefined4 *)(iVar4 + 0xc) = uVar16;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 8) = uVar8;
  *(undefined4 *)(iVar4 + 0xc) = uVar11;
  local_4c = (uint *)s_cState_WaterPillar_001986b4;
  local_50 = iVar10;
  if ((uint)puVar3[2] < 3) {
    iVar4 = puVar3[3];
  }
  else {
    iVar4 = puVar3[3] + 0x48;
  }
  puVar15 = *(uint **)(iVar4 + 4);
  (**(code **)(iVar10 + 8))(&local_50);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_4c + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_0019850c;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_0019850c:
  if (*(int *)(iVar4 + 8) <= (int)uVar9) {
    uVar9 = *(int *)(iVar4 + 8) - 1;
  }
  (**(code **)(local_50 + 8))(&local_50);
  func_0010E3C4(puVar15,local_4c,uVar9);
  *(undefined1 *)((int)puVar15 + uVar9) = 0;
  puVar7 = DAT_00198404;
  iVar4 = puVar3[6];
  uVar8 = DAT_00198404[0xe];
  uVar11 = DAT_00198404[6];
  uVar12 = DAT_00198404[0xd];
  uVar14 = DAT_00198404[0xf];
  uVar16 = DAT_00198404[7];
  *(undefined4 *)(iVar4 + 0x10) = DAT_00198404[0xc];
  *(undefined4 *)(iVar4 + 0x14) = uVar12;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x10) = uVar8;
  *(undefined4 *)(iVar4 + 0x14) = uVar14;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 0x10) = uVar11;
  *(undefined4 *)(iVar4 + 0x14) = uVar16;
  local_4c = (uint *)s_cState_Erase_001986c8;
  local_50 = iVar10;
  if ((uint)puVar3[2] < 4) {
    iVar4 = puVar3[3];
  }
  else {
    iVar4 = puVar3[3] + 0x6c;
  }
  puVar15 = *(uint **)(iVar4 + 4);
  (**(code **)(iVar10 + 8))(&local_50);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_4c + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_001985e4;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_001985e4:
  if (*(int *)(iVar4 + 8) <= (int)uVar9) {
    uVar9 = *(int *)(iVar4 + 8) - 1;
  }
  (**(code **)(local_50 + 8))(&local_50);
  func_0010E3C4(puVar15,local_4c,uVar9);
  *(undefined1 *)((int)puVar15 + uVar9) = 0;
  uVar8 = puVar7[0x13];
  uVar12 = puVar7[0x12];
  iVar4 = puVar3[6];
  uVar16 = puVar7[0x11];
  uVar11 = puVar7[6];
  uVar14 = puVar7[7];
  *(undefined4 *)(iVar4 + 0x18) = puVar7[0x10];
  *(undefined4 *)(iVar4 + 0x1c) = uVar16;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x18) = uVar12;
  *(undefined4 *)(iVar4 + 0x1c) = uVar8;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 0x18) = uVar11;
  *(undefined4 *)(iVar4 + 0x1c) = uVar14;
  piVar2 = (int *)func_00521028((int)puVar13);
  (**(code **)(*piVar2 + 8))(piVar2);
  func_003529A0(auStack_48,piVar2[1],puVar3 + -0x3b);
  func_002C41BC(puVar3 + -0x3b,auStack_48,(int)puVar13);
  func_00659B98(puVar3,0);
  func_00197CA0((int)puVar13);
  return puVar13;
}

