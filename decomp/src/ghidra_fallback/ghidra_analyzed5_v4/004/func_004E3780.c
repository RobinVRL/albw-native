#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_002C2C9C(undefined4 *param_1,undefined4 param_2);
extern int func_002C2D00(int *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004E2030(int param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_005532B4(undefined4 param_1,int param_2,int param_3,uint param_4);
extern int func_0066A794(undefined4 *param_1,undefined1 param_2);
extern int *DAT_004e3bb0;
extern int DAT_004e3bb4;
extern int DAT_004e3bb8;
extern undefined4 DAT_004e3bbc;
extern undefined4 *DAT_004e3bc0;
extern undefined4 DAT_004e3bc4;
extern undefined4 DAT_004e3bc8;
extern undefined *DAT_004e3bcc;
extern int DAT_004e3bdc;
extern undefined4 DAT_004e3f5c;
extern undefined4 *DAT_004e3f60;
extern uint *DAT_004e3f64;
extern undefined4 *DAT_004e3f68;
extern undefined4 DAT_004e3f6c;
extern float DAT_004e3f70;
extern float DAT_004e3f74;
extern float DAT_004e3f78;
extern int *DAT_004e3f7c;
extern undefined4 *DAT_004e3f80;
extern undefined4 DAT_004e3f84;
extern int *DAT_004e3f88;
extern float DAT_004e40f8;
extern uint DAT_004e40fc;
extern int *DAT_004e4100;
extern char s_cState_EraseFall_004e3f48[];
extern char s_cState_EraseMove_004e3bec[];
extern char s_cState_EraseStick_004e3c00[];
extern char s_cState_Fall_004e3c24[];
extern char s_cState_Move_004e3be0[];
extern char s_cState_Stick_004e3c14[];
extern char s_cState_Wait_004e3bd0[];

// USA 004E3780 <- EU 004E3758 (Ghidra, non-matching)
// GLOBAL DAT_004e3bb0 int *
// GLOBAL DAT_004e3bb4 int
// GLOBAL DAT_004e3bb8 int
// GLOBAL DAT_004e3bbc undefined4
// GLOBAL DAT_004e3bc0 undefined4 *
// GLOBAL DAT_004e3bc4 undefined4
// GLOBAL DAT_004e3bc8 undefined4
// GLOBAL DAT_004e3bcc undefined *
// GLOBAL DAT_004e3bdc int
// GLOBAL DAT_004e3f5c undefined4
// GLOBAL DAT_004e3f60 undefined4 *
// GLOBAL DAT_004e3f64 uint *
// GLOBAL DAT_004e3f68 undefined4 *
// GLOBAL DAT_004e3f6c undefined4
// GLOBAL DAT_004e3f70 float
// GLOBAL DAT_004e3f74 float
// GLOBAL DAT_004e3f78 float
// GLOBAL DAT_004e3f7c int *
// GLOBAL DAT_004e3f80 undefined4 *
// GLOBAL DAT_004e3f84 undefined4
// GLOBAL DAT_004e3f88 int *
// GLOBAL DAT_004e40f8 float
// GLOBAL DAT_004e40fc uint
// GLOBAL DAT_004e4100 int *
// GLOBAL s_cState_EraseFall_004e3f48 string
// GLOBAL s_cState_EraseMove_004e3bec string
// GLOBAL s_cState_EraseStick_004e3c00 string
// GLOBAL s_cState_Fall_004e3c24 string
// GLOBAL s_cState_Move_004e3be0 string
// GLOBAL s_cState_Stick_004e3c14 string
// GLOBAL s_cState_Wait_004e3bd0 string

/* WARNING: Variable defined which should be unmapped: objStack_98 */

int func_004E3780(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  float fVar20;
  int iVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define objStack_98 ((uint *)(albw_frame + 0x8))
  #define local_58 (*(int *)(albw_frame + 0x48))
  #define local_54 (*(char * *)(albw_frame + 0x4c))
  #define local_4c (*(uint *)(albw_frame + 0x54))
  #define fStack_48 (*(float *)(albw_frame + 0x58))
  #define local_44 (*(undefined4 *)(albw_frame + 0x5c))
  piVar5 = func_00150E40(param_1,param_2);
  piVar8 = DAT_004e3bb0;
  piVar5[0x104] = DAT_004e3bb4;
  iVar11 = *piVar8;
  iVar17 = piVar8[1];
  piVar5[0x105] = (int)(piVar5 + 0x103);
  piVar5[0x106] = iVar11;
  piVar5[0x107] = iVar17;
  iVar11 = DAT_004e3bb8;
  *piVar5 = DAT_004e3bb8;
  piVar5[200] = iVar11 + 0x58;
  piVar5[0x103] = iVar11 + 0xbc;
  puVar6 = func_0010A794(piVar5 + 0x108);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[10] = 0;
  iVar11 = piVar8[0x25];
  puVar6[0xb] = piVar8[0x24];
  puVar6[0xc] = iVar11;
  uVar13 = DAT_004e3bbc;
  puVar6[0xd] = 0;
  puVar6[9] = uVar13;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  iVar11 = func_004EE484(puVar6 + 0x10);
  iVar15 = iVar11 + -0x460;
  *(undefined4 *)(iVar11 + 100) = 0;
  uVar18 = DAT_004e3bc8;
  uVar13 = DAT_004e3bc4;
  puVar6 = DAT_004e3bc0;
  uVar10 = DAT_004e3bc0[1];
  uVar12 = DAT_004e3bc0[2];
  uVar22 = CONCAT44(DAT_004e3bc4,DAT_004e3bc8);
  *(undefined4 *)(iVar11 + 0x68) = *DAT_004e3bc0;
  *(undefined4 *)(iVar11 + 0x6c) = uVar10;
  *(undefined4 *)(iVar11 + 0x70) = uVar12;
  uVar10 = puVar6[1];
  uVar12 = puVar6[2];
  *(undefined4 *)(iVar11 + 0x74) = *puVar6;
  *(undefined4 *)(iVar11 + 0x78) = uVar10;
  *(undefined4 *)(iVar11 + 0x7c) = uVar12;
  *(undefined1 *)(iVar11 + 0x80) = 0;
  *(undefined4 *)(iVar11 + 0x84) = 0;
  *(undefined4 *)(iVar11 + 0x88) = 0;
  *(undefined4 *)(iVar11 + 0x8c) = uVar13;
  uVar10 = puVar6[1];
  uVar12 = puVar6[2];
  *(undefined4 *)(iVar11 + 0x90) = *puVar6;
  *(undefined4 *)(iVar11 + 0x94) = uVar10;
  *(undefined4 *)(iVar11 + 0x98) = uVar12;
  *(undefined4 *)(iVar11 + 0x9c) = 0;
  *(undefined4 *)(iVar11 + 0xa4) = uVar18;
  *(undefined4 *)(iVar11 + 0xa8) = uVar18;
  *(undefined4 *)(iVar11 + 0xac) = 0;
  *(undefined4 *)(iVar11 + 0xb0) = 0;
  *(undefined4 *)(iVar11 + 0xb4) = 0;
  *(undefined4 *)(iVar11 + 0xb8) = 0;
  *(undefined4 *)(iVar11 + 0xbc) = uVar13;
  uVar13 = puVar6[1];
  uVar18 = puVar6[2];
  *(undefined4 *)(iVar11 + 0xc0) = *puVar6;
  *(undefined4 *)(iVar11 + 0xc4) = uVar13;
  *(undefined4 *)(iVar11 + 200) = uVar18;
  *(undefined1 *)(iVar11 + 0xcc) = 1;
  uVar13 = puVar6[1];
  uVar18 = puVar6[2];
  *(undefined4 *)(iVar11 + 0xd0) = *puVar6;
  *(undefined4 *)(iVar11 + 0xd4) = uVar13;
  *(undefined4 *)(iVar11 + 0xd8) = uVar18;
  *(undefined1 *)(iVar11 + 0xdc) = 0;
  *(undefined1 *)(iVar11 + 0xdd) = 0;
  uVar13 = puVar6[1];
  uVar18 = puVar6[2];
  *(undefined4 *)(iVar11 + 0xe0) = *puVar6;
  *(undefined4 *)(iVar11 + 0xe4) = uVar13;
  *(undefined4 *)(iVar11 + 0xe8) = uVar18;
  uVar13 = *puVar6;
  uVar18 = puVar6[1];
  *(undefined4 *)(iVar11 + 0xf4) = puVar6[2];
  *(undefined4 *)(iVar11 + 0xec) = uVar13;
  *(undefined4 *)(iVar11 + 0xf0) = uVar18;
  *(undefined1 *)(iVar11 + 0xf8) = 0;
  *(undefined1 *)(iVar11 + -0x3a) = 7;
  *(int *)(iVar11 + -0x2c) = iVar15;
  iVar17 = func_0010BA78(0x70);
  *(int *)(iVar11 + -0x28) = iVar17;
  *(uint *)(iVar11 + -0x24) = iVar17 + (uint)*(byte *)(iVar11 + -0x3a) * 8;
  iVar9 = 7;
  piVar5 = (int *)(iVar17 + -8);
  do {
    iVar17 = piVar8[0x23];
    iVar9 = iVar9 + -1;
    piVar5[2] = piVar8[0x22];
    piVar5[3] = iVar17;
    iVar17 = piVar8[0x23];
    piVar5[4] = piVar8[0x22];
    piVar5[5] = iVar17;
    piVar5 = piVar5 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)(iVar11 + -0x3a);
  uVar16 = (uint)bVar1;
  piVar5 = (int *)func_0010BA78(uVar16 << 3);
  *(int **)(iVar11 + -0x20) = piVar5;
  if (uVar16 != 0) {
    piVar7 = piVar5 + -2;
    if ((bVar1 & 1) != 0) {
      iVar17 = piVar8[7];
      *piVar5 = piVar8[6];
      piVar5[1] = iVar17;
      piVar7 = piVar5;
    }
    for (iVar17 = (int)uVar16 >> 1; iVar17 != 0; iVar17 = iVar17 + -1) {
      iVar9 = piVar8[7];
      piVar7[2] = piVar8[6];
      piVar7[3] = iVar9;
      iVar9 = piVar8[7];
      piVar7[4] = piVar8[6];
      piVar7[5] = iVar9;
      piVar7 = piVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x104,(int *)0x0,4);
  iVar17 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 7;
    iVar17 = func_00100118((int)(puVar6 + 2),DAT_004e3bcc,0x24,7);
  }
  if (iVar17 != 0) {
    *(undefined4 *)(iVar11 + -0x38) = 7;
    *(int *)(iVar11 + -0x34) = iVar17;
  }
  *(int *)(iVar11 + -0x10c) = iVar11 + -0x40;
  *(undefined2 *)(iVar11 + -0x106) = 7;
  iVar17 = DAT_004e3bdc;
  local_54 = s_cState_Wait_004e3bd0;
  local_58 = DAT_004e3bdc;
  func_0010BEC4(iVar11 + -0x40,0,&local_58);
  piVar8 = DAT_004e3bb0;
  piVar5 = *(int **)(iVar11 + -0x28);
  iVar9 = DAT_004e3bb0[3];
  iVar14 = DAT_004e3bb0[4];
  iVar19 = DAT_004e3bb0[5];
  uVar24 = *(undefined8 *)(DAT_004e3bb0 + 6);
  *piVar5 = DAT_004e3bb0[2];
  piVar5[1] = iVar9;
  piVar5 = *(int **)(iVar11 + -0x24);
  *piVar5 = iVar14;
  piVar5[1] = iVar19;
  puVar6 = *(undefined4 **)(iVar11 + -0x20);
  *puVar6 = (int)uVar24;
  puVar6[1] = (int)((ulonglong)uVar24 >> 0x20);
  local_54 = s_cState_Move_004e3be0;
  local_58 = iVar17;
  func_0010BEC4(iVar11 + -0x40,1,&local_58);
  iVar9 = *(int *)(iVar11 + -0x28);
  iVar14 = piVar8[9];
  iVar19 = piVar8[10];
  iVar21 = piVar8[0xb];
  *(int *)(iVar9 + 8) = piVar8[8];
  *(int *)(iVar9 + 0xc) = iVar14;
  iVar9 = *(int *)(iVar11 + -0x24);
  *(int *)(iVar9 + 8) = iVar19;
  *(int *)(iVar9 + 0xc) = iVar21;
  iVar9 = *(int *)(iVar11 + -0x20);
  *(int *)(iVar9 + 8) = (int)uVar24;
  *(int *)(iVar9 + 0xc) = (int)((ulonglong)uVar24 >> 0x20);
  local_54 = s_cState_EraseMove_004e3bec;
  local_58 = iVar17;
  func_0010BEC4(iVar11 + -0x40,2,&local_58);
  iVar9 = *(int *)(iVar11 + -0x28);
  iVar14 = piVar8[0xd];
  iVar21 = piVar8[0xe];
  iVar19 = piVar8[0xf];
  *(int *)(iVar9 + 0x10) = piVar8[0xc];
  *(int *)(iVar9 + 0x14) = iVar14;
  iVar9 = *(int *)(iVar11 + -0x24);
  *(int *)(iVar9 + 0x10) = iVar21;
  *(int *)(iVar9 + 0x14) = iVar19;
  iVar9 = *(int *)(iVar11 + -0x20);
  *(int *)(iVar9 + 0x10) = (int)uVar24;
  *(int *)(iVar9 + 0x14) = (int)((ulonglong)uVar24 >> 0x20);
  local_54 = s_cState_EraseStick_004e3c00;
  local_58 = iVar17;
  func_0010BEC4(iVar11 + -0x40,3,&local_58);
  iVar9 = *(int *)(iVar11 + -0x28);
  iVar14 = piVar8[0x11];
  iVar19 = piVar8[0x12];
  iVar21 = piVar8[0x13];
  *(int *)(iVar9 + 0x18) = piVar8[0x10];
  *(int *)(iVar9 + 0x1c) = iVar14;
  iVar9 = *(int *)(iVar11 + -0x24);
  *(int *)(iVar9 + 0x18) = iVar19;
  *(int *)(iVar9 + 0x1c) = iVar21;
  iVar9 = *(int *)(iVar11 + -0x20);
  *(int *)(iVar9 + 0x18) = (int)uVar24;
  *(int *)(iVar9 + 0x1c) = (int)((ulonglong)uVar24 >> 0x20);
  local_54 = s_cState_Stick_004e3c14;
  local_58 = iVar17;
  func_0010BEC4(iVar11 + -0x40,4,&local_58);
  iVar9 = *(int *)(iVar11 + -0x28);
  iVar14 = piVar8[0x15];
  iVar19 = piVar8[0x16];
  iVar21 = piVar8[0x17];
  *(int *)(iVar9 + 0x20) = piVar8[0x14];
  *(int *)(iVar9 + 0x24) = iVar14;
  iVar9 = *(int *)(iVar11 + -0x24);
  *(int *)(iVar9 + 0x20) = iVar19;
  *(int *)(iVar9 + 0x24) = iVar21;
  iVar9 = *(int *)(iVar11 + -0x20);
  *(int *)(iVar9 + 0x20) = (int)uVar24;
  *(int *)(iVar9 + 0x24) = (int)((ulonglong)uVar24 >> 0x20);
  local_54 = s_cState_Fall_004e3c24;
  local_58 = iVar17;
  func_0010BEC4(iVar11 + -0x40,5,&local_58);
  iVar9 = *(int *)(iVar11 + -0x28);
  iVar14 = piVar8[0x19];
  iVar19 = piVar8[0x1a];
  iVar21 = piVar8[0x1b];
  *(int *)(iVar9 + 0x28) = piVar8[0x18];
  *(int *)(iVar9 + 0x2c) = iVar14;
  iVar9 = *(int *)(iVar11 + -0x24);
  *(int *)(iVar9 + 0x28) = iVar19;
  *(int *)(iVar9 + 0x2c) = iVar21;
  iVar9 = *(int *)(iVar11 + -0x20);
  *(int *)(iVar9 + 0x28) = (int)uVar24;
  *(int *)(iVar9 + 0x2c) = (int)((ulonglong)uVar24 >> 0x20);
  local_54 = s_cState_EraseFall_004e3f48;
  local_58 = iVar17;
  func_0010BEC4(iVar11 + -0x40,6,&local_58);
  iVar9 = *(int *)(iVar11 + -0x28);
  iVar17 = piVar8[0x1d];
  iVar14 = piVar8[0x1e];
  iVar19 = piVar8[0x1f];
  *(int *)(iVar9 + 0x30) = piVar8[0x1c];
  *(int *)(iVar9 + 0x34) = iVar17;
  iVar17 = *(int *)(iVar11 + -0x24);
  *(int *)(iVar17 + 0x30) = iVar14;
  *(int *)(iVar17 + 0x34) = iVar19;
  iVar17 = *(int *)(iVar11 + -0x20);
  *(int *)(iVar17 + 0x30) = (int)uVar24;
  *(int *)(iVar17 + 0x34) = (int)((ulonglong)uVar24 >> 0x20);
  sVar2 = (short)param_2[10];
  puVar6 = (undefined4 *)func_0010BAB4(0x1c);
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[2] = DAT_004e3f5c;
    uVar13 = (undefined4)uVar22;
    *puVar6 = uVar13;
    puVar6[1] = (int)((ulonglong)uVar22 >> 0x20);
    puVar6[3] = uVar13;
    puVar6[4] = uVar13;
    puVar6[5] = 0;
    puVar6[6] = 0;
  }
  puVar3 = DAT_004e3f60;
  *(undefined4 **)(iVar11 + 0xb0) = puVar6;
  *(undefined4 *)(iVar11 + 0xd0) = *puVar3;
  *(undefined4 *)(iVar11 + 0xd4) = puVar3[1];
  *(undefined4 *)(iVar11 + 0xd8) = puVar3[2];
  puVar6 = (undefined4 *)func_0054D964(iVar15,0);
  if (((*DAT_004e3f64 & 1) == 0) && (iVar17 = func_00100174((int *)DAT_004e3f64), iVar17 != 0)) {
    *DAT_004e3f68 = DAT_004e3f6c;
  }
  if ((puVar6 == (undefined4 *)0x0) ||
     (iVar17 = (**(code **)*puVar6)(puVar6,DAT_004e3f68), iVar17 == 0)) {
    puVar6 = (undefined4 *)0x0;
  }
  *(undefined4 **)(iVar11 + -4) = puVar6;
  if (sVar2 == 0 || sVar2 == 4) {
    iVar17 = func_0054D89C(iVar15,0);
    *(int *)(iVar11 + -8) = iVar17;
    if (sVar2 == 0) {
      iVar17 = func_00520FC0();
      *(float *)(iVar11 + -0x8c) = *(float *)(iVar17 + 4) + DAT_004e3f74;
    }
    fVar20 = DAT_004e3f78;
    func_004D80A4(&fStack_48,*(uint *)(iVar11 + -0x78),DAT_004e3f78);
    local_44 = (undefined4)uVar22;
    func_00115C70((float *)(iVar11 + -0x90),(float *)(iVar11 + -0x90),&fStack_48);
    func_004D80A4((float *)(iVar11 + -0x84),*(uint *)(iVar11 + -0x78),fVar20);
    piVar8 = DAT_004e3f7c;
    *(int *)(iVar11 + -0x80) = (int)uVar22;
    iVar17 = *(int *)(*piVar8 + 0x10);
    if (sVar2 == 4) {
      iVar9 = func_0054DDF4(iVar15,1);
      *(int *)(iVar11 + -0xc0) = iVar9;
      *(int *)(iVar11 + -0xbc) = iVar9;
      uVar13 = func_005532B4(iVar17,0,*(ushort *)((int)param_2 + 0x2a) & 0xff,0);
    }
    else {
      uVar13 = *(undefined4 *)(iVar17 + 0x3c);
    }
LAB_004e3f18:
    func_002C2C9C(objStack_98,uVar13);
    piVar8 = func_002C2D00((int *)objStack_98);
    *(int **)(iVar11 + -0xc) = piVar8;
  }
  else {
    if (sVar2 == 1) {
      fVar23 = DAT_004e3f70;
      iVar17 = func_0054D89C(iVar15,1);
      puVar6 = DAT_004e3f80;
      *(int *)(iVar11 + -8) = iVar17;
      uVar13 = DAT_004e3f84;
      *(undefined4 *)(iVar11 + 0xd0) = *puVar6;
      *(undefined4 *)(iVar11 + 0xd4) = puVar6[1];
      *(undefined4 *)(iVar11 + 0xd8) = puVar6[2];
      *(undefined4 *)(iVar11 + 0xa8) = uVar13;
      fVar20 = ALBW_AS_F32(param_2[0x11]);
      if (ALBW_AS_F32(param_2[0x11]) == ALBW_AS_F32(uVar22)) {
        fVar20 = fVar23;
      }
      func_004D80A4((float *)(iVar11 + -0x84),*(uint *)(iVar11 + -0x78),fVar20);
      *(int *)(iVar11 + -0x80) = (int)uVar22;
      iVar17 = func_0054DDF4(iVar15,1);
      *(int *)(iVar11 + -0xc0) = iVar17;
      *(int *)(iVar11 + -0xbc) = iVar17;
      if (param_2[0x13] == 0) {
        uVar13 = *(undefined4 *)(*(int *)(*DAT_004e3f7c + 0x10) + 0x3c);
      }
      else {
        iVar17 = func_0052FBA0(*DAT_004e3f88 + 0x3dbbc,param_2[0x13]);
        if (iVar17 == 0) {
          *(undefined1 *)(iVar11 + -0x189) = 1;
          return iVar15;
        }
        if (*(int *)(iVar17 + 0x2d0) == 0) {
          *(undefined1 *)(iVar11 + -0x189) = 1;
          return iVar15;
        }
        iVar17 = *(int *)(*(int *)(iVar17 + 0x2d0) + 0x1c8);
        if (iVar17 == 0) goto LAB_004e3f30;
        uVar16 = (uint)(short)*(ushort *)((int)param_2 + 0x2a);
        if (uVar16 < *(uint *)(iVar17 + 200)) {
          uVar13 = *(undefined4 *)(*(int *)(iVar17 + 0xd0) + uVar16 * 4);
        }
        else {
          uVar13 = 0;
        }
      }
      goto LAB_004e3f18;
    }
    if (sVar2 != 2 && sVar2 != 3) goto LAB_004e403c;
    fVar20 = DAT_004e3f70;
    iVar17 = func_0054D89C(iVar15,0);
    *(int *)(iVar11 + -8) = iVar17;
    func_004D80A4((float *)(iVar11 + -0x84),*(uint *)(iVar11 + -0x78),fVar20);
    *(int *)(iVar11 + -0x80) = (int)uVar22;
    iVar17 = func_0054DDF4(iVar15,1);
    *(int *)(iVar11 + -0xc0) = iVar17;
    *(int *)(iVar11 + -0xbc) = iVar17;
    func_002C2C9C(objStack_98,*(undefined4 *)(*(int *)(*DAT_004e3f7c + 0x10) + 0x3c));
    piVar8 = func_002C2D00((int *)objStack_98);
    *(int **)(iVar11 + -0xc) = piVar8;
    if (sVar2 != 2) {
      func_004D80A4(&fStack_48,*(uint *)(iVar11 + -0x78),DAT_004e40f8);
      local_44 = (undefined4)uVar22;
      func_00115C70((float *)(iVar11 + -0x90),(float *)(iVar11 + -0x90),&fStack_48);
      func_0066A794((undefined4 *)(iVar11 + -0x40),0);
      goto LAB_004e403c;
    }
    *(undefined1 *)(iVar11 + 0xf8) = 1;
  }
LAB_004e3f30:
  func_0066A794((undefined4 *)(iVar11 + -0x40),1);
LAB_004e403c:
  *(undefined2 *)(*(int *)(iVar11 + -4) + 0x28) = 0xe0;
  iVar17 = *(int *)(iVar11 + -4);
  *(uint *)(iVar17 + 0x2c) = *(uint *)(iVar17 + 0x2c) | 0x2000;
  objStack_98[1] = iVar11 - 0x1c;
  iVar9 = DAT_004e3bb0[0x20];
  iVar17 = DAT_004e3bb0[0x21];
  *(int *)(iVar11 + -0x18) = iVar15;
  *(int *)(iVar11 + -0x14) = iVar9;
  *(int *)(iVar11 + -0x10) = iVar17;
  local_4c = *(uint *)(iVar11 + -0x194);
  objStack_98[0] = (uint)*(short *)(iVar11 + -0x40c);
  objStack_98[2] = DAT_004e40fc;
  uVar16 = objStack_98[2];
  (*(undefined2 *)((char *)&objStack_98[2] + 0)) = (undefined2)DAT_004e40fc;
  uVar4 = (undefined2)objStack_98[2];
  objStack_98[2] = uVar16;
  func_0014EB8C(iVar11,*(int *)(iVar11 + -4),*(undefined2 **)(iVar11 + -0xc0),&local_4c,
                *(short *)(iVar11 + -0x40c),objStack_98[1],uVar4);
  func_004D80A4((float *)(iVar11 + 0x24),param_2[8],ALBW_AS_F32(((ulonglong)uVar22 >> 0x20)));
  piVar8 = DAT_004e4100;
  *(int *)(iVar11 + 0x28) = (int)uVar22;
  if (*(char *)(*piVar8 + 0x18) == '\a' || *(char *)(*piVar8 + 0x18) == '%') {
    *(undefined2 *)(iVar11 + 0x30) = 2;
  }
  func_004E2030(iVar15);
  return iVar15;
}

