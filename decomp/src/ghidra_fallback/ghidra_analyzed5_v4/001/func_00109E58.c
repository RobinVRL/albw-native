#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010CF7C(undefined4 *param_1,undefined1 param_2);
extern undefined8 *DAT_0010a370;
extern undefined *DAT_0010a374;
extern int DAT_0010a388;
extern char s_cState_BardSong_0010a38c[];
extern char s_cState_BossMediumGanon2ndEvent_0010a444[];
extern char s_cState_BossMediumGanon2nd_0010a428[];
extern char s_cState_DemoFrameCheck_0010a39c[];
extern char s_cState_DungionCastle_0010a3f8[];
extern char s_cState_EventTriforce_0010a410[];
extern char s_cState_EventZora_0010a3e4[];
extern char s_cState_KinSta_0010a3d4[];
extern char s_cState_Normal_0010a378[];
extern char s_cState_Race_0010a3c8[];
extern char s_cState_StaffCredit_0010a3b4[];

// USA 00109E58 <- EU 00109E58 (Ghidra, non-matching)
// GLOBAL DAT_0010a370 undefined8 *
// GLOBAL DAT_0010a374 undefined *
// GLOBAL DAT_0010a388 int
// GLOBAL s_cState_BardSong_0010a38c string
// GLOBAL s_cState_BossMediumGanon2ndEvent_0010a444 string
// GLOBAL s_cState_BossMediumGanon2nd_0010a428 string
// GLOBAL s_cState_DemoFrameCheck_0010a39c string
// GLOBAL s_cState_DungionCastle_0010a3f8 string
// GLOBAL s_cState_EventTriforce_0010a410 string
// GLOBAL s_cState_EventZora_0010a3e4 string
// GLOBAL s_cState_KinSta_0010a3d4 string
// GLOBAL s_cState_Normal_0010a378 string
// GLOBAL s_cState_Race_0010a3c8 string
// GLOBAL s_cState_StaffCredit_0010a3b4 string

