#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_003B1828(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern undefined4 DAT_003c1a74;
extern undefined4 *DAT_003c1a78;
extern undefined4 *DAT_003c1a7c;
extern undefined *DAT_003c1a80;
extern int DAT_003c1a90;
extern char s_EnemyShadowLinkStateSandRod_003c1a58[];
extern char s_cState_Approach_003c1a94[];
extern char s_cState_Attack_003c1acc[];
extern char s_cState_Away_003c1aa4[];
extern char s_cState_BoomerangPull_003c1bb8[];
extern char s_cState_Die_003c1ac0[];
extern char s_cState_EventResult_003c1bd0[];
extern char s_cState_Piyori_003c1adc[];
extern char s_cState_Reaction_003c1ab0[];
extern char s_cState_TornadoPiyori_003c1aec[];
extern char s_cState_Wait_003c1a84[];

// USA 003C16D8 <- EU 003C16B4 (Ghidra, non-matching)
// GLOBAL DAT_003c1a74 undefined4
// GLOBAL DAT_003c1a78 undefined4 *
// GLOBAL DAT_003c1a7c undefined4 *
// GLOBAL DAT_003c1a80 undefined *
// GLOBAL DAT_003c1a90 int
// GLOBAL s_EnemyShadowLinkStateSandRod_003c1a58 string
// GLOBAL s_cState_Approach_003c1a94 string
// GLOBAL s_cState_Attack_003c1acc string
// GLOBAL s_cState_Away_003c1aa4 string
// GLOBAL s_cState_BoomerangPull_003c1bb8 string
// GLOBAL s_cState_Die_003c1ac0 string
// GLOBAL s_cState_EventResult_003c1bd0 string
// GLOBAL s_cState_Piyori_003c1adc string
// GLOBAL s_cState_Reaction_003c1ab0 string
// GLOBAL s_cState_TornadoPiyori_003c1aec string
// GLOBAL s_cState_Wait_003c1a84 string

