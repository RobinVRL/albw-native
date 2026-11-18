#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_002247BC(int param_1);
extern int func_002251F4(int param_1);
extern int func_00225E24(int param_1);
extern int func_00225FDC(int param_1);
extern int func_00227894(int param_1);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_0036C884(undefined4 *param_1,undefined4 *param_2,undefined1 param_3);
extern int func_004EB4C8(int param_1,int param_2);
extern int func_004EE484(undefined4 *param_1);
extern int func_0065E774(undefined4 *param_1,undefined1 param_2);
extern int DAT_00229210;
extern int DAT_00229214;
extern int DAT_00229218;
extern int *DAT_0022921c;
extern int DAT_00229220;
extern undefined4 DAT_00229224;
extern undefined4 DAT_00229228;
extern undefined4 DAT_0022922c;
extern undefined4 DAT_00229230;
extern undefined4 DAT_00229234;
extern undefined4 DAT_00229238;
extern undefined4 *DAT_0022923c;
extern float *DAT_00229240;
extern undefined *DAT_00229610;
extern int DAT_00229614;
extern int DAT_00229624;
extern undefined4 *DAT_002296c4;
extern int *DAT_0022998c;
extern char s_cState_Damage_00229920[];
extern char s_cState_Die_00229980[];
extern char s_cState_Freeze_00229930[];
extern char s_cState_JumpEd_002296c8[];
extern char s_cState_JumpSt_002296b4[];
extern char s_cState_Knockdown_00229940[];
extern char s_cState_Move_00229674[];
extern char s_cState_OpeningEnd_00229650[];
extern char s_cState_OpeningMain_0022963c[];
extern char s_cState_OpeningPre_00229628[];
extern char s_cState_Ready_00229664[];
extern char s_cState_Ride_002296a8[];
extern char s_cState_Spin_0022969c[];
extern char s_cState_Stun_00229690[];
extern char s_cState_Tornado_00229680[];
extern char s_cState_Transform_00229954[];
extern char s_cState_Transformdown_00229968[];
extern char s_cState_Wait_00229618[];

// USA 00228D18 <- EU 00228D18 (Ghidra, non-matching)
// GLOBAL DAT_00229210 int
// GLOBAL DAT_00229214 int
// GLOBAL DAT_00229218 int
// GLOBAL DAT_0022921c int *
// GLOBAL DAT_00229220 int
// GLOBAL DAT_00229224 undefined4
// GLOBAL DAT_00229228 undefined4
// GLOBAL DAT_0022922c undefined4
// GLOBAL DAT_00229230 undefined4
// GLOBAL DAT_00229234 undefined4
// GLOBAL DAT_00229238 undefined4
// GLOBAL DAT_0022923c undefined4 *
// GLOBAL DAT_00229240 float *
// GLOBAL DAT_00229610 undefined *
// GLOBAL DAT_00229614 int
// GLOBAL DAT_00229624 int
// GLOBAL DAT_002296c4 undefined4 *
// GLOBAL DAT_0022998c int *
// GLOBAL s_cState_Damage_00229920 string
// GLOBAL s_cState_Die_00229980 string
// GLOBAL s_cState_Freeze_00229930 string
// GLOBAL s_cState_JumpEd_002296c8 string
// GLOBAL s_cState_JumpSt_002296b4 string
// GLOBAL s_cState_Knockdown_00229940 string
// GLOBAL s_cState_Move_00229674 string
// GLOBAL s_cState_OpeningEnd_00229650 string
// GLOBAL s_cState_OpeningMain_0022963c string
// GLOBAL s_cState_OpeningPre_00229628 string
// GLOBAL s_cState_Ready_00229664 string
// GLOBAL s_cState_Ride_002296a8 string
// GLOBAL s_cState_Spin_0022969c string
// GLOBAL s_cState_Stun_00229690 string
// GLOBAL s_cState_Tornado_00229680 string
// GLOBAL s_cState_Transform_00229954 string
// GLOBAL s_cState_Transformdown_00229968 string
// GLOBAL s_cState_Wait_00229618 string

/* WARNING: Variable defined which should be unmapped: objStack_50 */

