#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014CFF0(int param_1,int param_2);
extern int func_0014D0F4(undefined4 *param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_002313DC(int param_1);
extern int func_002C00D4(undefined4 *param_1,undefined4 param_2,int *param_3);
extern int func_002C0294(undefined4 *param_1);
extern int func_0047FE9C(undefined4 *param_1,int *param_2,int *param_3);
extern int func_0066E58C(undefined4 *param_1,char param_2);
extern undefined4 DAT_00475390;
extern undefined4 DAT_00475394;
extern undefined4 DAT_00475398;
extern undefined DAT_0047539c;
extern int DAT_004753a0;
extern undefined DAT_004753a4;
extern int DAT_00475434;
extern undefined4 *DAT_00475438;
extern undefined4 *DAT_0047543c;
extern undefined *DAT_00475814;
extern char s_CopyCancel_004753cc[];
extern char s_CopyFinish_0047540c[];
extern char s_CopyMaster_004753c0[];
extern char s_Decide_004753b8[];
extern char s_Decide_01_00475400[];
extern char s_DeleteDecide_004753d8[];
extern char s_KeyOn_004753b0[];
extern char s_KeyOn_01_004753f4[];
extern char s_L_FileStateOne_00_00475420[];
extern char s_SetBtn_00475418[];
extern char s_TouchOn_004753a8[];
extern char s_TouchOn_01_004753e8[];
extern char s_cState_Cancel_00475854[];
extern char s_cState_CopyCancel_004758b4[];
extern char s_cState_CopyChoice_004758c8[];
extern char s_cState_CopyChoiced_004758f0[];
extern char s_cState_CopyDecide_00475aa4[];
extern char s_cState_CopyDest_00475a94[];
extern char s_cState_CopyFinish_00475ab8[];
extern char s_cState_CopyMaster_004758a0[];
extern char s_cState_CopyToWait_00475acc[];
extern char s_cState_Decide_00475834[];
extern char s_cState_DeleteDecide_00475864[];
extern char s_cState_DeleteFinish_00475878[];
extern char s_cState_DeleteToWait_0047588c[];
extern char s_cState_KeyOnCopy_004758dc[];
extern char s_cState_KeyOn_00475824[];
extern char s_cState_Selected_00475844[];
extern char s_cState_Wait_00475818[];

// USA 00474FCC <- EU 00474FA4 (Ghidra, non-matching)
// GLOBAL DAT_00475390 undefined4
// GLOBAL DAT_00475394 undefined4
// GLOBAL DAT_00475398 undefined4
// GLOBAL DAT_0047539c undefined
// GLOBAL DAT_004753a0 int
// GLOBAL DAT_004753a4 undefined
// GLOBAL DAT_00475434 int
// GLOBAL DAT_00475438 undefined4 *
// GLOBAL DAT_0047543c undefined4 *
// GLOBAL DAT_00475814 undefined *
// GLOBAL s_CopyCancel_004753cc string
// GLOBAL s_CopyFinish_0047540c string
// GLOBAL s_CopyMaster_004753c0 string
// GLOBAL s_Decide_004753b8 string
// GLOBAL s_Decide_01_00475400 string
// GLOBAL s_DeleteDecide_004753d8 string
// GLOBAL s_KeyOn_004753b0 string
// GLOBAL s_KeyOn_01_004753f4 string
// GLOBAL s_L_FileStateOne_00_00475420 string
// GLOBAL s_SetBtn_00475418 string
// GLOBAL s_TouchOn_004753a8 string
// GLOBAL s_TouchOn_01_004753e8 string
// GLOBAL s_cState_Cancel_00475854 string
// GLOBAL s_cState_CopyCancel_004758b4 string
// GLOBAL s_cState_CopyChoice_004758c8 string
// GLOBAL s_cState_CopyChoiced_004758f0 string
// GLOBAL s_cState_CopyDecide_00475aa4 string
// GLOBAL s_cState_CopyDest_00475a94 string
// GLOBAL s_cState_CopyFinish_00475ab8 string
// GLOBAL s_cState_CopyMaster_004758a0 string
// GLOBAL s_cState_CopyToWait_00475acc string
// GLOBAL s_cState_Decide_00475834 string
// GLOBAL s_cState_DeleteDecide_00475864 string
// GLOBAL s_cState_DeleteFinish_00475878 string
// GLOBAL s_cState_DeleteToWait_0047588c string
// GLOBAL s_cState_KeyOnCopy_004758dc string
// GLOBAL s_cState_KeyOn_00475824 string
// GLOBAL s_cState_Selected_00475844 string
// GLOBAL s_cState_Wait_00475818 string

undefined4 * func_00474FCC(undefined4 *param_1,undefined1 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int *piVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined8 uVar18;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  puVar3 = func_0014D0F4(param_1);
  *puVar3 = DAT_00475390;
  puVar3 = func_0010A794(puVar3 + 0x32);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined2 *)(puVar3 + 9) = 0;
  uVar16 = DAT_00475394;
  *(undefined2 *)((int)puVar3 + 0x26) = 0xffff;
  puVar3[10] = uVar16;
  puVar3[0xb] = 0;
  *(undefined1 *)(puVar3 + 0xc) = 0;
  puVar3[0xd] = 0;
  puVar13 = puVar3 + -0x32;
  *(undefined1 *)(puVar3 + 0xe) = 0;
  (**(code **)(puVar3[-0x32] + 0x38))(puVar13,DAT_00475398,0);
  piVar14 = (int *)puVar3[-0x2b];
  puVar3[-0x2c] = puVar3[-0x2c] & 0xfffffffd;
  func_0016773C((int)piVar14,0xe);
  iVar17 = DAT_004753a0;
  local_2c = &DAT_0047539c;
  local_30 = DAT_004753a0;
  func_00166C20(piVar14,0,&local_30,0);
  local_2c = &DAT_004753a4;
  local_30 = iVar17;
  func_00166C20(piVar14,1,&local_30,0);
  local_2c = s_TouchOn_004753a8;
  local_30 = iVar17;
  func_00166C20(piVar14,2,&local_30,0);
  local_2c = s_KeyOn_004753b0;
  local_30 = iVar17;
  func_00166C20(piVar14,3,&local_30,0);
  local_2c = s_Decide_004753b8;
  local_30 = iVar17;
  func_00166C20(piVar14,4,&local_30,0);
  local_2c = s_CopyMaster_004753c0;
  local_30 = iVar17;
  func_00166C20(piVar14,5,&local_30,0);
  local_2c = s_CopyCancel_004753cc;
  local_30 = iVar17;
  func_00166C20(piVar14,6,&local_30,0);
  local_2c = s_CopyCancel_004753cc + 4;
  local_30 = iVar17;
  func_00166C20(piVar14,7,&local_30,0);
  local_2c = s_DeleteDecide_004753d8;
  local_30 = iVar17;
  func_00166C20(piVar14,8,&local_30,0);
  local_2c = s_TouchOn_01_004753e8;
  local_30 = iVar17;
  func_00166C20(piVar14,9,&local_30,0);
  local_2c = s_KeyOn_01_004753f4;
  local_30 = iVar17;
  func_00166C20(piVar14,10,&local_30,0);
  local_2c = s_Decide_01_00475400;
  local_30 = iVar17;
  func_00166C20(piVar14,0xb,&local_30,0);
  local_2c = s_CopyFinish_0047540c;
  local_30 = iVar17;
  func_00166C20(piVar14,0xc,&local_30,0);
  local_2c = s_SetBtn_00475418;
  local_30 = iVar17;
  func_00166C20(piVar14,0xd,&local_30,0);
  puVar3[-0x28] = piVar14;
  *(undefined2 *)((int)puVar3 + -0xa6) = 1;
  *(undefined2 *)(puVar3 + -0x2a) = 0;
  puVar3[-0x25] = piVar14;
  *(undefined2 *)((int)puVar3 + -0x9a) = 0;
  *(undefined2 *)(puVar3 + -0x27) = 0;
  func_002313DC((int)(puVar3 + -0x2a));
  puVar4 = (undefined4 *)func_0010BAB4(0x15c);
  puVar5 = (undefined2 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    local_2c = s_L_FileStateOne_00_00475420;
    local_30 = iVar17;
    puVar5 = func_0047FE9C(puVar4,piVar14,&local_30);
  }
  puVar3[0xd] = puVar5;
  func_0014CFF0((int)puVar13,(int)puVar5);
  puVar6 = (undefined4 *)func_0010BAB4(0x20);
  puVar4 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar4 = func_002C0294(puVar6);
  }
  puVar3[-0x2d] = puVar4;
  func_002C00D4(puVar4,puVar13,piVar14);
  *(ushort *)(puVar3[-0x2d] + 0x16) = *(ushort *)(puVar3[-0x2d] + 0x16) & 0xffbf;
  *(undefined1 *)(puVar3 + 0xc) = param_2;
  puVar3[5] = puVar13;
  *(undefined1 *)((int)puVar3 + 6) = 0x11;
  iVar7 = func_0010BA78(0x110);
  iVar10 = DAT_00475434;
  puVar3[6] = iVar7;
  puVar3[7] = iVar7 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar9 = 0x11;
  puVar4 = (undefined4 *)(iVar7 + -8);
  do {
    uVar16 = DAT_00475438[1];
    iVar9 = iVar9 + -1;
    puVar4[2] = *DAT_00475438;
    puVar4[3] = uVar16;
    uVar16 = *(undefined4 *)(iVar10 + 0x3c);
    puVar4[4] = *(undefined4 *)(iVar10 + 0x38);
    puVar4[5] = uVar16;
    puVar4 = puVar4 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar15 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar4 = DAT_0047543c;
  puVar3[8] = puVar6;
  if (uVar15 != 0) {
    puVar8 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = puVar4[5];
      *puVar6 = puVar4[4];
      puVar6[1] = uVar16;
      puVar8 = puVar6;
    }
    for (iVar10 = (int)uVar15 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar16 = puVar4[5];
      puVar8[2] = puVar4[4];
      puVar8[3] = uVar16;
      uVar16 = puVar4[5];
      puVar8[4] = puVar4[4];
      puVar8[5] = uVar16;
      puVar8 = puVar8 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x26c,(int *)0x0,4);
  iVar10 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[1] = 0x11;
    puVar2 = DAT_00475814;
    *puVar6 = 0x24;
    iVar10 = func_00100118((int)(puVar6 + 2),puVar2,0x24,0x11);
  }
  if (iVar10 != 0) {
    puVar3[3] = iVar10;
    puVar3[2] = 0x11;
  }
  local_2c = s_cState_Wait_00475818;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,0,&local_30);
  puVar6 = (undefined4 *)puVar3[6];
  uVar11 = *puVar4;
  uVar16 = puVar4[2];
  uVar12 = puVar4[3];
  uVar18 = *(undefined8 *)(puVar4 + 4);
  puVar6[1] = puVar4[1];
  *puVar6 = uVar11;
  puVar6 = (undefined4 *)puVar3[7];
  *puVar6 = uVar16;
  puVar6[1] = uVar12;
  puVar6 = (undefined4 *)puVar3[8];
  *puVar6 = (int)uVar18;
  puVar6[1] = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_KeyOn_00475824;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,1,&local_30);
  iVar10 = puVar3[6];
  uVar16 = puVar4[7];
  uVar11 = puVar4[8];
  uVar12 = puVar4[9];
  *(undefined4 *)(iVar10 + 8) = puVar4[6];
  *(undefined4 *)(iVar10 + 0xc) = uVar16;
  iVar10 = puVar3[7];
  *(undefined4 *)(iVar10 + 8) = uVar11;
  *(undefined4 *)(iVar10 + 0xc) = uVar12;
  iVar10 = puVar3[8];
  *(int *)(iVar10 + 8) = (int)uVar18;
  *(int *)(iVar10 + 0xc) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_Decide_00475834;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,2,&local_30);
  iVar10 = puVar3[6];
  uVar16 = puVar4[0xb];
  uVar12 = puVar4[0xc];
  uVar11 = puVar4[0xd];
  *(undefined4 *)(iVar10 + 0x10) = puVar4[10];
  *(undefined4 *)(iVar10 + 0x14) = uVar16;
  iVar10 = puVar3[7];
  *(undefined4 *)(iVar10 + 0x10) = uVar12;
  *(undefined4 *)(iVar10 + 0x14) = uVar11;
  iVar10 = puVar3[8];
  *(int *)(iVar10 + 0x10) = (int)uVar18;
  *(int *)(iVar10 + 0x14) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_Selected_00475844;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,3,&local_30);
  iVar10 = puVar3[6];
  uVar16 = puVar4[0x10];
  uVar12 = puVar4[0x11];
  uVar11 = puVar4[0xf];
  *(undefined4 *)(iVar10 + 0x18) = puVar4[0xe];
  *(undefined4 *)(iVar10 + 0x1c) = uVar11;
  iVar10 = puVar3[7];
  *(undefined4 *)(iVar10 + 0x18) = uVar16;
  *(undefined4 *)(iVar10 + 0x1c) = uVar12;
  iVar10 = puVar3[8];
  *(int *)(iVar10 + 0x18) = (int)uVar18;
  *(int *)(iVar10 + 0x1c) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_Cancel_00475854;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,4,&local_30);
  iVar10 = puVar3[6];
  uVar16 = puVar4[0x13];
  uVar12 = puVar4[0x14];
  uVar11 = puVar4[0x15];
  *(undefined4 *)(iVar10 + 0x20) = puVar4[0x12];
  *(undefined4 *)(iVar10 + 0x24) = uVar16;
  iVar10 = puVar3[7];
  *(undefined4 *)(iVar10 + 0x20) = uVar12;
  *(undefined4 *)(iVar10 + 0x24) = uVar11;
  iVar10 = puVar3[8];
  *(int *)(iVar10 + 0x20) = (int)uVar18;
  *(int *)(iVar10 + 0x24) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_DeleteDecide_00475864;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,5,&local_30);
  iVar10 = puVar3[6];
  uVar11 = puVar4[0x17];
  uVar12 = puVar4[0x18];
  uVar16 = puVar4[0x19];
  *(undefined4 *)(iVar10 + 0x28) = puVar4[0x16];
  *(undefined4 *)(iVar10 + 0x2c) = uVar11;
  iVar10 = puVar3[7];
  *(undefined4 *)(iVar10 + 0x28) = uVar12;
  *(undefined4 *)(iVar10 + 0x2c) = uVar16;
  iVar10 = puVar3[8];
  *(int *)(iVar10 + 0x28) = (int)uVar18;
  *(int *)(iVar10 + 0x2c) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_DeleteFinish_00475878;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,6,&local_30);
  iVar10 = puVar3[6];
  uVar16 = puVar4[0x1c];
  uVar12 = puVar4[0x1d];
  uVar11 = puVar4[0x1b];
  *(undefined4 *)(iVar10 + 0x30) = puVar4[0x1a];
  *(undefined4 *)(iVar10 + 0x34) = uVar11;
  iVar10 = puVar3[7];
  *(undefined4 *)(iVar10 + 0x30) = uVar16;
  *(undefined4 *)(iVar10 + 0x34) = uVar12;
  iVar10 = puVar3[8];
  *(int *)(iVar10 + 0x30) = (int)uVar18;
  *(int *)(iVar10 + 0x34) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_DeleteToWait_0047588c;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,7,&local_30);
  iVar10 = puVar3[6];
  uVar16 = puVar4[0x1f];
  uVar11 = puVar4[0x20];
  uVar12 = puVar4[0x21];
  *(undefined4 *)(iVar10 + 0x38) = puVar4[0x1e];
  *(undefined4 *)(iVar10 + 0x3c) = uVar16;
  iVar10 = puVar3[7];
  *(undefined4 *)(iVar10 + 0x38) = uVar11;
  *(undefined4 *)(iVar10 + 0x3c) = uVar12;
  iVar10 = puVar3[8];
  *(int *)(iVar10 + 0x38) = (int)uVar18;
  *(int *)(iVar10 + 0x3c) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_CopyMaster_004758a0;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,8,&local_30);
  iVar10 = puVar3[6];
  uVar16 = puVar4[0x24];
  uVar12 = puVar4[0x25];
  uVar11 = puVar4[0x23];
  *(undefined4 *)(iVar10 + 0x40) = puVar4[0x22];
  *(undefined4 *)(iVar10 + 0x44) = uVar11;
  iVar10 = puVar3[7];
  *(undefined4 *)(iVar10 + 0x40) = uVar16;
  *(undefined4 *)(iVar10 + 0x44) = uVar12;
  iVar10 = puVar3[8];
  *(int *)(iVar10 + 0x40) = (int)uVar18;
  *(int *)(iVar10 + 0x44) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_CopyCancel_004758b4;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,9,&local_30);
  iVar10 = puVar3[6];
  uVar16 = puVar4[0x27];
  uVar12 = puVar4[0x28];
  uVar11 = puVar4[0x29];
  *(undefined4 *)(iVar10 + 0x48) = puVar4[0x26];
  *(undefined4 *)(iVar10 + 0x4c) = uVar16;
  iVar10 = puVar3[7];
  *(undefined4 *)(iVar10 + 0x48) = uVar12;
  *(undefined4 *)(iVar10 + 0x4c) = uVar11;
  iVar10 = puVar3[8];
  *(int *)(iVar10 + 0x48) = (int)uVar18;
  *(int *)(iVar10 + 0x4c) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_CopyChoice_004758c8;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,10,&local_30);
  iVar10 = puVar3[6];
  uVar11 = puVar4[0x2b];
  uVar16 = puVar4[0x2c];
  uVar12 = puVar4[0x2d];
  *(undefined4 *)(iVar10 + 0x50) = puVar4[0x2a];
  *(undefined4 *)(iVar10 + 0x54) = uVar11;
  iVar10 = puVar3[7];
  *(undefined4 *)(iVar10 + 0x50) = uVar16;
  *(undefined4 *)(iVar10 + 0x54) = uVar12;
  iVar10 = puVar3[8];
  *(int *)(iVar10 + 0x50) = (int)uVar18;
  *(int *)(iVar10 + 0x54) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_KeyOnCopy_004758dc;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,0xb,&local_30);
  iVar10 = puVar3[6];
  uVar11 = puVar4[0x2f];
  uVar12 = puVar4[0x30];
  uVar16 = puVar4[0x31];
  *(undefined4 *)(iVar10 + 0x58) = puVar4[0x2e];
  *(undefined4 *)(iVar10 + 0x5c) = uVar11;
  iVar10 = puVar3[7];
  *(undefined4 *)(iVar10 + 0x58) = uVar12;
  *(undefined4 *)(iVar10 + 0x5c) = uVar16;
  iVar10 = puVar3[8];
  *(int *)(iVar10 + 0x58) = (int)uVar18;
  *(int *)(iVar10 + 0x5c) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_CopyChoiced_004758f0;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,0xc,&local_30);
  iVar10 = puVar3[6];
  uVar11 = puVar4[0x33];
  uVar16 = puVar4[0x34];
  uVar12 = puVar4[0x35];
  *(undefined4 *)(iVar10 + 0x60) = puVar4[0x32];
  *(undefined4 *)(iVar10 + 100) = uVar11;
  iVar10 = puVar3[7];
  *(undefined4 *)(iVar10 + 0x60) = uVar16;
  *(undefined4 *)(iVar10 + 100) = uVar12;
  iVar10 = puVar3[8];
  *(int *)(iVar10 + 0x60) = (int)uVar18;
  *(int *)(iVar10 + 100) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_CopyDest_00475a94;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,0xd,&local_30);
  iVar10 = puVar3[6];
  uVar11 = puVar4[0x37];
  uVar16 = puVar4[0x38];
  uVar12 = puVar4[0x39];
  *(undefined4 *)(iVar10 + 0x68) = puVar4[0x36];
  *(undefined4 *)(iVar10 + 0x6c) = uVar11;
  iVar10 = puVar3[7];
  *(undefined4 *)(iVar10 + 0x68) = uVar16;
  *(undefined4 *)(iVar10 + 0x6c) = uVar12;
  iVar10 = puVar3[8];
  *(int *)(iVar10 + 0x68) = (int)uVar18;
  *(int *)(iVar10 + 0x6c) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_CopyDecide_00475aa4;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,0xe,&local_30);
  iVar10 = puVar3[6];
  uVar12 = puVar4[0x3b];
  uVar16 = puVar4[0x3d];
  uVar11 = puVar4[0x3c];
  *(undefined4 *)(iVar10 + 0x70) = puVar4[0x3a];
  *(undefined4 *)(iVar10 + 0x74) = uVar12;
  iVar10 = puVar3[7];
  *(undefined4 *)(iVar10 + 0x70) = uVar11;
  *(undefined4 *)(iVar10 + 0x74) = uVar16;
  iVar10 = puVar3[8];
  *(int *)(iVar10 + 0x70) = (int)uVar18;
  *(int *)(iVar10 + 0x74) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_CopyFinish_00475ab8;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,0xf,&local_30);
  puVar4 = DAT_0047543c;
  iVar10 = puVar3[6];
  uVar12 = DAT_0047543c[0x3f];
  uVar16 = DAT_0047543c[0x40];
  uVar11 = DAT_0047543c[0x41];
  *(undefined4 *)(iVar10 + 0x78) = DAT_0047543c[0x3e];
  *(undefined4 *)(iVar10 + 0x7c) = uVar12;
  iVar10 = puVar3[7];
  *(undefined4 *)(iVar10 + 0x78) = uVar16;
  *(undefined4 *)(iVar10 + 0x7c) = uVar11;
  iVar10 = puVar3[8];
  *(int *)(iVar10 + 0x78) = (int)uVar18;
  *(int *)(iVar10 + 0x7c) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_CopyToWait_00475acc;
  local_30 = iVar17;
  func_0010BEC4((int)puVar3,0x10,&local_30);
  iVar17 = puVar3[6];
  uVar16 = puVar4[0x43];
  uVar11 = puVar4[0x44];
  uVar12 = puVar4[0x45];
  *(undefined4 *)(iVar17 + 0x80) = puVar4[0x42];
  *(undefined4 *)(iVar17 + 0x84) = uVar16;
  iVar17 = puVar3[7];
  *(undefined4 *)(iVar17 + 0x80) = uVar11;
  *(undefined4 *)(iVar17 + 0x84) = uVar12;
  iVar17 = puVar3[8];
  *(int *)(iVar17 + 0x80) = (int)uVar18;
  *(int *)(iVar17 + 0x84) = (int)((ulonglong)uVar18 >> 0x20);
  func_0066E58C(puVar3,'\0');
  return puVar13;
}

