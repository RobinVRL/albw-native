#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_003B1828(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern undefined4 DAT_003b3e94;
extern undefined4 DAT_003b3e98;
extern int DAT_003b3e9c;
extern undefined4 *DAT_003b3ea0;
extern undefined4 *DAT_003b3ea4;
extern undefined *DAT_003b3ea8;
extern int DAT_003b3eb8;
extern char s_EnemyShadowLinkStateDash_003b3e78[];
extern char s_cState_Approach_003b3ebc[];
extern char s_cState_Attack_003b3ef4[];
extern char s_cState_Away_003b3ecc[];
extern char s_cState_BoomerangPull_003b4094[];
extern char s_cState_Cancel_003b40d0[];
extern char s_cState_Die_003b3ee8[];
extern char s_cState_EventResult_003b40ac[];
extern char s_cState_Piyori_003b3f04[];
extern char s_cState_Reaction_003b3ed8[];
extern char s_cState_TornadoPiyori_003b3f14[];
extern char s_cState_Wait_003b3eac[];
extern char s_cState_WallHit_003b40c0[];

// USA 003B3AF0 <- EU 003B3ACC (Ghidra, non-matching)
// GLOBAL DAT_003b3e94 undefined4
// GLOBAL DAT_003b3e98 undefined4
// GLOBAL DAT_003b3e9c int
// GLOBAL DAT_003b3ea0 undefined4 *
// GLOBAL DAT_003b3ea4 undefined4 *
// GLOBAL DAT_003b3ea8 undefined *
// GLOBAL DAT_003b3eb8 int
// GLOBAL s_EnemyShadowLinkStateDash_003b3e78 string
// GLOBAL s_cState_Approach_003b3ebc string
// GLOBAL s_cState_Attack_003b3ef4 string
// GLOBAL s_cState_Away_003b3ecc string
// GLOBAL s_cState_BoomerangPull_003b4094 string
// GLOBAL s_cState_Cancel_003b40d0 string
// GLOBAL s_cState_Die_003b3ee8 string
// GLOBAL s_cState_EventResult_003b40ac string
// GLOBAL s_cState_Piyori_003b3f04 string
// GLOBAL s_cState_Reaction_003b3ed8 string
// GLOBAL s_cState_TornadoPiyori_003b3f14 string
// GLOBAL s_cState_Wait_003b3eac string
// GLOBAL s_cState_WallHit_003b40c0 string