undefined4 * func_00109E58(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0xff;
  puVar4 = func_0010A794(param_1 + 5);
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0xffffffff;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  *(undefined2 *)(puVar4 + 0x13) = 1;
  *(undefined2 *)((int)puVar4 + 0x4e) = 0x8000;
  *(undefined1 *)(puVar4 + 0x14) = 0;
  *(undefined1 *)((int)puVar4 + 0x51) = 0;
  *(undefined1 *)((int)puVar4 + 0x52) = 0;
  *(undefined1 *)((int)puVar4 + 0x53) = 0;
  *(undefined1 *)(puVar4 + 0x15) = 0;
  *(undefined1 *)((int)puVar4 + 0x55) = 0;
  *(undefined1 *)((int)puVar4 + 0x56) = 0;
  *(undefined1 *)((int)puVar4 + 0x57) = 0;
  *(undefined1 *)(puVar4 + 0x16) = 0;
  *(undefined1 *)((int)puVar4 + 6) = 0xb;
  puVar4[5] = puVar4 + -5;
  iVar5 = func_0010BA78(0xb0);
  puVar4[6] = iVar5;
  puVar2 = DAT_0010a370;
  iVar6 = 0xb;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  puVar7 = (undefined4 *)(iVar5 + -8);
  do {
    uVar12 = *(undefined4 *)((int)puVar2 + 4);
    iVar6 = iVar6 + -1;
    puVar7[2] = *(undefined4 *)puVar2;
    puVar7[3] = uVar12;
    uVar12 = *(undefined4 *)((int)puVar2 + 4);
    puVar7[4] = *(undefined4 *)puVar2;
    puVar7[5] = uVar12;
    puVar7 = puVar7 + 4;
  } while (iVar6 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar11 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar11 << 3);
  puVar4[8] = puVar7;
  if (uVar11 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = *(undefined4 *)((int)puVar2 + 0x14);
      *puVar7 = *(undefined4 *)(puVar2 + 2);
      puVar7[1] = uVar12;
      puVar8 = puVar7;
    }
    for (iVar5 = (int)uVar11 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar12 = *(undefined4 *)((int)puVar2 + 0x14);
      puVar8[2] = *(undefined4 *)(puVar2 + 2);
      puVar8[3] = uVar12;
      uVar12 = *(undefined4 *)((int)puVar2 + 0x14);
      puVar8[4] = *(undefined4 *)(puVar2 + 2);
      puVar8[5] = uVar12;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x194,(int *)0x0,4);
  puVar3 = DAT_0010a374;
  iVar5 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 0xb;
    *puVar7 = 0x24;
    iVar5 = func_00100118((int)(puVar7 + 2),puVar3,0x24,0xb);
  }
  if (iVar5 != 0) {
    puVar4[3] = iVar5;
    puVar4[2] = 0xb;
  }
  iVar5 = DAT_0010a388;
  local_2c = s_cState_Normal_0010a378;
  local_30 = DAT_0010a388;
  func_0010BEC4((int)puVar4,0,&local_30);
  puVar7 = (undefined4 *)puVar4[6];
  uVar9 = *(undefined4 *)puVar2;
  uVar12 = *(undefined4 *)(puVar2 + 1);
  uVar10 = *(undefined4 *)((int)puVar2 + 0xc);
  uVar13 = puVar2[2];
  puVar7[1] = *(undefined4 *)((int)puVar2 + 4);
  *puVar7 = uVar9;
  puVar7 = (undefined4 *)puVar4[7];
  *puVar7 = uVar12;
  puVar7[1] = uVar10;
  puVar7 = (undefined4 *)puVar4[8];
  *puVar7 = (int)uVar13;
  puVar7[1] = (int)((ulonglong)uVar13 >> 0x20);
  local_2c = s_cState_BardSong_0010a38c;
  local_30 = iVar5;
  func_0010BEC4((int)puVar4,1,&local_30);
  iVar6 = puVar4[6];
  uVar9 = *(undefined4 *)(puVar2 + 3);
  uVar10 = *(undefined4 *)((int)puVar2 + 0x1c);
  uVar12 = *(undefined4 *)((int)puVar2 + 4);
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)puVar2;
  *(undefined4 *)(iVar6 + 0xc) = uVar12;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 8) = uVar9;
  *(undefined4 *)(iVar6 + 0xc) = uVar10;
  iVar6 = puVar4[8];
  *(int *)(iVar6 + 8) = (int)uVar13;
  *(int *)(iVar6 + 0xc) = (int)((ulonglong)uVar13 >> 0x20);
  local_2c = s_cState_DemoFrameCheck_0010a39c;
  local_30 = iVar5;
  func_0010BEC4((int)puVar4,2,&local_30);
  iVar6 = puVar4[6];
  uVar10 = *(undefined4 *)((int)puVar2 + 0x24);
  uVar12 = *(undefined4 *)(puVar2 + 5);
  uVar9 = *(undefined4 *)((int)puVar2 + 0x2c);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(iVar6 + 0x14) = uVar10;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x10) = uVar12;
  *(undefined4 *)(iVar6 + 0x14) = uVar9;
  iVar6 = puVar4[8];
  *(int *)(iVar6 + 0x10) = (int)uVar13;
  *(int *)(iVar6 + 0x14) = (int)((ulonglong)uVar13 >> 0x20);
  local_2c = s_cState_StaffCredit_0010a3b4;
  local_30 = iVar5;
  func_0010BEC4((int)puVar4,3,&local_30);
  iVar6 = puVar4[6];
  uVar12 = *(undefined4 *)((int)puVar2 + 0x34);
  uVar10 = *(undefined4 *)(puVar2 + 7);
  uVar9 = *(undefined4 *)((int)puVar2 + 0x3c);
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(puVar2 + 6);
  *(undefined4 *)(iVar6 + 0x1c) = uVar12;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x18) = uVar10;
  *(undefined4 *)(iVar6 + 0x1c) = uVar9;
  iVar6 = puVar4[8];
  *(int *)(iVar6 + 0x18) = (int)uVar13;
  *(int *)(iVar6 + 0x1c) = (int)((ulonglong)uVar13 >> 0x20);
  local_2c = s_cState_Race_0010a3c8;
  local_30 = iVar5;
  func_0010BEC4((int)puVar4,4,&local_30);
  iVar6 = puVar4[6];
  uVar12 = *(undefined4 *)((int)puVar2 + 0x44);
  uVar10 = *(undefined4 *)(puVar2 + 9);
  uVar9 = *(undefined4 *)((int)puVar2 + 0x4c);
  *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(puVar2 + 8);
  *(undefined4 *)(iVar6 + 0x24) = uVar12;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x20) = uVar10;
  *(undefined4 *)(iVar6 + 0x24) = uVar9;
  iVar6 = puVar4[8];
  *(int *)(iVar6 + 0x20) = (int)uVar13;
  *(int *)(iVar6 + 0x24) = (int)((ulonglong)uVar13 >> 0x20);
  local_2c = s_cState_KinSta_0010a3d4;
  local_30 = iVar5;
  func_0010BEC4((int)puVar4,5,&local_30);
  iVar6 = puVar4[6];
  uVar10 = *(undefined4 *)((int)puVar2 + 0x54);
  uVar12 = *(undefined4 *)(puVar2 + 0xb);
  uVar9 = *(undefined4 *)((int)puVar2 + 0x5c);
  *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(puVar2 + 10);
  *(undefined4 *)(iVar6 + 0x2c) = uVar10;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x28) = uVar12;
  *(undefined4 *)(iVar6 + 0x2c) = uVar9;
  iVar6 = puVar4[8];
  *(int *)(iVar6 + 0x28) = (int)uVar13;
  *(int *)(iVar6 + 0x2c) = (int)((ulonglong)uVar13 >> 0x20);
  local_2c = s_cState_EventZora_0010a3e4;
  local_30 = iVar5;
  func_0010BEC4((int)puVar4,6,&local_30);
  iVar6 = puVar4[6];
  uVar9 = *(undefined4 *)((int)puVar2 + 100);
  uVar12 = *(undefined4 *)(puVar2 + 0xd);
  uVar10 = *(undefined4 *)((int)puVar2 + 0x6c);
  *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(puVar2 + 0xc);
  *(undefined4 *)(iVar6 + 0x34) = uVar9;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x30) = uVar12;
  *(undefined4 *)(iVar6 + 0x34) = uVar10;
  iVar6 = puVar4[8];
  *(int *)(iVar6 + 0x30) = (int)uVar13;
  *(int *)(iVar6 + 0x34) = (int)((ulonglong)uVar13 >> 0x20);
  local_2c = s_cState_DungionCastle_0010a3f8;
  local_30 = iVar5;
  func_0010BEC4((int)puVar4,7,&local_30);
  iVar6 = puVar4[6];
  uVar12 = *(undefined4 *)(puVar2 + 0xe);
  uVar9 = *(undefined4 *)((int)puVar2 + 0x74);
  uVar14 = *puVar2;
  *(int *)(iVar6 + 0x38) = (int)uVar14;
  *(int *)(iVar6 + 0x3c) = (int)((ulonglong)uVar14 >> 0x20);
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x38) = uVar12;
  *(undefined4 *)(iVar6 + 0x3c) = uVar9;
  iVar6 = puVar4[8];
  *(int *)(iVar6 + 0x38) = (int)uVar13;
  *(int *)(iVar6 + 0x3c) = (int)((ulonglong)uVar13 >> 0x20);
  local_2c = s_cState_EventTriforce_0010a410;
  local_30 = iVar5;
  func_0010BEC4((int)puVar4,8,&local_30);
  iVar6 = puVar4[6];
  uVar12 = *(undefined4 *)(puVar2 + 0xf);
  uVar9 = *(undefined4 *)((int)puVar2 + 0x7c);
  *(int *)(iVar6 + 0x40) = (int)uVar14;
  *(int *)(iVar6 + 0x44) = (int)((ulonglong)uVar14 >> 0x20);
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x40) = uVar12;
  *(undefined4 *)(iVar6 + 0x44) = uVar9;
  iVar6 = puVar4[8];
  *(int *)(iVar6 + 0x40) = (int)uVar13;
  *(int *)(iVar6 + 0x44) = (int)((ulonglong)uVar13 >> 0x20);
  local_2c = s_cState_BossMediumGanon2nd_0010a428;
  local_30 = iVar5;
  func_0010BEC4((int)puVar4,9,&local_30);
  iVar6 = puVar4[6];
  uVar12 = *(undefined4 *)((int)puVar2 + 0x84);
  uVar9 = *(undefined4 *)(puVar2 + 0x11);
  uVar10 = *(undefined4 *)((int)puVar2 + 0x8c);
  *(undefined4 *)(iVar6 + 0x48) = *(undefined4 *)(puVar2 + 0x10);
  *(undefined4 *)(iVar6 + 0x4c) = uVar12;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x48) = uVar9;
  *(undefined4 *)(iVar6 + 0x4c) = uVar10;
  iVar6 = puVar4[8];
  *(int *)(iVar6 + 0x48) = (int)uVar13;
  *(int *)(iVar6 + 0x4c) = (int)((ulonglong)uVar13 >> 0x20);
  local_2c = s_cState_BossMediumGanon2ndEvent_0010a444;
  local_30 = iVar5;
  func_0010BEC4((int)puVar4,10,&local_30);
  iVar5 = puVar4[6];
  uVar10 = *(undefined4 *)((int)puVar2 + 0x94);
  uVar12 = *(undefined4 *)(puVar2 + 0x13);
  uVar9 = *(undefined4 *)((int)puVar2 + 0x9c);
  *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(puVar2 + 0x12);
  *(undefined4 *)(iVar5 + 0x54) = uVar10;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x50) = uVar12;
  *(undefined4 *)(iVar5 + 0x54) = uVar9;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x50) = (int)uVar13;
  *(int *)(iVar5 + 0x54) = (int)((ulonglong)uVar13 >> 0x20);
  func_0010CF7C(puVar4,0);
  return puVar4 + -5;
}

