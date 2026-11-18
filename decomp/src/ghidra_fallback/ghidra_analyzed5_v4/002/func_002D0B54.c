#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00111A64(uint *param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004356B4(int *param_1);
extern int func_004CF478(int param_1,int param_2);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00663A98(undefined4 *param_1,undefined1 param_2);
extern float fRam002d1120;
extern float fRam002d124c;
extern float fRam002d1250;
extern float fRam002d1254;
extern int *piRam002d1124;
extern int *DAT_002d10c8;
extern int DAT_002d10cc;
extern int DAT_002d10d0;
extern undefined4 DAT_002d10d4;
extern undefined *DAT_002d10d8;
extern int DAT_002d10dc;
extern int DAT_002d10f0;
extern float DAT_002d111c;
extern undefined4 DAT_002d1258;
extern char s_cState_Delete_002d110c[];
extern char s_cState_Fall_002d1100[];
extern char s_cState_Regist_002d10e0[];
extern char s_cState_Wait_002d10f4[];

// USA 002D0B54 <- EU 002D0B30 (Ghidra, non-matching)
// GLOBAL DAT_002d10c8 int *
// GLOBAL DAT_002d10cc int
// GLOBAL DAT_002d10d0 int
// GLOBAL DAT_002d10d4 undefined4
// GLOBAL DAT_002d10d8 undefined *
// GLOBAL DAT_002d10dc int
// GLOBAL DAT_002d10f0 int
// GLOBAL DAT_002d111c float
// GLOBAL DAT_002d1258 undefined4
// GLOBAL UNK_002d1120 float
// GLOBAL UNK_002d1124 int *
// GLOBAL UNK_002d124c float
// GLOBAL UNK_002d1250 float
// GLOBAL UNK_002d1254 float
// GLOBAL s_cState_Delete_002d110c string
// GLOBAL s_cState_Fall_002d1100 string
// GLOBAL s_cState_Regist_002d10e0 string
// GLOBAL s_cState_Wait_002d10f4 string

