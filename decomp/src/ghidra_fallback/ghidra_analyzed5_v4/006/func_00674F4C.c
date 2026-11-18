#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_002F9858(undefined4 *param_1,uint *param_2);
extern int func_00689800(int param_1,int *param_2,uint param_3);
extern int DAT_006754cc;
extern undefined4 DAT_006754d0;
extern undefined4 *DAT_006754d4;
extern undefined4 DAT_006754d8;
extern undefined *DAT_006754dc;
extern int DAT_006754e0;
extern int DAT_006754f4;
extern char s_cBaseState_AppearAfter_0067557c[];
extern char s_cBaseState_Appear_00675550[];
extern char s_cBaseState_Die_00675540[];
extern char s_cBaseState_Find_0067551c[];
extern char s_cBaseState_GrassAppear_00675564[];
extern char s_cBaseState_Reaction_0067552c[];
extern char s_cBaseState_Search_00675508[];
extern char s_cBaseState_Wait_006754e4[];
extern char s_cBaseState_Walk_006754f8[];

// USA 00674F4C <- EU 00674F24 (Ghidra, non-matching)
// GLOBAL DAT_006754cc int
// GLOBAL DAT_006754d0 undefined4
// GLOBAL DAT_006754d4 undefined4 *
// GLOBAL DAT_006754d8 undefined4
// GLOBAL DAT_006754dc undefined *
// GLOBAL DAT_006754e0 int
// GLOBAL DAT_006754f4 int
// GLOBAL s_cBaseState_AppearAfter_0067557c string
// GLOBAL s_cBaseState_Appear_00675550 string
// GLOBAL s_cBaseState_Die_00675540 string
// GLOBAL s_cBaseState_Find_0067551c string
// GLOBAL s_cBaseState_GrassAppear_00675564 string
// GLOBAL s_cBaseState_Reaction_0067552c string
// GLOBAL s_cBaseState_Search_00675508 string
// GLOBAL s_cBaseState_Wait_006754e4 string
// GLOBAL s_cBaseState_Walk_006754f8 string

