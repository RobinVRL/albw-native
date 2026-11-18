#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_001D656C(int param_1);
extern int func_0037D530(int param_1,uint param_2,float *param_3);
extern int func_0037D86C(undefined4 *param_1,uint *param_2);
extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065C988(undefined4 *param_1,undefined1 param_2);
extern int DAT_001d7edc;
extern undefined4 DAT_001d7ee0;
extern undefined4 DAT_001d7ee4;
extern undefined4 DAT_001d7ee8;
extern undefined4 DAT_001d7eec;
extern undefined4 *DAT_001d7ef0;
extern undefined4 DAT_001d7ef4;
extern undefined4 *DAT_001d7ef8;
extern undefined *DAT_001d7efc;
extern int DAT_001d7f10;
extern int *DAT_001d8654;
extern char s_cState_Blow_001d7f14[];
extern char s_cState_Bound_001d7f00[];
extern char s_cState_Carry_001d7f38[];
extern char s_cState_Erase_001d83d0[];
extern char s_cState_Fall_001d7f20[];
extern char s_cState_FloorBreak_001d8360[];
extern char s_cState_GetDemo_001d8328[];
extern char s_cState_HappyLake_001d8398[];
extern char s_cState_Ku_001d838c[];
extern char s_cState_Rock_001d831c[];
extern char s_cState_RupeeFountain_001d83b8[];
extern char s_cState_RuralColosseum_001d8374[];
extern char s_cState_RuralStadium_001d834c[];
extern char s_cState_Shrink_001d830c[];
extern char s_cState_Stop_001d7f2c[];
extern char s_cState_TreasureBox_001d8338[];
extern char s_cState_Tree_001d83ac[];
extern char s_cState_WaterFloat_001d82f8[];

// USA 001D7B04 <- EU 001D7B04 (Ghidra, non-matching)
// GLOBAL DAT_001d7edc int
// GLOBAL DAT_001d7ee0 undefined4
// GLOBAL DAT_001d7ee4 undefined4
// GLOBAL DAT_001d7ee8 undefined4
// GLOBAL DAT_001d7eec undefined4
// GLOBAL DAT_001d7ef0 undefined4 *
// GLOBAL DAT_001d7ef4 undefined4
// GLOBAL DAT_001d7ef8 undefined4 *
// GLOBAL DAT_001d7efc undefined *
// GLOBAL DAT_001d7f10 int
// GLOBAL DAT_001d8654 int *
// GLOBAL s_cState_Blow_001d7f14 string
// GLOBAL s_cState_Bound_001d7f00 string
// GLOBAL s_cState_Carry_001d7f38 string
// GLOBAL s_cState_Erase_001d83d0 string
// GLOBAL s_cState_Fall_001d7f20 string
// GLOBAL s_cState_FloorBreak_001d8360 string
// GLOBAL s_cState_GetDemo_001d8328 string
// GLOBAL s_cState_HappyLake_001d8398 string
// GLOBAL s_cState_Ku_001d838c string
// GLOBAL s_cState_Rock_001d831c string
// GLOBAL s_cState_RupeeFountain_001d83b8 string
// GLOBAL s_cState_RuralColosseum_001d8374 string
// GLOBAL s_cState_RuralStadium_001d834c string
// GLOBAL s_cState_Shrink_001d830c string
// GLOBAL s_cState_Stop_001d7f2c string
// GLOBAL s_cState_TreasureBox_001d8338 string
// GLOBAL s_cState_Tree_001d83ac string
// GLOBAL s_cState_WaterFloat_001d82f8 string

/* WARNING: Variable defined which should be unmapped: objStack_50 */

