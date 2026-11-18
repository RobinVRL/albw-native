#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_001E4414(undefined4 *param_1,uint *param_2);
extern int func_002FCDA0(undefined4 *param_1,undefined4 param_2,undefined1 param_3);
extern int func_00324964(int param_1);
extern int func_003249B4(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_004ECF6C(int param_1);
extern int DAT_001c03a8;
extern int DAT_001c03ac;
extern undefined4 DAT_001c03b0;
extern undefined4 *DAT_001c03b4;
extern undefined *DAT_001c03b8;
extern int DAT_001c03bc;
extern char s_cState_CloseStay_001c03ec[];
extern char s_cState_Close_001c03dc[];
extern char s_cState_OpenStay_001c03cc[];
extern char s_cState_Open_001c03c0[];

// USA 001BFE64 <- EU 001BFE64 (Ghidra, non-matching)
// GLOBAL DAT_001c03a8 int
// GLOBAL DAT_001c03ac int
// GLOBAL DAT_001c03b0 undefined4
// GLOBAL DAT_001c03b4 undefined4 *
// GLOBAL DAT_001c03b8 undefined *
// GLOBAL DAT_001c03bc int
// GLOBAL s_cState_CloseStay_001c03ec string
// GLOBAL s_cState_Close_001c03dc string
// GLOBAL s_cState_OpenStay_001c03cc string
// GLOBAL s_cState_Open_001c03c0 string

undefined4 * func_001BFE64(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  piVar2 = func_001E4414(param_1,param_2);
  iVar15 = DAT_001c03a8;
  *piVar2 = DAT_001c03a8;
  piVar2[200] = iVar15 + 0x5c;
  puVar3 = func_0010A794(piVar2 + 0x126);
  puVar3[5] = 0;
  puVar3[6] = 0;
  iVar15 = DAT_001c03ac;
  puVar3[7] = 0;
  puVar3[8] = 0;
  uVar4 = DAT_001c03b0;
  puVar3[9] = iVar15;
  puVar3[10] = uVar4;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  *(undefined1 *)(puVar3 + 0xd) = 0;
  puVar12 = puVar3 + -0x126;
  *(undefined1 *)((int)puVar3 + 0x35) = 0;
  func_003249E0((int)puVar12,0);
  func_00324964((int)puVar12);
  uVar4 = func_0014E428((int)puVar12,0,0,0,1,0,0);
  puVar3[-7] = uVar4;
  if (*(short *)((int)puVar3 + -0x46a) == 1) {
    func_003249B4((int)puVar12);
  }
  puVar3[5] = puVar12;
  *(undefined1 *)((int)puVar3 + 6) = 4;
  iVar5 = func_0010BA78(0x40);
  puVar8 = DAT_001c03b4;
  puVar3[6] = iVar5;
  puVar3[7] = iVar5 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar9 = 4;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar4 = puVar8[0x13];
    iVar9 = iVar9 + -1;
    puVar6[2] = puVar8[0x12];
    puVar6[3] = uVar4;
    uVar4 = puVar8[0x13];
    puVar6[4] = puVar8[0x12];
    puVar6[5] = uVar4;
    puVar6 = puVar6 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar14 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar3[8] = puVar6;
  if (uVar14 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar4 = puVar8[5];
      *puVar6 = puVar8[4];
      puVar6[1] = uVar4;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar14 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar4 = puVar8[5];
      puVar7[2] = puVar8[4];
      puVar7[3] = uVar4;
      uVar4 = puVar8[5];
      puVar7[4] = puVar8[4];
      puVar7[5] = uVar4;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 4;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_001c03b8,0x24,4);
  }
  if (iVar5 != 0) {
    puVar3[3] = iVar5;
    puVar3[2] = 4;
  }
  iVar5 = DAT_001c03bc;
  puVar3[-0x51] = puVar3;
  *(undefined2 *)(iVar5 + (int)puVar12) = 4;
  local_2c = (uint *)s_cState_Open_001c03c0;
  local_30 = iVar15;
  iVar5 = puVar3[3];
  puVar16 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar15 + 8))(&local_30);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_2c + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_001c008c;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_001c008c:
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 <= (int)uVar14) {
    uVar14 = iVar5 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar14);
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  puVar6 = (undefined4 *)puVar3[6];
  uVar11 = puVar8[2];
  uVar13 = puVar8[3];
  uVar10 = *puVar8;
  uVar4 = puVar8[4];
  uVar17 = puVar8[5];
  puVar6[1] = puVar8[1];
  *puVar6 = uVar10;
  puVar6 = (undefined4 *)puVar3[7];
  *puVar6 = uVar11;
  puVar6[1] = uVar13;
  puVar6 = (undefined4 *)puVar3[8];
  *puVar6 = uVar4;
  puVar6[1] = uVar17;
  local_2c = (uint *)s_cState_OpenStay_001c03cc;
  local_30 = iVar15;
  if ((uint)puVar3[2] < 2) {
    iVar5 = puVar3[3];
  }
  else {
    iVar5 = puVar3[3] + 0x24;
  }
  puVar16 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar15 + 8))(&local_30);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_2c + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_001c0150;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_001c0150:
  if (*(int *)(iVar5 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar14);
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  iVar5 = puVar3[6];
  uVar10 = puVar8[8];
  uVar4 = puVar8[9];
  uVar11 = puVar8[5];
  uVar13 = puVar8[4];
  uVar17 = puVar8[7];
  *(undefined4 *)(iVar5 + 8) = puVar8[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar17;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 8) = uVar10;
  *(undefined4 *)(iVar5 + 0xc) = uVar4;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 8) = uVar13;
  *(undefined4 *)(iVar5 + 0xc) = uVar11;
  local_2c = (uint *)s_cState_Close_001c03dc;
  local_30 = iVar15;
  if ((uint)puVar3[2] < 3) {
    iVar5 = puVar3[3];
  }
  else {
    iVar5 = puVar3[3] + 0x48;
  }
  puVar16 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar15 + 8))(&local_30);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_2c + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_001c0220;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_001c0220:
  if (*(int *)(iVar5 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar14);
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  iVar5 = puVar3[6];
  uVar10 = puVar8[4];
  uVar4 = puVar8[0xd];
  uVar11 = puVar8[0xc];
  uVar13 = puVar8[0xb];
  uVar17 = puVar8[5];
  *(undefined4 *)(iVar5 + 0x10) = puVar8[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar13;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar11;
  *(undefined4 *)(iVar5 + 0x14) = uVar4;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 0x10) = uVar10;
  *(undefined4 *)(iVar5 + 0x14) = uVar17;
  local_2c = (uint *)s_cState_CloseStay_001c03ec;
  local_30 = iVar15;
  if ((uint)puVar3[2] < 4) {
    iVar5 = puVar3[3];
  }
  else {
    iVar5 = puVar3[3] + 0x6c;
  }
  puVar16 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar15 + 8))(&local_30);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_2c + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_001c02f4;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_001c02f4:
  if (*(int *)(iVar5 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar14);
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  iVar15 = puVar3[6];
  uVar4 = puVar8[4];
  uVar11 = puVar8[5];
  uVar10 = puVar8[0x10];
  uVar17 = puVar8[0x11];
  uVar13 = puVar8[0xf];
  *(undefined4 *)(iVar15 + 0x18) = puVar8[0xe];
  *(undefined4 *)(iVar15 + 0x1c) = uVar13;
  iVar15 = puVar3[7];
  *(undefined4 *)(iVar15 + 0x18) = uVar10;
  *(undefined4 *)(iVar15 + 0x1c) = uVar17;
  iVar15 = puVar3[8];
  *(undefined4 *)(iVar15 + 0x18) = uVar4;
  *(undefined4 *)(iVar15 + 0x1c) = uVar11;
  puVar3[-0x6e] = puVar3[-0x6e] | 2;
  puVar8 = (undefined4 *)func_0010BAB4(0xb0);
  uVar4 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    uVar4 = func_002FCDA0(puVar8,puVar3[-0x73],0);
  }
  puVar3[0xc] = uVar4;
  func_004ECF6C((int)puVar12);
  return puVar12;
}