int func_00228D18(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  float *pfVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  ushort *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar22;
  undefined8 uVar21;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  #define local_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x24))
  #define local_28 (*(uint * *)(albw_frame + 0x28))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar5 = func_00150E40(param_1,param_2);
  iVar12 = DAT_00229210;
  piVar5[200] = DAT_00229210 + 0x54;
  *piVar5 = iVar12;
  piVar5[0x103] = 0;
  iVar9 = DAT_00229218;
  iVar12 = DAT_00229214;
  piVar5[0x106] = 0;
  iVar13 = *(int *)(iVar12 + 0x1a8);
  iVar6 = *(int *)(iVar12 + 0x1a4);
  piVar5[0x10a] = 0;
  piVar5[0x107] = iVar6;
  piVar5[0x108] = iVar13;
  piVar5[0x105] = iVar9;
  iVar6 = *(int *)(iVar12 + 0x1a4);
  iVar13 = *(int *)(iVar12 + 0x1a8);
  piVar5[0x109] = iVar9;
  piVar5[0x10b] = iVar6;
  piVar5[0x10c] = iVar13;
  puVar7 = (undefined4 *)func_0010BAB4(0x48);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_0034CAA0(puVar7);
  }
  piVar2 = DAT_0022921c;
  piVar5[0x10d] = (int)puVar8;
  piVar5[0x10f] = 0;
  iVar6 = DAT_00229214;
  iVar13 = piVar2[1];
  piVar5[0x110] = *piVar2;
  piVar5[0x111] = iVar13;
  piVar5[0x10e] = DAT_00229220;
  iVar13 = *(int *)(iVar6 + 4);
  iVar14 = *(int *)(iVar6 + 8);
  piVar5[0x113] = (int)piVar5;
  piVar5[0x112] = iVar9;
  piVar5[0x114] = iVar13;
  piVar5[0x115] = iVar14;
  iVar13 = *(int *)(iVar6 + 0xc);
  iVar14 = *(int *)(iVar6 + 0x10);
  piVar5[0x117] = (int)piVar5;
  piVar5[0x116] = iVar9;
  piVar5[0x118] = iVar13;
  piVar5[0x119] = iVar14;
  puVar8 = func_0010A794(piVar5 + 0x11a);
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  uVar16 = *(undefined4 *)(iVar6 + 0x14);
  uVar17 = *(undefined4 *)(iVar6 + 0x18);
  puVar8 = func_0036C884(puVar8 + 9,puVar8 + -0x11a,1);
  *puVar8 = DAT_00229224;
  puVar8[0x40] = uVar16;
  puVar8[0x41] = uVar17;
  puVar8[0x42] = 0;
  puVar8[0x43] = 0;
  iVar9 = func_004EE484(puVar8 + 0x44);
  uVar16 = DAT_00229228;
  *(undefined4 *)(iVar9 + 100) = DAT_00229228;
  *(undefined4 *)(iVar9 + 0x68) = 0;
  *(undefined4 *)(iVar9 + 0x6c) = 0;
  *(undefined4 *)(iVar9 + 0x70) = 0;
  *(undefined4 *)(iVar9 + 0x74) = 0;
  *(undefined4 *)(iVar9 + 0x78) = 0;
  *(undefined4 *)(iVar9 + 0x7c) = 0;
  *(undefined4 *)(iVar9 + 0x80) = uVar16;
  *(undefined4 *)(iVar9 + 0x84) = 0;
  iVar9 = func_004EE484((undefined4 *)(iVar9 + 0x88));
  uVar17 = DAT_0022922c;
  iVar13 = iVar9 + -0x624;
  *(undefined4 *)(iVar9 + 100) = 0;
  *(undefined4 *)(iVar9 + 0x68) = 0;
  *(undefined4 *)(iVar9 + 0x6c) = 0;
  *(undefined4 *)(iVar9 + 0x70) = 0;
  *(undefined4 *)(iVar9 + 0x74) = 0;
  *(undefined4 *)(iVar9 + 0x78) = 0;
  *(undefined4 *)(iVar9 + 0x7c) = uVar17;
  *(undefined4 *)(iVar9 + 0x80) = 0;
  *(undefined4 *)(iVar9 + 0x84) = 0;
  *(undefined4 *)(iVar9 + 0x88) = 0;
  *(undefined4 *)(iVar9 + 0x8c) = 0;
  *(undefined4 *)(iVar9 + 0x90) = 0;
  *(undefined4 *)(iVar9 + 0x94) = 0;
  *(undefined4 *)(iVar9 + 0x98) = 0;
  *(undefined4 *)(iVar9 + 0x9c) = 0;
  *(undefined4 *)(iVar9 + 0xa0) = 0;
  *(undefined4 *)(iVar9 + 0xa4) = 0;
  uVar19 = DAT_00229230;
  *(undefined4 *)(iVar9 + 0xa8) = uVar17;
  *(undefined4 *)(iVar9 + 0xac) = 0;
  *(undefined4 *)(iVar9 + 0xb4) = uVar19;
  *(undefined4 *)(iVar9 + 0xb0) = 0x14;
  *(undefined4 *)(iVar9 + 0xb8) = uVar19;
  *(undefined4 *)(iVar9 + 0xbc) = uVar19;
  *(undefined4 *)(iVar9 + 0xc0) = uVar19;
  *(undefined4 *)(iVar9 + 0xc4) = uVar19;
  *(undefined4 *)(iVar9 + 200) = uVar19;
  *(undefined4 *)(iVar9 + 0xcc) = uVar19;
  *(undefined4 *)(iVar9 + 0xd0) = 4;
  uVar17 = DAT_00229234;
  *(undefined4 *)(iVar9 + 0xd4) = uVar16;
  *(undefined4 *)(iVar9 + 0xd8) = uVar17;
  *(undefined4 *)(iVar9 + 0xdc) = uVar16;
  uVar17 = DAT_00229238;
  *(undefined4 *)(iVar9 + 0xe0) = *(undefined4 *)(iVar9 + -0x254);
  *(undefined4 *)(iVar9 + 0xe4) = *(undefined4 *)(iVar9 + -0x250);
  *(undefined4 *)(iVar9 + 0xe8) = *(undefined4 *)(iVar9 + -0x24c);
  *(undefined4 *)(iVar9 + 0xec) = *(undefined4 *)(iVar9 + -0x254);
  *(undefined4 *)(iVar9 + 0xf0) = *(undefined4 *)(iVar9 + -0x250);
  *(undefined4 *)(iVar9 + 0xf4) = *(undefined4 *)(iVar9 + -0x24c);
  *(undefined4 *)(iVar9 + 0xfc) = uVar19;
  *(undefined4 *)(iVar9 + 0x100) = uVar17;
  *(undefined4 *)(iVar9 + 0xf8) = 0;
  puVar8 = DAT_0022923c;
  *(undefined4 *)(iVar9 + 0x104) = 0;
  *(undefined4 *)(iVar9 + 0x108) = uVar16;
  uVar16 = *puVar8;
  uVar17 = puVar8[1];
  *(undefined4 *)(iVar9 + 0x114) = puVar8[2];
  *(undefined4 *)(iVar9 + 0x10c) = uVar16;
  *(undefined4 *)(iVar9 + 0x110) = uVar17;
  *(undefined1 *)(iVar9 + 0x118) = 0;
  *(undefined1 *)(iVar9 + 0x119) = 0;
  *(undefined2 *)(iVar9 + 0x11a) = 0;
  *(undefined2 *)(iVar9 + 0x11c) = 0;
  *(undefined2 *)(iVar9 + 0x11e) = 0;
  *(undefined1 *)(iVar9 + 0x120) = 0;
  *(undefined1 *)(iVar9 + 0x121) = 0;
  *(undefined1 *)(iVar9 + 0x122) = 0;
  *(undefined1 *)(iVar9 + 0x123) = 0;
  *(undefined1 *)(iVar9 + 0x124) = 0;
  *(undefined1 *)(iVar9 + 0x125) = 0;
  *(undefined1 *)(iVar9 + 0x126) = 0;
  *(undefined1 *)(iVar9 + 0x127) = 1;
  *(undefined1 *)(iVar9 + 0x128) = 0;
  *(undefined1 *)(iVar9 + 0x129) = 0;
  *(undefined1 *)(iVar9 + 0x12a) = 0;
  *(undefined1 *)(iVar9 + 299) = 0;
  *(undefined1 *)(iVar9 + 300) = 0;
  *(undefined1 *)(iVar9 + 0x12d) = 1;
  *(undefined1 *)(iVar9 + 0x12e) = 0;
  *(undefined1 *)(iVar9 + 0x12f) = 0;
  pfVar3 = DAT_00229240;
  *(undefined1 *)(iVar9 + 0x130) = 0;
  func_00115C54((float *)objStack_50,(float *)(iVar9 + -0x254),pfVar3);
  *(uint *)(iVar9 + 0xe0) = objStack_50[0];
  *(uint *)(iVar9 + 0xe4) = objStack_50[1];
  *(uint *)(iVar9 + 0xe8) = objStack_50[2];
  uVar16 = *(undefined4 *)(iVar6 + 0x1c);
  uVar17 = *(undefined4 *)(iVar6 + 0x20);
  *(int *)(iVar9 + -0x20c) = iVar13;
  *(undefined4 *)(iVar9 + -0x208) = uVar16;
  *(undefined4 *)(iVar9 + -0x204) = uVar17;
  uVar16 = *(undefined4 *)(iVar6 + 0x24);
  uVar17 = *(undefined4 *)(iVar6 + 0x28);
  *(int *)(iVar9 + -0x1fc) = iVar13;
  *(undefined4 *)(iVar9 + -0x1f8) = uVar16;
  *(undefined4 *)(iVar9 + -500) = uVar17;
  uVar16 = *(undefined4 *)(iVar6 + 0x2c);
  uVar17 = *(undefined4 *)(iVar6 + 0x30);
  *(int *)(iVar9 + -0x1d8) = iVar13;
  *(undefined4 *)(iVar9 + -0x1d4) = uVar16;
  *(undefined4 *)(iVar9 + -0x1d0) = uVar17;
  *(int *)(iVar9 + -0x238) = iVar9 + -0x1dc;
  objStack_50[1] = 0;
  objStack_50[0] = 1;
  objStack_50[2] = 0;
  iVar14 = func_0014E428(iVar13,1,0,0,1,0,0);
  *(int *)(iVar9 + -0x90) = iVar14;
  if ((iVar14 != 0) && (iVar15 = 0, 0 < *(int *)(*(int *)(iVar14 + 0x20) + 4))) {
    do {
      puVar10 = (ushort *)(**(int **)(iVar14 + 0x20) + iVar15 * 0x154);
      if (puVar10 != (ushort *)0x0) {
        *puVar10 = *puVar10 | 0x400;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(*(int *)(iVar14 + 0x20) + 4));
  }
  *(uint *)(*(int *)(iVar9 + -0x90) + 0x164) = *(uint *)(*(int *)(iVar9 + -0x90) + 0x164) | 0x90000;
  func_00227894(iVar13);
  func_00225FDC(iVar13);
  func_00225E24(iVar13);
  func_002251F4(iVar13);
  func_002247BC(iVar13);
  *(int *)(iVar9 + -0x1a8) = iVar13;
  puVar7 = (undefined4 *)(iVar9 + -0x1bc);
  *(undefined1 *)(iVar9 + -0x1b6) = 0x12;
  iVar14 = func_0010BA78(0x120);
  *(int *)(iVar9 + -0x1a4) = iVar14;
  *(uint *)(iVar9 + -0x1a0) = iVar14 + (uint)*(byte *)(iVar9 + -0x1b6) * 8;
  iVar15 = 0x12;
  puVar8 = (undefined4 *)(iVar14 + -8);
  do {
    uVar16 = *(undefined4 *)(DAT_00229214 + 0x1a0);
    iVar15 = iVar15 + -1;
    puVar8[2] = *(undefined4 *)(DAT_00229214 + 0x19c);
    puVar8[3] = uVar16;
    uVar16 = *(undefined4 *)(iVar12 + 0x1a0);
    puVar8[4] = *(undefined4 *)(iVar12 + 0x19c);
    puVar8[5] = uVar16;
    puVar8 = puVar8 + 4;
  } while (iVar15 != 0);
  bVar1 = *(byte *)(iVar9 + -0x1b6);
  uVar18 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar18 << 3);
  *(undefined4 **)(iVar9 + -0x19c) = puVar8;
  if (uVar18 != 0) {
    puVar11 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = *(undefined4 *)(iVar6 + 0x48);
      *puVar8 = *(undefined4 *)(iVar6 + 0x44);
      puVar8[1] = uVar16;
      puVar11 = puVar8;
    }
    for (iVar14 = (int)uVar18 >> 1; iVar14 != 0; iVar14 = iVar14 + -1) {
      uVar16 = *(undefined4 *)(iVar6 + 0x48);
      puVar11[2] = *(undefined4 *)(iVar6 + 0x44);
      puVar11[3] = uVar16;
      uVar16 = *(undefined4 *)(iVar6 + 0x48);
      puVar11[4] = *(undefined4 *)(iVar6 + 0x44);
      puVar11[5] = uVar16;
      puVar11 = puVar11 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x290,(int *)0x0,4);
  puVar4 = DAT_00229610;
  iVar14 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar8[1] = 0x12;
    *puVar8 = 0x24;
    iVar14 = func_00100118((int)(puVar8 + 2),puVar4,0x24,0x12);
  }
  if (iVar14 != 0) {
    *(int *)(iVar9 + -0x1b0) = iVar14;
    *(undefined4 *)(iVar9 + -0x1b4) = 0x12;
  }
  iVar14 = DAT_00229614;
  *(undefined4 **)(iVar9 + -0x2d0) = puVar7;
  iVar15 = DAT_00229624;
  *(undefined2 *)(iVar14 + iVar13) = 0x12;
  local_3c = s_cState_Wait_00229618;
  local_40 = iVar15;
  func_0010BEC4((int)puVar7,0,&local_40);
  puVar8 = *(undefined4 **)(iVar9 + -0x1a4);
  uVar17 = *(undefined4 *)(iVar6 + 0x3c);
  uVar16 = *(undefined4 *)(iVar6 + 0x34);
  uVar19 = *(undefined4 *)(iVar6 + 0x40);
  uVar22 = *(undefined4 *)(iVar6 + 0x44);
  uVar20 = *(undefined4 *)(iVar6 + 0x48);
  puVar8[1] = *(undefined4 *)(iVar6 + 0x38);
  *puVar8 = uVar16;
  puVar8 = *(undefined4 **)(iVar9 + -0x1a0);
  *puVar8 = uVar17;
  puVar8[1] = uVar19;
  puVar8 = *(undefined4 **)(iVar9 + -0x19c);
  *puVar8 = uVar22;
  puVar8[1] = uVar20;
  local_3c = s_cState_OpeningPre_00229628;
  local_40 = iVar15;
  func_0010BEC4((int)puVar7,1,&local_40);
  iVar14 = *(int *)(iVar9 + -0x1a4);
  uVar16 = *(undefined4 *)(iVar6 + 0x54);
  uVar19 = *(undefined4 *)(iVar6 + 0x58);
  uVar17 = *(undefined4 *)(iVar6 + 0x50);
  *(undefined4 *)(iVar14 + 8) = *(undefined4 *)(iVar6 + 0x4c);
  *(undefined4 *)(iVar14 + 0xc) = uVar17;
  iVar14 = *(int *)(iVar9 + -0x1a0);
  *(undefined4 *)(iVar14 + 8) = uVar16;
  *(undefined4 *)(iVar14 + 0xc) = uVar19;
  iVar14 = *(int *)(iVar9 + -0x19c);
  *(undefined4 *)(iVar14 + 8) = uVar22;
  *(undefined4 *)(iVar14 + 0xc) = uVar20;
  local_3c = s_cState_OpeningMain_0022963c;
  local_40 = iVar15;
  func_0010BEC4((int)puVar7,2,&local_40);
  iVar14 = *(int *)(iVar9 + -0x1a4);
  uVar16 = *(undefined4 *)(iVar6 + 0x60);
  uVar17 = *(undefined4 *)(iVar6 + 100);
  uVar19 = *(undefined4 *)(iVar6 + 0x68);
  *(undefined4 *)(iVar14 + 0x10) = *(undefined4 *)(iVar6 + 0x5c);
  *(undefined4 *)(iVar14 + 0x14) = uVar16;
  iVar14 = *(int *)(iVar9 + -0x1a0);
  *(undefined4 *)(iVar14 + 0x10) = uVar17;
  *(undefined4 *)(iVar14 + 0x14) = uVar19;
  iVar14 = *(int *)(iVar9 + -0x19c);
  *(undefined4 *)(iVar14 + 0x10) = uVar22;
  *(undefined4 *)(iVar14 + 0x14) = uVar20;
  local_3c = s_cState_OpeningEnd_00229650;
  local_40 = iVar15;
  func_0010BEC4((int)puVar7,3,&local_40);
  iVar14 = *(int *)(iVar9 + -0x1a4);
  uVar16 = *(undefined4 *)(iVar6 + 0x70);
  uVar17 = *(undefined4 *)(iVar6 + 0x74);
  uVar19 = *(undefined4 *)(iVar6 + 0x78);
  *(undefined4 *)(iVar14 + 0x18) = *(undefined4 *)(iVar6 + 0x6c);
  *(undefined4 *)(iVar14 + 0x1c) = uVar16;
  iVar14 = *(int *)(iVar9 + -0x1a0);
  *(undefined4 *)(iVar14 + 0x18) = uVar17;
  *(undefined4 *)(iVar14 + 0x1c) = uVar19;
  iVar14 = *(int *)(iVar9 + -0x19c);
  *(undefined4 *)(iVar14 + 0x18) = uVar22;
  *(undefined4 *)(iVar14 + 0x1c) = uVar20;
  local_3c = s_cState_Ready_00229664;
  local_40 = iVar15;
  func_0010BEC4((int)puVar7,4,&local_40);
  iVar14 = *(int *)(iVar9 + -0x1a4);
  uVar16 = *(undefined4 *)(iVar6 + 0x80);
  uVar17 = *(undefined4 *)(iVar6 + 0x84);
  uVar19 = *(undefined4 *)(iVar6 + 0x88);
  uVar20 = *(undefined4 *)(iVar6 + 0x8c);
  uVar22 = *(undefined4 *)(iVar6 + 0x90);
  *(undefined4 *)(iVar14 + 0x20) = *(undefined4 *)(iVar6 + 0x7c);
  *(undefined4 *)(iVar14 + 0x24) = uVar16;
  iVar14 = *(int *)(iVar9 + -0x1a0);
  *(undefined4 *)(iVar14 + 0x20) = uVar17;
  *(undefined4 *)(iVar14 + 0x24) = uVar19;
  iVar14 = *(int *)(iVar9 + -0x19c);
  *(undefined4 *)(iVar14 + 0x20) = uVar20;
  *(undefined4 *)(iVar14 + 0x24) = uVar22;
  local_3c = s_cState_Move_00229674;
  local_40 = iVar15;
  func_0010BEC4((int)puVar7,5,&local_40);
  iVar14 = *(int *)(iVar9 + -0x1a4);
  uVar16 = *(undefined4 *)(iVar6 + 0x98);
  uVar17 = *(undefined4 *)(iVar6 + 0x9c);
  uVar19 = *(undefined4 *)(iVar6 + 0xa0);
  uVar20 = *(undefined4 *)(iVar6 + 0xa4);
  uVar22 = *(undefined4 *)(iVar6 + 0xa8);
  *(undefined4 *)(iVar14 + 0x28) = *(undefined4 *)(iVar6 + 0x94);
  *(undefined4 *)(iVar14 + 0x2c) = uVar16;
  iVar14 = *(int *)(iVar9 + -0x1a0);
  *(undefined4 *)(iVar14 + 0x28) = uVar17;
  *(undefined4 *)(iVar14 + 0x2c) = uVar19;
  iVar14 = *(int *)(iVar9 + -0x19c);
  *(undefined4 *)(iVar14 + 0x28) = uVar20;
  *(undefined4 *)(iVar14 + 0x2c) = uVar22;
  local_3c = s_cState_Tornado_00229680;
  local_40 = iVar15;
  func_0010BEC4((int)puVar7,6,&local_40);
  iVar14 = *(int *)(iVar9 + -0x1a4);
  uVar16 = *(undefined4 *)(iVar6 + 0xb0);
  uVar17 = *(undefined4 *)(iVar6 + 0xb4);
  uVar19 = *(undefined4 *)(iVar6 + 0xb8);
  uVar20 = *(undefined4 *)(iVar6 + 0xbc);
  uVar22 = *(undefined4 *)(iVar6 + 0xc0);
  *(undefined4 *)(iVar14 + 0x30) = *(undefined4 *)(iVar6 + 0xac);
  *(undefined4 *)(iVar14 + 0x34) = uVar16;
  iVar14 = *(int *)(iVar9 + -0x1a0);
  *(undefined4 *)(iVar14 + 0x30) = uVar17;
  *(undefined4 *)(iVar14 + 0x34) = uVar19;
  iVar14 = *(int *)(iVar9 + -0x19c);
  *(undefined4 *)(iVar14 + 0x30) = uVar20;
  *(undefined4 *)(iVar14 + 0x34) = uVar22;
  local_3c = s_cState_Stun_00229690;
  local_40 = iVar15;
  func_0010BEC4((int)puVar7,7,&local_40);
  iVar14 = *(int *)(iVar9 + -0x1a4);
  uVar16 = *(undefined4 *)(iVar6 + 200);
  uVar17 = *(undefined4 *)(iVar6 + 0xcc);
  uVar19 = *(undefined4 *)(iVar6 + 0xd0);
  uVar20 = *(undefined4 *)(iVar6 + 0xd4);
  uVar22 = *(undefined4 *)(iVar6 + 0xd8);
  *(undefined4 *)(iVar14 + 0x38) = *(undefined4 *)(iVar6 + 0xc4);
  *(undefined4 *)(iVar14 + 0x3c) = uVar16;
  iVar14 = *(int *)(iVar9 + -0x1a0);
  *(undefined4 *)(iVar14 + 0x38) = uVar17;
  *(undefined4 *)(iVar14 + 0x3c) = uVar19;
  iVar14 = *(int *)(iVar9 + -0x19c);
  *(undefined4 *)(iVar14 + 0x38) = uVar20;
  *(undefined4 *)(iVar14 + 0x3c) = uVar22;
  local_3c = s_cState_Spin_0022969c;
  local_40 = iVar15;
  func_0010BEC4((int)puVar7,8,&local_40);
  iVar14 = *(int *)(iVar9 + -0x1a4);
  uVar19 = *(undefined4 *)(iVar6 + 0xe0);
  uVar17 = *(undefined4 *)(iVar6 + 0xe4);
  uVar16 = *(undefined4 *)(iVar6 + 0xe8);
  uVar22 = *(undefined4 *)(iVar6 + 0x44);
  uVar20 = *(undefined4 *)(iVar6 + 0x48);
  *(undefined4 *)(iVar14 + 0x40) = *(undefined4 *)(iVar6 + 0xdc);
  *(undefined4 *)(iVar14 + 0x44) = uVar19;
  iVar14 = *(int *)(iVar9 + -0x1a0);
  *(undefined4 *)(iVar14 + 0x40) = uVar17;
  *(undefined4 *)(iVar14 + 0x44) = uVar16;
  iVar14 = *(int *)(iVar9 + -0x19c);
  *(undefined4 *)(iVar14 + 0x40) = uVar22;
  *(undefined4 *)(iVar14 + 0x44) = uVar20;
  local_3c = s_cState_Ride_002296a8;
  local_40 = iVar15;
  func_0010BEC4((int)puVar7,9,&local_40);
  iVar14 = *(int *)(iVar9 + -0x1a4);
  uVar20 = *(undefined4 *)(iVar6 + 0xf0);
  uVar16 = *(undefined4 *)(iVar6 + 0xf4);
  uVar19 = *(undefined4 *)(iVar6 + 0xf8);
  uVar17 = *(undefined4 *)(DAT_00229214 + 0xfc);
  uVar22 = *(undefined4 *)(DAT_00229214 + 0x100);
  *(undefined4 *)(iVar14 + 0x48) = *(undefined4 *)(iVar6 + 0xec);
  *(undefined4 *)(iVar14 + 0x4c) = uVar20;
  iVar14 = *(int *)(iVar9 + -0x1a0);
  *(undefined4 *)(iVar14 + 0x48) = uVar16;
  *(undefined4 *)(iVar14 + 0x4c) = uVar19;
  iVar14 = *(int *)(iVar9 + -0x19c);
  *(undefined4 *)(iVar14 + 0x48) = uVar17;
  *(undefined4 *)(iVar14 + 0x4c) = uVar22;
  local_3c = s_cState_JumpSt_002296b4;
  local_40 = iVar15;
  func_0010BEC4((int)puVar7,10,&local_40);
  iVar14 = *(int *)(iVar9 + -0x1a4);
  uVar19 = DAT_002296c4[1];
  uVar21 = *(undefined8 *)(iVar6 + 0x44);
  uVar16 = *(undefined4 *)(iVar12 + 0x10c);
  uVar17 = *(undefined4 *)(iVar12 + 0x110);
  *(undefined4 *)(iVar14 + 0x50) = *DAT_002296c4;
  *(undefined4 *)(iVar14 + 0x54) = uVar19;
  iVar14 = *(int *)(iVar9 + -0x1a0);
  *(undefined4 *)(iVar14 + 0x50) = uVar16;
  *(undefined4 *)(iVar14 + 0x54) = uVar17;
  iVar14 = *(int *)(iVar9 + -0x19c);
  *(int *)(iVar14 + 0x50) = (int)uVar21;
  *(int *)(iVar14 + 0x54) = (int)((ulonglong)uVar21 >> 0x20);
  local_3c = s_cState_JumpEd_002296c8;
  local_40 = iVar15;
  func_0010BEC4((int)puVar7,0xb,&local_40);
  iVar14 = *(int *)(iVar9 + -0x1a4);
  uVar17 = *(undefined4 *)(iVar12 + 0x118);
  uVar16 = *(undefined4 *)(iVar12 + 0x11c);
  uVar19 = *(undefined4 *)(iVar12 + 0x120);
  *(undefined4 *)(iVar14 + 0x58) = *(undefined4 *)(iVar12 + 0x114);
  *(undefined4 *)(iVar14 + 0x5c) = uVar17;
  iVar14 = *(int *)(iVar9 + -0x1a0);
  *(undefined4 *)(iVar14 + 0x58) = uVar16;
  *(undefined4 *)(iVar14 + 0x5c) = uVar19;
  iVar14 = *(int *)(iVar9 + -0x19c);
  *(int *)(iVar14 + 0x58) = (int)uVar21;
  *(int *)(iVar14 + 0x5c) = (int)((ulonglong)uVar21 >> 0x20);
  local_3c = s_cState_Damage_00229920;
  local_40 = iVar15;
  func_0010BEC4((int)puVar7,0xc,&local_40);
  iVar14 = *(int *)(iVar9 + -0x1a4);
  uVar19 = *(undefined4 *)(iVar12 + 0x128);
  uVar16 = *(undefined4 *)(iVar12 + 300);
  uVar17 = *(undefined4 *)(iVar12 + 0x130);
  *(undefined4 *)(iVar14 + 0x60) = *(undefined4 *)(iVar12 + 0x124);
  *(undefined4 *)(iVar14 + 100) = uVar19;
  iVar14 = *(int *)(iVar9 + -0x1a0);
  *(undefined4 *)(iVar14 + 0x60) = uVar16;
  *(undefined4 *)(iVar14 + 100) = uVar17;
  iVar14 = *(int *)(iVar9 + -0x19c);
  *(int *)(iVar14 + 0x60) = (int)uVar21;
  *(int *)(iVar14 + 100) = (int)((ulonglong)uVar21 >> 0x20);
  local_3c = s_cState_Freeze_00229930;
  local_40 = iVar15;
  func_0010BEC4((int)puVar7,0xd,&local_40);
  iVar14 = *(int *)(iVar9 + -0x1a4);
  uVar17 = *(undefined4 *)(iVar12 + 0x138);
  uVar19 = *(undefined4 *)(iVar12 + 0x13c);
  uVar20 = *(undefined4 *)(iVar12 + 0x140);
  uVar22 = *(undefined4 *)(iVar12 + 0x144);
  uVar16 = *(undefined4 *)(iVar12 + 0x148);
  *(undefined4 *)(iVar14 + 0x68) = *(undefined4 *)(iVar12 + 0x134);
  *(undefined4 *)(iVar14 + 0x6c) = uVar17;
  iVar14 = *(int *)(iVar9 + -0x1a0);
  *(undefined4 *)(iVar14 + 0x68) = uVar19;
  *(undefined4 *)(iVar14 + 0x6c) = uVar20;
  iVar14 = *(int *)(iVar9 + -0x19c);
  *(undefined4 *)(iVar14 + 0x68) = uVar22;
  *(undefined4 *)(iVar14 + 0x6c) = uVar16;
  local_3c = s_cState_Knockdown_00229940;
  local_40 = iVar15;
  func_0010BEC4((int)puVar7,0xe,&local_40);
  iVar14 = *(int *)(iVar9 + -0x1a4);
  uVar21 = *(undefined8 *)(iVar6 + 0x44);
  uVar16 = *(undefined4 *)(iVar12 + 0x150);
  uVar17 = *(undefined4 *)(iVar12 + 0x154);
  uVar19 = *(undefined4 *)(iVar12 + 0x158);
  *(undefined4 *)(iVar14 + 0x70) = *(undefined4 *)(iVar12 + 0x14c);
  *(undefined4 *)(iVar14 + 0x74) = uVar16;
  iVar6 = *(int *)(iVar9 + -0x1a0);
  *(undefined4 *)(iVar6 + 0x70) = uVar17;
  *(undefined4 *)(iVar6 + 0x74) = uVar19;
  iVar6 = *(int *)(iVar9 + -0x19c);
  *(int *)(iVar6 + 0x70) = (int)uVar21;
  *(int *)(iVar6 + 0x74) = (int)((ulonglong)uVar21 >> 0x20);
  local_3c = s_cState_Transform_00229954;
  local_40 = iVar15;
  func_0010BEC4((int)puVar7,0xf,&local_40);
  iVar6 = *(int *)(iVar9 + -0x1a4);
  uVar16 = *(undefined4 *)(iVar12 + 0x164);
  uVar19 = *(undefined4 *)(iVar12 + 0x168);
  uVar17 = *(undefined4 *)(DAT_00229214 + 0x160);
  *(undefined4 *)(iVar6 + 0x78) = *(undefined4 *)(DAT_00229214 + 0x15c);
  *(undefined4 *)(iVar6 + 0x7c) = uVar17;
  iVar6 = *(int *)(iVar9 + -0x1a0);
  *(undefined4 *)(iVar6 + 0x78) = uVar16;
  *(undefined4 *)(iVar6 + 0x7c) = uVar19;
  iVar6 = *(int *)(iVar9 + -0x19c);
  *(int *)(iVar6 + 0x78) = (int)uVar21;
  *(int *)(iVar6 + 0x7c) = (int)((ulonglong)uVar21 >> 0x20);
  local_3c = s_cState_Transformdown_00229968;
  local_40 = iVar15;
  func_0010BEC4((int)puVar7,0x10,&local_40);
  iVar6 = *(int *)(iVar9 + -0x1a4);
  uVar16 = *(undefined4 *)(iVar12 + 0x170);
  uVar17 = *(undefined4 *)(iVar12 + 0x174);
  uVar19 = *(undefined4 *)(iVar12 + 0x178);
  *(undefined4 *)(iVar6 + 0x80) = *(undefined4 *)(iVar12 + 0x16c);
  *(undefined4 *)(iVar6 + 0x84) = uVar16;
  iVar6 = *(int *)(iVar9 + -0x1a0);
  *(undefined4 *)(iVar6 + 0x80) = uVar17;
  *(undefined4 *)(iVar6 + 0x84) = uVar19;
  iVar6 = *(int *)(iVar9 + -0x19c);
  *(int *)(iVar6 + 0x80) = (int)uVar21;
  *(int *)(iVar6 + 0x84) = (int)((ulonglong)uVar21 >> 0x20);
  local_3c = s_cState_Die_00229980;
  local_40 = iVar15;
  func_0010BEC4((int)puVar7,0x11,&local_40);
  iVar6 = *(int *)(iVar9 + -0x1a4);
  uVar16 = *(undefined4 *)(iVar12 + 0x180);
  uVar17 = *(undefined4 *)(iVar12 + 0x184);
  uVar19 = *(undefined4 *)(iVar12 + 0x188);
  *(undefined4 *)(iVar6 + 0x88) = *(undefined4 *)(iVar12 + 0x17c);
  *(undefined4 *)(iVar6 + 0x8c) = uVar16;
  iVar12 = *(int *)(iVar9 + -0x1a0);
  *(undefined4 *)(iVar12 + 0x88) = uVar17;
  *(undefined4 *)(iVar12 + 0x8c) = uVar19;
  iVar12 = *(int *)(iVar9 + -0x19c);
  *(int *)(iVar12 + 0x88) = (int)uVar21;
  *(int *)(iVar12 + 0x8c) = (int)((ulonglong)uVar21 >> 0x20);
  if (*(short *)((int)local_28 + 0x32) == 0) {
    func_0065E774(puVar7,4);
  }
  else {
    func_0065E774(puVar7,0);
  }
  func_004EB4C8(*DAT_0022998c,0x3c);
  return iVar13;
}