int func_00674F4C(undefined4 *param_1,uint *param_2,uint param_3,int param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(uint *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar3 = func_002F9858(param_1,param_2);
  iVar5 = DAT_006754cc;
  *piVar3 = DAT_006754cc;
  piVar3[200] = iVar5 + 0x88;
  puVar4 = func_0010A794(piVar3 + 0x243);
  puVar4[5] = 0;
  puVar4[6] = 0;
  uVar9 = DAT_006754d0;
  puVar4[7] = 0;
  puVar2 = DAT_006754d4;
  puVar4[8] = 0;
  puVar4[9] = uVar9;
  puVar4[0xd] = uVar9;
  uVar9 = puVar2[5];
  puVar11 = puVar4 + -0x243;
  puVar4[0x13] = puVar2[4];
  puVar4[0x14] = uVar9;
  puVar4[0x11] = DAT_006754d8;
  puVar4[0x12] = puVar11;
  puVar4[0x1c] = 0;
  puVar4[0x1f] = 0;
  puVar4[0x1d] = 0x14;
  puVar4[0x1e] = 0xffffffff;
  *(undefined1 *)(puVar4 + 0x20) = 0;
  *(undefined1 *)((int)puVar4 + 0x81) = 0;
  *(undefined1 *)((int)puVar4 + 0x82) = 0;
  *(undefined1 *)((int)puVar4 + 0x83) = 0;
  *(undefined1 *)(puVar4 + 0x21) = 0;
  uVar9 = puVar2[6];
  uVar10 = puVar2[7];
  puVar4[0xe] = puVar11;
  puVar4[0xf] = uVar9;
  puVar4[0x10] = uVar10;
  puVar4[-0x148] = puVar4 + 0xd;
  uVar9 = puVar2[8];
  uVar10 = puVar2[9];
  puVar4[10] = puVar11;
  puVar4[0xb] = uVar9;
  puVar4[0xc] = uVar10;
  local_3c = puVar4[-400];
  func_0014EB8C(puVar4[-0x13b],puVar4[-0x13a],(undefined2 *)puVar4[-0x15b],&local_3c,
                *(undefined2 *)(puVar4 + -0x22e),puVar4 + 9,0xffff);
  uVar13 = param_3 & 0xff;
  *(undefined1 *)(puVar4[-0x13b] + 0x61) = 0;
  puVar4[-0xdc] = puVar4[-0xdc] & 0xffffff7f;
  puVar4[5] = param_4;
  *(char *)((int)puVar4 + 6) = (char)param_3;
  iVar5 = func_0010BA78(uVar13 << 4);
  puVar4[6] = iVar5;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  if (uVar13 != 0) {
    puVar7 = (undefined4 *)(iVar5 + -8);
    for (iVar6 = (int)(uVar13 * 2) >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar9 = puVar2[1];
      puVar7[2] = *puVar2;
      puVar7[3] = uVar9;
      uVar9 = puVar2[1];
      puVar7[4] = *puVar2;
      puVar7[5] = uVar9;
      puVar7 = puVar7 + 4;
    }
  }
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar12 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar12 << 3);
  puVar4[8] = puVar7;
  if (uVar12 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = puVar2[3];
      *puVar7 = puVar2[2];
      puVar7[1] = uVar9;
      puVar8 = puVar7;
    }
    for (iVar5 = (int)uVar12 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar9 = puVar2[3];
      puVar8[2] = puVar2[2];
      puVar8[3] = uVar9;
      uVar9 = puVar2[3];
      puVar8[4] = puVar2[2];
      puVar8[5] = uVar9;
      puVar8 = puVar8 + 4;
    }
  }
  if (uVar13 != 0) {
    puVar7 = (undefined4 *)func_0010CEE0(uVar13 * 0x24 + 8,(int *)0x0,4);
    iVar5 = 0;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = 0x24;
      puVar7[1] = uVar13;
      iVar5 = func_00100118((int)(puVar7 + 2),DAT_006754dc,0x24,uVar13);
    }
    if (iVar5 != 0) {
      puVar4[3] = iVar5;
      puVar4[2] = uVar13;
    }
  }
  iVar5 = DAT_006754e0;
  *(undefined4 **)(param_4 + 0x354) = puVar4;
  iVar6 = DAT_006754f4;
  *(short *)(iVar5 + param_4) = (short)param_3;
  local_34 = s_cBaseState_Wait_006754e4;
  local_38 = iVar6;
  func_00689800(puVar4[3],&local_38,0xffffffff);
  puVar7 = (undefined4 *)puVar4[6];
  uVar9 = puVar2[0xc];
  uVar10 = puVar2[2];
  uVar14 = puVar2[0xb];
  uVar15 = puVar2[0xd];
  uVar16 = puVar2[3];
  *puVar7 = puVar2[10];
  puVar7[1] = uVar14;
  puVar7 = (undefined4 *)puVar4[7];
  *puVar7 = uVar9;
  puVar7[1] = uVar15;
  puVar7 = (undefined4 *)puVar4[8];
  *puVar7 = uVar10;
  puVar7[1] = uVar16;
  local_34 = s_cBaseState_Walk_006754f8;
  local_38 = iVar6;
  iVar5 = puVar4[3];
  if (1 < (uint)puVar4[2]) {
    iVar5 = iVar5 + 0x24;
  }
  func_00689800(iVar5,&local_38,0xffffffff);
  iVar5 = puVar4[6];
  uVar9 = puVar2[0xf];
  uVar10 = puVar2[0x10];
  uVar16 = puVar2[0x11];
  uVar14 = puVar2[0x12];
  uVar15 = puVar2[0x13];
  *(undefined4 *)(iVar5 + 8) = puVar2[0xe];
  *(undefined4 *)(iVar5 + 0xc) = uVar9;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 8) = uVar10;
  *(undefined4 *)(iVar5 + 0xc) = uVar16;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 8) = uVar14;
  *(undefined4 *)(iVar5 + 0xc) = uVar15;
  local_34 = s_cBaseState_Search_00675508;
  local_38 = iVar6;
  iVar5 = puVar4[3];
  if (2 < (uint)puVar4[2]) {
    iVar5 = iVar5 + 0x48;
  }
  func_00689800(iVar5,&local_38,0xffffffff);
  iVar5 = puVar4[6];
  uVar9 = puVar2[0x15];
  uVar14 = puVar2[0x16];
  uVar16 = puVar2[0x17];
  uVar10 = puVar2[2];
  uVar15 = puVar2[3];
  *(undefined4 *)(iVar5 + 0x10) = puVar2[0x14];
  *(undefined4 *)(iVar5 + 0x14) = uVar9;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar14;
  *(undefined4 *)(iVar5 + 0x14) = uVar16;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x10) = uVar10;
  *(undefined4 *)(iVar5 + 0x14) = uVar15;
  local_34 = s_cBaseState_Find_0067551c;
  local_38 = iVar6;
  iVar5 = puVar4[3];
  if (3 < (uint)puVar4[2]) {
    iVar5 = iVar5 + 0x6c;
  }
  func_00689800(iVar5,&local_38,0xffffffff);
  iVar5 = puVar4[6];
  uVar9 = puVar2[0x19];
  uVar10 = puVar2[0x1a];
  uVar16 = puVar2[0x1b];
  uVar14 = puVar2[0x1c];
  uVar15 = puVar2[0x1d];
  *(undefined4 *)(iVar5 + 0x18) = puVar2[0x18];
  *(undefined4 *)(iVar5 + 0x1c) = uVar9;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x18) = uVar10;
  *(undefined4 *)(iVar5 + 0x1c) = uVar16;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x18) = uVar14;
  *(undefined4 *)(iVar5 + 0x1c) = uVar15;
  local_34 = s_cBaseState_Reaction_0067552c;
  local_38 = iVar6;
  iVar5 = puVar4[3];
  if (4 < (uint)puVar4[2]) {
    iVar5 = iVar5 + 0x90;
  }
  func_00689800(iVar5,&local_38,0xffffffff);
  iVar5 = puVar4[6];
  uVar10 = puVar2[0x20];
  uVar9 = puVar2[0x21];
  uVar14 = puVar2[0x1f];
  uVar17 = *(undefined8 *)(puVar2 + 2);
  *(undefined4 *)(iVar5 + 0x20) = puVar2[0x1e];
  *(undefined4 *)(iVar5 + 0x24) = uVar14;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x20) = uVar10;
  *(undefined4 *)(iVar5 + 0x24) = uVar9;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x20) = (int)uVar17;
  *(int *)(iVar5 + 0x24) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cBaseState_Die_00675540;
  local_38 = iVar6;
  iVar5 = puVar4[3];
  if (5 < (uint)puVar4[2]) {
    iVar5 = iVar5 + 0xb4;
  }
  func_00689800(iVar5,&local_38,0xffffffff);
  iVar5 = puVar4[6];
  uVar9 = puVar2[0x23];
  uVar10 = puVar2[0x24];
  uVar14 = puVar2[0x25];
  *(undefined4 *)(iVar5 + 0x28) = puVar2[0x22];
  *(undefined4 *)(iVar5 + 0x2c) = uVar9;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x28) = uVar10;
  *(undefined4 *)(iVar5 + 0x2c) = uVar14;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x28) = (int)uVar17;
  *(int *)(iVar5 + 0x2c) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cBaseState_Appear_00675550;
  local_38 = iVar6;
  iVar5 = puVar4[3];
  if (6 < (uint)puVar4[2]) {
    iVar5 = iVar5 + 0xd8;
  }
  func_00689800(iVar5,&local_38,0xffffffff);
  iVar5 = puVar4[6];
  uVar9 = puVar2[0x27];
  uVar10 = puVar2[0x28];
  uVar14 = puVar2[0x29];
  uVar15 = puVar2[0x2a];
  uVar16 = puVar2[0x2b];
  *(undefined4 *)(iVar5 + 0x30) = puVar2[0x26];
  *(undefined4 *)(iVar5 + 0x34) = uVar9;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x30) = uVar10;
  *(undefined4 *)(iVar5 + 0x34) = uVar14;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x30) = uVar15;
  *(undefined4 *)(iVar5 + 0x34) = uVar16;
  local_34 = s_cBaseState_GrassAppear_00675564;
  local_38 = iVar6;
  iVar5 = puVar4[3];
  if (7 < (uint)puVar4[2]) {
    iVar5 = iVar5 + 0xfc;
  }
  func_00689800(iVar5,&local_38,0xffffffff);
  iVar5 = puVar4[6];
  uVar9 = puVar2[0x2d];
  uVar10 = puVar2[0x2e];
  uVar14 = puVar2[0x2f];
  uVar15 = puVar2[0x30];
  uVar16 = puVar2[0x31];
  *(undefined4 *)(iVar5 + 0x38) = puVar2[0x2c];
  *(undefined4 *)(iVar5 + 0x3c) = uVar9;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x38) = uVar10;
  *(undefined4 *)(iVar5 + 0x3c) = uVar14;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x38) = uVar15;
  *(undefined4 *)(iVar5 + 0x3c) = uVar16;
  local_34 = s_cBaseState_AppearAfter_0067557c;
  local_38 = iVar6;
  iVar5 = puVar4[3];
  if (8 < (uint)puVar4[2]) {
    iVar5 = iVar5 + 0x120;
  }
  func_00689800(iVar5,&local_38,0xffffffff);
  uVar10 = puVar2[0x35];
  iVar5 = puVar4[6];
  uVar14 = puVar2[0x33];
  uVar15 = puVar2[0x34];
  uVar9 = puVar2[0x36];
  uVar16 = puVar2[0x37];
  *(undefined4 *)(iVar5 + 0x40) = puVar2[0x32];
  *(undefined4 *)(iVar5 + 0x44) = uVar14;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x40) = uVar15;
  *(undefined4 *)(iVar5 + 0x44) = uVar10;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x40) = uVar9;
  *(undefined4 *)(iVar5 + 0x44) = uVar16;
  func_002AF5FC((int)puVar11,10,-1);
  *(undefined1 *)((int)puVar4 + -399) = 0xb;
  *(undefined1 *)((int)puVar4 + -0x18e) = 0xff;
  *(undefined1 *)((int)puVar4 + -0x18d) = 0;
  puVar4[-0x42] = puVar4 + 0x11;
  return (int)puVar11;
}

