#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_0046A86C(undefined4 *param_1,int *param_2,int *param_3);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0066DF38(undefined4 *param_1,undefined1 param_2);
extern int DAT_0046c4a4;
extern int DAT_0046c4a8;
extern undefined1 *DAT_0046c4ac;
extern undefined4 DAT_0046c4b0;
extern undefined DAT_0046c4b4;
extern int DAT_0046c4b8;
extern undefined DAT_0046c4d4;
extern undefined4 *DAT_0046c4f0;
extern undefined4 *DAT_0046c4f4;
extern undefined *DAT_0046c4f8;
extern int *DAT_0046c9f8;
extern int *DAT_0046c9fc;
extern char s_InOutBtn_0046c4bc[];
extern char s_InOutWin_0046c4c8[];
extern char s_L_BtnL_00_0046c4d8[];
extern char s_L_BtnR_00_0046c4e4[];
extern char s_cState_BtnInCnt_0046c954[];
extern char s_cState_BtnInEnd_0046c9a4[];
extern char s_cState_BtnIn_0046c508[];
extern char s_cState_BtnOutCancel_0046c9d8[];
extern char s_cState_BtnOutCnt_0046c92c[];
extern char s_cState_BtnOutEnd_0046c990[];
extern char s_cState_End_0046c9ec[];
extern char s_cState_RentItemBack_0046c940[];
extern char s_cState_SelectCancel_0046c9c4[];
extern char s_cState_SelectCnt_0046c518[];
extern char s_cState_SelectDungeon_0046c964[];
extern char s_cState_SelectEnd_0046c918[];
extern char s_cState_SelectHome_0046c97c[];
extern char s_cState_SelectOK_0046c9b4[];
extern char s_cState_Wait_0046c4fc[];

// USA 0046C0FC <- EU 0046C0D4 (Ghidra, non-matching)
// GLOBAL DAT_0046c4a4 int
// GLOBAL DAT_0046c4a8 int
// GLOBAL DAT_0046c4ac undefined1 *
// GLOBAL DAT_0046c4b0 undefined4
// GLOBAL DAT_0046c4b4 undefined
// GLOBAL DAT_0046c4b8 int
// GLOBAL DAT_0046c4d4 undefined
// GLOBAL DAT_0046c4f0 undefined4 *
// GLOBAL DAT_0046c4f4 undefined4 *
// GLOBAL DAT_0046c4f8 undefined *
// GLOBAL DAT_0046c9f8 int *
// GLOBAL DAT_0046c9fc int *
// GLOBAL s_InOutBtn_0046c4bc string
// GLOBAL s_InOutWin_0046c4c8 string
// GLOBAL s_L_BtnL_00_0046c4d8 string
// GLOBAL s_L_BtnR_00_0046c4e4 string
// GLOBAL s_cState_BtnInCnt_0046c954 string
// GLOBAL s_cState_BtnInEnd_0046c9a4 string
// GLOBAL s_cState_BtnIn_0046c508 string
// GLOBAL s_cState_BtnOutCancel_0046c9d8 string
// GLOBAL s_cState_BtnOutCnt_0046c92c string
// GLOBAL s_cState_BtnOutEnd_0046c990 string
// GLOBAL s_cState_End_0046c9ec string
// GLOBAL s_cState_RentItemBack_0046c940 string
// GLOBAL s_cState_SelectCancel_0046c9c4 string
// GLOBAL s_cState_SelectCnt_0046c518 string
// GLOBAL s_cState_SelectDungeon_0046c964 string
// GLOBAL s_cState_SelectEnd_0046c918 string
// GLOBAL s_cState_SelectHome_0046c97c string
// GLOBAL s_cState_SelectOK_0046c9b4 string
// GLOBAL s_cState_Wait_0046c4fc string

