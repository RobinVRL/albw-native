#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_002F9858(undefined4 *param_1,uint *param_2);
extern int func_00689800(int param_1,int *param_2,uint param_3);
extern int DAT_00673974;
extern undefined4 *DAT_00673978;
extern undefined4 DAT_0067397c;
extern undefined4 DAT_00673980;
extern undefined4 DAT_00673984;
extern undefined *DAT_00673988;
extern int DAT_0067398c;
extern int DAT_006739a0;
extern int DAT_006739a4;
extern undefined4 *DAT_00673a00;
extern char s_cBaseState_AppearAfter_00673a30[];
extern char s_cBaseState_Appear_00673a04[];
extern char s_cBaseState_Die_006739f0[];
extern char s_cBaseState_Find_006739cc[];
extern char s_cBaseState_GrassAppear_00673a18[];
extern char s_cBaseState_Reaction_006739dc[];
extern char s_cBaseState_Search_006739b8[];
extern char s_cBaseState_Wait_00673990[];
extern char s_cBaseState_Walk_006739a8[];

// USA 006733C4 <- EU 0067339C (Ghidra, non-matching)
// GLOBAL DAT_00673974 int
// GLOBAL DAT_00673978 undefined4 *
// GLOBAL DAT_0067397c undefined4
// GLOBAL DAT_00673980 undefined4
// GLOBAL DAT_00673984 undefined4
// GLOBAL DAT_00673988 undefined *
// GLOBAL DAT_0067398c int
// GLOBAL DAT_006739a0 int
// GLOBAL DAT_006739a4 int
// GLOBAL DAT_00673a00 undefined4 *
// GLOBAL s_cBaseState_AppearAfter_00673a30 string
// GLOBAL s_cBaseState_Appear_00673a04 string
// GLOBAL s_cBaseState_Die_006739f0 string
// GLOBAL s_cBaseState_Find_006739cc string
// GLOBAL s_cBaseState_GrassAppear_00673a18 string
// GLOBAL s_cBaseState_Reaction_006739dc string
// GLOBAL s_cBaseState_Search_006739b8 string
// GLOBAL s_cBaseState_Wait_00673990 string
// GLOBAL s_cBaseState_Walk_006739a8 string

