#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_003B1828(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern undefined4 DAT_00429820;
extern int DAT_00429824;
extern undefined4 *DAT_00429828;
extern undefined4 *DAT_0042982c;
extern undefined *DAT_00429830;
extern int DAT_00429840;
extern char s_EnemyShadowLinkStateTornadoRod_00429800[];
extern char s_cState_Approach_00429844[];
extern char s_cState_Attack_0042987c[];
extern char s_cState_Away_00429854[];
extern char s_cState_BoomerangPull_00429a10[];
extern char s_cState_Die_00429870[];
extern char s_cState_EventResult_00429a28[];
extern char s_cState_Float_00429a3c[];
extern char s_cState_Land_00429a4c[];
extern char s_cState_Piyori_0042988c[];
extern char s_cState_Reaction_00429860[];
extern char s_cState_TornadoPiyori_0042989c[];
extern char s_cState_Wait_00429834[];

// USA 00429478 <- EU 00429458 (Ghidra, non-matching)
// GLOBAL DAT_00429820 undefined4
// GLOBAL DAT_00429824 int
// GLOBAL DAT_00429828 undefined4 *
// GLOBAL DAT_0042982c undefined4 *
// GLOBAL DAT_00429830 undefined *
// GLOBAL DAT_00429840 int
// GLOBAL s_EnemyShadowLinkStateTornadoRod_00429800 string
// GLOBAL s_cState_Approach_00429844 string
// GLOBAL s_cState_Attack_0042987c string
// GLOBAL s_cState_Away_00429854 string
// GLOBAL s_cState_BoomerangPull_00429a10 string
// GLOBAL s_cState_Die_00429870 string
// GLOBAL s_cState_EventResult_00429a28 string
// GLOBAL s_cState_Float_00429a3c string
// GLOBAL s_cState_Land_00429a4c string
// GLOBAL s_cState_Piyori_0042988c string
// GLOBAL s_cState_Reaction_00429860 string
// GLOBAL s_cState_TornadoPiyori_0042989c string
// GLOBAL s_cState_Wait_00429834 string

