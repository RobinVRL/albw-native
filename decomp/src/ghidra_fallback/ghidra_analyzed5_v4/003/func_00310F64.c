#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00193988(undefined4 *param_1,undefined4 param_2);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_00310218(int param_1,int param_2);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_0036D0C8(int *param_1,int param_2);
extern int func_0036D6F4(undefined4 *param_1,int param_2);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004C17C0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D1D84(int param_1,int *param_2);
extern int func_00512B7C(undefined4 *param_1,undefined4 param_2);
extern int func_00521028(int param_1);
extern int func_00547538(int param_1);
extern int func_0054B9D8(void);
extern int func_00564A78(int param_1,int *param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00625250(int param_1,int param_2,undefined1 param_3);
extern int func_00625EEC(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int iRam00311884;
extern int iRam00311a9c;
extern int iRam00311aa4;
extern undefined4 uRam00311a8c;
extern undefined4 uRam00311a90;
extern undefined4 uRam00311a94;
extern int *piRam00311888;
extern int *piRam00311a98;
extern undefined4 *puRam00311a88;
extern undefined4 *puRam00311aa0;
extern int DAT_00311388;
extern undefined4 DAT_0031138c;
extern undefined DAT_00311390;
extern int DAT_003113a4;
extern undefined4 DAT_003113a8;
extern undefined4 *DAT_003113ac;
extern undefined4 *DAT_003113b0;
extern undefined *DAT_003113b4;
extern int DAT_003113b8;
extern undefined4 *DAT_00311880;
extern undefined *PTR_00311aa8;
extern undefined *PTR_00311aac;
extern undefined *PTR_00311ab0;
extern undefined *PTR_00311ab4;
extern undefined *PTR_00311ab8;
extern char s_cState_AbsorbAfter_00311800[];
extern char s_cState_AbsorbPre_00311410[];
extern char s_cState_Absorb_00311424[];
extern char s_cState_ChangeKinSta10_00311814[];
extern char s_cState_EventEnd_003113e4[];
extern char s_cState_Event_003113d4[];
extern char s_cState_GetDemo_00311870[];
extern char s_cState_Hide_003113f4[];
extern char s_cState_PowerUpSelect_0031182c[];
extern char s_cState_Sample_00311400[];
extern char s_cState_Wait_003113bc[];
extern char s_cState_WalkKinStaAfter_00311858[];
extern char s_cState_WalkKinSta_00311844[];
extern char s_cState_Walk_003113c8[];

// USA 00310F64 <- EU 00310F40 (Ghidra, non-matching)
// GLOBAL DAT_00311388 int
// GLOBAL DAT_0031138c undefined4
// GLOBAL DAT_00311390 undefined
// GLOBAL DAT_003113a4 int
// GLOBAL DAT_003113a8 undefined4
// GLOBAL DAT_003113ac undefined4 *
// GLOBAL DAT_003113b0 undefined4 *
// GLOBAL DAT_003113b4 undefined *
// GLOBAL DAT_003113b8 int
// GLOBAL DAT_00311880 undefined4 *
// GLOBAL PTR_00311aa8 undefined *
// GLOBAL PTR_00311aac undefined *
// GLOBAL PTR_00311ab0 undefined *
// GLOBAL PTR_00311ab4 undefined *
// GLOBAL PTR_00311ab8 undefined *
// GLOBAL UNK_00311884 int
// GLOBAL UNK_00311888 int *
// GLOBAL UNK_00311a88 undefined4 *
// GLOBAL UNK_00311a8c undefined4
// GLOBAL UNK_00311a90 undefined4
// GLOBAL UNK_00311a94 undefined4
// GLOBAL UNK_00311a98 int *
// GLOBAL UNK_00311a9c int
// GLOBAL UNK_00311aa0 undefined4 *
// GLOBAL UNK_00311aa4 int
// GLOBAL s_cState_AbsorbAfter_00311800 string
// GLOBAL s_cState_AbsorbPre_00311410 string
// GLOBAL s_cState_Absorb_00311424 string
// GLOBAL s_cState_ChangeKinSta10_00311814 string
// GLOBAL s_cState_EventEnd_003113e4 string
// GLOBAL s_cState_Event_003113d4 string
// GLOBAL s_cState_GetDemo_00311870 string
// GLOBAL s_cState_Hide_003113f4 string
// GLOBAL s_cState_PowerUpSelect_0031182c string
// GLOBAL s_cState_Sample_00311400 string
// GLOBAL s_cState_Wait_003113bc string
// GLOBAL s_cState_WalkKinStaAfter_00311858 string
// GLOBAL s_cState_WalkKinSta_00311844 string
// GLOBAL s_cState_Walk_003113c8 string

int * func_00310F64(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 *puVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 (*(char * *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(undefined1 *)(albw_frame + 0x1c))
  #define local_53 (*(undefined1 *)(albw_frame + 0x1d))
  #define auStack_50 ((undefined4 *)(albw_frame + 0x20))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x38))
  local_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  local_54 = 0;
  local_53 = 1;
  piVar4 = (int *)func_00625EEC(param_1,param_2,0,0xff,&local_60);
  iVar15 = DAT_00311388;
  *piVar4 = DAT_00311388;
  piVar4[0x2b1] = 0;
  piVar4[200] = iVar15 + 0xb8;
  piVar4[0x2b2] = 0;
  piVar4[0x2b3] = 0;
  piVar4[0x2b4] = 0;
  *(undefined1 *)(piVar4 + 0x2b5) = 0;
  piVar4[0x2b6] = 2;
  piVar4[0x2b7] = 0;
  *(undefined1 *)(piVar4 + 0x2b8) = 0x50;
  *(undefined1 *)((int)piVar4 + 0xae1) = 0;
  piVar4[0x2b9] = 0;
  *(undefined1 *)(piVar4 + 0x2ba) = 0;
  piVar4[699] = 0;
  puVar5 = func_0036D6F4(piVar4 + 700,(int)piVar4);
  iVar15 = DAT_003113a4;
  piVar4 = puVar5 + -700;
  *puVar5 = DAT_0031138c;
  *(undefined1 *)(puVar5 + 10) = 0;
  puVar5[0xb] = 0;
  local_64 = &DAT_00311390;
  local_68 = iVar15;
  func_004BE114(piVar4,7,0,0,DAT_003113a8);
  *(undefined1 *)((int)puVar5 + -0x18a) = 0xe;
  puVar5[-0x5f] = piVar4;
  iVar6 = func_0010BA78(0xe0);
  puVar5[-0x5e] = iVar6;
  puVar11 = DAT_003113ac;
  puVar5[-0x5d] = iVar6 + (uint)*(byte *)((int)puVar5 + -0x18a) * 8;
  iVar13 = 0xe;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    iVar13 = iVar13 + -1;
    uVar16 = DAT_003113b0[0x3f];
    puVar7[2] = DAT_003113b0[0x3e];
    puVar7[3] = uVar16;
    uVar16 = puVar11[1];
    puVar7[4] = *puVar11;
    puVar7[5] = uVar16;
    puVar7 = puVar7 + 4;
  } while (iVar13 != 0);
  bVar1 = *(byte *)((int)puVar5 + -0x18a);
  uVar20 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar20 << 3);
  puVar11 = DAT_003113b0;
  puVar5[-0x5c] = puVar7;
  if (uVar20 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = puVar11[5];
      *puVar7 = puVar11[4];
      puVar7[1] = uVar16;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar20 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar16 = puVar11[5];
      puVar8[2] = puVar11[4];
      puVar8[3] = uVar16;
      uVar16 = puVar11[5];
      puVar8[4] = puVar11[4];
      puVar8[5] = uVar16;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x200,(int *)0x0,4);
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 0xe;
    iVar6 = func_00100118((int)(puVar7 + 2),DAT_003113b4,0x24,0xe);
  }
  if (iVar6 != 0) {
    puVar5[-0x62] = 0xe;
    puVar5[-0x61] = iVar6;
  }
  iVar6 = DAT_003113b8;
  puVar5[-0x1e7] = puVar5 + -100;
  *(undefined2 *)(iVar6 + (int)piVar4) = 0xe;
  local_64 = s_cState_Wait_003113bc;
  local_68 = iVar15;
  func_0010BEC4((int)(puVar5 + -100),0,&local_68);
  puVar7 = (undefined4 *)puVar5[-0x5e];
  uVar17 = puVar11[1];
  uVar22 = puVar11[2];
  uVar16 = puVar11[3];
  uVar25 = *(undefined8 *)(puVar11 + 4);
  *puVar7 = *puVar11;
  puVar7[1] = uVar17;
  puVar7 = (undefined4 *)puVar5[-0x5d];
  puVar7[1] = uVar16;
  *puVar7 = uVar22;
  puVar7 = (undefined4 *)puVar5[-0x5c];
  *puVar7 = (int)uVar25;
  puVar7[1] = (int)((ulonglong)uVar25 >> 0x20);
  local_64 = s_cState_Walk_003113c8;
  local_68 = iVar15;
  func_0010BEC4((int)(puVar5 + -100),1,&local_68);
  iVar6 = puVar5[-0x5e];
  uVar22 = puVar11[7];
  uVar16 = puVar11[8];
  uVar17 = puVar11[9];
  *(undefined4 *)(iVar6 + 8) = puVar11[6];
  *(undefined4 *)(iVar6 + 0xc) = uVar22;
  iVar6 = puVar5[-0x5d];
  *(undefined4 *)(iVar6 + 8) = uVar16;
  *(undefined4 *)(iVar6 + 0xc) = uVar17;
  iVar6 = puVar5[-0x5c];
  *(int *)(iVar6 + 8) = (int)uVar25;
  *(int *)(iVar6 + 0xc) = (int)((ulonglong)uVar25 >> 0x20);
  local_64 = s_cState_Event_003113d4;
  local_68 = iVar15;
  func_0010BEC4((int)(puVar5 + -100),2,&local_68);
  iVar6 = puVar5[-0x5e];
  uVar16 = puVar11[0xb];
  uVar17 = puVar11[0xc];
  uVar22 = puVar11[0xd];
  *(undefined4 *)(iVar6 + 0x10) = puVar11[10];
  *(undefined4 *)(iVar6 + 0x14) = uVar16;
  iVar6 = puVar5[-0x5d];
  *(undefined4 *)(iVar6 + 0x10) = uVar17;
  *(undefined4 *)(iVar6 + 0x14) = uVar22;
  iVar6 = puVar5[-0x5c];
  *(int *)(iVar6 + 0x10) = (int)uVar25;
  *(int *)(iVar6 + 0x14) = (int)((ulonglong)uVar25 >> 0x20);
  local_64 = s_cState_EventEnd_003113e4;
  local_68 = iVar15;
  func_0010BEC4((int)(puVar5 + -100),3,&local_68);
  iVar6 = puVar5[-0x5e];
  uVar16 = puVar11[0xf];
  uVar17 = puVar11[0x10];
  uVar22 = puVar11[0x11];
  uVar23 = puVar11[0x12];
  uVar24 = puVar11[0x13];
  *(undefined4 *)(iVar6 + 0x18) = puVar11[0xe];
  *(undefined4 *)(iVar6 + 0x1c) = uVar16;
  iVar6 = puVar5[-0x5d];
  *(undefined4 *)(iVar6 + 0x18) = uVar17;
  *(undefined4 *)(iVar6 + 0x1c) = uVar22;
  iVar6 = puVar5[-0x5c];
  *(undefined4 *)(iVar6 + 0x18) = uVar23;
  *(undefined4 *)(iVar6 + 0x1c) = uVar24;
  local_64 = s_cState_Hide_003113f4;
  local_68 = iVar15;
  func_0010BEC4((int)(puVar5 + -100),4,&local_68);
  iVar6 = puVar5[-0x5e];
  uVar16 = puVar11[0x15];
  uVar17 = puVar11[0x16];
  uVar22 = puVar11[0x17];
  uVar23 = puVar11[0x18];
  uVar24 = puVar11[0x19];
  *(undefined4 *)(iVar6 + 0x20) = puVar11[0x14];
  *(undefined4 *)(iVar6 + 0x24) = uVar16;
  iVar6 = puVar5[-0x5d];
  *(undefined4 *)(iVar6 + 0x20) = uVar17;
  *(undefined4 *)(iVar6 + 0x24) = uVar22;
  iVar6 = puVar5[-0x5c];
  *(undefined4 *)(iVar6 + 0x20) = uVar23;
  *(undefined4 *)(iVar6 + 0x24) = uVar24;
  local_64 = s_cState_Sample_00311400;
  local_68 = iVar15;
  func_0010BEC4((int)(puVar5 + -100),5,&local_68);
  iVar6 = puVar5[-0x5e];
  uVar16 = puVar11[0x1b];
  uVar17 = puVar11[0x1c];
  uVar22 = puVar11[0x1d];
  puVar21 = (undefined8 *)(puVar11 + 4);
  uVar25 = *puVar21;
  *(undefined4 *)(iVar6 + 0x28) = puVar11[0x1a];
  *(undefined4 *)(iVar6 + 0x2c) = uVar16;
  iVar6 = puVar5[-0x5d];
  *(undefined4 *)(iVar6 + 0x28) = uVar17;
  *(undefined4 *)(iVar6 + 0x2c) = uVar22;
  iVar6 = puVar5[-0x5c];
  *(int *)(iVar6 + 0x28) = (int)uVar25;
  *(int *)(iVar6 + 0x2c) = (int)((ulonglong)uVar25 >> 0x20);
  local_64 = s_cState_AbsorbPre_00311410;
  local_68 = iVar15;
  func_0010BEC4((int)(puVar5 + -100),6,&local_68);
  iVar6 = puVar5[-0x5e];
  uVar16 = puVar11[0x1f];
  uVar22 = puVar11[0x20];
  uVar17 = puVar11[0x21];
  *(undefined4 *)(iVar6 + 0x30) = puVar11[0x1e];
  *(undefined4 *)(iVar6 + 0x34) = uVar16;
  iVar6 = puVar5[-0x5d];
  *(undefined4 *)(iVar6 + 0x30) = uVar22;
  *(undefined4 *)(iVar6 + 0x34) = uVar17;
  iVar6 = puVar5[-0x5c];
  *(int *)(iVar6 + 0x30) = (int)uVar25;
  *(int *)(iVar6 + 0x34) = (int)((ulonglong)uVar25 >> 0x20);
  local_64 = s_cState_Absorb_00311424;
  local_68 = iVar15;
  func_0010BEC4((int)(puVar5 + -100),7,&local_68);
  iVar6 = puVar5[-0x5e];
  uVar16 = puVar11[0x23];
  uVar17 = puVar11[0x24];
  uVar22 = puVar11[0x25];
  *(undefined4 *)(iVar6 + 0x38) = puVar11[0x22];
  *(undefined4 *)(iVar6 + 0x3c) = uVar16;
  iVar6 = puVar5[-0x5d];
  *(undefined4 *)(iVar6 + 0x38) = uVar17;
  *(undefined4 *)(iVar6 + 0x3c) = uVar22;
  iVar6 = puVar5[-0x5c];
  *(int *)(iVar6 + 0x38) = (int)uVar25;
  *(int *)(iVar6 + 0x3c) = (int)((ulonglong)uVar25 >> 0x20);
  local_64 = s_cState_AbsorbAfter_00311800;
  local_68 = iVar15;
  func_0010BEC4((int)(puVar5 + -100),8,&local_68);
  iVar6 = puVar5[-0x5e];
  uVar17 = puVar11[0x27];
  uVar22 = puVar11[0x28];
  uVar16 = puVar11[0x29];
  *(undefined4 *)(iVar6 + 0x40) = puVar11[0x26];
  *(undefined4 *)(iVar6 + 0x44) = uVar17;
  iVar6 = puVar5[-0x5d];
  *(undefined4 *)(iVar6 + 0x40) = uVar22;
  *(undefined4 *)(iVar6 + 0x44) = uVar16;
  iVar6 = puVar5[-0x5c];
  *(int *)(iVar6 + 0x40) = (int)uVar25;
  *(int *)(iVar6 + 0x44) = (int)((ulonglong)uVar25 >> 0x20);
  local_64 = s_cState_ChangeKinSta10_00311814;
  local_68 = iVar15;
  func_0010BEC4((int)(puVar5 + -100),9,&local_68);
  iVar6 = puVar5[-0x5e];
  uVar17 = puVar11[0x2b];
  uVar16 = puVar11[0x2c];
  uVar22 = puVar11[0x2d];
  *(undefined4 *)(iVar6 + 0x48) = puVar11[0x2a];
  *(undefined4 *)(iVar6 + 0x4c) = uVar17;
  iVar6 = puVar5[-0x5d];
  *(undefined4 *)(iVar6 + 0x48) = uVar16;
  *(undefined4 *)(iVar6 + 0x4c) = uVar22;
  iVar6 = puVar5[-0x5c];
  *(int *)(iVar6 + 0x48) = (int)uVar25;
  *(int *)(iVar6 + 0x4c) = (int)((ulonglong)uVar25 >> 0x20);
  local_64 = s_cState_PowerUpSelect_0031182c;
  local_68 = iVar15;
  func_0010BEC4((int)(puVar5 + -100),10,&local_68);
  iVar6 = puVar5[-0x5e];
  uVar16 = puVar11[0x2f];
  uVar17 = puVar11[0x30];
  uVar22 = puVar11[0x31];
  *(undefined4 *)(iVar6 + 0x50) = puVar11[0x2e];
  *(undefined4 *)(iVar6 + 0x54) = uVar16;
  iVar6 = puVar5[-0x5d];
  *(undefined4 *)(iVar6 + 0x50) = uVar17;
  *(undefined4 *)(iVar6 + 0x54) = uVar22;
  iVar6 = puVar5[-0x5c];
  *(int *)(iVar6 + 0x50) = (int)uVar25;
  *(int *)(iVar6 + 0x54) = (int)((ulonglong)uVar25 >> 0x20);
  local_64 = s_cState_WalkKinSta_00311844;
  local_68 = iVar15;
  func_0010BEC4((int)(puVar5 + -100),0xb,&local_68);
  iVar6 = puVar5[-0x5e];
  uVar22 = puVar11[0x35];
  uVar17 = puVar11[0x33];
  uVar16 = puVar11[0x34];
  *(undefined4 *)(iVar6 + 0x58) = puVar11[0x32];
  *(undefined4 *)(iVar6 + 0x5c) = uVar17;
  iVar6 = puVar5[-0x5d];
  *(undefined4 *)(iVar6 + 0x58) = uVar16;
  *(undefined4 *)(iVar6 + 0x5c) = uVar22;
  iVar6 = puVar5[-0x5c];
  *(int *)(iVar6 + 0x58) = (int)uVar25;
  *(int *)(iVar6 + 0x5c) = (int)((ulonglong)uVar25 >> 0x20);
  local_64 = s_cState_WalkKinStaAfter_00311858;
  local_68 = iVar15;
  func_0010BEC4((int)(puVar5 + -100),0xc,&local_68);
  iVar6 = puVar5[-0x5e];
  uVar16 = puVar11[0x37];
  uVar17 = puVar11[0x38];
  uVar22 = puVar11[0x39];
  *(undefined4 *)(iVar6 + 0x60) = puVar11[0x36];
  *(undefined4 *)(iVar6 + 100) = uVar16;
  iVar6 = puVar5[-0x5d];
  *(undefined4 *)(iVar6 + 0x60) = uVar17;
  *(undefined4 *)(iVar6 + 100) = uVar22;
  iVar6 = puVar5[-0x5c];
  *(int *)(iVar6 + 0x60) = (int)uVar25;
  *(int *)(iVar6 + 100) = (int)((ulonglong)uVar25 >> 0x20);
  local_64 = s_cState_GetDemo_00311870;
  local_68 = iVar15;
  func_0010BEC4((int)(puVar5 + -100),0xd,&local_68);
  iVar15 = puVar5[-0x5e];
  uVar22 = puVar11[0x3b];
  uVar16 = puVar11[0x3c];
  uVar17 = puVar11[0x3d];
  *(undefined4 *)(iVar15 + 0x68) = puVar11[0x3a];
  *(undefined4 *)(iVar15 + 0x6c) = uVar22;
  iVar15 = puVar5[-0x5d];
  *(undefined4 *)(iVar15 + 0x68) = uVar16;
  *(undefined4 *)(iVar15 + 0x6c) = uVar17;
  iVar15 = puVar5[-0x5c];
  *(int *)(iVar15 + 0x68) = (int)uVar25;
  *(int *)(iVar15 + 0x6c) = (int)((ulonglong)uVar25 >> 0x20);
  puVar5[-0x5b] = 0;
  func_00625250((int)piVar4,0,0);
  func_004C03B8((int)piVar4,DAT_00311880);
  func_00310218((int)piVar4,(int)param_2);
  puVar5[-0x1c8] = param_2[1];
  puVar5[-0x1c7] = param_2[2];
  puVar5[-0x1c6] = param_2[3];
  *(undefined1 *)((int)puVar5 + -0x299) = 0;
  func_004BC8D8((int)piVar4);
  piVar9 = (int *)func_00521028((int)piVar4);
  (**(code **)(*piVar9 + 8))(piVar9);
  func_003529A0(auStack_50,piVar9[1],puVar5 + -500);
  uStack_38 = 0;
  func_002C41BC(puVar5 + -500,auStack_50,(int)piVar4);
  bVar3 = func_00547538((int)(puVar5 + -699));
  iVar15 = iRam00311884;
  if (!bVar3) {
    iVar13 = func_0054B9D8();
    iVar18 = (int)((ulonglong)((longlong)iVar15 * (longlong)iVar13) >> 0x20);
    iVar6 = 10;
    iVar13 = iVar13 + ((iVar18 >> 2) - (iVar18 >> 0x1f)) * -10;
    if (iVar13 < 0) {
      iVar13 = 0;
    }
    else if (10 < iVar13) {
      iVar13 = 10;
    }
    if (0 < iVar13) {
      puVar21 = (undefined8 *)(puVar5 + -0xbc);
    }
    uVar20 = 0;
    if (0 < iVar13) {
      puVar21 = (undefined8 *)((int)puVar21 + 0x18c);
      do {
        if (uVar20 < 10) {
          iVar6 = uVar20 * 3;
        }
        puVar10 = puVar21;
        if (uVar20 < 10) {
          puVar10 = (undefined8 *)((int)puVar21 + iVar6 * 4);
        }
        func_00512B7C((undefined4 *)puVar10,puVar5[-0x209]);
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < iVar13);
    }
    iVar6 = func_0054B9D8();
    iVar13 = (int)((ulonglong)((longlong)iVar15 * (longlong)iVar6) >> 0x20);
    iVar6 = 10;
    iVar13 = (iVar13 >> 2) - (iVar13 >> 0x1f);
    if (iVar13 < 0) {
      iVar13 = 0;
    }
    else if (10 < iVar13) {
      iVar13 = 10;
    }
    if (0 < iVar13) {
      puVar21 = (undefined8 *)(puVar5 + -0xbc);
    }
    uVar20 = 0;
    if (0 < iVar13) {
      do {
        if (uVar20 < 10) {
          iVar6 = uVar20 * 3;
        }
        puVar11 = (undefined4 *)((int)puVar21 + 0x204);
        if (uVar20 < 10) {
          puVar11 = (undefined4 *)((int)puVar21 + 0x204) + iVar6;
        }
        func_00193988(puVar11,puVar5[-0x209]);
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < iVar13);
    }
  }
  iVar6 = func_0054B9D8();
  piVar9 = piRam00311888;
  iVar15 = (int)((ulonglong)((longlong)iVar15 * (longlong)iVar6) >> 0x20);
  iVar6 = iVar6 + ((iVar15 >> 2) - (iVar15 >> 0x1f)) * -10;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  else if (10 < iVar6) {
    iVar6 = 10;
  }
  puVar5[-9] = iVar6;
  uVar20 = func_00564A78(puVar5[-0xd4],piVar9);
  puVar5[-10] = uVar20;
  func_0036D0C8(puVar5 + -5,0);
  puVar11 = puRam00311a88;
  iVar15 = puVar5[-5];
  if (iVar15 == 0) {
    iVar15 = 1;
  }
  else {
    iVar15 = func_0010983C(*puRam00311a88,iVar15);
  }
  uVar20 = 0;
  piVar9 = puVar5 + -0x1d;
  do {
    piVar12 = piVar9;
    if (uVar20 < 0x12) {
      piVar12 = piVar9 + uVar20;
    }
    iVar6 = func_0014E428((int)piVar4,0,uVar20 + 2,0,1,0,0);
    *piVar12 = iVar6;
    piVar12 = piVar9;
    if (uVar20 < 0x12) {
      piVar12 = piVar9 + uVar20;
    }
    func_004CF478(*piVar12,0);
    uVar20 = uVar20 + 1;
  } while ((int)uVar20 < 0x12);
  puVar5[-0x91] = puVar5[-0x91] | 0x10;
  puVar7 = (undefined4 *)func_0010BAB4(0x1c);
  uVar17 = uRam00311a94;
  uVar16 = uRam00311a8c;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = uRam00311a94;
    uVar22 = uRam00311a90;
    puVar7[1] = uVar16;
    puVar7[2] = uVar22;
    puVar7[3] = uVar16;
    puVar7[4] = uVar17;
    puVar7[5] = 0;
    puVar7[6] = 0;
  }
  puVar5[-3] = puVar7;
  puVar8 = puRam00311aa0;
  iVar6 = *piRam00311a98;
  puVar7 = (undefined4 *)func_005841A8(iVar6,*puRam00311aa0,*(int **)(iRam00311a9c + iVar6));
  puVar19 = *(undefined4 **)(iRam00311aa4 + iVar6);
  do {
    if (puVar7 == puVar19) {
LAB_00311a60:
      func_004C17C0((int)piVar4);
      if (iVar15 != 1) {
        func_0010983C(*puVar11,iVar15);
      }
      return piVar4;
    }
    puVar14 = (undefined4 *)*puVar7;
    if (puVar14 != (undefined4 *)0x0) {
      if (((*(uint *)PTR_00311aa8 & 1) == 0) &&
         (iVar6 = func_00100174((int *)PTR_00311aa8), iVar6 != 0)) {
        *(undefined **)PTR_00311aac = PTR_00311ab0;
      }
      iVar6 = (**(code **)*puVar14)(puVar14,PTR_00311aac);
      puVar2 = PTR_00311ab4;
      if (iVar6 == 0) {
        puVar14 = (undefined4 *)0x0;
      }
      puVar5[-1] = puVar14;
      func_004D1D84((int)puVar14,(int *)puVar2);
      func_004D1D84(puVar5[-1],(int *)PTR_00311ab8);
      goto LAB_00311a60;
    }
    puVar7 = (undefined4 *)func_005841A8(iVar6,*puVar8,puVar7 + 1);
  } while( true );
}

