#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001E6CEC(undefined4 *param_1,uint *param_2,undefined4 param_3);
extern int func_0036D6F4(undefined4 *param_1,int param_2);
extern int func_004356B4(int *param_1);
extern int func_00503324(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0065CFDC(undefined4 *param_1,undefined1 param_2);
extern int DAT_001e7f9c;
extern undefined4 *DAT_001e7fa0;
extern undefined4 DAT_001e7fa4;
extern undefined *DAT_001e7fa8;
extern int DAT_001e7fb8;
extern char s_cState_Enable_001e7fbc[];
extern char s_cState_Event_001e7fcc[];
extern char s_cState_Idle_001e7fac[];

// USA 001E7B4C <- EU 001E7B4C (Ghidra, non-matching)
// GLOBAL DAT_001e7f9c int
// GLOBAL DAT_001e7fa0 undefined4 *
// GLOBAL DAT_001e7fa4 undefined4
// GLOBAL DAT_001e7fa8 undefined *
// GLOBAL DAT_001e7fb8 int
// GLOBAL s_cState_Enable_001e7fbc string
// GLOBAL s_cState_Event_001e7fcc string
// GLOBAL s_cState_Idle_001e7fac string

int func_001E7B4C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 * *)(albw_frame + 0x8))
  piVar3 = (int *)func_001E6CEC(param_1,param_2,0xb);
  iVar5 = DAT_001e7f9c;
  *piVar3 = DAT_001e7f9c;
  piVar3[200] = iVar5 + 0x98;
  puVar4 = func_0010A794(piVar3 + 0x1e2);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  iVar5 = func_0054D964((int)(puVar4 + -0x1e2),0);
  puVar4[9] = iVar5;
  iVar5 = func_00503324(puVar4 + 10);
  puVar6 = func_0036D6F4((undefined4 *)(iVar5 + 0x2e4),iVar5 + -0x7b0);
  puVar4 = DAT_001e7fa0;
  puVar6[0xb] = 0;
  uVar9 = puVar4[0x13];
  puVar12 = puVar6 + -0x2a5;
  puVar6[0xc] = puVar4[0x12];
  puVar6[0xd] = uVar9;
  local_28 = puVar6 + -0xc3;
  puVar6[10] = DAT_001e7fa4;
  puVar6[0x11] = 0;
  *(undefined1 *)(puVar6 + 0x12) = 0;
  *(undefined1 *)((int)puVar6 + 0x49) = 0;
  *(undefined1 *)((int)puVar6 + -0x306) = 3;
  puVar6[-0xbe] = puVar12;
  iVar5 = func_0010BA78(0x30);
  puVar6[-0xbd] = iVar5;
  puVar6[-0xbc] = iVar5 + (uint)*(byte *)((int)puVar6 + -0x306) * 8;
  iVar10 = 3;
  puVar7 = (undefined4 *)(iVar5 + -8);
  do {
    uVar9 = puVar4[0x11];
    iVar10 = iVar10 + -1;
    puVar7[2] = puVar4[0x10];
    puVar7[3] = uVar9;
    uVar9 = puVar4[0x11];
    puVar7[4] = puVar4[0x10];
    puVar7[5] = uVar9;
    puVar7 = puVar7 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar6 + -0x306);
  uVar13 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar6[-0xbb] = puVar7;
  if (uVar13 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = puVar4[5];
      *puVar7 = puVar4[4];
      puVar7[1] = uVar9;
      puVar8 = puVar7;
    }
    for (iVar5 = (int)uVar13 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar9 = puVar4[5];
      puVar8[2] = puVar4[4];
      puVar8[3] = uVar9;
      uVar9 = puVar4[5];
      puVar8[4] = puVar4[4];
      puVar8[5] = uVar9;
      puVar8 = puVar8 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  puVar2 = DAT_001e7fa8;
  iVar5 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = 3;
    *puVar4 = 0x24;
    iVar5 = func_00100118((int)(puVar4 + 2),puVar2,0x24,3);
  }
  if (iVar5 != 0) {
    puVar6[-0xc1] = 3;
    puVar6[-0xc0] = iVar5;
  }
  iVar5 = DAT_001e7fb8;
  local_2c = (uint *)s_cState_Idle_001e7fac;
  local_30 = DAT_001e7fb8;
  iVar10 = puVar6[-0xc0];
  puVar16 = *(uint **)(iVar10 + 4);
  (**(code **)(DAT_001e7fb8 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_001e7d5c;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_001e7d5c:
  iVar10 = *(int *)(iVar10 + 8);
  if (iVar10 <= (int)uVar13) {
    uVar13 = iVar10 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar13);
  puVar4 = DAT_001e7fa0;
  *(undefined1 *)((int)puVar16 + uVar13) = 0;
  uVar9 = *puVar4;
  puVar7 = (undefined4 *)puVar6[-0xbd];
  uVar14 = puVar4[2];
  uVar15 = puVar4[3];
  uVar11 = puVar4[4];
  uVar17 = puVar4[5];
  puVar7[1] = puVar4[1];
  *puVar7 = uVar9;
  puVar4 = (undefined4 *)puVar6[-0xbc];
  *puVar4 = uVar14;
  puVar4[1] = uVar15;
  puVar4 = (undefined4 *)puVar6[-0xbb];
  *puVar4 = uVar11;
  puVar4[1] = uVar17;
  local_2c = (uint *)s_cState_Enable_001e7fbc;
  local_30 = iVar5;
  if ((uint)puVar6[-0xc1] < 2) {
    iVar10 = puVar6[-0xc0];
  }
  else {
    iVar10 = puVar6[-0xc0] + 0x24;
  }
  puVar16 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar5 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_001e7e28;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_001e7e28:
  if (*(int *)(iVar10 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar13);
  puVar4 = DAT_001e7fa0;
  *(undefined1 *)((int)puVar16 + uVar13) = 0;
  iVar10 = puVar6[-0xbd];
  uVar9 = puVar4[4];
  uVar17 = puVar4[7];
  uVar15 = puVar4[8];
  uVar14 = puVar4[9];
  uVar11 = puVar4[5];
  *(undefined4 *)(iVar10 + 8) = puVar4[6];
  *(undefined4 *)(iVar10 + 0xc) = uVar17;
  iVar10 = puVar6[-0xbc];
  *(undefined4 *)(iVar10 + 8) = uVar15;
  *(undefined4 *)(iVar10 + 0xc) = uVar14;
  iVar10 = puVar6[-0xbb];
  *(undefined4 *)(iVar10 + 8) = uVar9;
  *(undefined4 *)(iVar10 + 0xc) = uVar11;
  local_2c = (uint *)s_cState_Event_001e7fcc;
  local_30 = iVar5;
  if ((uint)puVar6[-0xc1] < 3) {
    iVar10 = puVar6[-0xc0];
  }
  else {
    iVar10 = puVar6[-0xc0] + 0x48;
  }
  puVar16 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar5 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_001e7efc;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_001e7efc:
  if (*(int *)(iVar10 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar13);
  puVar4 = DAT_001e7fa0;
  *(undefined1 *)((int)puVar16 + uVar13) = 0;
  iVar5 = puVar6[-0xbd];
  uVar11 = puVar4[0xb];
  uVar15 = puVar4[0xc];
  uVar9 = puVar4[5];
  uVar14 = puVar4[0xd];
  uVar17 = puVar4[4];
  *(undefined4 *)(iVar5 + 0x10) = puVar4[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar11;
  iVar5 = puVar6[-0xbc];
  *(undefined4 *)(iVar5 + 0x10) = uVar15;
  *(undefined4 *)(iVar5 + 0x14) = uVar14;
  iVar5 = puVar6[-0xbb];
  *(undefined4 *)(iVar5 + 0x10) = uVar17;
  *(undefined4 *)(iVar5 + 0x14) = uVar9;
  func_0065CFDC(local_28,0);
  uVar9 = puVar4[0xe];
  uVar11 = puVar4[0xf];
  puVar6[0xb] = puVar12;
  puVar6[0xc] = uVar9;
  puVar6[0xd] = uVar11;
  puVar6[-0xb] = puVar6 + 10;
  func_004356B4((int *)puVar6[-0xba]);
  return (int)puVar12;
}

