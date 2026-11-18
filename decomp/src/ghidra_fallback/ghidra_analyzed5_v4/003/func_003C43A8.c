#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_003B1828(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern undefined4 DAT_003c4748;
extern int DAT_003c474c;
extern undefined4 *DAT_003c4750;
extern undefined4 *DAT_003c4754;
extern undefined4 *DAT_003c4758;
extern undefined *DAT_003c475c;
extern int DAT_003c476c;
extern char s_EnemyShadowLinkStateHookShot_003c4728[];
extern char s_cState_Approach_003c4770[];
extern char s_cState_Attack_003c47a8[];
extern char s_cState_Away_003c4780[];
extern char s_cState_BoomerangPull_003c48f4[];
extern char s_cState_Die_003c479c[];
extern char s_cState_EventResult_003c490c[];
extern char s_cState_Piyori_003c47b8[];
extern char s_cState_Pull_003c4920[];
extern char s_cState_Reaction_003c478c[];
extern char s_cState_TornadoPiyori_003c47c8[];
extern char s_cState_Wait_003c4760[];

// USA 003C43A8 <- EU 003C4384 (Ghidra, non-matching)
// GLOBAL DAT_003c4748 undefined4
// GLOBAL DAT_003c474c int
// GLOBAL DAT_003c4750 undefined4 *
// GLOBAL DAT_003c4754 undefined4 *
// GLOBAL DAT_003c4758 undefined4 *
// GLOBAL DAT_003c475c undefined *
// GLOBAL DAT_003c476c int
// GLOBAL s_EnemyShadowLinkStateHookShot_003c4728 string
// GLOBAL s_cState_Approach_003c4770 string
// GLOBAL s_cState_Attack_003c47a8 string
// GLOBAL s_cState_Away_003c4780 string
// GLOBAL s_cState_BoomerangPull_003c48f4 string
// GLOBAL s_cState_Die_003c479c string
// GLOBAL s_cState_EventResult_003c490c string
// GLOBAL s_cState_Piyori_003c47b8 string
// GLOBAL s_cState_Pull_003c4920 string
// GLOBAL s_cState_Reaction_003c478c string
// GLOBAL s_cState_TornadoPiyori_003c47c8 string
// GLOBAL s_cState_Wait_003c4760 string

