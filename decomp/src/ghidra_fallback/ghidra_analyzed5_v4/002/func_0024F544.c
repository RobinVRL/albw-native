#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0024F260(int param_1);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_0065FA70(undefined4 *param_1,undefined1 param_2);
extern int DAT_0024f948;
extern int *DAT_0024f94c;
extern int DAT_0024f950;
extern undefined4 DAT_0024f954;
extern undefined4 DAT_0024f958;
extern float DAT_0024f95c;
extern undefined *DAT_0024f960;
extern int DAT_0024f964;
extern int DAT_0024f974;
extern undefined4 *DAT_0024f988;
extern undefined4 *DAT_0024fb08;
extern char s_cState_Destroy_0024f98c[];
extern char s_cState_Exist_0024f978[];
extern char s_cState_Wait_0024f968[];

// USA 0024F544 <- EU 0024F544 (Ghidra, non-matching)
// GLOBAL DAT_0024f948 int
// GLOBAL DAT_0024f94c int *
// GLOBAL DAT_0024f950 int
// GLOBAL DAT_0024f954 undefined4
// GLOBAL DAT_0024f958 undefined4
// GLOBAL DAT_0024f95c float
// GLOBAL DAT_0024f960 undefined *
// GLOBAL DAT_0024f964 int
// GLOBAL DAT_0024f974 int
// GLOBAL DAT_0024f988 undefined4 *
// GLOBAL DAT_0024fb08 undefined4 *
// GLOBAL s_cState_Destroy_0024f98c string
// GLOBAL s_cState_Exist_0024f978 string
// GLOBAL s_cState_Wait_0024f968 string