int * func_0046C0FC(undefined4 *param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  piVar3 = func_004B9A10(param_1,3);
  iVar7 = DAT_0046c4a8;
  iVar15 = DAT_0046c4a4;
  piVar3[0xe] = DAT_0046c4a4 + 0x54;
  *piVar3 = iVar15;
  *(undefined2 *)(piVar3 + 0x1d) = 0;
  *(undefined2 *)((int)piVar3 + 0x76) = 0xffff;
  piVar3[0x1e] = iVar7;
  piVar3[0x1f] = 0;
  *(undefined2 *)(piVar3 + 0x20) = 0;
  *(undefined2 *)((int)piVar3 + 0x82) = 0xffff;
  piVar3[0x21] = iVar7;
  piVar3[0x22] = 0;
  *(undefined2 *)(piVar3 + 0x23) = 0;
  *(undefined2 *)((int)piVar3 + 0x8e) = 0xffff;
  piVar3[0x24] = iVar7;
  piVar3[0x25] = 0;
  puVar4 = func_0010A794(piVar3 + 0x26);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined1 *)(puVar4 + 0xb) = 0;
  *(undefined1 *)((int)puVar4 + 0x2d) = 0;
  *(undefined1 *)((int)puVar4 + 0x2e) = 0;
  piVar3 = puVar4 + -0x26;
  puVar4[0xc] = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x78);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_0017A520(puVar5,0x400,(int *)0x0,0);
  }
  puVar2 = DAT_0046c4ac;
  puVar4[0xd] = puVar6;
  uVar14 = DAT_0046c4b0;
  *puVar2 = 1;
  (**(code **)(*piVar3 + 0x38))(piVar3,uVar14,0);
  piVar12 = (int *)puVar4[-0x1f];
  func_0016773C((int)piVar12,4);
  iVar15 = DAT_0046c4b8;
  local_2c = &DAT_0046c4b4;
  local_30 = DAT_0046c4b8;
  func_00166C20(piVar12,0,&local_30,0);
  local_2c = s_InOutBtn_0046c4bc;
  local_30 = iVar15;
  func_00166C20(piVar12,1,&local_30,0);
  local_2c = s_InOutWin_0046c4c8;
  local_30 = iVar15;
  func_00166C20(piVar12,2,&local_30,0);
  local_2c = &DAT_0046c4d4;
  local_30 = iVar15;
  func_00166C20(piVar12,3,&local_30,0);
  puVar4[-0x1c] = piVar12;
  *(undefined2 *)((int)puVar4 + -0x76) = 0;
  *(undefined2 *)(puVar4 + -0x1e) = 0;
  puVar4[-7] = piVar12;
  *(undefined2 *)((int)puVar4 + -0x22) = 1;
  *(undefined2 *)(puVar4 + -9) = 0;
  puVar4[-4] = piVar12;
  *(undefined2 *)((int)puVar4 + -0x16) = 2;
  *(undefined2 *)(puVar4 + -6) = 0;
  puVar4[-1] = piVar12;
  *(undefined2 *)((int)puVar4 + -10) = 3;
  *(undefined2 *)(puVar4 + -3) = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x4c);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    local_2c = s_L_BtnL_00_0046c4d8;
    local_30 = iVar15;
    puVar6 = func_0046A86C(puVar6,piVar12,&local_30);
  }
  puVar4[9] = puVar6;
  puVar5 = (undefined4 *)func_0010BAB4(0x4c);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    local_2c = s_L_BtnR_00_0046c4e4;
    local_30 = iVar15;
    puVar6 = func_0046A86C(puVar5,piVar12,&local_30);
  }
  puVar4[10] = puVar6;
  puVar4[5] = piVar3;
  *(undefined1 *)((int)puVar4 + 6) = 0xf;
  iVar7 = func_0010BA78(0xf0);
  puVar6 = DAT_0046c4f0;
  puVar4[6] = iVar7;
  puVar4[7] = iVar7 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar8 = 0xf;
  puVar5 = (undefined4 *)(iVar7 + -8);
  do {
    uVar14 = DAT_0046c4f4[0x3f];
    iVar8 = iVar8 + -1;
    puVar5[2] = DAT_0046c4f4[0x3e];
    puVar5[3] = uVar14;
    uVar14 = puVar6[1];
    puVar5[4] = *puVar6;
    puVar5[5] = uVar14;
    puVar5 = puVar5 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar13 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar6 = DAT_0046c4f4;
  puVar4[8] = puVar5;
  if (uVar13 != 0) {
    puVar9 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar14 = puVar6[5];
      *puVar5 = puVar6[4];
      puVar5[1] = uVar14;
      puVar9 = puVar5;
    }
    for (iVar7 = (int)uVar13 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar14 = puVar6[5];
      puVar9[2] = puVar6[4];
      puVar9[3] = uVar14;
      uVar14 = puVar6[5];
      puVar9[4] = puVar6[4];
      puVar9[5] = uVar14;
      puVar9 = puVar9 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x224,(int *)0x0,4);
  iVar7 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 0xf;
    iVar7 = func_00100118((int)(puVar5 + 2),DAT_0046c4f8,0x24,0xf);
  }
  if (iVar7 != 0) {
    puVar4[3] = iVar7;
    puVar4[2] = 0xf;
  }
  local_2c = s_cState_Wait_0046c4fc;
  local_30 = iVar15;
  func_0010BEC4((int)puVar4,0,&local_30);
  puVar5 = (undefined4 *)puVar4[6];
  uVar14 = puVar6[2];
  uVar16 = puVar6[1];
  uVar17 = puVar6[3];
  uVar18 = *(undefined8 *)(puVar6 + 4);
  *puVar5 = *puVar6;
  puVar5[1] = uVar16;
  puVar5 = (undefined4 *)puVar4[7];
  *puVar5 = uVar14;
  puVar5[1] = uVar17;
  puVar5 = (undefined4 *)puVar4[8];
  *puVar5 = (int)uVar18;
  puVar5[1] = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_BtnIn_0046c508;
  local_30 = iVar15;
  func_0010BEC4((int)puVar4,1,&local_30);
  iVar7 = puVar4[6];
  uVar14 = puVar6[7];
  uVar16 = puVar6[8];
  uVar17 = puVar6[9];
  *(undefined4 *)(iVar7 + 8) = puVar6[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar14;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 8) = uVar16;
  *(undefined4 *)(iVar7 + 0xc) = uVar17;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 8) = (int)uVar18;
  *(int *)(iVar7 + 0xc) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_SelectCnt_0046c518;
  local_30 = iVar15;
  func_0010BEC4((int)puVar4,2,&local_30);
  iVar7 = puVar4[6];
  uVar14 = puVar6[0xc];
  uVar17 = puVar6[0xd];
  uVar16 = puVar6[0xb];
  *(undefined4 *)(iVar7 + 0x10) = puVar6[10];
  *(undefined4 *)(iVar7 + 0x14) = uVar16;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar14;
  *(undefined4 *)(iVar7 + 0x14) = uVar17;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x10) = (int)uVar18;
  *(int *)(iVar7 + 0x14) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_SelectEnd_0046c918;
  local_30 = iVar15;
  func_0010BEC4((int)puVar4,3,&local_30);
  iVar7 = puVar4[6];
  uVar14 = puVar6[0xf];
  uVar16 = puVar6[0x10];
  uVar17 = puVar6[0x11];
  *(undefined4 *)(iVar7 + 0x18) = puVar6[0xe];
  *(undefined4 *)(iVar7 + 0x1c) = uVar14;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar16;
  *(undefined4 *)(iVar7 + 0x1c) = uVar17;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x18) = (int)uVar18;
  *(int *)(iVar7 + 0x1c) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_BtnOutCnt_0046c92c;
  local_30 = iVar15;
  func_0010BEC4((int)puVar4,4,&local_30);
  iVar7 = puVar4[6];
  uVar14 = puVar6[0x14];
  uVar16 = puVar6[0x15];
  uVar17 = puVar6[0x13];
  *(undefined4 *)(iVar7 + 0x20) = puVar6[0x12];
  *(undefined4 *)(iVar7 + 0x24) = uVar17;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x20) = uVar14;
  *(undefined4 *)(iVar7 + 0x24) = uVar16;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x20) = (int)uVar18;
  *(int *)(iVar7 + 0x24) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_RentItemBack_0046c940;
  local_30 = iVar15;
  func_0010BEC4((int)puVar4,5,&local_30);
  iVar7 = puVar4[6];
  uVar14 = puVar6[0x17];
  uVar16 = puVar6[0x18];
  uVar17 = puVar6[0x19];
  *(undefined4 *)(iVar7 + 0x28) = puVar6[0x16];
  *(undefined4 *)(iVar7 + 0x2c) = uVar14;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x28) = uVar16;
  *(undefined4 *)(iVar7 + 0x2c) = uVar17;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x28) = (int)uVar18;
  *(int *)(iVar7 + 0x2c) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_BtnInCnt_0046c954;
  local_30 = iVar15;
  func_0010BEC4((int)puVar4,6,&local_30);
  iVar7 = puVar4[6];
  uVar14 = puVar6[0x1b];
  uVar16 = puVar6[0x1c];
  uVar17 = puVar6[0x1d];
  *(undefined4 *)(iVar7 + 0x30) = puVar6[0x1a];
  *(undefined4 *)(iVar7 + 0x34) = uVar14;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x30) = uVar16;
  *(undefined4 *)(iVar7 + 0x34) = uVar17;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x30) = (int)uVar18;
  *(int *)(iVar7 + 0x34) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_SelectDungeon_0046c964;
  local_30 = iVar15;
  func_0010BEC4((int)puVar4,7,&local_30);
  iVar7 = puVar4[6];
  uVar14 = puVar6[0x20];
  uVar17 = puVar6[0x21];
  uVar16 = puVar6[0x1f];
  *(undefined4 *)(iVar7 + 0x38) = puVar6[0x1e];
  *(undefined4 *)(iVar7 + 0x3c) = uVar16;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x38) = uVar14;
  *(undefined4 *)(iVar7 + 0x3c) = uVar17;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x38) = (int)uVar18;
  *(int *)(iVar7 + 0x3c) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_SelectHome_0046c97c;
  local_30 = iVar15;
  func_0010BEC4((int)puVar4,8,&local_30);
  iVar7 = puVar4[6];
  uVar14 = puVar6[0x23];
  uVar17 = puVar6[0x24];
  uVar16 = puVar6[0x25];
  *(undefined4 *)(iVar7 + 0x40) = puVar6[0x22];
  *(undefined4 *)(iVar7 + 0x44) = uVar14;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x40) = uVar17;
  *(undefined4 *)(iVar7 + 0x44) = uVar16;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x40) = (int)uVar18;
  *(int *)(iVar7 + 0x44) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_BtnOutEnd_0046c990;
  local_30 = iVar15;
  func_0010BEC4((int)puVar4,9,&local_30);
  iVar7 = puVar4[6];
  uVar16 = puVar6[0x27];
  uVar14 = puVar6[0x28];
  uVar17 = puVar6[0x29];
  *(undefined4 *)(iVar7 + 0x48) = puVar6[0x26];
  *(undefined4 *)(iVar7 + 0x4c) = uVar16;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x48) = uVar14;
  *(undefined4 *)(iVar7 + 0x4c) = uVar17;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x48) = (int)uVar18;
  *(int *)(iVar7 + 0x4c) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_BtnInEnd_0046c9a4;
  local_30 = iVar15;
  func_0010BEC4((int)puVar4,10,&local_30);
  iVar7 = puVar4[6];
  uVar16 = puVar6[0x2b];
  uVar14 = puVar6[0x2c];
  uVar17 = puVar6[0x2d];
  *(undefined4 *)(iVar7 + 0x50) = puVar6[0x2a];
  *(undefined4 *)(iVar7 + 0x54) = uVar16;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x50) = uVar14;
  *(undefined4 *)(iVar7 + 0x54) = uVar17;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x50) = (int)uVar18;
  *(int *)(iVar7 + 0x54) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_SelectOK_0046c9b4;
  local_30 = iVar15;
  func_0010BEC4((int)puVar4,0xb,&local_30);
  iVar7 = puVar4[6];
  uVar14 = puVar6[0x2f];
  uVar17 = puVar6[0x30];
  uVar16 = puVar6[0x31];
  *(undefined4 *)(iVar7 + 0x58) = puVar6[0x2e];
  *(undefined4 *)(iVar7 + 0x5c) = uVar14;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x58) = uVar17;
  *(undefined4 *)(iVar7 + 0x5c) = uVar16;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x58) = (int)uVar18;
  *(int *)(iVar7 + 0x5c) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_SelectCancel_0046c9c4;
  local_30 = iVar15;
  func_0010BEC4((int)puVar4,0xc,&local_30);
  iVar7 = puVar4[6];
  uVar14 = puVar6[0x33];
  uVar17 = puVar6[0x34];
  uVar16 = puVar6[0x35];
  *(undefined4 *)(iVar7 + 0x60) = puVar6[0x32];
  *(undefined4 *)(iVar7 + 100) = uVar14;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x60) = uVar17;
  *(undefined4 *)(iVar7 + 100) = uVar16;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x60) = (int)uVar18;
  *(int *)(iVar7 + 100) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_BtnOutCancel_0046c9d8;
  local_30 = iVar15;
  func_0010BEC4((int)puVar4,0xd,&local_30);
  iVar7 = puVar4[6];
  uVar14 = puVar6[0x38];
  uVar16 = puVar6[0x39];
  uVar17 = puVar6[0x37];
  *(undefined4 *)(iVar7 + 0x68) = puVar6[0x36];
  *(undefined4 *)(iVar7 + 0x6c) = uVar17;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x68) = uVar14;
  *(undefined4 *)(iVar7 + 0x6c) = uVar16;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x68) = (int)uVar18;
  *(int *)(iVar7 + 0x6c) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_End_0046c9ec;
  local_30 = iVar15;
  func_0010BEC4((int)puVar4,0xe,&local_30);
  iVar15 = puVar4[6];
  uVar16 = puVar6[0x3b];
  uVar14 = puVar6[0x3c];
  uVar17 = puVar6[0x3d];
  *(undefined4 *)(iVar15 + 0x70) = puVar6[0x3a];
  *(undefined4 *)(iVar15 + 0x74) = uVar16;
  iVar15 = puVar4[7];
  *(undefined4 *)(iVar15 + 0x70) = uVar14;
  *(undefined4 *)(iVar15 + 0x74) = uVar17;
  iVar15 = puVar4[8];
  *(int *)(iVar15 + 0x70) = (int)uVar18;
  *(int *)(iVar15 + 0x74) = (int)((ulonglong)uVar18 >> 0x20);
  func_0066DF38(puVar4,0);
  piVar10 = (int *)func_005229AC((int *)puVar4[-0x1f],DAT_0046c9f8);
  piVar12 = DAT_0046c9fc;
  if (piVar10 != (int *)0x0) {
    piVar11 = (int *)(**(code **)(*piVar10 + 8))(piVar10);
    do {
      if (piVar11 == piVar12) goto LAB_0046ca28;
      piVar11 = (int *)*piVar11;
    } while (piVar11 != (int *)0x0);
  }
  piVar10 = (int *)0x0;
LAB_0046ca28:
  puVar4[0xc] = piVar10;
  if (piVar10 != (int *)0x0) {
    puVar6 = (undefined4 *)puVar4[0xd];
    *puVar6 = piVar10 + 0x45;
    piVar10[0x4a] = (int)puVar6;
  }
  *(undefined1 *)((int)puVar4 + -0x89) = 0x11;
  *puVar2 = 0;
  return piVar3;
}

