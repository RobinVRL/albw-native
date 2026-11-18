#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_003B1828(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern undefined4 DAT_003b2cb8;
extern int DAT_003b2cbc;
extern undefined4 *DAT_003b2cc0;
extern undefined4 *DAT_003b2cc4;
extern undefined *DAT_003b2cc8;
extern int DAT_003b2cd8;
extern char s_EnemyShadowLinkStateBomb_003b2c9c[];
extern char s_cState_Approach_003b2cdc[];
extern char s_cState_Attack_003b2d14[];
extern char s_cState_Away_003b2cec[];
extern char s_cState_BoomerangPull_003b2ef8[];
extern char s_cState_Die_003b2d08[];
extern char s_cState_EventResult_003b2f10[];
extern char s_cState_Piyori_003b2d24[];
extern char s_cState_PutDown_003b2f24[];
extern char s_cState_PutUp_003b2f34[];
extern char s_cState_Reaction_003b2cf8[];
extern char s_cState_Search_003b2f44[];
extern char s_cState_TornadoPiyori_003b2d34[];
extern char s_cState_Wait_003b2ccc[];

// USA 003B2914 <- EU 003B28F0 (Ghidra, non-matching)
// GLOBAL DAT_003b2cb8 undefined4
// GLOBAL DAT_003b2cbc int
// GLOBAL DAT_003b2cc0 undefined4 *
// GLOBAL DAT_003b2cc4 undefined4 *
// GLOBAL DAT_003b2cc8 undefined *
// GLOBAL DAT_003b2cd8 int
// GLOBAL s_EnemyShadowLinkStateBomb_003b2c9c string
// GLOBAL s_cState_Approach_003b2cdc string
// GLOBAL s_cState_Attack_003b2d14 string
// GLOBAL s_cState_Away_003b2cec string
// GLOBAL s_cState_BoomerangPull_003b2ef8 string
// GLOBAL s_cState_Die_003b2d08 string
// GLOBAL s_cState_EventResult_003b2f10 string
// GLOBAL s_cState_Piyori_003b2d24 string
// GLOBAL s_cState_PutDown_003b2f24 string
// GLOBAL s_cState_PutUp_003b2f34 string
// GLOBAL s_cState_Reaction_003b2cf8 string
// GLOBAL s_cState_Search_003b2f44 string
// GLOBAL s_cState_TornadoPiyori_003b2d34 string
// GLOBAL s_cState_Wait_003b2ccc string