int func_003B3AF0(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
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
  puVar2 = (undefined4 *)func_003B1828(param_1,param_2,s_EnemyShadowLinkStateDash_003b3e78);
  *puVar2 = DAT_003b3e94;
  puVar3 = func_0010A794(puVar2 + 0x1b);
  puVar3[6] = 0;
  uVar9 = DAT_003b3e98;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = uVar9;
  *(undefined1 *)((int)puVar3 + 6) = 0xc;
  puVar3[5] = puVar3 + -0x1b;
  iVar4 = func_0010BA78(0xc0);
  puVar3[6] = iVar4;
  iVar6 = DAT_003b3e9c;
  puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar7 = 0xc;
  puVar2 = (undefined4 *)(iVar4 + -8);
  do {
    uVar9 = DAT_003b3ea0[0x49];
    iVar7 = iVar7 + -1;
    puVar2[2] = DAT_003b3ea0[0x48];
    puVar2[3] = uVar9;
    uVar9 = *(undefined4 *)(iVar6 + 0x24);
    puVar2[4] = *(undefined4 *)(iVar6 + 0x20);
    puVar2[5] = uVar9;
    puVar2 = puVar2 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar8 = (uint)bVar1;
  puVar2 = (undefined4 *)func_0010BA78(uVar8 << 3);
  puVar3[8] = puVar2;
  if (uVar8 != 0) {
    puVar5 = puVar2 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = DAT_003b3ea4[1];
      *puVar2 = *DAT_003b3ea4;
      puVar2[1] = uVar9;
      puVar5 = puVar2;
    }
    for (iVar4 = (int)uVar8 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar9 = DAT_003b3ea0[0x4b];
      puVar5[2] = DAT_003b3ea0[0x4a];
      puVar5[3] = uVar9;
      uVar9 = *(undefined4 *)(iVar6 + 0x2c);
      puVar5[4] = *(undefined4 *)(iVar6 + 0x28);
      puVar5[5] = uVar9;
      puVar5 = puVar5 + 4;
    }
  }
  puVar2 = (undefined4 *)func_0010CEE0(0x1b8,(int *)0x0,4);
  iVar4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x24;
    puVar2[1] = 0xc;
    iVar4 = func_00100118((int)(puVar2 + 2),DAT_003b3ea8,0x24,0xc);
  }
  if (iVar4 != 0) {
    puVar3[3] = iVar4;
    puVar3[2] = 0xc;
  }
  puVar3[-0xe] = puVar3;
  *(undefined2 *)((int)puVar3 + -0x32) = 10;
  iVar4 = DAT_003b3eb8;
  puVar3[-0x10] = *(undefined4 *)(puVar3[-9] + 0x8d4);
  puVar3[-0xf] = *(undefined4 *)(puVar3[-9] + 0x8dc);
  *(undefined2 *)(puVar3 + -0xd) = 0xb0;
  local_1c = s_cState_Wait_003b3eac;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,0,&local_20);
  puVar2 = DAT_003b3ea0;
  puVar5 = (undefined4 *)puVar3[6];
  uVar9 = DAT_003b3ea0[1];
  uVar10 = DAT_003b3ea0[2];
  uVar11 = DAT_003b3ea0[3];
  uVar12 = DAT_003b3ea0[4];
  uVar13 = DAT_003b3ea0[5];
  *puVar5 = *DAT_003b3ea0;
  puVar5[1] = uVar9;
  puVar5 = (undefined4 *)puVar3[7];
  *puVar5 = uVar10;
  puVar5[1] = uVar11;
  puVar5 = (undefined4 *)puVar3[8];
  *puVar5 = uVar12;
  puVar5[1] = uVar13;
  local_1c = s_cState_Approach_003b3ebc;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,1,&local_20);
  iVar7 = puVar3[6];
  uVar9 = puVar2[7];
  uVar10 = puVar2[8];
  uVar11 = puVar2[9];
  uVar12 = puVar2[10];
  uVar13 = puVar2[0xb];
  *(undefined4 *)(iVar7 + 8) = puVar2[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar9;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 8) = uVar10;
  *(undefined4 *)(iVar7 + 0xc) = uVar11;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 8) = uVar12;
  *(undefined4 *)(iVar7 + 0xc) = uVar13;
  local_1c = s_cState_Away_003b3ecc;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,2,&local_20);
  iVar7 = puVar3[6];
  uVar9 = puVar2[0xd];
  uVar10 = puVar2[0xe];
  uVar11 = puVar2[0xf];
  uVar12 = puVar2[0x10];
  uVar13 = puVar2[0x11];
  *(undefined4 *)(iVar7 + 0x10) = puVar2[0xc];
  *(undefined4 *)(iVar7 + 0x14) = uVar9;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar10;
  *(undefined4 *)(iVar7 + 0x14) = uVar11;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x10) = uVar12;
  *(undefined4 *)(iVar7 + 0x14) = uVar13;
  local_1c = s_cState_Reaction_003b3ed8;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,3,&local_20);
  iVar7 = puVar3[6];
  uVar9 = puVar2[0x13];
  uVar10 = puVar2[0x14];
  uVar11 = puVar2[0x15];
  uVar12 = puVar2[0x16];
  uVar13 = puVar2[0x17];
  *(undefined4 *)(iVar7 + 0x18) = puVar2[0x12];
  *(undefined4 *)(iVar7 + 0x1c) = uVar9;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar10;
  *(undefined4 *)(iVar7 + 0x1c) = uVar11;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x18) = uVar12;
  *(undefined4 *)(iVar7 + 0x1c) = uVar13;
  local_1c = s_cState_Die_003b3ee8;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,4,&local_20);
  iVar7 = puVar3[6];
  uVar9 = puVar2[0x19];
  uVar10 = puVar2[0x1a];
  uVar11 = puVar2[0x1b];
  uVar12 = puVar2[0x1c];
  uVar13 = puVar2[0x1d];
  *(undefined4 *)(iVar7 + 0x20) = puVar2[0x18];
  *(undefined4 *)(iVar7 + 0x24) = uVar9;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x20) = uVar10;
  *(undefined4 *)(iVar7 + 0x24) = uVar11;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x20) = uVar12;
  *(undefined4 *)(iVar7 + 0x24) = uVar13;
  local_1c = s_cState_Attack_003b3ef4;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,5,&local_20);
  iVar7 = puVar3[6];
  uVar10 = puVar2[0x23];
  uVar11 = puVar2[0x1f];
  uVar12 = puVar2[0x20];
  uVar13 = puVar2[0x21];
  uVar9 = puVar2[0x22];
  *(undefined4 *)(iVar7 + 0x28) = puVar2[0x1e];
  *(undefined4 *)(iVar7 + 0x2c) = uVar11;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x28) = uVar12;
  *(undefined4 *)(iVar7 + 0x2c) = uVar13;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x28) = uVar9;
  *(undefined4 *)(iVar7 + 0x2c) = uVar10;
  local_1c = s_cState_Piyori_003b3f04;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,6,&local_20);
  iVar7 = puVar3[6];
  uVar9 = puVar2[0x25];
  uVar10 = puVar2[0x26];
  uVar11 = puVar2[0x27];
  uVar12 = puVar2[0x28];
  uVar13 = puVar2[0x29];
  *(undefined4 *)(iVar7 + 0x30) = puVar2[0x24];
  *(undefined4 *)(iVar7 + 0x34) = uVar9;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x30) = uVar10;
  *(undefined4 *)(iVar7 + 0x34) = uVar11;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x30) = uVar12;
  *(undefined4 *)(iVar7 + 0x34) = uVar13;
  local_1c = s_cState_TornadoPiyori_003b3f14;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,7,&local_20);
  iVar7 = puVar3[6];
  uVar9 = puVar2[0x2b];
  uVar10 = puVar2[0x2c];
  uVar11 = puVar2[0x2d];
  uVar12 = puVar2[0x2e];
  uVar13 = puVar2[0x2f];
  *(undefined4 *)(iVar7 + 0x38) = puVar2[0x2a];
  *(undefined4 *)(iVar7 + 0x3c) = uVar9;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x38) = uVar10;
  *(undefined4 *)(iVar7 + 0x3c) = uVar11;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x38) = uVar12;
  *(undefined4 *)(iVar7 + 0x3c) = uVar13;
  local_1c = s_cState_BoomerangPull_003b4094;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,8,&local_20);
  iVar7 = puVar3[6];
  uVar9 = puVar2[0x31];
  uVar10 = puVar2[0x32];
  uVar11 = puVar2[0x33];
  uVar12 = puVar2[0x34];
  uVar13 = puVar2[0x35];
  *(undefined4 *)(iVar7 + 0x40) = puVar2[0x30];
  *(undefined4 *)(iVar7 + 0x44) = uVar9;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x40) = uVar10;
  *(undefined4 *)(iVar7 + 0x44) = uVar11;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x40) = uVar12;
  *(undefined4 *)(iVar7 + 0x44) = uVar13;
  local_1c = s_cState_EventResult_003b40ac;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,9,&local_20);
  iVar7 = puVar3[6];
  uVar9 = puVar2[0x37];
  uVar10 = puVar2[0x38];
  uVar11 = puVar2[0x39];
  uVar12 = puVar2[0x3a];
  uVar13 = puVar2[0x3b];
  *(undefined4 *)(iVar7 + 0x48) = puVar2[0x36];
  *(undefined4 *)(iVar7 + 0x4c) = uVar9;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x48) = uVar10;
  *(undefined4 *)(iVar7 + 0x4c) = uVar11;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x48) = uVar12;
  *(undefined4 *)(iVar7 + 0x4c) = uVar13;
  local_1c = s_cState_WallHit_003b40c0;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,10,&local_20);
  iVar7 = puVar3[6];
  uVar12 = puVar2[0x3e];
  uVar10 = puVar2[0x3f];
  uVar11 = puVar2[0x40];
  uVar13 = puVar2[0x41];
  uVar9 = puVar2[0x3d];
  *(undefined4 *)(iVar7 + 0x50) = puVar2[0x3c];
  *(undefined4 *)(iVar7 + 0x54) = uVar9;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x50) = uVar12;
  *(undefined4 *)(iVar7 + 0x54) = uVar10;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x50) = uVar11;
  *(undefined4 *)(iVar7 + 0x54) = uVar13;
  local_1c = s_cState_Cancel_003b40d0;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,0xb,&local_20);
  uVar9 = *(undefined4 *)(iVar6 + 0x14);
  uVar10 = *(undefined4 *)(iVar6 + 0x10);
  iVar4 = puVar3[6];
  uVar13 = *(undefined4 *)(iVar6 + 0xc);
  uVar11 = *(undefined4 *)(iVar6 + 0x18);
  uVar12 = *(undefined4 *)(iVar6 + 0x1c);
  *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(iVar6 + 8);
  *(undefined4 *)(iVar4 + 0x5c) = uVar13;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x58) = uVar10;
  *(undefined4 *)(iVar6 + 0x5c) = uVar9;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 0x58) = uVar11;
  *(undefined4 *)(iVar6 + 0x5c) = uVar12;
  return (int)(puVar3 + -0x1b);
}