undefined4 * func_0024F544(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  float fVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 (*(uint *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(uint * *)(albw_frame + 0x14))
  piVar3 = func_00150E40(param_1,param_2);
  piVar13 = DAT_0024f94c;
  iVar5 = DAT_0024f948;
  piVar3[200] = DAT_0024f948 + 0x58;
  *piVar3 = iVar5;
  iVar5 = DAT_0024f950;
  iVar9 = *piVar13;
  iVar10 = piVar13[1];
  piVar3[0x104] = (int)piVar3;
  piVar3[0x105] = iVar9;
  piVar3[0x106] = iVar10;
  piVar3[0x103] = iVar5;
  iVar9 = func_004EE484(piVar3 + 0x107);
  puVar4 = func_0010A794((undefined4 *)(iVar9 + 100));
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[0xc] = 0;
  iVar9 = func_0054D964((int)(puVar4 + -0x120),0);
  puVar4[0xd] = iVar9;
  uVar18 = DAT_0024f954;
  puVar4[0xf] = 0;
  uVar19 = DAT_0024f958;
  puVar4[0x11] = uVar18;
  puVar4[0x12] = uVar19;
  puVar4[0x10] = 0;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0;
  *(undefined1 *)((int)puVar4 + 0x59) = 0;
  fVar2 = DAT_0024f95c;
  puVar4[0x18] = 0;
  iVar9 = piVar13[0x14];
  iVar10 = piVar13[0x15];
  puVar4[0x17] = iVar5;
  puVar4[0x19] = iVar9;
  puVar4[0x1a] = iVar10;
  puVar12 = puVar4 + -0x120;
  *(bool *)(puVar4 + 0x16) = ALBW_AS_F32(param_2[0x11]) != fVar2;
  puVar4[9] = param_2[4];
  puVar4[10] = param_2[5];
  puVar4[0xb] = param_2[6];
  puVar4[-0x26] = 0;
  *(undefined1 *)((int)puVar4 + 6) = 3;
  puVar4[5] = puVar12;
  iVar5 = func_0010BA78(0x30);
  puVar4[6] = iVar5;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar9 = 3;
  piVar3 = (int *)(iVar5 + -8);
  do {
    iVar5 = piVar13[0x13];
    iVar9 = iVar9 + -1;
    piVar3[2] = piVar13[0x12];
    piVar3[3] = iVar5;
    iVar5 = piVar13[0x13];
    piVar3[4] = piVar13[0x12];
    piVar3[5] = iVar5;
    piVar3 = piVar3 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar14 = (uint)bVar1;
  piVar3 = (int *)func_0010BA78(uVar14 << 3);
  puVar4[8] = piVar3;
  if (uVar14 != 0) {
    piVar6 = piVar3 + -2;
    if ((bVar1 & 1) != 0) {
      iVar5 = piVar13[7];
      *piVar3 = piVar13[6];
      piVar3[1] = iVar5;
      piVar6 = piVar3;
    }
    for (iVar5 = (int)uVar14 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      iVar9 = piVar13[7];
      piVar6[2] = piVar13[6];
      piVar6[3] = iVar9;
      iVar9 = piVar13[7];
      piVar6[4] = piVar13[6];
      piVar6[5] = iVar9;
      piVar6 = piVar6 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar5 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 3;
    iVar5 = func_00100118((int)(puVar7 + 2),DAT_0024f960,0x24,3);
  }
  if (iVar5 != 0) {
    puVar4[2] = 3;
    puVar4[3] = iVar5;
  }
  iVar5 = DAT_0024f964;
  puVar4[-0x4b] = puVar4;
  iVar9 = DAT_0024f974;
  *(undefined2 *)(iVar5 + (int)puVar12) = 3;
  local_2c = (uint *)s_cState_Wait_0024f968;
  local_30 = iVar9;
  iVar5 = puVar4[3];
  puVar16 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar9 + 8))(&local_30);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_2c + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_0024f7c0;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_0024f7c0:
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 <= (int)uVar14) {
    uVar14 = iVar5 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar14);
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  piVar13 = (int *)puVar4[6];
  iVar17 = DAT_0024f94c[3];
  iVar11 = DAT_0024f94c[6];
  iVar10 = DAT_0024f94c[4];
  iVar15 = DAT_0024f94c[5];
  iVar5 = DAT_0024f94c[7];
  *piVar13 = DAT_0024f94c[2];
  piVar13[1] = iVar17;
  piVar13 = (int *)puVar4[7];
  *piVar13 = iVar10;
  piVar13[1] = iVar15;
  piVar13 = (int *)puVar4[8];
  piVar13[1] = iVar5;
  *piVar13 = iVar11;
  local_2c = (uint *)s_cState_Exist_0024f978;
  local_30 = iVar9;
  if ((uint)puVar4[2] < 2) {
    iVar5 = puVar4[3];
  }
  else {
    iVar5 = puVar4[3] + 0x24;
  }
  puVar16 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar9 + 8))(&local_30);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_2c + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_0024f890;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_0024f890:
  if (*(int *)(iVar5 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar14);
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  iVar5 = puVar4[6];
  uVar18 = *DAT_0024f988;
  uVar19 = DAT_0024f988[1];
  uVar20 = DAT_0024f988[3];
  uVar21 = DAT_0024f988[4];
  uVar22 = DAT_0024f988[5];
  *(undefined4 *)(iVar5 + 8) = DAT_0024f988[2];
  *(undefined4 *)(iVar5 + 0xc) = uVar20;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 8) = uVar21;
  *(undefined4 *)(iVar5 + 0xc) = uVar22;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 8) = uVar18;
  *(undefined4 *)(iVar5 + 0xc) = uVar19;
  local_2c = (uint *)s_cState_Destroy_0024f98c;
  local_30 = iVar9;
  if ((uint)puVar4[2] < 3) {
    iVar5 = puVar4[3];
  }
  else {
    iVar5 = puVar4[3] + 0x48;
  }
  puVar16 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar9 + 8))(&local_30);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_2c + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_0024f9a8;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_0024f9a8:
  if (*(int *)(iVar5 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar16,local_2c,uVar14);
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  piVar13 = DAT_0024f94c;
  iVar15 = puVar4[6];
  iVar9 = DAT_0024f94c[0xd];
  iVar5 = DAT_0024f94c[0xe];
  iVar17 = DAT_0024f94c[0xf];
  iVar10 = DAT_0024f94c[6];
  iVar11 = DAT_0024f94c[7];
  *(int *)(iVar15 + 0x10) = DAT_0024f94c[0xc];
  *(int *)(iVar15 + 0x14) = iVar9;
  iVar9 = puVar4[7];
  *(int *)(iVar9 + 0x10) = iVar5;
  *(int *)(iVar9 + 0x14) = iVar17;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x10) = iVar10;
  *(int *)(iVar5 + 0x14) = iVar11;
  *(uint *)(puVar4[0xd] + 0x2c) = *(uint *)(puVar4[0xd] + 0x2c) | 0x60000;
  puVar4[-0x15] = puVar4[0xd];
  local_34 = puVar4[-0x6d];
  puVar7 = puVar4 + -0x19;
  func_004EDEA0((int)puVar7,&local_34);
  iVar5 = func_0054DDF4((int)puVar12,0);
  puVar4[-0x38] = iVar5;
  puVar4[-0x37] = iVar5;
  puVar4[0xf] = param_2[0x13];
  func_0065FA70(puVar4,0);
  puVar8 = (undefined2 *)func_0054DDF4((int)puVar12,0);
  iVar5 = piVar13[0x10];
  iVar9 = piVar13[0x11];
  puVar4[0x18] = puVar12;
  puVar4[0x19] = iVar5;
  puVar4[0x1a] = iVar9;
  local_34 = puVar4[-0x6d];
  func_0014EB8C((int)puVar7,puVar4[0xd],puVar8,&local_34,*(undefined2 *)(puVar4 + -0x10b),
                puVar4 + 0x17,(short)DAT_0024f954);
  func_004A9120(*DAT_0024fb08,(int)puVar7);
  *(char *)(puVar4 + 0xe) = (char)puVar8[2];
  func_0024F260((int)puVar12);
  return puVar12;
}