int func_003B2914(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
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
  puVar3 = (undefined4 *)func_003B1828(param_1,param_2,s_EnemyShadowLinkStateBomb_003b2c9c);
  *puVar3 = DAT_003b2cb8;
  puVar4 = func_0010A794(puVar3 + 0x1b);
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  *(undefined1 *)((int)puVar4 + 6) = 0xd;
  puVar4[5] = puVar4 + -0x1b;
  iVar5 = func_0010BA78(0xd0);
  puVar4[6] = iVar5;
  iVar7 = DAT_003b2cbc;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar8 = 0xd;
  puVar3 = (undefined4 *)(iVar5 + -8);
  do {
    uVar10 = DAT_003b2cc0[0x4f];
    iVar8 = iVar8 + -1;
    puVar3[2] = DAT_003b2cc0[0x4e];
    puVar3[3] = uVar10;
    uVar10 = *(undefined4 *)(iVar7 + 0x3c);
    puVar3[4] = *(undefined4 *)(iVar7 + 0x38);
    puVar3[5] = uVar10;
    puVar3 = puVar3 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar9 = (uint)bVar1;
  puVar3 = (undefined4 *)func_0010BA78(uVar9 << 3);
  puVar4[8] = puVar3;
  if (uVar9 != 0) {
    puVar6 = puVar3 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = DAT_003b2cc4[1];
      *puVar3 = *DAT_003b2cc4;
      puVar3[1] = uVar10;
      puVar6 = puVar3;
    }
    for (iVar5 = (int)uVar9 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar10 = DAT_003b2cc0[0x51];
      puVar6[2] = DAT_003b2cc0[0x50];
      puVar6[3] = uVar10;
      uVar10 = *(undefined4 *)(iVar7 + 0x44);
      puVar6[4] = *(undefined4 *)(iVar7 + 0x40);
      puVar6[5] = uVar10;
      puVar6 = puVar6 + 4;
    }
  }
  puVar3 = (undefined4 *)func_0010CEE0(0x1dc,(int *)0x0,4);
  puVar2 = DAT_003b2cc8;
  iVar5 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = 0xd;
    *puVar3 = 0x24;
    iVar5 = func_00100118((int)(puVar3 + 2),puVar2,0x24,0xd);
  }
  if (iVar5 != 0) {
    puVar4[3] = iVar5;
    puVar4[2] = 0xd;
  }
  puVar4[-0xe] = puVar4;
  *(undefined2 *)((int)puVar4 + -0x32) = 10;
  iVar5 = DAT_003b2cd8;
  puVar4[-0x10] = *(undefined4 *)(puVar4[-9] + 0x8d4);
  puVar4[-0xf] = *(undefined4 *)(puVar4[-9] + 0x8dc);
  *(undefined2 *)(puVar4 + -0xd) = 0xb0;
  local_1c = s_cState_Wait_003b2ccc;
  local_20 = iVar5;
  func_0010BEC4((int)puVar4,0,&local_20);
  puVar3 = DAT_003b2cc0;
  puVar6 = (undefined4 *)puVar4[6];
  uVar10 = DAT_003b2cc0[1];
  uVar11 = DAT_003b2cc0[2];
  uVar12 = DAT_003b2cc0[3];
  uVar13 = DAT_003b2cc0[4];
  uVar14 = DAT_003b2cc0[5];
  *puVar6 = *DAT_003b2cc0;
  puVar6[1] = uVar10;
  puVar6 = (undefined4 *)puVar4[7];
  *puVar6 = uVar11;
  puVar6[1] = uVar12;
  puVar6 = (undefined4 *)puVar4[8];
  *puVar6 = uVar13;
  puVar6[1] = uVar14;
  local_1c = s_cState_Approach_003b2cdc;
  local_20 = iVar5;
  func_0010BEC4((int)puVar4,1,&local_20);
  iVar8 = puVar4[6];
  uVar10 = puVar3[7];
  uVar11 = puVar3[8];
  uVar12 = puVar3[9];
  uVar13 = puVar3[10];
  uVar14 = puVar3[0xb];
  *(undefined4 *)(iVar8 + 8) = puVar3[6];
  *(undefined4 *)(iVar8 + 0xc) = uVar10;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 8) = uVar11;
  *(undefined4 *)(iVar8 + 0xc) = uVar12;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 8) = uVar13;
  *(undefined4 *)(iVar8 + 0xc) = uVar14;
  local_1c = s_cState_Away_003b2cec;
  local_20 = iVar5;
  func_0010BEC4((int)puVar4,2,&local_20);
  iVar8 = puVar4[6];
  uVar10 = puVar3[0xd];
  uVar11 = puVar3[0xe];
  uVar12 = puVar3[0xf];
  uVar13 = puVar3[0x10];
  uVar14 = puVar3[0x11];
  *(undefined4 *)(iVar8 + 0x10) = puVar3[0xc];
  *(undefined4 *)(iVar8 + 0x14) = uVar10;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar11;
  *(undefined4 *)(iVar8 + 0x14) = uVar12;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x10) = uVar13;
  *(undefined4 *)(iVar8 + 0x14) = uVar14;
  local_1c = s_cState_Reaction_003b2cf8;
  local_20 = iVar5;
  func_0010BEC4((int)puVar4,3,&local_20);
  iVar8 = puVar4[6];
  uVar10 = puVar3[0x13];
  uVar11 = puVar3[0x14];
  uVar12 = puVar3[0x15];
  uVar13 = puVar3[0x16];
  uVar14 = puVar3[0x17];
  *(undefined4 *)(iVar8 + 0x18) = puVar3[0x12];
  *(undefined4 *)(iVar8 + 0x1c) = uVar10;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar11;
  *(undefined4 *)(iVar8 + 0x1c) = uVar12;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x18) = uVar13;
  *(undefined4 *)(iVar8 + 0x1c) = uVar14;
  local_1c = s_cState_Die_003b2d08;
  local_20 = iVar5;
  func_0010BEC4((int)puVar4,4,&local_20);
  iVar8 = puVar4[6];
  uVar10 = puVar3[0x19];
  uVar11 = puVar3[0x1a];
  uVar12 = puVar3[0x1b];
  uVar13 = puVar3[0x1c];
  uVar14 = puVar3[0x1d];
  *(undefined4 *)(iVar8 + 0x20) = puVar3[0x18];
  *(undefined4 *)(iVar8 + 0x24) = uVar10;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x20) = uVar11;
  *(undefined4 *)(iVar8 + 0x24) = uVar12;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x20) = uVar13;
  *(undefined4 *)(iVar8 + 0x24) = uVar14;
  local_1c = s_cState_Attack_003b2d14;
  local_20 = iVar5;
  func_0010BEC4((int)puVar4,5,&local_20);
  iVar8 = puVar4[6];
  uVar10 = puVar3[0x1f];
  uVar11 = puVar3[0x20];
  uVar12 = puVar3[0x21];
  uVar13 = puVar3[0x22];
  uVar14 = puVar3[0x23];
  *(undefined4 *)(iVar8 + 0x28) = puVar3[0x1e];
  *(undefined4 *)(iVar8 + 0x2c) = uVar10;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x28) = uVar11;
  *(undefined4 *)(iVar8 + 0x2c) = uVar12;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x28) = uVar13;
  *(undefined4 *)(iVar8 + 0x2c) = uVar14;
  local_1c = s_cState_Piyori_003b2d24;
  local_20 = iVar5;
  func_0010BEC4((int)puVar4,6,&local_20);
  iVar8 = puVar4[6];
  uVar10 = puVar3[0x25];
  uVar11 = puVar3[0x26];
  uVar12 = puVar3[0x27];
  uVar13 = puVar3[0x28];
  uVar14 = puVar3[0x29];
  *(undefined4 *)(iVar8 + 0x30) = puVar3[0x24];
  *(undefined4 *)(iVar8 + 0x34) = uVar10;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x30) = uVar11;
  *(undefined4 *)(iVar8 + 0x34) = uVar12;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x30) = uVar13;
  *(undefined4 *)(iVar8 + 0x34) = uVar14;
  local_1c = s_cState_TornadoPiyori_003b2d34;
  local_20 = iVar5;
  func_0010BEC4((int)puVar4,7,&local_20);
  iVar8 = puVar4[6];
  uVar10 = puVar3[0x2b];
  uVar11 = puVar3[0x2c];
  uVar12 = puVar3[0x2d];
  uVar13 = puVar3[0x2e];
  uVar14 = puVar3[0x2f];
  *(undefined4 *)(iVar8 + 0x38) = puVar3[0x2a];
  *(undefined4 *)(iVar8 + 0x3c) = uVar10;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x38) = uVar11;
  *(undefined4 *)(iVar8 + 0x3c) = uVar12;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x38) = uVar13;
  *(undefined4 *)(iVar8 + 0x3c) = uVar14;
  local_1c = s_cState_BoomerangPull_003b2ef8;
  local_20 = iVar5;
  func_0010BEC4((int)puVar4,8,&local_20);
  iVar8 = puVar4[6];
  uVar10 = puVar3[0x31];
  uVar11 = puVar3[0x32];
  uVar12 = puVar3[0x33];
  uVar13 = puVar3[0x34];
  uVar14 = puVar3[0x35];
  *(undefined4 *)(iVar8 + 0x40) = puVar3[0x30];
  *(undefined4 *)(iVar8 + 0x44) = uVar10;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x40) = uVar11;
  *(undefined4 *)(iVar8 + 0x44) = uVar12;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x40) = uVar13;
  *(undefined4 *)(iVar8 + 0x44) = uVar14;
  local_1c = s_cState_EventResult_003b2f10;
  local_20 = iVar5;
  func_0010BEC4((int)puVar4,9,&local_20);
  iVar8 = puVar4[6];
  uVar10 = puVar3[0x37];
  uVar11 = puVar3[0x38];
  uVar12 = puVar3[0x39];
  uVar13 = puVar3[0x3a];
  uVar14 = puVar3[0x3b];
  *(undefined4 *)(iVar8 + 0x48) = puVar3[0x36];
  *(undefined4 *)(iVar8 + 0x4c) = uVar10;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x48) = uVar11;
  *(undefined4 *)(iVar8 + 0x4c) = uVar12;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x48) = uVar13;
  *(undefined4 *)(iVar8 + 0x4c) = uVar14;
  local_1c = s_cState_PutDown_003b2f24;
  local_20 = iVar5;
  func_0010BEC4((int)puVar4,10,&local_20);
  iVar8 = puVar4[6];
  uVar12 = puVar3[0x3e];
  uVar10 = puVar3[0x3f];
  uVar11 = puVar3[0x40];
  uVar14 = puVar3[0x3d];
  uVar13 = puVar3[0x41];
  *(undefined4 *)(iVar8 + 0x50) = puVar3[0x3c];
  *(undefined4 *)(iVar8 + 0x54) = uVar14;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x50) = uVar12;
  *(undefined4 *)(iVar8 + 0x54) = uVar10;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x50) = uVar11;
  *(undefined4 *)(iVar8 + 0x54) = uVar13;
  local_1c = s_cState_PutUp_003b2f34;
  local_20 = iVar5;
  func_0010BEC4((int)puVar4,0xb,&local_20);
  iVar8 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar7 + 0xc);
  uVar10 = *(undefined4 *)(iVar7 + 0x10);
  uVar11 = *(undefined4 *)(iVar7 + 0x14);
  uVar13 = *(undefined4 *)(iVar7 + 0x18);
  uVar14 = *(undefined4 *)(iVar7 + 0x1c);
  *(undefined4 *)(iVar8 + 0x58) = *(undefined4 *)(iVar7 + 8);
  *(undefined4 *)(iVar8 + 0x5c) = uVar12;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x58) = uVar10;
  *(undefined4 *)(iVar8 + 0x5c) = uVar11;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x58) = uVar13;
  *(undefined4 *)(iVar8 + 0x5c) = uVar14;
  local_1c = s_cState_Search_003b2f44;
  local_20 = iVar5;
  func_0010BEC4((int)puVar4,0xc,&local_20);
  iVar5 = puVar4[6];
  uVar10 = *(undefined4 *)(iVar7 + 0x24);
  uVar11 = *(undefined4 *)(iVar7 + 0x28);
  uVar14 = *(undefined4 *)(iVar7 + 0x2c);
  uVar12 = *(undefined4 *)(iVar7 + 0x34);
  uVar13 = *(undefined4 *)(iVar7 + 0x30);
  *(undefined4 *)(iVar5 + 0x60) = *(undefined4 *)(iVar7 + 0x20);
  *(undefined4 *)(iVar5 + 100) = uVar10;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x60) = uVar11;
  *(undefined4 *)(iVar7 + 100) = uVar14;
  iVar7 = puVar4[8];
  *(undefined4 *)(iVar7 + 0x60) = uVar13;
  *(undefined4 *)(iVar7 + 100) = uVar12;
  return (int)(puVar4 + -0x1b);
}

