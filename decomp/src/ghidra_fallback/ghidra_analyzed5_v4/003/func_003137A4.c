// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00194BFC(int param_1);
extern int func_0027033C(uint param_1,int *param_2,undefined4 *param_3,int param_4);
extern int func_002E1BB4(undefined4 *param_1,undefined2 param_2);
extern int func_00361604(int param_1,undefined1 param_2);
extern int func_0036720C(int param_1,int param_2,undefined2 param_3,int param_4,int param_5, undefined1 param_6,int param_7);
extern int func_003673F4(undefined4 *param_1,int param_2);
extern int func_004BC8D8(int param_1);
extern int func_004BD280();
extern float func_004BDB2C(undefined4 param_1,int param_2,float fparam_0);
extern int func_004BDEE8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004C17C0(int param_1);
extern int func_00547538(int param_1);
extern int func_00547B20(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_00556B2C(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_006260FC(int param_1,int param_2,undefined1 param_3);
extern int func_0065310C(undefined4 *param_1,uint *param_2,undefined1 param_3);
extern int DAT_00313b88;
extern undefined4 DAT_00313b8c;
extern uint DAT_00313b90;
extern int *DAT_00313b94;
extern int *DAT_00313b98;
extern undefined DAT_00313b9c;
extern uint DAT_00313ba8;
extern uint DAT_00313bac;
extern undefined4 *DAT_00313bb0;
extern undefined *DAT_00313bb4;
extern int DAT_00313bb8;
extern float *DAT_00314094;
extern undefined4 *DAT_00314098;
extern float DAT_0031409c;
extern uint *DAT_003141b0;
extern undefined4 *DAT_003141b4;
extern uint *DAT_003141b8;
extern char s_Environment_GlassFilter_bch_003141bc[];
extern char s_cState_EvAppearStart_00314054[];
extern char s_cState_EvOpenApproachPlayer_0031401c[];
extern char s_cState_EvOpenLookAtPlayer_00314038[];
extern char s_cState_EvOpenStart_00313ff0[];
extern char s_cState_EvOpenSurprise_00314004[];
extern char s_cState_EventEnd_00313be4[];
extern char s_cState_Event_00313bd4[];
extern char s_cState_Hide_00313fd0[];
extern char s_cState_ItemSaleMove_00314080[];
extern char s_cState_ItemSaleWait_0031406c[];
extern char s_cState_ShopBaseWait_00313fdc[];
extern char s_cState_Wait_00313bbc[];
extern char s_cState_Walk_00313bc8[];
extern char s_cf_003141bc[];

// USA 003137A4 <- EU 00313780 (Ghidra, non-matching)
// GLOBAL DAT_00313b88 int
// GLOBAL DAT_00313b8c undefined4
// GLOBAL DAT_00313b90 uint
// GLOBAL DAT_00313b94 int *
// GLOBAL DAT_00313b98 int *
// GLOBAL DAT_00313b9c undefined
// GLOBAL DAT_00313ba8 uint
// GLOBAL DAT_00313bac uint
// GLOBAL DAT_00313bb0 undefined4 *
// GLOBAL DAT_00313bb4 undefined *
// GLOBAL DAT_00313bb8 int
// GLOBAL DAT_00314094 float *
// GLOBAL DAT_00314098 undefined4 *
// GLOBAL DAT_0031409c float
// GLOBAL DAT_003141b0 uint *
// GLOBAL DAT_003141b4 undefined4 *
// GLOBAL DAT_003141b8 uint *
// GLOBAL s_cf_003141bc string
// GLOBAL s_cState_EvAppearStart_00314054 string
// GLOBAL s_cState_EvOpenApproachPlayer_0031401c string
// GLOBAL s_cState_EvOpenLookAtPlayer_00314038 string
// GLOBAL s_cState_EvOpenStart_00313ff0 string
// GLOBAL s_cState_EvOpenSurprise_00314004 string
// GLOBAL s_cState_EventEnd_00313be4 string
// GLOBAL s_cState_Event_00313bd4 string
// GLOBAL s_cState_Hide_00313fd0 string
// GLOBAL s_cState_ItemSaleMove_00314080 string
// GLOBAL s_cState_ItemSaleWait_0031406c string
// GLOBAL s_cState_ShopBaseWait_00313fdc string
// GLOBAL s_cState_Wait_00313bbc string
// GLOBAL s_cState_Walk_00313bc8 string

/* WARNING: Variable defined which should be unmapped: objStack_50 */

int * func_003137A4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  undefined4 *puVar4;
  float fparam_0;
  bool bVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  ulonglong uVar23;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  #define local_40 (*(uint *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  piVar6 = (int *)func_0065310C(param_1,param_2,0);
  iVar13 = DAT_00313b88;
  piVar6[200] = DAT_00313b88 + 0xbc;
  *piVar6 = iVar13;
  piVar6[0x276] = 0;
  piVar6[0x277] = 0;
  piVar6[0x278] = 0;
  piVar6[0x279] = 0;
  piVar6[0x27a] = 0;
  piVar6[0x27b] = 0;
  piVar6[0x27c] = 0;
  piVar6[0x27d] = 0;
  piVar6[0x27e] = 0;
  piVar6[0x27f] = 0;
  piVar6[0x280] = 0;
  piVar6[0x281] = 0;
  piVar6[0x282] = 0;
  piVar6[0x283] = 0;
  puVar7 = (undefined4 *)func_003673F4(piVar6 + 0x276,3);
  uVar22 = DAT_00313b8c;
  puVar7[0xe] = 0;
  uVar9 = DAT_00313b90;
  uVar23 = (ulonglong)DAT_00313b90;
  *puVar7 = uVar22;
  puVar7[0xf] = uVar9;
  puVar7[0x10] = uVar9;
  puVar7[0x11] = uVar9;
  puVar7[0x12] = uVar9;
  puVar7[0x13] = uVar9;
  puVar7[0x14] = uVar9;
  puVar7[0x15] = uVar9;
  *(undefined2 *)(puVar7 + 0x16) = 0;
  *(undefined2 *)((int)puVar7 + 0x5a) = 0;
  *(undefined2 *)(puVar7 + 0x17) = 0;
  *(undefined1 *)((int)puVar7 + 0x5e) = 0;
  *(undefined1 *)((int)puVar7 + 0x5f) = 0;
  *(undefined1 *)(puVar7 + 0x18) = 0;
  *(undefined1 *)((int)puVar7 + 0x61) = 0;
  *(undefined1 *)((int)puVar7 + 0x62) = 0;
  *(undefined1 *)((int)puVar7 + 99) = 0;
  *(undefined1 *)(puVar7 + 0x19) = 0;
  puVar7 = func_002E1BB4(puVar7 + 0x1a,0);
  piVar6 = puVar7 + -0x290;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  uVar22 = (undefined4)uVar23;
  puVar7[0x10] = uVar22;
  puVar7[0x11] = uVar22;
  uVar2 = *(ushort *)((int)puVar7 + -0xa0e);
  *(char *)((int)puVar7 + -10) = (char)uVar2;
  if ((uVar2 & 0xff) < 3) {
    if ((uVar2 & 0xff) != 0) goto LAB_0031392c;
  }
  else {
    *(undefined1 *)((int)puVar7 + -10) = 0;
  }
  if (*DAT_00313b94 != 0) {
    bVar5 = func_00584B94(*DAT_00313b94,900);
    piVar3 = DAT_00313b98;
    uVar22 = (undefined4)uVar23;
    if (bVar5) {
      iVar14 = 0;
      iVar13 = 0;
      do {
        iVar8 = func_00194BFC(iVar13);
        if (iVar8 != 1) {
          uVar9 = func_0055696C(*piVar3,iVar8);
          iVar14 = iVar14 + (uint)(1 < uVar9);
        }
        uVar22 = (undefined4)uVar23;
        iVar13 = iVar13 + 1;
      } while (iVar13 < 10);
      if (iVar14 == 9) {
        *(undefined1 *)((int)puVar7 + -5) = 1;
      }
    }
  }
LAB_0031392c:
  uVar9 = DAT_00313ba8;
  local_3c = &DAT_00313b9c;
  objStack_50[0] = DAT_00313bac;
  local_40 = DAT_00313ba8;
  func_004BE114(piVar6,0xc,0,0,DAT_00313bac);
  func_004BDEE8((int)piVar6);
  puVar7[-0x33] = piVar6;
  *(undefined1 *)((int)puVar7 + -0xda) = 0xd;
  iVar13 = func_0010BA78(0xd0);
  puVar4 = DAT_00313bb0;
  puVar7[-0x32] = iVar13;
  puVar7[-0x31] = iVar13 + (uint)*(byte *)((int)puVar7 + -0xda) * 8;
  iVar14 = 0xd;
  puVar10 = (undefined4 *)(iVar13 + -8);
  do {
    uVar16 = puVar4[0x3b];
    iVar14 = iVar14 + -1;
    puVar10[2] = puVar4[0x3a];
    puVar10[3] = uVar16;
    uVar16 = puVar4[0x3b];
    puVar10[4] = puVar4[0x3a];
    puVar10[5] = uVar16;
    puVar10 = puVar10 + 4;
  } while (iVar14 != 0);
  bVar1 = *(byte *)((int)puVar7 + -0xda);
  uVar15 = (uint)bVar1;
  puVar10 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar7[-0x30] = puVar10;
  if (uVar15 != 0) {
    puVar11 = puVar10 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = puVar4[5];
      *puVar10 = puVar4[4];
      puVar10[1] = uVar16;
      puVar11 = puVar10;
    }
    for (iVar13 = (int)uVar15 >> 1; iVar13 != 0; iVar13 = iVar13 + -1) {
      uVar16 = puVar4[5];
      puVar11[2] = puVar4[4];
      puVar11[3] = uVar16;
      uVar16 = puVar4[5];
      puVar11[4] = puVar4[4];
      puVar11[5] = uVar16;
      puVar11 = puVar11 + 4;
    }
  }
  puVar10 = (undefined4 *)func_0010CEE0(0x1dc,(int *)0x0,4);
  iVar13 = 0;
  if (puVar10 != (undefined4 *)0x0) {
    *puVar10 = 0x24;
    puVar10[1] = 0xd;
    iVar13 = func_00100118((int)(puVar10 + 2),DAT_00313bb4,0x24,0xd);
  }
  if (iVar13 != 0) {
    puVar7[-0x36] = 0xd;
    puVar7[-0x35] = iVar13;
  }
  iVar13 = DAT_00313bb8;
  puVar7[-0x1bb] = puVar7 + -0x38;
  *(undefined2 *)(iVar13 + (int)piVar6) = 0xd;
  local_3c = s_cState_Wait_00313bbc;
  local_40 = uVar9;
  func_0010BEC4((int)(puVar7 + -0x38),0,(int *)&local_40);
  puVar10 = (undefined4 *)puVar7[-0x32];
  uVar16 = puVar4[2];
  uVar17 = puVar4[3];
  uVar18 = puVar4[1];
  uVar21 = *(undefined8 *)(puVar4 + 4);
  *puVar10 = *puVar4;
  puVar10[1] = uVar18;
  puVar10 = (undefined4 *)puVar7[-0x31];
  *puVar10 = uVar16;
  puVar10[1] = uVar17;
  puVar10 = (undefined4 *)puVar7[-0x30];
  *puVar10 = (int)uVar21;
  puVar10[1] = (int)((ulonglong)uVar21 >> 0x20);
  local_3c = s_cState_Walk_00313bc8;
  local_40 = uVar9;
  func_0010BEC4((int)(puVar7 + -0x38),1,(int *)&local_40);
  iVar13 = puVar7[-0x32];
  uVar16 = puVar4[7];
  uVar17 = puVar4[8];
  uVar18 = puVar4[9];
  *(undefined4 *)(iVar13 + 8) = puVar4[6];
  *(undefined4 *)(iVar13 + 0xc) = uVar16;
  iVar13 = puVar7[-0x31];
  *(undefined4 *)(iVar13 + 8) = uVar17;
  *(undefined4 *)(iVar13 + 0xc) = uVar18;
  iVar13 = puVar7[-0x30];
  *(int *)(iVar13 + 8) = (int)uVar21;
  *(int *)(iVar13 + 0xc) = (int)((ulonglong)uVar21 >> 0x20);
  local_3c = s_cState_Event_00313bd4;
  local_40 = uVar9;
  func_0010BEC4((int)(puVar7 + -0x38),2,(int *)&local_40);
  iVar13 = puVar7[-0x32];
  uVar17 = puVar4[0xb];
  uVar16 = puVar4[0xc];
  uVar18 = puVar4[0xd];
  *(undefined4 *)(iVar13 + 0x10) = puVar4[10];
  *(undefined4 *)(iVar13 + 0x14) = uVar17;
  iVar13 = puVar7[-0x31];
  *(undefined4 *)(iVar13 + 0x10) = uVar16;
  *(undefined4 *)(iVar13 + 0x14) = uVar18;
  iVar13 = puVar7[-0x30];
  *(int *)(iVar13 + 0x10) = (int)uVar21;
  *(int *)(iVar13 + 0x14) = (int)((ulonglong)uVar21 >> 0x20);
  local_3c = s_cState_EventEnd_00313be4;
  local_40 = uVar9;
  func_0010BEC4((int)(puVar7 + -0x38),3,(int *)&local_40);
  iVar13 = puVar7[-0x32];
  uVar16 = puVar4[0xf];
  uVar17 = puVar4[0x10];
  uVar18 = puVar4[0x11];
  uVar19 = puVar4[0x12];
  uVar20 = puVar4[0x13];
  *(undefined4 *)(iVar13 + 0x18) = puVar4[0xe];
  *(undefined4 *)(iVar13 + 0x1c) = uVar16;
  iVar13 = puVar7[-0x31];
  *(undefined4 *)(iVar13 + 0x18) = uVar17;
  *(undefined4 *)(iVar13 + 0x1c) = uVar18;
  iVar13 = puVar7[-0x30];
  *(undefined4 *)(iVar13 + 0x18) = uVar19;
  *(undefined4 *)(iVar13 + 0x1c) = uVar20;
  local_3c = s_cState_Hide_00313fd0;
  local_40 = uVar9;
  func_0010BEC4((int)(puVar7 + -0x38),4,(int *)&local_40);
  iVar13 = puVar7[-0x32];
  uVar16 = puVar4[0x15];
  uVar17 = puVar4[0x16];
  uVar18 = puVar4[0x17];
  uVar19 = puVar4[0x18];
  uVar20 = puVar4[0x19];
  *(undefined4 *)(iVar13 + 0x20) = puVar4[0x14];
  *(undefined4 *)(iVar13 + 0x24) = uVar16;
  iVar13 = puVar7[-0x31];
  *(undefined4 *)(iVar13 + 0x20) = uVar17;
  *(undefined4 *)(iVar13 + 0x24) = uVar18;
  iVar13 = puVar7[-0x30];
  *(undefined4 *)(iVar13 + 0x20) = uVar19;
  *(undefined4 *)(iVar13 + 0x24) = uVar20;
  local_3c = s_cState_ShopBaseWait_00313fdc;
  local_40 = uVar9;
  func_0010BEC4((int)(puVar7 + -0x38),5,(int *)&local_40);
  iVar13 = puVar7[-0x32];
  uVar16 = puVar4[0x1c];
  uVar17 = puVar4[0x1d];
  uVar18 = puVar4[0x1b];
  uVar21 = *(undefined8 *)(puVar4 + 4);
  *(undefined4 *)(iVar13 + 0x28) = puVar4[0x1a];
  *(undefined4 *)(iVar13 + 0x2c) = uVar18;
  iVar13 = puVar7[-0x31];
  *(undefined4 *)(iVar13 + 0x28) = uVar16;
  *(undefined4 *)(iVar13 + 0x2c) = uVar17;
  iVar13 = puVar7[-0x30];
  *(int *)(iVar13 + 0x28) = (int)uVar21;
  *(int *)(iVar13 + 0x2c) = (int)((ulonglong)uVar21 >> 0x20);
  local_3c = s_cState_EvOpenStart_00313ff0;
  local_40 = uVar9;
  func_0010BEC4((int)(puVar7 + -0x38),6,(int *)&local_40);
  iVar13 = puVar7[-0x32];
  uVar16 = puVar4[0x1f];
  uVar17 = puVar4[0x20];
  uVar18 = puVar4[0x21];
  *(undefined4 *)(iVar13 + 0x30) = puVar4[0x1e];
  *(undefined4 *)(iVar13 + 0x34) = uVar16;
  iVar13 = puVar7[-0x31];
  *(undefined4 *)(iVar13 + 0x30) = uVar17;
  *(undefined4 *)(iVar13 + 0x34) = uVar18;
  iVar13 = puVar7[-0x30];
  *(int *)(iVar13 + 0x30) = (int)uVar21;
  *(int *)(iVar13 + 0x34) = (int)((ulonglong)uVar21 >> 0x20);
  local_3c = s_cState_EvOpenSurprise_00314004;
  local_40 = uVar9;
  func_0010BEC4((int)(puVar7 + -0x38),7,(int *)&local_40);
  iVar13 = puVar7[-0x32];
  uVar16 = puVar4[0x23];
  uVar17 = puVar4[0x24];
  uVar18 = puVar4[0x25];
  *(undefined4 *)(iVar13 + 0x38) = puVar4[0x22];
  *(undefined4 *)(iVar13 + 0x3c) = uVar16;
  iVar13 = puVar7[-0x31];
  *(undefined4 *)(iVar13 + 0x38) = uVar17;
  *(undefined4 *)(iVar13 + 0x3c) = uVar18;
  iVar13 = puVar7[-0x30];
  *(int *)(iVar13 + 0x38) = (int)uVar21;
  *(int *)(iVar13 + 0x3c) = (int)((ulonglong)uVar21 >> 0x20);
  local_3c = s_cState_EvOpenApproachPlayer_0031401c;
  local_40 = uVar9;
  func_0010BEC4((int)(puVar7 + -0x38),8,(int *)&local_40);
  iVar13 = puVar7[-0x32];
  uVar16 = puVar4[0x27];
  uVar17 = puVar4[0x28];
  uVar18 = puVar4[0x29];
  *(undefined4 *)(iVar13 + 0x40) = puVar4[0x26];
  *(undefined4 *)(iVar13 + 0x44) = uVar16;
  iVar13 = puVar7[-0x31];
  *(undefined4 *)(iVar13 + 0x40) = uVar17;
  *(undefined4 *)(iVar13 + 0x44) = uVar18;
  iVar13 = puVar7[-0x30];
  *(int *)(iVar13 + 0x40) = (int)uVar21;
  *(int *)(iVar13 + 0x44) = (int)((ulonglong)uVar21 >> 0x20);
  local_3c = s_cState_EvOpenLookAtPlayer_00314038;
  local_40 = uVar9;
  func_0010BEC4((int)(puVar7 + -0x38),9,(int *)&local_40);
  iVar13 = puVar7[-0x32];
  uVar17 = puVar4[0x2b];
  uVar18 = puVar4[0x2c];
  uVar16 = puVar4[0x2d];
  *(undefined4 *)(iVar13 + 0x48) = puVar4[0x2a];
  *(undefined4 *)(iVar13 + 0x4c) = uVar17;
  iVar13 = puVar7[-0x31];
  *(undefined4 *)(iVar13 + 0x48) = uVar18;
  *(undefined4 *)(iVar13 + 0x4c) = uVar16;
  iVar13 = puVar7[-0x30];
  *(int *)(iVar13 + 0x48) = (int)uVar21;
  *(int *)(iVar13 + 0x4c) = (int)((ulonglong)uVar21 >> 0x20);
  local_3c = s_cState_EvAppearStart_00314054;
  local_40 = uVar9;
  func_0010BEC4((int)(puVar7 + -0x38),10,(int *)&local_40);
  iVar13 = puVar7[-0x32];
  uVar16 = puVar4[0x2f];
  uVar17 = puVar4[0x30];
  uVar18 = puVar4[0x31];
  *(undefined4 *)(iVar13 + 0x50) = puVar4[0x2e];
  *(undefined4 *)(iVar13 + 0x54) = uVar16;
  iVar13 = puVar7[-0x31];
  *(undefined4 *)(iVar13 + 0x50) = uVar17;
  *(undefined4 *)(iVar13 + 0x54) = uVar18;
  iVar13 = puVar7[-0x30];
  *(int *)(iVar13 + 0x50) = (int)uVar21;
  *(int *)(iVar13 + 0x54) = (int)((ulonglong)uVar21 >> 0x20);
  local_3c = s_cState_ItemSaleWait_0031406c;
  local_40 = uVar9;
  func_0010BEC4((int)(puVar7 + -0x38),0xb,(int *)&local_40);
  iVar13 = puVar7[-0x32];
  uVar16 = puVar4[0x33];
  uVar17 = puVar4[0x34];
  uVar18 = puVar4[0x35];
  *(undefined4 *)(iVar13 + 0x58) = puVar4[0x32];
  *(undefined4 *)(iVar13 + 0x5c) = uVar16;
  iVar13 = puVar7[-0x31];
  *(undefined4 *)(iVar13 + 0x58) = uVar17;
  *(undefined4 *)(iVar13 + 0x5c) = uVar18;
  iVar13 = puVar7[-0x30];
  *(int *)(iVar13 + 0x58) = (int)uVar21;
  *(int *)(iVar13 + 0x5c) = (int)((ulonglong)uVar21 >> 0x20);
  local_3c = s_cState_ItemSaleMove_00314080;
  local_40 = uVar9;
  func_0010BEC4((int)(puVar7 + -0x38),0xc,(int *)&local_40);
  iVar13 = puVar7[-0x32];
  uVar16 = puVar4[0x37];
  uVar17 = puVar4[0x38];
  uVar18 = puVar4[0x39];
  *(undefined4 *)(iVar13 + 0x60) = puVar4[0x36];
  *(undefined4 *)(iVar13 + 100) = uVar16;
  iVar13 = puVar7[-0x31];
  *(undefined4 *)(iVar13 + 0x60) = uVar17;
  *(undefined4 *)(iVar13 + 100) = uVar18;
  iVar13 = puVar7[-0x30];
  *(int *)(iVar13 + 0x60) = (int)uVar21;
  *(int *)(iVar13 + 100) = (int)((ulonglong)uVar21 >> 0x20);
  if ((*(char *)((int)puVar7 + -10) == '\0') && (*(char *)((int)puVar7 + -5) == '\0')) {
    puVar7[-0x2f] = 0xb;
    pfVar12 = (float *)(puVar7 + -8);
    *pfVar12 = ALBW_AS_F32(puVar7[-0x19c]);
    puVar7[-7] = puVar7[-0x19b];
    puVar7[-6] = puVar7[-0x19a];
    func_00115C54(pfVar12,pfVar12,DAT_00314094);
  }
  func_006260FC((int)piVar6,puVar7[-0x2f],0);
  func_004C03B8((int)piVar6,DAT_00314098);
  if (*(char *)((int)puVar7 + -5) != '\0') {
    *(undefined1 *)((int)puVar7 + -0x1ed) = 0xb;
    *(undefined1 *)((int)puVar7 + -0x1eb) = 0xb;
    func_004BD280((int)piVar6,0xb,0);
    fparam_0 = DAT_0031409c;
    puVar7[-0x65] = puVar7[-0x65] | 0x14;
    func_004BDB2C(piVar6,puVar7[-0xae],fparam_0);
    *(undefined4 *)(puVar7[-0xa8] + 0x134) = uVar22;
  }
  bVar5 = func_00547B20((int)(puVar7 + -0x28f));
  if (((!bVar5) || (bVar5 = func_00547538((int)(puVar7 + -0x28f)), piVar3 = DAT_00313b98, bVar5)) ||
     (iVar13 = func_00556B2C(*DAT_00313b98), iVar13 == 0)) {
    if (((*(char *)((int)puVar7 + -10) == '\x01') && (bVar5 = func_00588BF0((int)piVar6,0), bVar5))
       && (bVar5 = func_00588BF0((int)piVar6,1), !bVar5)) {
      puVar7[-0x65] = puVar7[-0x65] | 4;
      if (((*DAT_003141b0 & 1) == 0) &&
         (iVar13 = func_00100174((int *)DAT_003141b0), puVar4 = DAT_003141b4, iVar13 != 0)) {
        *(undefined1 *)DAT_003141b4 = 0xff;
        *(undefined1 *)((int)puVar4 + 1) = 0xff;
        *(undefined1 *)((int)puVar4 + 2) = 0xff;
        *(undefined1 *)((int)puVar4 + 3) = 0xff;
      }
      if (*DAT_003141b8 != 0) {
        objStack_50[1] = (uint)s_Environment_GlassFilter_bch_003141bc;
        objStack_50[0] = uVar9;
        func_0027033C(*DAT_003141b8,(int *)objStack_50,DAT_003141b4,-1);
      }
      *(undefined2 *)(puVar7 + -3) = 0xaf;
      objStack_50[0] = 0;
      objStack_50[1] = 3;
      objStack_50[2] = 1;
      func_0036720C((int)(puVar7 + -0x1a),1,0x15e,400,0,3,1);
    }
  }
  else {
    func_00361604(*piVar3,0);
    *(undefined1 *)((int)puVar7 + -7) = 1;
  }
  puVar7[-0x65] = puVar7[-0x65] & 0xffffffdf;
  func_004BC8D8((int)piVar6);
  if (*(char *)((int)puVar7 + -5) == '\0') {
    func_004C17C0((int)piVar6);
  }
  return piVar6;
}