int func_003C43A8(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  puVar2 = (undefined4 *)func_003B1828(param_1,param_2,s_EnemyShadowLinkStateHookShot_003c4728);
  *puVar2 = DAT_003c4748;
  puVar3 = func_0010A794(puVar2 + 0x1b);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)((int)puVar3 + 6) = 0xb;
  puVar3[5] = puVar3 + -0x1b;
  iVar4 = func_0010BA78(0xb0);
  puVar3[6] = iVar4;
  iVar5 = DAT_003c474c;
  puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar7 = 0xb;
  puVar2 = (undefined4 *)(iVar4 + -8);
  do {
    uVar9 = DAT_003c4750[1];
    iVar7 = iVar7 + -1;
    puVar2[2] = *DAT_003c4750;
    puVar2[3] = uVar9;
    uVar9 = *(undefined4 *)(iVar5 + 0xc);
    puVar2[4] = *(undefined4 *)(iVar5 + 8);
    puVar2[5] = uVar9;
    puVar2 = puVar2 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar8 = (uint)bVar1;
  puVar2 = (undefined4 *)func_0010BA78(uVar8 << 3);
  puVar3[8] = puVar2;
  if (uVar8 != 0) {
    puVar6 = puVar2 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = DAT_003c4754[0x45];
      *puVar2 = DAT_003c4754[0x44];
      puVar2[1] = uVar9;
      puVar6 = puVar2;
    }
    for (iVar4 = (int)uVar8 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar9 = DAT_003c4758[1];
      puVar6[2] = *DAT_003c4758;
      puVar6[3] = uVar9;
      uVar9 = *(undefined4 *)(iVar5 + 0x14);
      puVar6[4] = *(undefined4 *)(iVar5 + 0x10);
      puVar6[5] = uVar9;
      puVar6 = puVar6 + 4;
    }
  }
  puVar2 = (undefined4 *)func_0010CEE0(0x194,(int *)0x0,4);
  iVar5 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x24;
    puVar2[1] = 0xb;
    iVar5 = func_00100118((int)(puVar2 + 2),DAT_003c475c,0x24,0xb);
  }
  if (iVar5 != 0) {
    puVar3[3] = iVar5;
    puVar3[2] = 0xb;
  }
  puVar3[-0xe] = puVar3;
  *(undefined2 *)((int)puVar3 + -0x32) = 10;
  iVar5 = DAT_003c476c;
  puVar3[-0x10] = *(undefined4 *)(puVar3[-9] + 0x8d4);
  puVar3[-0xf] = *(undefined4 *)(puVar3[-9] + 0x8dc);
  *(undefined2 *)(puVar3 + -0xd) = 0xb0;
  local_1c = s_cState_Wait_003c4760;
  local_20 = iVar5;
  func_0010BEC4((int)puVar3,0,&local_20);
  puVar2 = DAT_003c4754;
  puVar6 = (undefined4 *)puVar3[6];
  uVar9 = DAT_003c4754[1];
  uVar10 = DAT_003c4754[2];
  uVar11 = DAT_003c4754[3];
  uVar12 = DAT_003c4754[4];
  uVar13 = DAT_003c4754[5];
  *puVar6 = *DAT_003c4754;
  puVar6[1] = uVar9;
  puVar6 = (undefined4 *)puVar3[7];
  *puVar6 = uVar10;
  puVar6[1] = uVar11;
  puVar6 = (undefined4 *)puVar3[8];
  *puVar6 = uVar12;
  puVar6[1] = uVar13;
  local_1c = s_cState_Approach_003c4770;
  local_20 = iVar5;
  func_0010BEC4((int)puVar3,1,&local_20);
  iVar4 = puVar3[6];
  uVar9 = puVar2[7];
  uVar10 = puVar2[8];
  uVar11 = puVar2[9];
  uVar12 = puVar2[10];
  uVar13 = puVar2[0xb];
  *(undefined4 *)(iVar4 + 8) = puVar2[6];
  *(undefined4 *)(iVar4 + 0xc) = uVar9;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 8) = uVar10;
  *(undefined4 *)(iVar4 + 0xc) = uVar11;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 8) = uVar12;
  *(undefined4 *)(iVar4 + 0xc) = uVar13;
  local_1c = s_cState_Away_003c4780;
  local_20 = iVar5;
  func_0010BEC4((int)puVar3,2,&local_20);
  iVar4 = puVar3[6];
  uVar9 = puVar2[0xd];
  uVar10 = puVar2[0xe];
  uVar11 = puVar2[0xf];
  uVar12 = puVar2[0x10];
  uVar13 = puVar2[0x11];
  *(undefined4 *)(iVar4 + 0x10) = puVar2[0xc];
  *(undefined4 *)(iVar4 + 0x14) = uVar9;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x10) = uVar10;
  *(undefined4 *)(iVar4 + 0x14) = uVar11;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 0x10) = uVar12;
  *(undefined4 *)(iVar4 + 0x14) = uVar13;
  local_1c = s_cState_Reaction_003c478c;
  local_20 = iVar5;
  func_0010BEC4((int)puVar3,3,&local_20);
  iVar4 = puVar3[6];
  uVar9 = puVar2[0x13];
  uVar10 = puVar2[0x14];
  uVar11 = puVar2[0x15];
  uVar12 = puVar2[0x16];
  uVar13 = puVar2[0x17];
  *(undefined4 *)(iVar4 + 0x18) = puVar2[0x12];
  *(undefined4 *)(iVar4 + 0x1c) = uVar9;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x18) = uVar10;
  *(undefined4 *)(iVar4 + 0x1c) = uVar11;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 0x18) = uVar12;
  *(undefined4 *)(iVar4 + 0x1c) = uVar13;
  local_1c = s_cState_Die_003c479c;
  local_20 = iVar5;
  func_0010BEC4((int)puVar3,4,&local_20);
  iVar4 = puVar3[6];
  uVar9 = puVar2[0x19];
  uVar10 = puVar2[0x1a];
  uVar11 = puVar2[0x1b];
  uVar12 = puVar2[0x1c];
  uVar13 = puVar2[0x1d];
  *(undefined4 *)(iVar4 + 0x20) = puVar2[0x18];
  *(undefined4 *)(iVar4 + 0x24) = uVar9;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x20) = uVar10;
  *(undefined4 *)(iVar4 + 0x24) = uVar11;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 0x20) = uVar12;
  *(undefined4 *)(iVar4 + 0x24) = uVar13;
  local_1c = s_cState_Attack_003c47a8;
  local_20 = iVar5;
  func_0010BEC4((int)puVar3,5,&local_20);
  iVar4 = puVar3[6];
  uVar9 = puVar2[0x1f];
  uVar10 = puVar2[0x20];
  uVar11 = puVar2[0x21];
  uVar12 = puVar2[0x22];
  uVar13 = puVar2[0x23];
  *(undefined4 *)(iVar4 + 0x28) = puVar2[0x1e];
  *(undefined4 *)(iVar4 + 0x2c) = uVar9;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x28) = uVar10;
  *(undefined4 *)(iVar4 + 0x2c) = uVar11;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 0x28) = uVar12;
  *(undefined4 *)(iVar4 + 0x2c) = uVar13;
  local_1c = s_cState_Piyori_003c47b8;
  local_20 = iVar5;
  func_0010BEC4((int)puVar3,6,&local_20);
  iVar4 = puVar3[6];
  uVar9 = puVar2[0x25];
  uVar10 = puVar2[0x26];
  uVar11 = puVar2[0x27];
  uVar12 = puVar2[0x28];
  uVar13 = puVar2[0x29];
  *(undefined4 *)(iVar4 + 0x30) = puVar2[0x24];
  *(undefined4 *)(iVar4 + 0x34) = uVar9;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x30) = uVar10;
  *(undefined4 *)(iVar4 + 0x34) = uVar11;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 0x30) = uVar12;
  *(undefined4 *)(iVar4 + 0x34) = uVar13;
  local_1c = s_cState_TornadoPiyori_003c47c8;
  local_20 = iVar5;
  func_0010BEC4((int)puVar3,7,&local_20);
  iVar4 = puVar3[6];
  uVar9 = puVar2[0x2b];
  uVar10 = puVar2[0x2c];
  uVar11 = puVar2[0x2d];
  uVar12 = puVar2[0x2e];
  uVar13 = puVar2[0x2f];
  *(undefined4 *)(iVar4 + 0x38) = puVar2[0x2a];
  *(undefined4 *)(iVar4 + 0x3c) = uVar9;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x38) = uVar10;
  *(undefined4 *)(iVar4 + 0x3c) = uVar11;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 0x38) = uVar12;
  *(undefined4 *)(iVar4 + 0x3c) = uVar13;
  local_1c = s_cState_BoomerangPull_003c48f4;
  local_20 = iVar5;
  func_0010BEC4((int)puVar3,8,&local_20);
  iVar4 = puVar3[6];
  uVar9 = puVar2[0x31];
  uVar10 = puVar2[0x32];
  uVar11 = puVar2[0x33];
  uVar12 = puVar2[0x34];
  uVar13 = puVar2[0x35];
  *(undefined4 *)(iVar4 + 0x40) = puVar2[0x30];
  *(undefined4 *)(iVar4 + 0x44) = uVar9;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x40) = uVar10;
  *(undefined4 *)(iVar4 + 0x44) = uVar11;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 0x40) = uVar12;
  *(undefined4 *)(iVar4 + 0x44) = uVar13;
  local_1c = s_cState_EventResult_003c490c;
  local_20 = iVar5;
  func_0010BEC4((int)puVar3,9,&local_20);
  iVar4 = puVar3[6];
  uVar10 = puVar2[0x39];
  uVar13 = puVar2[0x3a];
  uVar11 = puVar2[0x37];
  uVar12 = puVar2[0x38];
  uVar9 = puVar2[0x3b];
  *(undefined4 *)(iVar4 + 0x48) = puVar2[0x36];
  *(undefined4 *)(iVar4 + 0x4c) = uVar11;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x48) = uVar12;
  *(undefined4 *)(iVar4 + 0x4c) = uVar10;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 0x48) = uVar13;
  *(undefined4 *)(iVar4 + 0x4c) = uVar9;
  local_1c = s_cState_Pull_003c4920;
  local_20 = iVar5;
  func_0010BEC4((int)puVar3,10,&local_20);
  iVar5 = puVar3[6];
  uVar12 = puVar2[0x3e];
  uVar13 = puVar2[0x40];
  uVar9 = puVar2[0x3d];
  uVar10 = puVar2[0x3f];
  uVar11 = puVar2[0x41];
  *(undefined4 *)(iVar5 + 0x50) = puVar2[0x3c];
  *(undefined4 *)(iVar5 + 0x54) = uVar9;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 0x50) = uVar12;
  *(undefined4 *)(iVar5 + 0x54) = uVar10;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 0x50) = uVar13;
  *(undefined4 *)(iVar5 + 0x54) = uVar11;
  return (int)(puVar3 + -0x1b);
}

