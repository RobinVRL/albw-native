#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_003B1828(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_003BEF58(int *param_1,undefined4 param_2);
extern undefined4 DAT_003bfec8;
extern undefined4 DAT_003bfecc;
extern int DAT_003bfed0;
extern undefined4 *DAT_003bfed4;
extern undefined4 *DAT_003bfed8;
extern undefined4 *DAT_003bfedc;
extern undefined *DAT_003bfee0;
extern int DAT_003bfef0;
extern char s_EnemyShadowLinkStateShield_003bfeac[];
extern char s_cState_Approach_003bfef4[];
extern char s_cState_Attack_003bff2c[];
extern char s_cState_Away_003bff04[];
extern char s_cState_BoomerangPull_003c00a8[];
extern char s_cState_Die_003bff20[];
extern char s_cState_EventResult_003c00c0[];
extern char s_cState_Guard_003c00d4[];
extern char s_cState_Piyori_003bff3c[];
extern char s_cState_Reaction_003bff10[];
extern char s_cState_TornadoPiyori_003bff4c[];
extern char s_cState_Wait_003bfee4[];

// USA 003BFB18 <- EU 003BFAF4 (Ghidra, non-matching)
// GLOBAL DAT_003bfec8 undefined4
// GLOBAL DAT_003bfecc undefined4
// GLOBAL DAT_003bfed0 int
// GLOBAL DAT_003bfed4 undefined4 *
// GLOBAL DAT_003bfed8 undefined4 *
// GLOBAL DAT_003bfedc undefined4 *
// GLOBAL DAT_003bfee0 undefined *
// GLOBAL DAT_003bfef0 int
// GLOBAL s_EnemyShadowLinkStateShield_003bfeac string
// GLOBAL s_cState_Approach_003bfef4 string
// GLOBAL s_cState_Attack_003bff2c string
// GLOBAL s_cState_Away_003bff04 string
// GLOBAL s_cState_BoomerangPull_003c00a8 string
// GLOBAL s_cState_Die_003bff20 string
// GLOBAL s_cState_EventResult_003c00c0 string
// GLOBAL s_cState_Guard_003c00d4 string
// GLOBAL s_cState_Piyori_003bff3c string
// GLOBAL s_cState_Reaction_003bff10 string
// GLOBAL s_cState_TornadoPiyori_003bff4c string
// GLOBAL s_cState_Wait_003bfee4 string