int func_006733C4(undefined4 *param_1,uint *param_2,uint param_3,int param_4)

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
  undefined4 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(uint *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar3 = func_002F9858(param_1,param_2);
  iVar5 = DAT_00673974;
  *piVar3 = DAT_00673974;
  piVar3[200] = iVar5 + 0x88;
  puVar4 = func_0010A794(piVar3 + 0x243);
  puVar4[5] = 0;
  puVar4[6] = 0;
  uVar9 = DAT_0067397c;
  puVar4[7] = 0;
  puVar2 = DAT_00673978;
  puVar4[8] = 0;
  puVar4[9] = uVar9;
  puVar4[0xd] = uVar9;
  uVar9 = puVar2[-3];
  puVar12 = puVar4 + -0x243;
  puVar4[0x13] = puVar2[-4];
  puVar4[0x14] = uVar9;
  puVar4[0x11] = DAT_00673980;
  puVar4[0x12] = puVar12;
  puVar4[0x1d] = 0x14;
  puVar4[0x1c] = 0;
  puVar4[0x1e] = 0xffffffff;
  puVar4[0x1f] = 0;
  *(undefined1 *)(puVar4 + 0x20) = 0;
  *(undefined1 *)((int)puVar4 + 0x81) = 0;
  *(undefined1 *)((int)puVar4 + 0x82) = 0;
  *(undefined1 *)((int)puVar4 + 0x83) = 0;
  *(undefined1 *)(puVar4 + 0x21) = 0;
  uVar9 = puVar2[-2];
  uVar10 = puVar2[-1];
  puVar4[0xe] = puVar12;
  puVar4[0xf] = uVar9;
  puVar4[0x10] = uVar10;
  puVar4[-0x148] = puVar4 + 0xd;
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  puVar4[10] = puVar12;
  puVar4[0xb] = uVar9;
  puVar4[0xc] = uVar10;
  local_3c = puVar4[-400];
  func_0014EB8C(puVar4[-0x13b],puVar4[-0x13a],(undefined2 *)puVar4[-0x15b],&local_3c,
                *(undefined2 *)(puVar4 + -0x22e),puVar4 + 9,(short)DAT_00673984);
  uVar15 = param_3 & 0xff;
  *(undefined1 *)(puVar4[-0x13b] + 0x61) = 0;
  puVar4[-0xdc] = puVar4[-0xdc] & 0xffffff7f;
  puVar4[5] = param_4;
  *(char *)((int)puVar4 + 6) = (char)param_3;
  iVar5 = func_0010BA78(uVar15 << 4);
  puVar4[6] = iVar5;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  if (uVar15 != 0) {
    puVar7 = (undefined4 *)(iVar5 + -8);
    for (iVar6 = (int)(uVar15 * 2) >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar9 = puVar2[-7];
      puVar7[2] = puVar2[-8];
      puVar7[3] = uVar9;
      uVar9 = puVar2[-7];
      puVar7[4] = puVar2[-8];
      puVar7[5] = uVar9;
      puVar7 = puVar7 + 4;
    }
  }
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar13 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar4[8] = puVar7;
  if (uVar13 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = puVar2[-5];
      *puVar7 = puVar2[-6];
      puVar7[1] = uVar9;
      puVar8 = puVar7;
    }
    for (iVar5 = (int)uVar13 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar9 = puVar2[-5];
      puVar8[2] = puVar2[-6];
      puVar8[3] = uVar9;
      uVar9 = puVar2[-5];
      puVar8[4] = puVar2[-6];
      puVar8[5] = uVar9;
      puVar8 = puVar8 + 4;
    }
  }
  if (uVar15 != 0) {
    puVar7 = (undefined4 *)func_0010CEE0(uVar15 * 0x24 + 8,(int *)0x0,4);
    iVar5 = 0;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = 0x24;
      puVar7[1] = uVar15;
      iVar5 = func_00100118((int)(puVar7 + 2),DAT_00673988,0x24,uVar15);
    }
    if (iVar5 != 0) {
      puVar4[3] = iVar5;
      puVar4[2] = uVar15;
    }
  }
  iVar5 = DAT_0067398c;
  *(undefined4 **)(param_4 + 0x354) = puVar4;
  iVar6 = DAT_006739a0;
  *(short *)(iVar5 + param_4) = (short)param_3;
  local_34 = s_cBaseState_Wait_00673990;
  local_38 = iVar6;
  func_00689800(puVar4[3],&local_38,0xffffffff);
  puVar7 = (undefined4 *)puVar4[6];
  uVar9 = puVar2[-6];
  uVar10 = puVar2[4];
  uVar11 = *(undefined4 *)(DAT_006739a4 + 0x10c);
  uVar14 = puVar2[5];
  uVar16 = puVar2[-5];
  *puVar7 = *(undefined4 *)(DAT_006739a4 + 0x108);
  puVar7[1] = uVar11;
  puVar7 = (undefined4 *)puVar4[7];
  *puVar7 = uVar10;
  puVar7[1] = uVar14;
  puVar7 = (undefined4 *)puVar4[8];
  *puVar7 = uVar9;
  puVar7[1] = uVar16;
  local_34 = s_cBaseState_Walk_006739a8;
  local_38 = iVar6;
  iVar5 = puVar4[3];
  if (1 < (uint)puVar4[2]) {
    iVar5 = iVar5 + 0x24;
  }
  func_00689800(iVar5,&local_38,0xffffffff);
  iVar5 = puVar4[6];
  uVar9 = puVar2[8];
  uVar10 = puVar2[9];
  uVar14 = *(undefined4 *)(DAT_006739a4 + 0x11c);
  uVar11 = puVar2[10];
  uVar16 = puVar2[0xb];
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(DAT_006739a4 + 0x118);
  *(undefined4 *)(iVar5 + 0xc) = uVar14;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 8) = uVar9;
  *(undefined4 *)(iVar5 + 0xc) = uVar10;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 8) = uVar11;
  *(undefined4 *)(iVar5 + 0xc) = uVar16;
  local_34 = s_cBaseState_Search_006739b8;
  local_38 = iVar6;
  iVar5 = puVar4[3];
  if (2 < (uint)puVar4[2]) {
    iVar5 = iVar5 + 0x48;
  }
  func_00689800(iVar5,&local_38,0xffffffff);
  iVar5 = puVar4[6];
  uVar10 = puVar2[-6];
  uVar14 = puVar2[0xe];
  uVar11 = *(undefined4 *)(DAT_006739a4 + 0x134);
  uVar9 = puVar2[-5];
  uVar16 = puVar2[0xf];
  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(DAT_006739a4 + 0x130);
  *(undefined4 *)(iVar5 + 0x14) = uVar11;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar14;
  *(undefined4 *)(iVar5 + 0x14) = uVar16;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x10) = uVar10;
  *(undefined4 *)(iVar5 + 0x14) = uVar9;
  local_34 = s_cBaseState_Find_006739cc;
  local_38 = iVar6;
  iVar5 = puVar4[3];
  if (3 < (uint)puVar4[2]) {
    iVar5 = iVar5 + 0x6c;
  }
  func_00689800(iVar5,&local_38,0xffffffff);
  iVar5 = puVar4[6];
  uVar14 = puVar2[0x12];
  uVar16 = puVar2[0x13];
  uVar10 = puVar2[0x14];
  uVar11 = puVar2[0x15];
  uVar9 = *(undefined4 *)(DAT_006739a4 + 0x144);
  *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(DAT_006739a4 + 0x140);
  *(undefined4 *)(iVar5 + 0x1c) = uVar9;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x18) = uVar14;
  *(undefined4 *)(iVar5 + 0x1c) = uVar16;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x18) = uVar10;
  *(undefined4 *)(iVar5 + 0x1c) = uVar11;
  local_34 = s_cBaseState_Reaction_006739dc;
  local_38 = iVar6;
  iVar5 = puVar4[3];
  if (4 < (uint)puVar4[2]) {
    iVar5 = iVar5 + 0x90;
  }
  func_00689800(iVar5,&local_38,0xffffffff);
  iVar5 = puVar4[6];
  uVar9 = puVar2[0x18];
  uVar11 = *(undefined4 *)(DAT_006739a4 + 0x15c);
  uVar10 = puVar2[0x19];
  uVar17 = *(undefined8 *)(puVar2 + -6);
  *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(DAT_006739a4 + 0x158);
  *(undefined4 *)(iVar5 + 0x24) = uVar11;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x20) = uVar9;
  *(undefined4 *)(iVar5 + 0x24) = uVar10;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x20) = (int)uVar17;
  *(int *)(iVar5 + 0x24) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cBaseState_Die_006739f0;
  local_38 = iVar6;
  iVar5 = puVar4[3];
  if (5 < (uint)puVar4[2]) {
    iVar5 = iVar5 + 0xb4;
  }
  func_00689800(iVar5,&local_38,0xffffffff);
  iVar5 = puVar4[6];
  uVar11 = DAT_00673a00[1];
  uVar9 = puVar2[0x1c];
  uVar10 = puVar2[0x1d];
  *(undefined4 *)(iVar5 + 0x28) = *DAT_00673a00;
  *(undefined4 *)(iVar5 + 0x2c) = uVar11;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x28) = uVar9;
  *(undefined4 *)(iVar5 + 0x2c) = uVar10;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x28) = (int)uVar17;
  *(int *)(iVar5 + 0x2c) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cBaseState_Appear_00673a04;
  local_38 = iVar6;
  iVar5 = puVar4[3];
  if (6 < (uint)puVar4[2]) {
    iVar5 = iVar5 + 0xd8;
  }
  func_00689800(iVar5,&local_38,0xffffffff);
  iVar5 = puVar4[6];
  uVar11 = puVar2[0x20];
  uVar14 = puVar2[0x21];
  uVar10 = puVar2[0x22];
  uVar16 = puVar2[0x23];
  uVar9 = *(undefined4 *)(DAT_006739a4 + 0x17c);
  *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(DAT_006739a4 + 0x178);
  *(undefined4 *)(iVar5 + 0x34) = uVar9;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x30) = uVar11;
  *(undefined4 *)(iVar5 + 0x34) = uVar14;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x30) = uVar10;
  *(undefined4 *)(iVar5 + 0x34) = uVar16;
  local_34 = s_cBaseState_GrassAppear_00673a18;
  local_38 = iVar6;
  iVar5 = puVar4[3];
  if (7 < (uint)puVar4[2]) {
    iVar5 = iVar5 + 0xfc;
  }
  func_00689800(iVar5,&local_38,0xffffffff);
  iVar5 = puVar4[6];
  uVar16 = *(undefined4 *)(DAT_006739a4 + 0x194);
  uVar9 = puVar2[0x26];
  uVar14 = puVar2[0x27];
  uVar10 = puVar2[0x28];
  uVar11 = puVar2[0x29];
  *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(DAT_006739a4 + 400);
  *(undefined4 *)(iVar5 + 0x3c) = uVar16;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x38) = uVar9;
  *(undefined4 *)(iVar5 + 0x3c) = uVar14;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x38) = uVar10;
  *(undefined4 *)(iVar5 + 0x3c) = uVar11;
  local_34 = s_cBaseState_AppearAfter_00673a30;
  local_38 = iVar6;
  iVar5 = puVar4[3];
  if (8 < (uint)puVar4[2]) {
    iVar5 = iVar5 + 0x120;
  }
  func_00689800(iVar5,&local_38,0xffffffff);
  iVar5 = puVar4[6];
  uVar10 = puVar2[0x2c];
  uVar11 = puVar2[0x2d];
  uVar16 = *(undefined4 *)(DAT_006739a4 + 0x1ac);
  uVar9 = puVar2[0x2e];
  uVar14 = puVar2[0x2f];
  *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(DAT_006739a4 + 0x1a8);
  *(undefined4 *)(iVar5 + 0x44) = uVar16;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x40) = uVar10;
  *(undefined4 *)(iVar5 + 0x44) = uVar11;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x40) = uVar9;
  *(undefined4 *)(iVar5 + 0x44) = uVar14;
  func_002AF5FC((int)puVar12,10,-1);
  *(undefined1 *)((int)puVar4 + -399) = 0xb;
  *(undefined1 *)((int)puVar4 + -0x18e) = 0xff;
  *(undefined1 *)((int)puVar4 + -0x18d) = 0;
  puVar4[-0x42] = puVar4 + 0x11;
  return (int)puVar12;
}