undefined4 * func_001D7B04(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  #define local_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x24))
  #define local_28 (*(uint * *)(albw_frame + 0x28))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar4 = func_0037D86C(param_1,param_2);
  iVar6 = DAT_001d7edc;
  *piVar4 = DAT_001d7edc;
  piVar4[200] = iVar6 + 100;
  puVar5 = func_0010A794(piVar4 + 0x135);
  puVar5[5] = 0;
  uVar10 = DAT_001d7ee0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  uVar17 = DAT_001d7ee4;
  puVar5[8] = 0;
  puVar5[10] = uVar10;
  puVar5[0xb] = uVar17;
  puVar5[9] = 0;
  uVar17 = DAT_001d7eec;
  puVar5[0xc] = DAT_001d7eec;
  puVar5[0xd] = uVar17;
  puVar5[0xe] = uVar17;
  puVar5[0xf] = 1;
  puVar2 = DAT_001d7ef0;
  *(undefined1 *)(puVar5 + 0x10) = 0;
  *(undefined1 *)((int)puVar5 + 0x41) = 0;
  *(undefined1 *)((int)puVar5 + 0x42) = 0;
  puVar5[0x11] = 0;
  uVar10 = *puVar2;
  uVar12 = puVar2[1];
  puVar5[0x13] = puVar5 + -0x135;
  puVar5[0x14] = uVar10;
  puVar5[0x15] = uVar12;
  uVar10 = DAT_001d7ee8;
  puVar14 = puVar5 + -0x135;
  puVar5[0x12] = DAT_001d7ef4;
  puVar7 = DAT_001d7ef8;
  *(undefined1 *)(puVar5 + 0x16) = 0;
  *(undefined1 *)((int)puVar5 + 0x59) = 0;
  *(undefined1 *)((int)puVar5 + 0x5a) = 0;
  uVar12 = *puVar7;
  uVar13 = puVar7[1];
  puVar5[0x19] = puVar7[2];
  puVar5[0x17] = uVar12;
  puVar5[0x18] = uVar13;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x1b] = uVar17;
  puVar5[0x1c] = uVar17;
  puVar5[0x1d] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1f] = uVar10;
  *(undefined1 *)(puVar5 + 0x20) = 0;
  *(undefined1 *)((int)puVar5 + 0x81) = 0;
  *(undefined1 *)((int)puVar5 + 0x82) = 0;
  iVar6 = func_0054D89C((int)puVar14,0);
  puVar5[-0x31] = iVar6;
  objStack_50[0] = 1;
  objStack_50[1] = 0;
  objStack_50[2] = 0;
  uVar10 = func_0014E428((int)puVar14,1,0,0,1,0,0);
  puVar5[-0x32] = uVar10;
  *(undefined1 *)((int)puVar5 + 6) = 0x12;
  puVar5[5] = puVar14;
  iVar6 = func_0010BA78(0x120);
  puVar5[6] = iVar6;
  puVar5[7] = iVar6 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar11 = 0x12;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar10 = DAT_001d7ef0[0x4d];
    iVar11 = iVar11 + -1;
    puVar7[2] = DAT_001d7ef0[0x4c];
    puVar7[3] = uVar10;
    uVar10 = puVar2[0x4d];
    puVar7[4] = puVar2[0x4c];
    puVar7[5] = uVar10;
    puVar7 = puVar7 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar15 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar5[8] = puVar7;
  if (uVar15 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = puVar2[7];
      *puVar7 = puVar2[6];
      puVar7[1] = uVar10;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar15 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar10 = puVar2[7];
      puVar8[2] = puVar2[6];
      puVar8[3] = uVar10;
      uVar10 = puVar2[7];
      puVar8[4] = puVar2[6];
      puVar8[5] = uVar10;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x290,(int *)0x0,4);
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 0x12;
    iVar6 = func_00100118((int)(puVar7 + 2),DAT_001d7efc,0x24,0x12);
  }
  if (iVar6 != 0) {
    puVar5[3] = iVar6;
    puVar5[2] = 0x12;
  }
  puVar5[-0x60] = puVar5;
  *(undefined2 *)((int)puVar5 + -0x17a) = 0x12;
  iVar6 = DAT_001d7f10;
  local_3c = s_cState_Bound_001d7f00;
  local_40 = DAT_001d7f10;
  func_0010BEC4((int)puVar5,0,&local_40);
  puVar7 = (undefined4 *)puVar5[6];
  uVar10 = puVar2[3];
  uVar17 = puVar2[4];
  uVar12 = puVar2[5];
  uVar18 = *(undefined8 *)(puVar2 + 6);
  *puVar7 = puVar2[2];
  puVar7[1] = uVar10;
  puVar7 = (undefined4 *)puVar5[7];
  *puVar7 = uVar17;
  puVar7[1] = uVar12;
  puVar7 = (undefined4 *)puVar5[8];
  *puVar7 = (int)uVar18;
  puVar7[1] = (int)((ulonglong)uVar18 >> 0x20);
  local_3c = s_cState_Blow_001d7f14;
  local_40 = iVar6;
  func_0010BEC4((int)puVar5,1,&local_40);
  iVar11 = puVar5[6];
  uVar10 = puVar2[9];
  uVar17 = puVar2[10];
  uVar12 = puVar2[0xb];
  *(undefined4 *)(iVar11 + 8) = puVar2[8];
  *(undefined4 *)(iVar11 + 0xc) = uVar10;
  iVar11 = puVar5[7];
  *(undefined4 *)(iVar11 + 8) = uVar17;
  *(undefined4 *)(iVar11 + 0xc) = uVar12;
  iVar11 = puVar5[8];
  *(int *)(iVar11 + 8) = (int)uVar18;
  *(int *)(iVar11 + 0xc) = (int)((ulonglong)uVar18 >> 0x20);
  local_3c = s_cState_Fall_001d7f20;
  local_40 = iVar6;
  func_0010BEC4((int)puVar5,2,&local_40);
  iVar11 = puVar5[6];
  uVar10 = puVar2[0xd];
  uVar17 = puVar2[0xe];
  uVar12 = puVar2[0xf];
  *(undefined4 *)(iVar11 + 0x10) = puVar2[0xc];
  *(undefined4 *)(iVar11 + 0x14) = uVar10;
  iVar11 = puVar5[7];
  *(undefined4 *)(iVar11 + 0x10) = uVar17;
  *(undefined4 *)(iVar11 + 0x14) = uVar12;
  iVar11 = puVar5[8];
  *(int *)(iVar11 + 0x10) = (int)uVar18;
  *(int *)(iVar11 + 0x14) = (int)((ulonglong)uVar18 >> 0x20);
  local_3c = s_cState_Stop_001d7f2c;
  local_40 = iVar6;
  func_0010BEC4((int)puVar5,3,&local_40);
  iVar11 = puVar5[6];
  uVar10 = puVar2[0x11];
  uVar17 = puVar2[0x12];
  uVar12 = puVar2[0x13];
  *(undefined4 *)(iVar11 + 0x18) = puVar2[0x10];
  *(undefined4 *)(iVar11 + 0x1c) = uVar10;
  iVar11 = puVar5[7];
  *(undefined4 *)(iVar11 + 0x18) = uVar17;
  *(undefined4 *)(iVar11 + 0x1c) = uVar12;
  iVar11 = puVar5[8];
  *(int *)(iVar11 + 0x18) = (int)uVar18;
  *(int *)(iVar11 + 0x1c) = (int)((ulonglong)uVar18 >> 0x20);
  local_3c = s_cState_Carry_001d7f38;
  local_40 = iVar6;
  func_0010BEC4((int)puVar5,4,&local_40);
  iVar11 = puVar5[6];
  uVar10 = puVar2[0x15];
  uVar17 = puVar2[0x16];
  uVar12 = puVar2[0x17];
  *(undefined4 *)(iVar11 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar11 + 0x24) = uVar10;
  iVar11 = puVar5[7];
  *(undefined4 *)(iVar11 + 0x20) = uVar17;
  *(undefined4 *)(iVar11 + 0x24) = uVar12;
  iVar11 = puVar5[8];
  *(int *)(iVar11 + 0x20) = (int)uVar18;
  *(int *)(iVar11 + 0x24) = (int)((ulonglong)uVar18 >> 0x20);
  local_3c = s_cState_WaterFloat_001d82f8;
  local_40 = iVar6;
  func_0010BEC4((int)puVar5,5,&local_40);
  iVar11 = puVar5[6];
  uVar10 = puVar2[0x19];
  uVar17 = puVar2[0x1a];
  uVar12 = puVar2[0x1b];
  *(undefined4 *)(iVar11 + 0x28) = puVar2[0x18];
  *(undefined4 *)(iVar11 + 0x2c) = uVar10;
  iVar11 = puVar5[7];
  *(undefined4 *)(iVar11 + 0x28) = uVar17;
  *(undefined4 *)(iVar11 + 0x2c) = uVar12;
  iVar11 = puVar5[8];
  *(int *)(iVar11 + 0x28) = (int)uVar18;
  *(int *)(iVar11 + 0x2c) = (int)((ulonglong)uVar18 >> 0x20);
  local_3c = s_cState_Shrink_001d830c;
  local_40 = iVar6;
  func_0010BEC4((int)puVar5,6,&local_40);
  iVar11 = puVar5[6];
  uVar17 = puVar2[0x1d];
  uVar12 = puVar2[0x1e];
  uVar10 = puVar2[0x1f];
  *(undefined4 *)(iVar11 + 0x30) = puVar2[0x1c];
  *(undefined4 *)(iVar11 + 0x34) = uVar17;
  iVar11 = puVar5[7];
  *(undefined4 *)(iVar11 + 0x30) = uVar12;
  *(undefined4 *)(iVar11 + 0x34) = uVar10;
  iVar11 = puVar5[8];
  *(int *)(iVar11 + 0x30) = (int)uVar18;
  *(int *)(iVar11 + 0x34) = (int)((ulonglong)uVar18 >> 0x20);
  local_3c = s_cState_Rock_001d831c;
  local_40 = iVar6;
  func_0010BEC4((int)puVar5,7,&local_40);
  iVar11 = puVar5[6];
  uVar10 = puVar2[0x21];
  uVar17 = puVar2[0x22];
  uVar12 = puVar2[0x23];
  *(undefined4 *)(iVar11 + 0x38) = puVar2[0x20];
  *(undefined4 *)(iVar11 + 0x3c) = uVar10;
  iVar11 = puVar5[7];
  *(undefined4 *)(iVar11 + 0x38) = uVar17;
  *(undefined4 *)(iVar11 + 0x3c) = uVar12;
  iVar11 = puVar5[8];
  *(int *)(iVar11 + 0x38) = (int)uVar18;
  *(int *)(iVar11 + 0x3c) = (int)((ulonglong)uVar18 >> 0x20);
  local_3c = s_cState_GetDemo_001d8328;
  local_40 = iVar6;
  func_0010BEC4((int)puVar5,8,&local_40);
  iVar11 = puVar5[6];
  uVar10 = puVar2[0x25];
  uVar17 = puVar2[0x26];
  uVar12 = puVar2[0x27];
  *(undefined4 *)(iVar11 + 0x40) = puVar2[0x24];
  *(undefined4 *)(iVar11 + 0x44) = uVar10;
  iVar11 = puVar5[7];
  *(undefined4 *)(iVar11 + 0x40) = uVar17;
  *(undefined4 *)(iVar11 + 0x44) = uVar12;
  iVar11 = puVar5[8];
  *(int *)(iVar11 + 0x40) = (int)uVar18;
  *(int *)(iVar11 + 0x44) = (int)((ulonglong)uVar18 >> 0x20);
  local_3c = s_cState_TreasureBox_001d8338;
  local_40 = iVar6;
  func_0010BEC4((int)puVar5,9,&local_40);
  iVar11 = puVar5[6];
  uVar10 = puVar2[0x29];
  uVar17 = puVar2[0x2a];
  uVar12 = puVar2[0x2b];
  *(undefined4 *)(iVar11 + 0x48) = puVar2[0x28];
  *(undefined4 *)(iVar11 + 0x4c) = uVar10;
  iVar11 = puVar5[7];
  *(undefined4 *)(iVar11 + 0x48) = uVar17;
  *(undefined4 *)(iVar11 + 0x4c) = uVar12;
  iVar11 = puVar5[8];
  *(int *)(iVar11 + 0x48) = (int)uVar18;
  *(int *)(iVar11 + 0x4c) = (int)((ulonglong)uVar18 >> 0x20);
  local_3c = s_cState_RuralStadium_001d834c;
  local_40 = iVar6;
  func_0010BEC4((int)puVar5,10,&local_40);
  iVar11 = puVar5[6];
  uVar17 = puVar2[0x2f];
  uVar12 = puVar2[0x2d];
  uVar10 = puVar2[0x2e];
  *(undefined4 *)(iVar11 + 0x50) = puVar2[0x2c];
  *(undefined4 *)(iVar11 + 0x54) = uVar12;
  iVar11 = puVar5[7];
  *(undefined4 *)(iVar11 + 0x50) = uVar10;
  *(undefined4 *)(iVar11 + 0x54) = uVar17;
  iVar11 = puVar5[8];
  *(int *)(iVar11 + 0x50) = (int)uVar18;
  *(int *)(iVar11 + 0x54) = (int)((ulonglong)uVar18 >> 0x20);
  local_3c = s_cState_FloorBreak_001d8360;
  local_40 = iVar6;
  func_0010BEC4((int)puVar5,0xb,&local_40);
  iVar11 = puVar5[6];
  uVar12 = puVar2[0x33];
  uVar17 = puVar2[0x31];
  uVar10 = puVar2[0x32];
  *(undefined4 *)(iVar11 + 0x58) = puVar2[0x30];
  *(undefined4 *)(iVar11 + 0x5c) = uVar17;
  iVar11 = puVar5[7];
  *(undefined4 *)(iVar11 + 0x58) = uVar10;
  *(undefined4 *)(iVar11 + 0x5c) = uVar12;
  iVar11 = puVar5[8];
  *(int *)(iVar11 + 0x58) = (int)uVar18;
  *(int *)(iVar11 + 0x5c) = (int)((ulonglong)uVar18 >> 0x20);
  local_3c = s_cState_RuralColosseum_001d8374;
  local_40 = iVar6;
  func_0010BEC4((int)puVar5,0xc,&local_40);
  iVar11 = puVar5[6];
  uVar10 = puVar2[0x35];
  uVar17 = puVar2[0x36];
  uVar12 = puVar2[0x37];
  *(undefined4 *)(iVar11 + 0x60) = puVar2[0x34];
  *(undefined4 *)(iVar11 + 100) = uVar10;
  iVar11 = puVar5[7];
  *(undefined4 *)(iVar11 + 0x60) = uVar17;
  *(undefined4 *)(iVar11 + 100) = uVar12;
  iVar11 = puVar5[8];
  *(int *)(iVar11 + 0x60) = (int)uVar18;
  *(int *)(iVar11 + 100) = (int)((ulonglong)uVar18 >> 0x20);
  local_3c = s_cState_Ku_001d838c;
  local_40 = iVar6;
  func_0010BEC4((int)puVar5,0xd,&local_40);
  iVar11 = puVar5[6];
  uVar10 = puVar2[0x39];
  uVar17 = puVar2[0x3a];
  uVar12 = puVar2[0x3b];
  *(undefined4 *)(iVar11 + 0x68) = puVar2[0x38];
  *(undefined4 *)(iVar11 + 0x6c) = uVar10;
  iVar11 = puVar5[7];
  *(undefined4 *)(iVar11 + 0x68) = uVar17;
  *(undefined4 *)(iVar11 + 0x6c) = uVar12;
  iVar11 = puVar5[8];
  *(int *)(iVar11 + 0x68) = (int)uVar18;
  *(int *)(iVar11 + 0x6c) = (int)((ulonglong)uVar18 >> 0x20);
  local_3c = s_cState_HappyLake_001d8398;
  local_40 = iVar6;
  func_0010BEC4((int)puVar5,0xe,&local_40);
  iVar11 = puVar5[6];
  uVar12 = puVar2[0x3d];
  uVar10 = DAT_001d7ef0[0x3e];
  uVar17 = DAT_001d7ef0[0x3f];
  *(undefined4 *)(iVar11 + 0x70) = puVar2[0x3c];
  *(undefined4 *)(iVar11 + 0x74) = uVar12;
  iVar11 = puVar5[7];
  *(undefined4 *)(iVar11 + 0x70) = uVar10;
  *(undefined4 *)(iVar11 + 0x74) = uVar17;
  iVar11 = puVar5[8];
  *(int *)(iVar11 + 0x70) = (int)uVar18;
  *(int *)(iVar11 + 0x74) = (int)((ulonglong)uVar18 >> 0x20);
  local_3c = s_cState_Tree_001d83ac;
  local_40 = iVar6;
  func_0010BEC4((int)puVar5,0xf,&local_40);
  iVar11 = puVar5[6];
  uVar10 = puVar2[0x42];
  uVar17 = puVar2[0x43];
  uVar12 = DAT_001d7ef0[0x41];
  *(undefined4 *)(iVar11 + 0x78) = DAT_001d7ef0[0x40];
  *(undefined4 *)(iVar11 + 0x7c) = uVar12;
  iVar11 = puVar5[7];
  *(undefined4 *)(iVar11 + 0x78) = uVar10;
  *(undefined4 *)(iVar11 + 0x7c) = uVar17;
  iVar11 = puVar5[8];
  *(int *)(iVar11 + 0x78) = (int)uVar18;
  *(int *)(iVar11 + 0x7c) = (int)((ulonglong)uVar18 >> 0x20);
  local_3c = s_cState_RupeeFountain_001d83b8;
  local_40 = iVar6;
  func_0010BEC4((int)puVar5,0x10,&local_40);
  iVar11 = puVar5[6];
  uVar12 = puVar2[0x45];
  uVar10 = puVar2[0x46];
  uVar17 = puVar2[0x47];
  *(undefined4 *)(iVar11 + 0x80) = puVar2[0x44];
  *(undefined4 *)(iVar11 + 0x84) = uVar12;
  iVar11 = puVar5[7];
  *(undefined4 *)(iVar11 + 0x80) = uVar10;
  *(undefined4 *)(iVar11 + 0x84) = uVar17;
  iVar11 = puVar5[8];
  *(int *)(iVar11 + 0x80) = (int)uVar18;
  *(int *)(iVar11 + 0x84) = (int)((ulonglong)uVar18 >> 0x20);
  local_3c = s_cState_Erase_001d83d0;
  local_40 = iVar6;
  func_0010BEC4((int)puVar5,0x11,&local_40);
  iVar6 = puVar5[6];
  uVar10 = puVar2[0x49];
  uVar17 = puVar2[0x4a];
  uVar12 = puVar2[0x4b];
  *(undefined4 *)(iVar6 + 0x88) = puVar2[0x48];
  *(undefined4 *)(iVar6 + 0x8c) = uVar10;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 0x88) = uVar17;
  *(undefined4 *)(iVar6 + 0x8c) = uVar12;
  iVar6 = puVar5[8];
  *(int *)(iVar6 + 0x88) = (int)uVar18;
  *(int *)(iVar6 + 0x8c) = (int)((ulonglong)uVar18 >> 0x20);
  bVar3 = func_00588BF0((int)puVar14,0);
  if (bVar3) {
    func_0065C988(puVar5,0x11);
    goto switchD_001d8464_default;
  }
  if (*(short *)((int)puVar5 + -0x47a) < 0) {
    uVar15 = local_28[10];
    *(char *)(puVar5 + 0x10) = (char)(ushort)uVar15;
    switch((ushort)uVar15 & 0xff) {
    case 0:
    case 10:
      goto switchD_001d8464_caseD_0;
    case 1:
      func_0065C988(puVar5,1);
      break;
    case 2:
      func_0065C988(puVar5,7);
      break;
    case 3:
      func_0065C988(puVar5,9);
      break;
    case 4:
      func_0065C988(puVar5,0xb);
      break;
    case 5:
      func_0065C988(puVar5,10);
      break;
    case 6:
      func_0065C988(puVar5,0xc);
      break;
    case 7:
      puVar5[-0x7d] = puVar5[-0x7d] | 2;
      func_0065C988(puVar5,0xd);
      break;
    case 8:
      func_0065C988(puVar5,0xe);
      break;
    case 9:
      func_0065C988(puVar5,0xf);
      break;
    case 0xb:
      func_0065C988(puVar5,0x10);
    }
  }
  else {
    *(undefined1 *)(puVar5 + 0x10) = 0;
switchD_001d8464_caseD_0:
    func_0065C988(puVar5,3);
  }