int * func_003BFB18(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  puVar3 = (undefined4 *)func_003B1828(param_1,param_2,s_EnemyShadowLinkStateShield_003bfeac);
  *puVar3 = DAT_003bfec8;
  puVar4 = func_0010A794(puVar3 + 0x1b);
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  uVar11 = DAT_003bfecc;
  puVar4[9] = DAT_003bfecc;
  puVar4[10] = uVar11;
  puVar4[0xb] = uVar11;
  piVar9 = puVar4 + -0x1b;
  *(undefined1 *)((int)puVar4 + 6) = 0xb;
  puVar4[5] = piVar9;
  iVar5 = func_0010BA78(0xb0);
  puVar4[6] = iVar5;
  iVar6 = DAT_003bfed0;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar7 = 0xb;
  puVar3 = (undefined4 *)(iVar5 + -8);
  do {
    uVar11 = DAT_003bfed4[1];
    iVar7 = iVar7 + -1;
    puVar3[2] = *DAT_003bfed4;
    puVar3[3] = uVar11;
    uVar11 = *(undefined4 *)(iVar6 + 0xc);
    puVar3[4] = *(undefined4 *)(iVar6 + 8);
    puVar3[5] = uVar11;
    puVar3 = puVar3 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar10 = (uint)bVar1;
  puVar3 = (undefined4 *)func_0010BA78(uVar10 << 3);
  puVar4[8] = puVar3;
  if (uVar10 != 0) {
    puVar8 = puVar3 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = DAT_003bfed8[1];
      *puVar3 = *DAT_003bfed8;
      puVar3[1] = uVar11;
      puVar8 = puVar3;
    }
    for (iVar5 = (int)uVar10 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar11 = DAT_003bfedc[0x45];
      puVar8[2] = DAT_003bfedc[0x44];
      puVar8[3] = uVar11;
      uVar11 = *(undefined4 *)(iVar6 + 0x14);
      puVar8[4] = *(undefined4 *)(iVar6 + 0x10);
      puVar8[5] = uVar11;
      puVar8 = puVar8 + 4;
    }
  }
  puVar3 = (undefined4 *)func_0010CEE0(0x194,(int *)0x0,4);
  puVar2 = DAT_003bfee0;
  iVar6 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = 0xb;
    *puVar3 = 0x24;
    iVar6 = func_00100118((int)(puVar3 + 2),puVar2,0x24,0xb);
  }
  if (iVar6 != 0) {
    puVar4[3] = iVar6;
    puVar4[2] = 0xb;
  }
  puVar4[-0xe] = puVar4;
  *(undefined2 *)((int)puVar4 + -0x32) = 10;
  iVar6 = DAT_003bfef0;
  puVar4[-0x10] = *(undefined4 *)(puVar4[-9] + 0x8d4);
  puVar4[-0xf] = *(undefined4 *)(puVar4[-9] + 0x8dc);
  *(undefined2 *)(puVar4 + -0xd) = 0xb0;
  local_1c = s_cState_Wait_003bfee4;
  local_20 = iVar6;
  func_0010BEC4((int)puVar4,0,&local_20);
  puVar3 = DAT_003bfedc;
  puVar8 = (undefined4 *)puVar4[6];
  uVar12 = DAT_003bfedc[1];
  uVar13 = DAT_003bfedc[2];
  uVar11 = DAT_003bfedc[3];
  uVar14 = DAT_003bfedc[4];
  uVar15 = DAT_003bfedc[5];
  *puVar8 = *DAT_003bfedc;
  puVar8[1] = uVar12;
  puVar8 = (undefined4 *)puVar4[7];
  *puVar8 = uVar13;
  puVar8[1] = uVar11;
  puVar8 = (undefined4 *)puVar4[8];
  *puVar8 = uVar14;
  puVar8[1] = uVar15;
  local_1c = s_cState_Approach_003bfef4;
  local_20 = iVar6;
  func_0010BEC4((int)puVar4,1,&local_20);
  iVar5 = puVar4[6];
  uVar11 = puVar3[7];
  uVar12 = puVar3[8];
  uVar13 = puVar3[9];
  uVar14 = puVar3[10];
  uVar15 = puVar3[0xb];
  *(undefined4 *)(iVar5 + 8) = puVar3[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar11;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 8) = uVar12;
  *(undefined4 *)(iVar5 + 0xc) = uVar13;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 8) = uVar14;
  *(undefined4 *)(iVar5 + 0xc) = uVar15;
  local_1c = s_cState_Away_003bff04;
  local_20 = iVar6;
  func_0010BEC4((int)puVar4,2,&local_20);
  iVar5 = puVar4[6];
  uVar11 = puVar3[0xd];
  uVar15 = puVar3[0xe];
  uVar13 = puVar3[0xf];
  uVar12 = puVar3[0x10];
  uVar14 = puVar3[0x11];
  *(undefined4 *)(iVar5 + 0x10) = puVar3[0xc];
  *(undefined4 *)(iVar5 + 0x14) = uVar11;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar15;
  *(undefined4 *)(iVar5 + 0x14) = uVar13;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x10) = uVar12;
  *(undefined4 *)(iVar5 + 0x14) = uVar14;
  local_1c = s_cState_Reaction_003bff10;
  local_20 = iVar6;
  func_0010BEC4((int)puVar4,3,&local_20);
  iVar5 = puVar4[6];
  uVar11 = puVar3[0x13];
  uVar12 = puVar3[0x14];
  uVar13 = puVar3[0x15];
  uVar14 = puVar3[0x16];
  uVar15 = puVar3[0x17];
  *(undefined4 *)(iVar5 + 0x18) = puVar3[0x12];
  *(undefined4 *)(iVar5 + 0x1c) = uVar11;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x18) = uVar12;
  *(undefined4 *)(iVar5 + 0x1c) = uVar13;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x18) = uVar14;
  *(undefined4 *)(iVar5 + 0x1c) = uVar15;
  local_1c = s_cState_Die_003bff20;
  local_20 = iVar6;
  func_0010BEC4((int)puVar4,4,&local_20);
  iVar5 = puVar4[6];
  uVar11 = puVar3[0x19];
  uVar12 = puVar3[0x1a];
  uVar13 = puVar3[0x1b];
  uVar14 = puVar3[0x1c];
  uVar15 = puVar3[0x1d];
  *(undefined4 *)(iVar5 + 0x20) = puVar3[0x18];
  *(undefined4 *)(iVar5 + 0x24) = uVar11;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x20) = uVar12;
  *(undefined4 *)(iVar5 + 0x24) = uVar13;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x20) = uVar14;
  *(undefined4 *)(iVar5 + 0x24) = uVar15;
  local_1c = s_cState_Attack_003bff2c;
  local_20 = iVar6;
  func_0010BEC4((int)puVar4,5,&local_20);
  iVar5 = puVar4[6];
  uVar14 = puVar3[0x1f];
  uVar11 = puVar3[0x21];
  uVar15 = puVar3[0x22];
  uVar12 = puVar3[0x23];
  uVar13 = puVar3[0x20];
  *(undefined4 *)(iVar5 + 0x28) = puVar3[0x1e];
  *(undefined4 *)(iVar5 + 0x2c) = uVar14;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x28) = uVar13;
  *(undefined4 *)(iVar5 + 0x2c) = uVar11;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x28) = uVar15;
  *(undefined4 *)(iVar5 + 0x2c) = uVar12;
  local_1c = s_cState_Piyori_003bff3c;
  local_20 = iVar6;
  func_0010BEC4((int)puVar4,6,&local_20);
  iVar5 = puVar4[6];
  uVar11 = puVar3[0x25];
  uVar12 = puVar3[0x26];
  uVar13 = puVar3[0x27];
  uVar14 = puVar3[0x28];
  uVar15 = puVar3[0x29];
  *(undefined4 *)(iVar5 + 0x30) = puVar3[0x24];
  *(undefined4 *)(iVar5 + 0x34) = uVar11;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x30) = uVar12;
  *(undefined4 *)(iVar5 + 0x34) = uVar13;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x30) = uVar14;
  *(undefined4 *)(iVar5 + 0x34) = uVar15;
  local_1c = s_cState_TornadoPiyori_003bff4c;
  local_20 = iVar6;
  func_0010BEC4((int)puVar4,7,&local_20);
  iVar5 = puVar4[6];
  uVar11 = puVar3[0x2b];
  uVar12 = puVar3[0x2c];
  uVar13 = puVar3[0x2d];
  uVar14 = puVar3[0x2e];
  uVar15 = puVar3[0x2f];
  *(undefined4 *)(iVar5 + 0x38) = puVar3[0x2a];
  *(undefined4 *)(iVar5 + 0x3c) = uVar11;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x38) = uVar12;
  *(undefined4 *)(iVar5 + 0x3c) = uVar13;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x38) = uVar14;
  *(undefined4 *)(iVar5 + 0x3c) = uVar15;
  local_1c = s_cState_BoomerangPull_003c00a8;
  local_20 = iVar6;
  func_0010BEC4((int)puVar4,8,&local_20);
  iVar5 = puVar4[6];
  uVar11 = puVar3[0x31];
  uVar12 = puVar3[0x32];
  uVar13 = puVar3[0x33];
  uVar14 = puVar3[0x34];
  uVar15 = puVar3[0x35];
  *(undefined4 *)(iVar5 + 0x40) = puVar3[0x30];
  *(undefined4 *)(iVar5 + 0x44) = uVar11;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x40) = uVar12;
  *(undefined4 *)(iVar5 + 0x44) = uVar13;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x40) = uVar14;
  *(undefined4 *)(iVar5 + 0x44) = uVar15;
  local_1c = s_cState_EventResult_003c00c0;
  local_20 = iVar6;
  func_0010BEC4((int)puVar4,9,&local_20);
  iVar5 = puVar4[6];
  uVar11 = puVar3[0x37];
  uVar12 = puVar3[0x38];
  uVar13 = puVar3[0x39];
  uVar14 = puVar3[0x3a];
  uVar15 = puVar3[0x3b];
  *(undefined4 *)(iVar5 + 0x48) = puVar3[0x36];
  *(undefined4 *)(iVar5 + 0x4c) = uVar11;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x48) = uVar12;
  *(undefined4 *)(iVar5 + 0x4c) = uVar13;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x48) = uVar14;
  *(undefined4 *)(iVar5 + 0x4c) = uVar15;
  local_1c = s_cState_Guard_003c00d4;
  local_20 = iVar6;
  func_0010BEC4((int)puVar4,10,&local_20);
  iVar6 = puVar4[6];
  uVar11 = puVar3[0x3e];
  uVar15 = puVar3[0x3d];
  uVar14 = puVar3[0x40];
  uVar12 = puVar3[0x3f];
  uVar13 = puVar3[0x41];
  *(undefined4 *)(iVar6 + 0x50) = puVar3[0x3c];
  *(undefined4 *)(iVar6 + 0x54) = uVar15;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x50) = uVar11;
  *(undefined4 *)(iVar6 + 0x54) = uVar12;
  iVar6 = puVar4[8];
  *(undefined4 *)(iVar6 + 0x50) = uVar14;
  *(undefined4 *)(iVar6 + 0x54) = uVar13;
  func_003BEF58(piVar9,1);
  return piVar9;
}