int func_00429478(undefined4 *param_1,undefined4 param_2)

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
  puVar2 = (undefined4 *)func_003B1828(param_1,param_2,s_EnemyShadowLinkStateTornadoRod_00429800);
  *puVar2 = DAT_00429820;
  puVar3 = func_0010A794(puVar2 + 0x1b);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)((int)puVar3 + 6) = 0xc;
  puVar3[5] = puVar3 + -0x1b;
  iVar4 = func_0010BA78(0xc0);
  puVar3[6] = iVar4;
  iVar7 = DAT_00429824;
  puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar5 = 0xc;
  puVar2 = (undefined4 *)(iVar4 + -8);
  do {
    uVar9 = DAT_00429828[0x49];
    iVar5 = iVar5 + -1;
    puVar2[2] = DAT_00429828[0x48];
    puVar2[3] = uVar9;
    uVar9 = *(undefined4 *)(iVar7 + 0x24);
    puVar2[4] = *(undefined4 *)(iVar7 + 0x20);
    puVar2[5] = uVar9;
    puVar2 = puVar2 + 4;
  } while (iVar5 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar8 = (uint)bVar1;
  puVar2 = (undefined4 *)func_0010BA78(uVar8 << 3);
  puVar3[8] = puVar2;
  if (uVar8 != 0) {
    puVar6 = puVar2 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = DAT_0042982c[1];
      *puVar2 = *DAT_0042982c;
      puVar2[1] = uVar9;
      puVar6 = puVar2;
    }
    for (iVar4 = (int)uVar8 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar9 = DAT_00429828[0x4b];
      puVar6[2] = DAT_00429828[0x4a];
      puVar6[3] = uVar9;
      uVar9 = *(undefined4 *)(iVar7 + 0x2c);
      puVar6[4] = *(undefined4 *)(iVar7 + 0x28);
      puVar6[5] = uVar9;
      puVar6 = puVar6 + 4;
    }
  }
  puVar2 = (undefined4 *)func_0010CEE0(0x1b8,(int *)0x0,4);
  iVar4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x24;
    puVar2[1] = 0xc;
    iVar4 = func_00100118((int)(puVar2 + 2),DAT_00429830,0x24,0xc);
  }
  if (iVar4 != 0) {
    puVar3[3] = iVar4;
    puVar3[2] = 0xc;
  }
  puVar3[-0xe] = puVar3;
  *(undefined2 *)((int)puVar3 + -0x32) = 10;
  iVar4 = DAT_00429840;
  puVar3[-0x10] = *(undefined4 *)(puVar3[-9] + 0x8d4);
  puVar3[-0xf] = *(undefined4 *)(puVar3[-9] + 0x8dc);
  *(undefined2 *)(puVar3 + -0xd) = 0xb0;
  local_1c = s_cState_Wait_00429834;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,0,&local_20);
  puVar2 = DAT_00429828;
  puVar6 = (undefined4 *)puVar3[6];
  uVar9 = DAT_00429828[1];
  uVar10 = DAT_00429828[2];
  uVar11 = DAT_00429828[3];
  uVar12 = DAT_00429828[4];
  uVar13 = DAT_00429828[5];
  *puVar6 = *DAT_00429828;
  puVar6[1] = uVar9;
  puVar6 = (undefined4 *)puVar3[7];
  *puVar6 = uVar10;
  puVar6[1] = uVar11;
  puVar6 = (undefined4 *)puVar3[8];
  *puVar6 = uVar12;
  puVar6[1] = uVar13;
  local_1c = s_cState_Approach_00429844;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,1,&local_20);
  iVar5 = puVar3[6];
  uVar9 = puVar2[7];
  uVar10 = puVar2[8];
  uVar11 = puVar2[9];
  uVar12 = puVar2[10];
  uVar13 = puVar2[0xb];
  *(undefined4 *)(iVar5 + 8) = puVar2[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar9;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 8) = uVar10;
  *(undefined4 *)(iVar5 + 0xc) = uVar11;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 8) = uVar12;
  *(undefined4 *)(iVar5 + 0xc) = uVar13;
  local_1c = s_cState_Away_00429854;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,2,&local_20);
  iVar5 = puVar3[6];
  uVar9 = puVar2[0xd];
  uVar10 = puVar2[0xe];
  uVar11 = puVar2[0xf];
  uVar12 = puVar2[0x10];
  uVar13 = puVar2[0x11];
  *(undefined4 *)(iVar5 + 0x10) = puVar2[0xc];
  *(undefined4 *)(iVar5 + 0x14) = uVar9;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar10;
  *(undefined4 *)(iVar5 + 0x14) = uVar11;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 0x10) = uVar12;
  *(undefined4 *)(iVar5 + 0x14) = uVar13;
  local_1c = s_cState_Reaction_00429860;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,3,&local_20);
  iVar5 = puVar3[6];
  uVar9 = puVar2[0x13];
  uVar10 = puVar2[0x14];
  uVar11 = puVar2[0x15];
  uVar12 = puVar2[0x16];
  uVar13 = puVar2[0x17];
  *(undefined4 *)(iVar5 + 0x18) = puVar2[0x12];
  *(undefined4 *)(iVar5 + 0x1c) = uVar9;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 0x18) = uVar10;
  *(undefined4 *)(iVar5 + 0x1c) = uVar11;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 0x18) = uVar12;
  *(undefined4 *)(iVar5 + 0x1c) = uVar13;
  local_1c = s_cState_Die_00429870;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,4,&local_20);
  iVar5 = puVar3[6];
  uVar9 = puVar2[0x19];
  uVar10 = puVar2[0x1a];
  uVar11 = puVar2[0x1b];
  uVar12 = puVar2[0x1c];
  uVar13 = puVar2[0x1d];
  *(undefined4 *)(iVar5 + 0x20) = puVar2[0x18];
  *(undefined4 *)(iVar5 + 0x24) = uVar9;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 0x20) = uVar10;
  *(undefined4 *)(iVar5 + 0x24) = uVar11;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 0x20) = uVar12;
  *(undefined4 *)(iVar5 + 0x24) = uVar13;
  local_1c = s_cState_Attack_0042987c;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,5,&local_20);
  iVar5 = puVar3[6];
  uVar9 = puVar2[0x1f];
  uVar10 = puVar2[0x20];
  uVar11 = puVar2[0x21];
  uVar12 = puVar2[0x22];
  uVar13 = puVar2[0x23];
  *(undefined4 *)(iVar5 + 0x28) = puVar2[0x1e];
  *(undefined4 *)(iVar5 + 0x2c) = uVar9;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 0x28) = uVar10;
  *(undefined4 *)(iVar5 + 0x2c) = uVar11;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 0x28) = uVar12;
  *(undefined4 *)(iVar5 + 0x2c) = uVar13;
  local_1c = s_cState_Piyori_0042988c;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,6,&local_20);
  iVar5 = puVar3[6];
  uVar9 = puVar2[0x25];
  uVar10 = puVar2[0x26];
  uVar11 = puVar2[0x27];
  uVar12 = puVar2[0x28];
  uVar13 = puVar2[0x29];
  *(undefined4 *)(iVar5 + 0x30) = puVar2[0x24];
  *(undefined4 *)(iVar5 + 0x34) = uVar9;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 0x30) = uVar10;
  *(undefined4 *)(iVar5 + 0x34) = uVar11;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 0x30) = uVar12;
  *(undefined4 *)(iVar5 + 0x34) = uVar13;
  local_1c = s_cState_TornadoPiyori_0042989c;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,7,&local_20);
  iVar5 = puVar3[6];
  uVar9 = puVar2[0x2b];
  uVar10 = puVar2[0x2c];
  uVar12 = puVar2[0x2e];
  uVar13 = puVar2[0x2d];
  uVar11 = puVar2[0x2f];
  *(undefined4 *)(iVar5 + 0x38) = puVar2[0x2a];
  *(undefined4 *)(iVar5 + 0x3c) = uVar9;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 0x38) = uVar10;
  *(undefined4 *)(iVar5 + 0x3c) = uVar13;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 0x38) = uVar12;
  *(undefined4 *)(iVar5 + 0x3c) = uVar11;
  local_1c = s_cState_BoomerangPull_00429a10;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,8,&local_20);
  iVar5 = puVar3[6];
  uVar9 = puVar2[0x31];
  uVar10 = puVar2[0x32];
  uVar11 = puVar2[0x33];
  uVar12 = puVar2[0x34];
  uVar13 = puVar2[0x35];
  *(undefined4 *)(iVar5 + 0x40) = puVar2[0x30];
  *(undefined4 *)(iVar5 + 0x44) = uVar9;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 0x40) = uVar10;
  *(undefined4 *)(iVar5 + 0x44) = uVar11;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 0x40) = uVar12;
  *(undefined4 *)(iVar5 + 0x44) = uVar13;
  local_1c = s_cState_EventResult_00429a28;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,9,&local_20);
  iVar5 = puVar3[6];
  uVar9 = puVar2[0x37];
  uVar10 = puVar2[0x38];
  uVar11 = puVar2[0x39];
  uVar12 = puVar2[0x3a];
  uVar13 = puVar2[0x3b];
  *(undefined4 *)(iVar5 + 0x48) = puVar2[0x36];
  *(undefined4 *)(iVar5 + 0x4c) = uVar9;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 0x48) = uVar10;
  *(undefined4 *)(iVar5 + 0x4c) = uVar11;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 0x48) = uVar12;
  *(undefined4 *)(iVar5 + 0x4c) = uVar13;
  local_1c = s_cState_Float_00429a3c;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,10,&local_20);
  iVar5 = puVar3[6];
  uVar9 = puVar2[0x3e];
  uVar13 = puVar2[0x3f];
  uVar12 = puVar2[0x3d];
  uVar10 = puVar2[0x40];
  uVar11 = puVar2[0x41];
  *(undefined4 *)(iVar5 + 0x50) = puVar2[0x3c];
  *(undefined4 *)(iVar5 + 0x54) = uVar12;
  iVar5 = puVar3[7];
  *(undefined4 *)(iVar5 + 0x50) = uVar9;
  *(undefined4 *)(iVar5 + 0x54) = uVar13;
  iVar5 = puVar3[8];
  *(undefined4 *)(iVar5 + 0x50) = uVar10;
  *(undefined4 *)(iVar5 + 0x54) = uVar11;
  local_1c = s_cState_Land_00429a4c;
  local_20 = iVar4;
  func_0010BEC4((int)puVar3,0xb,&local_20);
  iVar4 = puVar3[6];
  uVar9 = *(undefined4 *)(iVar7 + 0xc);
  uVar10 = *(undefined4 *)(iVar7 + 0x10);
  uVar11 = *(undefined4 *)(iVar7 + 0x14);
  uVar12 = *(undefined4 *)(iVar7 + 0x18);
  uVar13 = *(undefined4 *)(iVar7 + 0x1c);
  *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(iVar7 + 8);
  *(undefined4 *)(iVar4 + 0x5c) = uVar9;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x58) = uVar10;
  *(undefined4 *)(iVar7 + 0x5c) = uVar11;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x58) = uVar12;
  *(undefined4 *)(iVar7 + 0x5c) = uVar13;
  return (int)(puVar3 + -0x1b);
}