switchD_001d8464_default:
  objStack_50[0] = puVar5[-0x41];
  objStack_50[2] = puVar5[-0x3f];
  objStack_50[1] = (uint)ALBW_AS_U32((ALBW_AS_F32(puVar5[-0x40]) + ALBW_AS_F32(puVar5[0xd])));
  func_0037D530((int)puVar14,puVar5[-0x3b],(float *)objStack_50);
  bVar3 = *(int *)(*DAT_001d8654 + 0xf74) != 0;
  iVar6 = 0;
  if (bVar3) {
    iVar6 = *(int *)(*(int *)(*DAT_001d8654 + 0xf74) + 0x20);
  }
  bVar16 = iVar6 != 0;
  if (bVar3 && bVar16) {
    iVar6 = *(int *)(iVar6 + 4);
  }
  if ((bVar3 && bVar16) && iVar6 != 0) {
    puVar9 = (uint *)func_00584CA8(puVar5[-0x32],0,5);
    objStack_50[0] = *puVar9;
    iVar6 = func_001D656C((int)puVar14);
    if (iVar6 == 0) {
      *(undefined1 *)((int)puVar5 + 0x81) = 1;
      objStack_50[0] = objStack_50[0] & 0xffffff;
    }
    else {
      *(undefined1 *)((int)puVar5 + 0x81) = 0;
      objStack_50[0] = CONCAT13(0xff,(undefined3)objStack_50[0]);
    }
    func_004CF5DC(puVar5[-0x32],0,5,objStack_50);
  }
  return puVar14;
}

