#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_00428DAC(undefined4 *param_1);
extern int func_004B948C(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int DAT_0044569c;
extern undefined *DAT_004456a0;
extern int DAT_004456a4;
extern undefined4 *DAT_004456a8;
extern undefined *DAT_004456ac;
extern int DAT_004456bc;
extern char s_cState_End_00445720[];
extern char s_cState_Interval_004456f0[];
extern char s_cState_Intro_004456d0[];
extern char s_cState_Outro_00445710[];
extern char s_cState_Rights_00445700[];
extern char s_cState_Staff_004456e0[];
extern char s_cState_Title_004456c0[];
extern char s_cState_Wait_004456b0[];

// USA 00445280 <- EU 00445258 (Ghidra, non-matching)
// GLOBAL DAT_0044569c int
// GLOBAL DAT_004456a0 undefined *
// GLOBAL DAT_004456a4 int
// GLOBAL DAT_004456a8 undefined4 *
// GLOBAL DAT_004456ac undefined *
// GLOBAL DAT_004456bc int
// GLOBAL s_cState_End_00445720 string
// GLOBAL s_cState_Interval_004456f0 string
// GLOBAL s_cState_Intro_004456d0 string
// GLOBAL s_cState_Outro_00445710 string
// GLOBAL s_cState_Rights_00445700 string
// GLOBAL s_cState_Staff_004456e0 string
// GLOBAL s_cState_Title_004456c0 string
// GLOBAL s_cState_Wait_004456b0 string

int func_00445280(undefined4 *param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  piVar2 = func_004B9A10(param_1,0);
  iVar4 = DAT_0044569c;
  *piVar2 = DAT_0044569c;
  piVar2[0xe] = iVar4 + 0x54;
  puVar3 = func_0010A794(piVar2 + 0x1d);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  piVar2 = func_00428DAC(puVar3 + 9);
  iVar4 = func_00100118((int)(piVar2 + 0xb),DAT_004456a0,0x54,0xc);
  iVar9 = iVar4 + -0xc4;
  puVar5 = (undefined4 *)func_0010BAB4(0x78);
  puVar3 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar3 = func_0017A520(puVar5,0x400,(int *)0x0,0);
  }
  iVar8 = DAT_004456a4;
  *(undefined4 **)(iVar4 + 0x3f0) = puVar3;
  *(undefined2 *)(iVar8 + iVar9) = 0;
  *(undefined1 *)(iVar4 + 0x3f6) = 0;
  *(undefined1 *)(iVar4 + 0x3f7) = 0;
  *(undefined1 *)(iVar4 + 0x3f8) = 0;
  *(undefined1 *)(iVar4 + 0x3f9) = 0;
  func_004B948C(iVar9,iVar4 + -0x2c);
  uVar10 = 0;
  do {
    iVar8 = iVar4;
    if (uVar10 < 0xc) {
      iVar8 = iVar4 + uVar10 * 0x54;
    }
    func_004B948C(iVar9,iVar8);
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0xc);
  *(int *)(iVar4 + -0x3c) = iVar9;
  *(undefined1 *)(iVar4 + -0x4a) = 8;
  iVar8 = func_0010BA78(0x80);
  puVar3 = DAT_004456a8;
  *(int *)(iVar4 + -0x38) = iVar8;
  *(uint *)(iVar4 + -0x34) = iVar8 + (uint)*(byte *)(iVar4 + -0x4a) * 8;
  iVar6 = 8;
  puVar5 = (undefined4 *)(iVar8 + -8);
  do {
    uVar11 = puVar3[0x23];
    iVar6 = iVar6 + -1;
    puVar5[2] = puVar3[0x22];
    puVar5[3] = uVar11;
    uVar11 = puVar3[0x23];
    puVar5[4] = puVar3[0x22];
    puVar5[5] = uVar11;
    puVar5 = puVar5 + 4;
  } while (iVar6 != 0);
  bVar1 = *(byte *)(iVar4 + -0x4a);
  uVar10 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar10 << 3);
  *(undefined4 **)(iVar4 + -0x30) = puVar5;
  if (uVar10 != 0) {
    puVar7 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = puVar3[5];
      *puVar5 = puVar3[4];
      puVar5[1] = uVar11;
      puVar7 = puVar5;
    }
    for (iVar8 = (int)uVar10 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar11 = puVar3[5];
      puVar7[2] = puVar3[4];
      puVar7[3] = uVar11;
      uVar11 = puVar3[5];
      puVar7[4] = puVar3[4];
      puVar7[5] = uVar11;
      puVar7 = puVar7 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x128,(int *)0x0,4);
  iVar8 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 8;
    iVar8 = func_00100118((int)(puVar5 + 2),DAT_004456ac,0x24,8);
  }
  if (iVar8 != 0) {
    *(int *)(iVar4 + -0x44) = iVar8;
    *(undefined4 *)(iVar4 + -0x48) = 8;
  }
  iVar8 = DAT_004456bc;
  local_24 = s_cState_Wait_004456b0;
  local_28 = DAT_004456bc;
  func_0010BEC4(iVar4 + -0x50,0,&local_28);
  puVar5 = *(undefined4 **)(iVar4 + -0x38);
  uVar11 = puVar3[1];
  uVar12 = puVar3[2];
  uVar13 = puVar3[3];
  uVar14 = *(undefined8 *)(puVar3 + 4);
  *puVar5 = *puVar3;
  puVar5[1] = uVar11;
  puVar5 = *(undefined4 **)(iVar4 + -0x34);
  *puVar5 = uVar12;
  puVar5[1] = uVar13;
  puVar5 = *(undefined4 **)(iVar4 + -0x30);
  *puVar5 = (int)uVar14;
  puVar5[1] = (int)((ulonglong)uVar14 >> 0x20);
  local_24 = s_cState_Title_004456c0;
  local_28 = iVar8;
  func_0010BEC4(iVar4 + -0x50,1,&local_28);
  iVar6 = *(int *)(iVar4 + -0x38);
  uVar12 = puVar3[7];
  uVar13 = puVar3[8];
  uVar11 = puVar3[9];
  *(undefined4 *)(iVar6 + 8) = puVar3[6];
  *(undefined4 *)(iVar6 + 0xc) = uVar12;
  iVar6 = *(int *)(iVar4 + -0x34);
  *(undefined4 *)(iVar6 + 8) = uVar13;
  *(undefined4 *)(iVar6 + 0xc) = uVar11;
  iVar6 = *(int *)(iVar4 + -0x30);
  *(int *)(iVar6 + 8) = (int)uVar14;
  *(int *)(iVar6 + 0xc) = (int)((ulonglong)uVar14 >> 0x20);
  local_24 = s_cState_Intro_004456d0;
  local_28 = iVar8;
  func_0010BEC4(iVar4 + -0x50,2,&local_28);
  iVar6 = *(int *)(iVar4 + -0x38);
  uVar11 = puVar3[0xb];
  uVar12 = puVar3[0xc];
  uVar13 = puVar3[0xd];
  *(undefined4 *)(iVar6 + 0x10) = puVar3[10];
  *(undefined4 *)(iVar6 + 0x14) = uVar11;
  iVar6 = *(int *)(iVar4 + -0x34);
  *(undefined4 *)(iVar6 + 0x10) = uVar12;
  *(undefined4 *)(iVar6 + 0x14) = uVar13;
  iVar6 = *(int *)(iVar4 + -0x30);
  *(int *)(iVar6 + 0x10) = (int)uVar14;
  *(int *)(iVar6 + 0x14) = (int)((ulonglong)uVar14 >> 0x20);
  local_24 = s_cState_Staff_004456e0;
  local_28 = iVar8;
  func_0010BEC4(iVar4 + -0x50,3,&local_28);
  iVar6 = *(int *)(iVar4 + -0x38);
  uVar11 = puVar3[0xf];
  uVar12 = puVar3[0x10];
  uVar13 = puVar3[0x11];
  *(undefined4 *)(iVar6 + 0x18) = puVar3[0xe];
  *(undefined4 *)(iVar6 + 0x1c) = uVar11;
  iVar6 = *(int *)(iVar4 + -0x34);
  *(undefined4 *)(iVar6 + 0x18) = uVar12;
  *(undefined4 *)(iVar6 + 0x1c) = uVar13;
  iVar6 = *(int *)(iVar4 + -0x30);
  *(int *)(iVar6 + 0x18) = (int)uVar14;
  *(int *)(iVar6 + 0x1c) = (int)((ulonglong)uVar14 >> 0x20);
  local_24 = s_cState_Interval_004456f0;
  local_28 = iVar8;
  func_0010BEC4(iVar4 + -0x50,4,&local_28);
  iVar6 = *(int *)(iVar4 + -0x38);
  uVar11 = puVar3[0x13];
  uVar12 = puVar3[0x14];
  uVar13 = puVar3[0x15];
  *(undefined4 *)(iVar6 + 0x20) = puVar3[0x12];
  *(undefined4 *)(iVar6 + 0x24) = uVar11;
  iVar6 = *(int *)(iVar4 + -0x34);
  *(undefined4 *)(iVar6 + 0x20) = uVar12;
  *(undefined4 *)(iVar6 + 0x24) = uVar13;
  iVar6 = *(int *)(iVar4 + -0x30);
  *(int *)(iVar6 + 0x20) = (int)uVar14;
  *(int *)(iVar6 + 0x24) = (int)((ulonglong)uVar14 >> 0x20);
  local_24 = s_cState_Rights_00445700;
  local_28 = iVar8;
  func_0010BEC4(iVar4 + -0x50,5,&local_28);
  iVar6 = *(int *)(iVar4 + -0x38);
  uVar11 = puVar3[0x17];
  uVar12 = puVar3[0x18];
  uVar13 = puVar3[0x19];
  *(undefined4 *)(iVar6 + 0x28) = puVar3[0x16];
  *(undefined4 *)(iVar6 + 0x2c) = uVar11;
  iVar6 = *(int *)(iVar4 + -0x34);
  *(undefined4 *)(iVar6 + 0x28) = uVar12;
  *(undefined4 *)(iVar6 + 0x2c) = uVar13;
  iVar6 = *(int *)(iVar4 + -0x30);
  *(int *)(iVar6 + 0x28) = (int)uVar14;
  *(int *)(iVar6 + 0x2c) = (int)((ulonglong)uVar14 >> 0x20);
  local_24 = s_cState_Outro_00445710;
  local_28 = iVar8;
  func_0010BEC4(iVar4 + -0x50,6,&local_28);
  iVar6 = *(int *)(iVar4 + -0x38);
  uVar13 = puVar3[0x1b];
  uVar11 = puVar3[0x1c];
  uVar12 = puVar3[0x1d];
  *(undefined4 *)(iVar6 + 0x30) = puVar3[0x1a];
  *(undefined4 *)(iVar6 + 0x34) = uVar13;
  iVar6 = *(int *)(iVar4 + -0x34);
  *(undefined4 *)(iVar6 + 0x30) = uVar11;
  *(undefined4 *)(iVar6 + 0x34) = uVar12;
  iVar6 = *(int *)(iVar4 + -0x30);
  *(int *)(iVar6 + 0x30) = (int)uVar14;
  *(int *)(iVar6 + 0x34) = (int)((ulonglong)uVar14 >> 0x20);
  local_24 = s_cState_End_00445720;
  local_28 = iVar8;
  func_0010BEC4(iVar4 + -0x50,7,&local_28);
  iVar8 = *(int *)(iVar4 + -0x38);
  uVar11 = puVar3[0x1f];
  uVar12 = puVar3[0x20];
  uVar13 = puVar3[0x21];
  *(undefined4 *)(iVar8 + 0x38) = puVar3[0x1e];
  *(undefined4 *)(iVar8 + 0x3c) = uVar11;
  iVar8 = *(int *)(iVar4 + -0x34);
  *(undefined4 *)(iVar8 + 0x38) = uVar12;
  *(undefined4 *)(iVar8 + 0x3c) = uVar13;
  iVar4 = *(int *)(iVar4 + -0x30);
  *(int *)(iVar4 + 0x38) = (int)uVar14;
  *(int *)(iVar4 + 0x3c) = (int)((ulonglong)uVar14 >> 0x20);
  return iVar9;
}