int func_003C16D8(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  puVar2 = (undefined4 *)func_003B1828(param_1,param_2,s_EnemyShadowLinkStateSandRod_003c1a58);
  *puVar2 = DAT_003c1a74;
  puVar3 = func_0010A794(puVar2 + 0x1b);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)((int)puVar3 + 6) = 10;
  puVar3[5] = puVar3 + -0x1b;
  iVar4 = func_0010BA78(0xa0);
  puVar3[6] = iVar4;
  puVar2 = DAT_003c1a78;
  puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar8 = 10;
  puVar7 = (undefined4 *)(iVar4 + -8);
  do {
    uVar10 = puVar2[0x3d];
    iVar8 = iVar8 + -1;
    puVar7[2] = puVar2[0x3c];
    puVar7[3] = uVar10;
    uVar10 = puVar2[0x3d];
    puVar7[4] = puVar2[0x3c];
    puVar7[5] = uVar10;
    puVar7 = puVar7 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar9 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar9 << 3);
  puVar3[8] = puVar5;
  puVar7 = DAT_003c1a7c;
  if (uVar9 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = DAT_003c1a7c[1];
      *puVar5 = *DAT_003c1a7c;
      puVar5[1] = uVar10;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar9 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar10 = DAT_003c1a7c[1];
      puVar6[2] = *DAT_003c1a7c;
      puVar6[3] = uVar10;
      uVar10 = puVar7[1];
      puVar6[4] = *puVar7;
      puVar6[5] = uVar10;
      puVar6 = puVar6 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x170,(int *)0x0,4);
  iVar4 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 10;
    iVar4 = func_00100118((int)(puVar7 + 2),DAT_003c1a80,0x24,10);
  }
  if (iVar4 != 0) {
    puVar3[3] = iVar4;
    puVar3[2] = 10;
  }
  puVar3[-0xe] = puVar3;
  *(undefined2 *)((int)puVar3 + -0x32) = 10;
  iVar4 = DAT_003c1a90;
  puVar3[-0x10] = *(undefined4 *)(puVar3[-9] + 0x8d4);
  puVar3[-0xf] = *(undefined4 *)(puVar3[-9] + 0x8dc);
  *(undefined2 *)(puVar3 + -0xd) = 0xb0;
  local_1c = s_cState_Wait_003c1a84;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,0,&local_20);
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  uVar13 = puVar2[4];
  uVar14 = puVar2[5];
  puVar7 = (undefined4 *)puVar3[6];
  *puVar7 = *puVar2;
  puVar7[1] = uVar10;
  puVar7 = (undefined4 *)puVar3[7];
  *puVar7 = uVar11;
  puVar7[1] = uVar12;
  puVar7 = (undefined4 *)puVar3[8];
  *puVar7 = uVar13;
  puVar7[1] = uVar14;
  local_1c = s_cState_Approach_003c1a94;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,1,&local_20);
  iVar8 = puVar3[6];
  uVar10 = puVar2[7];
  uVar11 = puVar2[8];
  uVar12 = puVar2[9];
  uVar13 = puVar2[10];
  uVar14 = puVar2[0xb];
  *(undefined4 *)(iVar8 + 8) = puVar2[6];
  *(undefined4 *)(iVar8 + 0xc) = uVar10;
  iVar8 = puVar3[7];
  *(undefined4 *)(iVar8 + 8) = uVar11;
  *(undefined4 *)(iVar8 + 0xc) = uVar12;
  iVar8 = puVar3[8];
  *(undefined4 *)(iVar8 + 8) = uVar13;
  *(undefined4 *)(iVar8 + 0xc) = uVar14;
  local_1c = s_cState_Away_003c1aa4;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,2,&local_20);
  iVar8 = puVar3[6];
  uVar10 = puVar2[0xd];
  uVar11 = puVar2[0xe];
  uVar12 = puVar2[0xf];
  uVar13 = puVar2[0x10];
  uVar14 = puVar2[0x11];
  *(undefined4 *)(iVar8 + 0x10) = puVar2[0xc];
  *(undefined4 *)(iVar8 + 0x14) = uVar10;
  iVar8 = puVar3[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar11;
  *(undefined4 *)(iVar8 + 0x14) = uVar12;
  iVar8 = puVar3[8];
  *(undefined4 *)(iVar8 + 0x10) = uVar13;
  *(undefined4 *)(iVar8 + 0x14) = uVar14;
  local_1c = s_cState_Reaction_003c1ab0;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,3,&local_20);
  iVar8 = puVar3[6];
  uVar10 = puVar2[0x13];
  uVar11 = puVar2[0x14];
  uVar12 = puVar2[0x15];
  uVar13 = puVar2[0x16];
  uVar14 = puVar2[0x17];
  *(undefined4 *)(iVar8 + 0x18) = puVar2[0x12];
  *(undefined4 *)(iVar8 + 0x1c) = uVar10;
  iVar8 = puVar3[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar11;
  *(undefined4 *)(iVar8 + 0x1c) = uVar12;
  iVar8 = puVar3[8];
  *(undefined4 *)(iVar8 + 0x18) = uVar13;
  *(undefined4 *)(iVar8 + 0x1c) = uVar14;
  local_1c = s_cState_Die_003c1ac0;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,4,&local_20);
  iVar8 = puVar3[6];
  uVar10 = puVar2[0x19];
  uVar11 = puVar2[0x1a];
  uVar12 = puVar2[0x1b];
  uVar13 = puVar2[0x1c];
  uVar14 = puVar2[0x1d];
  *(undefined4 *)(iVar8 + 0x20) = puVar2[0x18];
  *(undefined4 *)(iVar8 + 0x24) = uVar10;
  iVar8 = puVar3[7];
  *(undefined4 *)(iVar8 + 0x20) = uVar11;
  *(undefined4 *)(iVar8 + 0x24) = uVar12;
  iVar8 = puVar3[8];
  *(undefined4 *)(iVar8 + 0x20) = uVar13;
  *(undefined4 *)(iVar8 + 0x24) = uVar14;
  local_1c = s_cState_Attack_003c1acc;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,5,&local_20);
  iVar8 = puVar3[6];
  uVar10 = puVar2[0x1f];
  uVar11 = puVar2[0x20];
  uVar12 = puVar2[0x21];
  uVar13 = puVar2[0x22];
  uVar14 = puVar2[0x23];
  *(undefined4 *)(iVar8 + 0x28) = puVar2[0x1e];
  *(undefined4 *)(iVar8 + 0x2c) = uVar10;
  iVar8 = puVar3[7];
  *(undefined4 *)(iVar8 + 0x28) = uVar11;
  *(undefined4 *)(iVar8 + 0x2c) = uVar12;
  iVar8 = puVar3[8];
  *(undefined4 *)(iVar8 + 0x28) = uVar13;
  *(undefined4 *)(iVar8 + 0x2c) = uVar14;
  local_1c = s_cState_Piyori_003c1adc;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,6,&local_20);
  iVar8 = puVar3[6];
  uVar10 = puVar2[0x25];
  uVar11 = puVar2[0x26];
  uVar12 = puVar2[0x27];
  uVar13 = puVar2[0x28];
  uVar14 = puVar2[0x29];
  *(undefined4 *)(iVar8 + 0x30) = puVar2[0x24];
  *(undefined4 *)(iVar8 + 0x34) = uVar10;
  iVar8 = puVar3[7];
  *(undefined4 *)(iVar8 + 0x30) = uVar11;
  *(undefined4 *)(iVar8 + 0x34) = uVar12;
  iVar8 = puVar3[8];
  *(undefined4 *)(iVar8 + 0x30) = uVar13;
  *(undefined4 *)(iVar8 + 0x34) = uVar14;
  local_1c = s_cState_TornadoPiyori_003c1aec;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,7,&local_20);
  iVar8 = puVar3[6];
  uVar10 = puVar2[0x2b];
  uVar12 = puVar2[0x2c];
  uVar13 = puVar2[0x2e];
  uVar11 = puVar2[0x2d];
  uVar14 = puVar2[0x2f];
  *(undefined4 *)(iVar8 + 0x38) = puVar2[0x2a];
  *(undefined4 *)(iVar8 + 0x3c) = uVar10;
  iVar8 = puVar3[7];
  *(undefined4 *)(iVar8 + 0x38) = uVar12;
  *(undefined4 *)(iVar8 + 0x3c) = uVar11;
  iVar8 = puVar3[8];
  *(undefined4 *)(iVar8 + 0x38) = uVar13;
  *(undefined4 *)(iVar8 + 0x3c) = uVar14;
  local_1c = s_cState_BoomerangPull_003c1bb8;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,8,&local_20);
  iVar8 = puVar3[6];
  uVar10 = puVar2[0x31];
  uVar11 = puVar2[0x32];
  uVar12 = puVar2[0x33];
  uVar13 = puVar2[0x34];
  uVar14 = puVar2[0x35];
  *(undefined4 *)(iVar8 + 0x40) = puVar2[0x30];
  *(undefined4 *)(iVar8 + 0x44) = uVar10;
  iVar8 = puVar3[7];
  *(undefined4 *)(iVar8 + 0x40) = uVar11;
  *(undefined4 *)(iVar8 + 0x44) = uVar12;
  iVar8 = puVar3[8];
  *(undefined4 *)(iVar8 + 0x40) = uVar13;
  *(undefined4 *)(iVar8 + 0x44) = uVar14;
  local_1c = s_cState_EventResult_003c1bd0;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,9,&local_20);
  iVar4 = puVar3[6];
  uVar10 = puVar2[0x37];
  uVar11 = puVar2[0x38];
  uVar12 = puVar2[0x39];
  uVar13 = puVar2[0x3a];
  uVar14 = puVar2[0x3b];
  *(undefined4 *)(iVar4 + 0x48) = puVar2[0x36];
  *(undefined4 *)(iVar4 + 0x4c) = uVar10;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x48) = uVar11;
  *(undefined4 *)(iVar4 + 0x4c) = uVar12;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 0x48) = uVar13;
  *(undefined4 *)(iVar4 + 0x4c) = uVar14;
  return (int)(puVar3 + -0x1b);
}