int func_002D0B54(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  uint in_fpscr;
  float fVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_4c (*(uint *)(albw_frame + 0x4))
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(uint * *)(albw_frame + 0xc))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x24))
  #define local_28 (*(uint * *)(albw_frame + 0x28))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar5 = func_00150E40(param_1,param_2);
  piVar3 = DAT_002d10c8;
  piVar5[0x104] = DAT_002d10cc;
  iVar12 = *piVar3;
  iVar20 = piVar3[1];
  piVar5[0x105] = (int)(piVar5 + 0x103);
  piVar5[0x106] = iVar12;
  piVar5[0x107] = iVar20;
  iVar12 = DAT_002d10d0;
  *piVar5 = DAT_002d10d0;
  piVar5[200] = iVar12 + 0x54;
  piVar5[0x103] = iVar12 + 0xb8;
  puVar6 = func_0010A794(piVar5 + 0x108);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  iVar12 = func_0054D964((int)(puVar6 + -0x108),0);
  puVar6[10] = iVar12;
  iVar12 = func_0054D89C((int)(puVar6 + -0x108),0);
  puVar6[0xb] = iVar12;
  iVar12 = func_004EE484(puVar6 + 0xc);
  iVar14 = iVar12 + -0x450;
  iVar20 = piVar3[3];
  *(int *)(iVar12 + 0x6c) = piVar3[2];
  *(int *)(iVar12 + 0x70) = iVar20;
  *(undefined4 *)(iVar12 + 100) = DAT_002d10d4;
  *(int *)(iVar12 + 0x68) = iVar14;
  *(undefined4 *)(iVar12 + 0x74) = 0;
  *(undefined4 *)(iVar12 + 0x7c) = 0;
  *(undefined1 *)(iVar12 + 0x80) = 0;
  *(undefined1 *)(iVar12 + 0x81) = 0;
  *(undefined1 *)(iVar12 + -0x2a) = 4;
  *(int *)(iVar12 + -0x1c) = iVar14;
  iVar20 = func_0010BA78(0x40);
  *(int *)(iVar12 + -0x18) = iVar20;
  *(uint *)(iVar12 + -0x14) = iVar20 + (uint)*(byte *)(iVar12 + -0x2a) * 8;
  iVar10 = 4;
  piVar5 = (int *)(iVar20 + -8);
  do {
    iVar20 = piVar3[0x1b];
    iVar10 = iVar10 + -1;
    piVar5[2] = piVar3[0x1a];
    piVar5[3] = iVar20;
    iVar20 = piVar3[0x1b];
    piVar5[4] = piVar3[0x1a];
    piVar5[5] = iVar20;
    piVar5 = piVar5 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)(iVar12 + -0x2a);
  uVar17 = (uint)bVar1;
  piVar5 = (int *)func_0010BA78(uVar17 << 3);
  *(int **)(iVar12 + -0x10) = piVar5;
  if (uVar17 != 0) {
    piVar7 = piVar5 + -2;
    if ((bVar1 & 1) != 0) {
      iVar20 = piVar3[9];
      *piVar5 = piVar3[8];
      piVar5[1] = iVar20;
      piVar7 = piVar5;
    }
    for (iVar20 = (int)uVar17 >> 1; iVar20 != 0; iVar20 = iVar20 + -1) {
      iVar10 = piVar3[9];
      piVar7[2] = piVar3[8];
      piVar7[3] = iVar10;
      iVar10 = piVar3[9];
      piVar7[4] = piVar3[8];
      piVar7[5] = iVar10;
      piVar7 = piVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  puVar4 = DAT_002d10d8;
  iVar20 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[1] = 4;
    *puVar6 = 0x24;
    iVar20 = func_00100118((int)(puVar6 + 2),puVar4,0x24,4);
  }
  if (iVar20 != 0) {
    *(undefined4 *)(iVar12 + -0x28) = 4;
    *(int *)(iVar12 + -0x24) = iVar20;
  }
  iVar20 = DAT_002d10dc;
  *(int *)(iVar12 + -0xfc) = iVar12 + -0x30;
  iVar10 = DAT_002d10f0;
  *(undefined2 *)(iVar20 + iVar14) = 4;
  local_44 = (uint *)s_cState_Regist_002d10e0;
  local_48 = iVar10;
  iVar20 = *(int *)(iVar12 + -0x24);
  puVar19 = *(uint **)(iVar20 + 4);
  (**(code **)(iVar10 + 8))(&local_48);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_44 + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_002d0d80;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_002d0d80:
  iVar20 = *(int *)(iVar20 + 8);
  if (iVar20 <= (int)uVar17) {
    uVar17 = iVar20 - 1;
  }
  (**(code **)(local_48 + 8))(&local_48);
  func_0010E3C4(puVar19,local_44,uVar17);
  *(undefined1 *)((int)puVar19 + uVar17) = 0;
  piVar5 = *(int **)(iVar12 + -0x18);
  iVar20 = piVar3[6];
  iVar11 = piVar3[7];
  iVar13 = piVar3[8];
  iVar18 = piVar3[9];
  iVar15 = piVar3[4];
  piVar5[1] = piVar3[5];
  *piVar5 = iVar15;
  piVar5 = *(int **)(iVar12 + -0x14);
  *piVar5 = iVar20;
  piVar5[1] = iVar11;
  piVar5 = *(int **)(iVar12 + -0x10);
  *piVar5 = iVar13;
  piVar5[1] = iVar18;
  local_44 = (uint *)s_cState_Wait_002d10f4;
  local_48 = iVar10;
  if (*(uint *)(iVar12 + -0x28) < 2) {
    iVar20 = *(int *)(iVar12 + -0x24);
  }
  else {
    iVar20 = *(int *)(iVar12 + -0x24) + 0x24;
  }
  puVar19 = *(uint **)(iVar20 + 4);
  (**(code **)(iVar10 + 8))(&local_48);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_44 + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_002d0e3c;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_002d0e3c:
  if (*(int *)(iVar20 + 8) <= (int)uVar17) {
    uVar17 = *(int *)(iVar20 + 8) - 1;
  }
  (**(code **)(local_48 + 8))(&local_48);
  func_0010E3C4(puVar19,local_44,uVar17);
  *(undefined1 *)((int)puVar19 + uVar17) = 0;
  iVar11 = *(int *)(iVar12 + -0x18);
  iVar20 = piVar3[0xc];
  iVar13 = piVar3[8];
  iVar15 = piVar3[0xb];
  iVar22 = piVar3[0xd];
  iVar18 = piVar3[9];
  *(int *)(iVar11 + 8) = piVar3[10];
  *(int *)(iVar11 + 0xc) = iVar15;
  iVar11 = *(int *)(iVar12 + -0x14);
  *(int *)(iVar11 + 8) = iVar20;
  *(int *)(iVar11 + 0xc) = iVar22;
  iVar20 = *(int *)(iVar12 + -0x10);
  *(int *)(iVar20 + 8) = iVar13;
  *(int *)(iVar20 + 0xc) = iVar18;
  local_44 = (uint *)s_cState_Fall_002d1100;
  local_48 = iVar10;
  if (*(uint *)(iVar12 + -0x28) < 3) {
    iVar20 = *(int *)(iVar12 + -0x24);
  }
  else {
    iVar20 = *(int *)(iVar12 + -0x24) + 0x48;
  }
  puVar19 = *(uint **)(iVar20 + 4);
  (**(code **)(iVar10 + 8))(&local_48);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_44 + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_002d0f0c;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_002d0f0c:
  if (*(int *)(iVar20 + 8) <= (int)uVar17) {
    uVar17 = *(int *)(iVar20 + 8) - 1;
  }
  (**(code **)(local_48 + 8))(&local_48);
  func_0010E3C4(puVar19,local_44,uVar17);
  *(undefined1 *)((int)puVar19 + uVar17) = 0;
  iVar20 = *(int *)(iVar12 + -0x18);
  iVar11 = piVar3[0xf];
  iVar13 = piVar3[0x10];
  iVar15 = piVar3[0x11];
  iVar18 = piVar3[0x12];
  iVar22 = piVar3[0x13];
  *(int *)(iVar20 + 0x10) = piVar3[0xe];
  *(int *)(iVar20 + 0x14) = iVar11;
  iVar20 = *(int *)(iVar12 + -0x14);
  *(int *)(iVar20 + 0x10) = iVar13;
  *(int *)(iVar20 + 0x14) = iVar15;
  iVar20 = *(int *)(iVar12 + -0x10);
  *(int *)(iVar20 + 0x10) = iVar18;
  *(int *)(iVar20 + 0x14) = iVar22;
  local_44 = (uint *)s_cState_Delete_002d110c;
  local_48 = iVar10;
  uVar17 = *(uint *)(iVar12 + -0x28);
  if (uVar17 < 4) {
    iVar20 = *(int *)(iVar12 + -0x24);
    uVar8 = uVar17;
  }
  else {
    iVar20 = iVar10;
    uVar8 = *(uint *)(iVar12 + -0x24);
  }
  if (3 < uVar17) {
    iVar20 = uVar8 + 0x6c;
  }
  puVar19 = *(uint **)(iVar20 + 4);
  (**(code **)(iVar10 + 8))(&local_48);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_44 + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_002d0fd0;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_002d0fd0:
  if (*(int *)(iVar20 + 8) <= (int)uVar17) {
    uVar17 = *(int *)(iVar20 + 8) - 1;
  }
  (**(code **)(local_48 + 8))(&local_48);
  func_0010E3C4(puVar19,local_44,uVar17);
  *(undefined1 *)((int)puVar19 + uVar17) = 0;
  iVar20 = *(int *)(iVar12 + -0x18);
  iVar18 = piVar3[0x15];
  iVar10 = piVar3[0x18];
  iVar11 = piVar3[0x19];
  iVar13 = piVar3[0x16];
  iVar15 = piVar3[0x17];
  *(int *)(iVar20 + 0x18) = piVar3[0x14];
  *(int *)(iVar20 + 0x1c) = iVar18;
  fVar23 = DAT_002d111c;
  iVar20 = *(int *)(iVar12 + -0x14);
  *(int *)(iVar20 + 0x18) = iVar13;
  *(int *)(iVar20 + 0x1c) = iVar15;
  iVar20 = *(int *)(iVar12 + -0x10);
  *(int *)(iVar20 + 0x18) = iVar10;
  *(int *)(iVar20 + 0x1c) = iVar11;
  uVar17 = in_fpscr & 0xfffffff | (uint)(ALBW_AS_F32(local_28[0x11]) == fVar23) << 0x1e;
  bVar2 = !SUB41(uVar17 >> 0x1e,0);
  *(bool *)(iVar12 + 0x80) = bVar2;
  if (bVar2) {
    iVar20 = func_0014E428(iVar14,0,1,0,1,0,0);
    *(int *)(iVar12 + -0xc) = iVar20;
    func_004CF478(iVar20,0);
    func_00151148(*(int *)(iVar12 + -4),0);
    *(undefined1 *)(iVar12 + 0x61) = 0;
    *(float *)(iVar12 + -0x74) = fVar23;
    *(float *)(iVar12 + -0x70) = fVar23;
    *(float *)(iVar12 + -0x6c) = fVar23;
    fVar24 = *(float *)(iVar12 + -0x448);
    fVar25 = *(float *)(iVar12 + -0x444) + fRam002d1120;
    uVar16 = *(undefined4 *)(iVar12 + -0x440);
    fVar23 = fRam002d124c;
    uVar8 = func_00111A64((uint *)(*piRam002d1124 + 0x660));
    fVar21 = (float)VectorUnsignedToFloat(uVar8,(byte)(uVar17 >> 0x15) & 3);
    fVar24 = (fVar21 * fRam002d1250 * fVar23 - fRam002d1254) + fVar24;
    *(float *)(iVar12 + -0xe8) = fVar24;
    *(float *)(iVar12 + -0xe4) = fVar25;
    *(undefined4 *)(iVar12 + -0xe0) = uVar16;
    *(float *)(iVar12 + -0x80) = fVar24;
    *(float *)(iVar12 + -0x7c) = fVar25;
    *(undefined4 *)(iVar12 + -0x78) = uVar16;
    func_00663A98((undefined4 *)(iVar12 + -0x30),2);
  }
  else {
    uVar16 = func_0014E428(iVar14,0,0,0,1,0,0);
    *(undefined4 *)(iVar12 + -0xc) = uVar16;
    func_00663A98((undefined4 *)(iVar12 + -0x30),0);
  }
  iVar20 = *(int *)(iVar12 + -0xc);
  *(uint *)(iVar20 + 0x164) = *(uint *)(iVar20 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar20 + 0x80),*(uint *)(iVar12 + -0x68),(float *)(iVar12 + -0x80));
  iVar20 = *(int *)(iVar12 + -8);
  *(undefined4 *)(iVar20 + 4) = *(undefined4 *)(iVar12 + -0x80);
  *(undefined4 *)(iVar20 + 8) = *(undefined4 *)(iVar12 + -0x7c);
  *(undefined4 *)(iVar20 + 0xc) = *(undefined4 *)(iVar12 + -0x78);
  func_004356B4(*(int **)(iVar12 + -8));
  puVar9 = (undefined2 *)func_0054DDF4(iVar14,0);
  *(undefined2 **)(iVar12 + -0xb0) = puVar9;
  *(undefined2 **)(iVar12 + -0xac) = puVar9;
  local_4c = *(uint *)(iVar12 + -0x184);
  func_0014EB8C(iVar12,*(undefined4 *)(iVar12 + -8),puVar9,&local_4c,
                *(undefined2 *)(iVar12 + -0x3fc),0,(short)DAT_002d1258);
  return iVar14;
}

