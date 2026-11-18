#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_0026171C(int param_1,float *param_2,uint *param_3,float *param_4);
extern int func_00261A8C(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4,uint param_5, int param_6,uint param_7,int param_8,uint param_9,byte param_10);
extern int func_002F97A4(int param_1,int param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_00435714(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB370(int param_1,uint param_2,int param_3);
extern int func_004FB468(int param_1);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FCF20(int param_1,int param_2);
extern int func_00527934(int param_1,int *param_2);
extern int func_005330BC(int param_1,int *param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_0065AF54(undefined4 *param_1,undefined1 param_2);
extern int func_00674F4C(undefined4 *param_1,uint *param_2,uint param_3,int param_4);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern int DAT_001b153c;
extern float DAT_001b1540;
extern int DAT_001b1544;
extern int DAT_001b1548;
extern uint DAT_001b154c;
extern int DAT_001b1550;
extern int DAT_001b1554;
extern int *DAT_001b1570;
extern int *DAT_001b1584;
extern int *DAT_001b1588;
extern int *DAT_001b1974;
extern int *DAT_001b1978;
extern int *DAT_001b19b8;
extern int DAT_001b19f4;
extern int DAT_001b19f8;
extern int *DAT_001b19fc;
extern int *DAT_001b1a00;
extern int *DAT_001b1a24;
extern int DAT_001b1a50;
extern undefined4 DAT_001b1dd0;
extern int *DAT_001b1dd4;
extern int DAT_001b1dd8;
extern uint DAT_001b1ddc;
extern float DAT_001b1de0;
extern undefined DAT_001b1de4;
extern char s_Heishi_001b1568[];
extern char s_Heishi_dagger_001b1574[];
extern char s_Heishi_great_001b19bc[];
extern char s_Heishi_great_shield_001b19cc[];
extern char s_Heishi_great_sword_001b19e0[];
extern char s_Heishi_shield_001b1558[];
extern char s_Heishi_spear_001b1a04[];
extern char s_Heishi_sword_001b1a14[];
extern char s_Lhand_001b1dc8[];
extern char s_Moriblin_001b197c[];
extern char s_Moriblin_shield_001b1988[];
extern char s_Moriblin_spear_001b19a8[];
extern char s_Moriblin_sword_001b1998[];
extern char s_Rhand_001b1a54[];
extern char s_Taros_001b158c[];
extern char s_Taros_spear00_001b1594[];
extern char s_Taros_spear01_001b15a4[];
extern char s__cState_Charge_001b1de7[];
extern char s_cState_AvoidWall_001b20a8[];
extern char s_cState_ShieldHook_001b20bc[];
extern char s_cf_001b1de7[];
extern char s_guard00_001b1a48[];
extern char s_guard_shield00_001b1a28[];
extern char s_kusa_appear00_001b1a38[];
extern undefined4 _DAT_001b1de4;

// USA 001B11F8 <- EU 001B11F8 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_001b153c int
// GLOBAL DAT_001b1540 float
// GLOBAL DAT_001b1544 int
// GLOBAL DAT_001b1548 int
// GLOBAL DAT_001b154c uint
// GLOBAL DAT_001b1550 int
// GLOBAL DAT_001b1554 int
// GLOBAL DAT_001b1570 int *
// GLOBAL DAT_001b1584 int *
// GLOBAL DAT_001b1588 int *
// GLOBAL DAT_001b1974 int *
// GLOBAL DAT_001b1978 int *
// GLOBAL DAT_001b19b8 int *
// GLOBAL DAT_001b19f4 int
// GLOBAL DAT_001b19f8 int
// GLOBAL DAT_001b19fc int *
// GLOBAL DAT_001b1a00 int *
// GLOBAL DAT_001b1a24 int *
// GLOBAL DAT_001b1a50 int
// GLOBAL DAT_001b1dd0 undefined4
// GLOBAL DAT_001b1dd4 int *
// GLOBAL DAT_001b1dd8 int
// GLOBAL DAT_001b1ddc uint
// GLOBAL DAT_001b1de0 float
// GLOBAL DAT_001b1de4 undefined
// GLOBAL s_cf_001b1de7 string
// GLOBAL s_Heishi_001b1568 string
// GLOBAL s_Heishi_dagger_001b1574 string
// GLOBAL s_Heishi_great_001b19bc string
// GLOBAL s_Heishi_great_shield_001b19cc string
// GLOBAL s_Heishi_great_sword_001b19e0 string
// GLOBAL s_Heishi_shield_001b1558 string
// GLOBAL s_Heishi_spear_001b1a04 string
// GLOBAL s_Heishi_sword_001b1a14 string
// GLOBAL s_Lhand_001b1dc8 string
// GLOBAL s_Moriblin_001b197c string
// GLOBAL s_Moriblin_shield_001b1988 string
// GLOBAL s_Moriblin_spear_001b19a8 string
// GLOBAL s_Moriblin_sword_001b1998 string
// GLOBAL s_Rhand_001b1a54 string
// GLOBAL s_Taros_001b158c string
// GLOBAL s_Taros_spear00_001b1594 string
// GLOBAL s_Taros_spear01_001b15a4 string
// GLOBAL s_cState_AvoidWall_001b20a8 string
// GLOBAL s_cState_ShieldHook_001b20bc string
// GLOBAL s_guard00_001b1a48 string
// GLOBAL s_guard_shield00_001b1a28 string
// GLOBAL s_kusa_appear00_001b1a38 string

/* WARNING: Variable defined which should be unmapped: objStack_110 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * func_001B11F8(undefined4 *param_1,uint *param_2)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  undefined2 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined2 *puVar11;
  float *pfVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x110];
  #define objStack_110 ((uint *)(albw_frame + 0x0))
  #define local_fc (*(int *)(albw_frame + 0x14))
  #define local_f8 (*(undefined1 * *)(albw_frame + 0x18))
  #define local_f4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_f0 ((undefined1 *)(albw_frame + 0x20))
  #define uStack_d9 (*(undefined1 *)(albw_frame + 0x37))
  #define local_d8 (*(uint *)(albw_frame + 0x38))
  #define local_d4 (*(uint * *)(albw_frame + 0x3c))
  #define local_d0 (*(int *)(albw_frame + 0x40))
  #define local_cc (*(char * *)(albw_frame + 0x44))
  #define uStack_c8 (*(undefined4 *)(albw_frame + 0x48))
  #define acStack_c4 ((char *)(albw_frame + 0x4c))
  #define uStack_ad (*(undefined1 *)(albw_frame + 0x63))
  #define local_ac (*(int *)(albw_frame + 0x64))
  #define local_a8 (*(char * *)(albw_frame + 0x68))
  #define uStack_a4 (*(undefined4 *)(albw_frame + 0x6c))
  #define acStack_a0 ((char *)(albw_frame + 0x70))
  #define uStack_89 (*(undefined1 *)(albw_frame + 0x87))
  #define local_88 (*(uint *)(albw_frame + 0x88))
  #define local_84 (*(char * *)(albw_frame + 0x8c))
  #define local_80 (*(uint *)(albw_frame + 0x90))
  #define local_7c (*(char * *)(albw_frame + 0x94))
  #define local_74 (*(int *)(albw_frame + 0x9c))
  #define local_70 (*(uint *)(albw_frame + 0xa0))
  #define local_6c (*(char * *)(albw_frame + 0xa4))
  #define local_5c (*(undefined4 *)(albw_frame + 0xb4))
  #define local_58 ((uint *)(albw_frame + 0xb8))
  #define local_50 (*(int * *)(albw_frame + 0xc0))
  #define local_48 (*(int * *)(albw_frame + 0xc8))
  #define local_44 (*(int * *)(albw_frame + 0xcc))
  #define local_40 (*(uint *)(albw_frame + 0xd0))
  #define local_3c (*(char * *)(albw_frame + 0xd4))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0xe4))
  #define local_28 (*(uint * *)(albw_frame + 0xe8))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar5 = (int *)func_00674F4C(param_1,param_2,0xc,(int)param_1);
  fparam_0 = DAT_001b1540;
  iVar8 = DAT_001b153c;
  piVar5[200] = DAT_001b153c + 0x88;
  *piVar5 = iVar8;
  piVar5[0x265] = 0;
  piVar5[0x266] = 0;
  piVar5[0x267] = 0;
  piVar5[0x268] = 0;
  piVar5[0x269] = 0;
  objStack_110[3] = (uint)(piVar5 + 0x26b);
  piVar5[0x26a] = 0;
  *(float *)objStack_110[3] = fparam_0;
  piVar5[0x26c] = (int)ALBW_AS_U32(fparam_0);
  piVar5[0x26d] = (int)ALBW_AS_U32(fparam_0);
  iVar8 = DAT_001b1544;
  local_44 = piVar5 + 0x26e;
  piVar5[0x26e] = 0;
  piVar5[0x26f] = 0;
  local_50 = piVar5 + 0x271;
  piVar5[0x270] = 0;
  iVar19 = *(int *)(iVar8 + 0x2c);
  piVar5[0x273] = *(int *)(iVar8 + 0x28);
  piVar5[0x274] = iVar19;
  iVar19 = DAT_001b1548;
  *local_50 = DAT_001b1548;
  piVar5[0x272] = (int)piVar5;
  iVar20 = *(int *)(iVar8 + 0x30);
  local_48 = piVar5 + 0x275;
  iVar14 = *(int *)(iVar8 + 0x34);
  piVar5[0x275] = iVar19;
  piVar5[0x278] = iVar14;
  piVar5[0x276] = (int)piVar5;
  piVar5[0x277] = iVar20;
  iVar14 = *(int *)(iVar8 + 0x38);
  iVar20 = *(int *)(iVar8 + 0x3c);
  piVar5[0x279] = iVar19;
  piVar5[0x27a] = (int)piVar5;
  piVar5[0x27b] = iVar14;
  piVar5[0x27c] = iVar20;
  iVar14 = *(int *)(iVar8 + 0x40);
  iVar20 = *(int *)(iVar8 + 0x44);
  piVar5[0x27d] = iVar19;
  piVar5[0x27e] = (int)piVar5;
  piVar5[0x27f] = iVar14;
  piVar5[0x280] = iVar20;
  iVar14 = *(int *)(iVar8 + 0x4c);
  piVar5[0x283] = *(int *)(iVar8 + 0x48);
  piVar5[0x284] = iVar14;
  piVar5[0x281] = iVar19;
  piVar5[0x282] = (int)piVar5;
  piVar16 = piVar5 + 0x269;
  piVar17 = piVar5 + 0x26a;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_0034CAA0(puVar6);
  }
  piVar5[0x285] = (int)puVar7;
  piVar5[0x286] = 0;
  piVar5[0x287] = 0;
  piVar5[0x288] = 0;
  piVar5[0x28a] = 0;
  piVar5[0x28b] = 0;
  *(undefined1 *)(piVar5 + 0x28c) = 0;
  *(undefined1 *)((int)piVar5 + 0xa31) = 0;
  *(undefined1 *)((int)piVar5 + 0xa32) = 0;
  *(undefined1 *)((int)piVar5 + 0xa33) = 0;
  *(undefined1 *)(piVar5 + 0x28d) = 0;
  iVar19 = DAT_001b1554;
  iVar8 = DAT_001b1550;
  uVar13 = DAT_001b154c;
  local_f8 = local_f0;
  local_f4 = 0x18;
  uStack_d9 = 0;
  local_7c = s_Heishi_shield_001b1558;
  local_cc = acStack_c4;
  local_f0[0] = 0;
  local_fc = DAT_001b1554;
  local_80 = DAT_001b154c;
  uStack_c8 = 0x18;
  uStack_ad = 0;
  local_d0 = DAT_001b1550;
  func_00689894((int)&local_d0,(int *)&local_80,0xffffffff);
  local_d0 = iVar19;
  local_6c = s_Heishi_001b1568;
  local_a8 = acStack_a0;
  uStack_a4 = 0x18;
  local_70 = uVar13;
  uStack_89 = 0;
  local_ac = iVar8;
  func_00689894((int)&local_ac,(int *)&local_70,0xffffffff);
  local_ac = iVar19;
  *local_f8 = 0;
  iVar8 = func_00588BE4((int)piVar5);
  local_88 = 0xf;
  piVar5[0x261] = 0xe;
  piVar3 = DAT_001b19fc;
  piVar2 = DAT_001b1974;
  piVar9 = DAT_001b1584;
  if (iVar8 == *DAT_001b1570) {
    objStack_110[1] = (uint)s_Heishi_dagger_001b1574;
    objStack_110[0] = uVar13;
    func_00689894((int)&local_fc,(int *)objStack_110,0xffffffff);
    uVar15 = 2;
  }
  else if ((iVar8 == *DAT_001b1584) || (iVar8 == *DAT_001b1588)) {
    piVar5[0x261] = -1;
    local_88 = 0xe;
    objStack_110[1] = (uint)s_Taros_001b158c;
    objStack_110[0] = uVar13;
    func_00689894((int)&local_ac,(int *)objStack_110,0xffffffff);
    local_40 = uVar13;
    if (iVar8 == *piVar9) {
      local_3c = s_Taros_spear00_001b1594;
      func_00689894((int)&local_fc,(int *)&local_40,0xffffffff);
      uVar15 = 7;
    }
    else {
      local_3c = s_Taros_spear01_001b15a4;
      func_00689894((int)&local_fc,(int *)&local_40,0xffffffff);
      uVar15 = 8;
    }
  }
  else if ((iVar8 == *DAT_001b1974) || (iVar8 == *DAT_001b1978)) {
    piVar5[0x261] = -1;
    objStack_110[1] = (uint)s_Moriblin_001b197c;
    objStack_110[0] = uVar13;
    func_00689894((int)&local_ac,(int *)objStack_110,0xffffffff);
    objStack_110[1] = (uint)s_Moriblin_shield_001b1988;
    objStack_110[0] = uVar13;
    func_00689894((int)&local_d0,(int *)objStack_110,0xffffffff);
    local_40 = uVar13;
    if (iVar8 == *piVar2) {
      local_3c = s_Moriblin_sword_001b1998;
      func_00689894((int)&local_fc,(int *)&local_40,0xffffffff);
      uVar15 = 5;
    }
    else {
      local_3c = s_Moriblin_spear_001b19a8;
      func_00689894((int)&local_fc,(int *)&local_40,0xffffffff);
      uVar15 = 6;
    }
  }
  else if (iVar8 == *DAT_001b19b8) {
    piVar5[0x261] = -1;
    objStack_110[1] = (uint)s_Heishi_great_001b19bc;
    objStack_110[0] = uVar13;
    func_00689894((int)&local_ac,(int *)objStack_110,0xffffffff);
    objStack_110[1] = (uint)s_Heishi_great_shield_001b19cc;
    objStack_110[0] = uVar13;
    func_00689894((int)&local_d0,(int *)objStack_110,0xffffffff);
    objStack_110[1] = (uint)s_Heishi_great_sword_001b19e0;
    objStack_110[0] = uVar13;
    func_00689894((int)&local_fc,(int *)objStack_110,0xffffffff);
    iVar19 = DAT_001b19f4;
    uVar15 = 9;
    piVar5[0x139] = DAT_001b19f4;
    piVar5[0x13a] = iVar19;
    piVar5[0x13b] = iVar19;
    piVar5[0x23e] = DAT_001b19f8;
  }
  else if ((iVar8 == *DAT_001b19fc) || (iVar8 == *DAT_001b1a00)) {
    objStack_110[1] = (uint)s_Heishi_spear_001b1a04;
    objStack_110[0] = uVar13;
    func_00689894((int)&local_fc,(int *)objStack_110,0xffffffff);
    if (iVar8 == *piVar3) {
      uVar15 = 3;
    }
    else {
      uVar15 = 4;
    }
  }
  else {
    objStack_110[1] = (uint)s_Heishi_sword_001b1a14;
    objStack_110[0] = uVar13;
    func_00689894((int)&local_fc,(int *)objStack_110,0xffffffff);
    uVar15 = (uint)(iVar8 == *DAT_001b1a24);
  }
  func_002F97A4((int)piVar5,local_88);
  switch(uVar15) {
  case 5:
  case 6:
    objStack_110[1] = (uint)s_guard_shield00_001b1a28;
    objStack_110[0] = uVar13;
    func_004FACA4((int)piVar5,0xe,(int *)objStack_110);
    func_004FB370((int)piVar5,0xe,piVar5[0x103]);
    break;
  case 7:
  case 8:
  case 9:
    break;
  default:
    objStack_110[1] = (uint)s_kusa_appear00_001b1a38;
    objStack_110[0] = uVar13;
    func_004FACA4((int)piVar5,0xe,(int *)objStack_110);
    func_004FB370((int)piVar5,0xe,piVar5[0x103]);
  }
  local_d4 = (uint *)s_guard00_001b1a48;
  local_d8 = uVar13;
  func_004FACA4((int)piVar5,0xd,(int *)&local_d8);
  func_004FB370((int)piVar5,0xd,piVar5[0x103]);
  func_004FB468((int)piVar5);
  piVar9 = (int *)(DAT_001b1a50 + uVar15 * 0x14);
  piVar5[0x26e] = (int)piVar9;
  *(int *)objStack_110[3] = piVar9[2];
  *(int *)(objStack_110[3] + 4) = piVar9[3];
  *(int *)(objStack_110[3] + 8) = piVar9[4];
  objStack_110[3] = (uint)&local_d8;
  piVar5[0x239] = *piVar9;
  (**(code **)(local_ac + 8))(&local_ac);
  local_d8 = uVar13;
  local_d4 = (uint *)local_a8;
  local_74 = func_00527934(piVar5[0xb4],(int *)objStack_110[3]);
  uVar10 = func_005330BC(local_74,&local_fc);
  puVar6 = (undefined4 *)func_0010BAB4(0x34);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    local_d4 = (uint *)s_Rhand_001b1a54;
    objStack_110[0] = 0;
    local_d8 = uVar13;
    objStack_110[1] = 0;
    objStack_110[2] = 0;
    objStack_110[3] = 0xb;
    puVar7 = func_00261A8C(puVar6,piVar5,(int *)&local_d8,0,uVar10,0,0,0,0,0xb);
  }
  piVar5[0x265] = (int)puVar7;
  iVar19 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    iVar19 = puVar7[6];
  }
  if (puVar7 == (undefined4 *)0x0 || iVar19 == 0) {
LAB_001b1be4:
    *(undefined1 *)((int)piVar5 + 0x2d7) = 1;
    return piVar5;
  }
  *(float *)(iVar19 + 0x134) = fparam_0;
  if (((iVar8 != *DAT_001b1570) && (iVar8 != *DAT_001b1584)) && (iVar8 != *DAT_001b1588)) {
    objStack_110[3] = (uint)&local_88;
    (**(code **)(local_d0 + 8))(&local_d0);
    local_88 = uVar13;
    local_84 = local_cc;
    uVar10 = func_005330BC(local_74,(int *)objStack_110[3]);
    puVar6 = (undefined4 *)func_0010BAB4(0x34);
    puVar7 = (undefined4 *)0x0;
    if (puVar6 != (undefined4 *)0x0) {
      local_84 = s_Lhand_001b1dc8;
      objStack_110[2] = 0;
      objStack_110[3] = 0xb;
      local_88 = uVar13;
      objStack_110[0] = 0;
      objStack_110[1] = 0;
      puVar7 = func_00261A8C(puVar6,piVar5,(int *)&local_88,0,uVar10,0,0,0,0,0xb);
    }
    piVar5[0x266] = (int)puVar7;
    iVar19 = 0;
    if (puVar7 != (undefined4 *)0x0) {
      iVar19 = puVar7[6];
    }
    if (puVar7 == (undefined4 *)0x0 || iVar19 == 0) goto LAB_001b1be4;
    *(float *)(iVar19 + 0x134) = fparam_0;
  }
  iVar19 = DAT_001b1544;
  iVar14 = *(int *)(DAT_001b1544 + 0x54);
  piVar5[0x25b] = *(int *)(DAT_001b1544 + 0x50);
  piVar5[0x25c] = iVar14;
  iVar14 = *(int *)(iVar19 + 0x5c);
  piVar5[0x25d] = *(int *)(iVar19 + 0x58);
  piVar5[0x25e] = iVar14;
  local_5c = 6;
  piVar9 = func_00435714(&local_5c);
  piVar5[0x269] = (int)piVar9;
  piVar5[0x268] = (int)piVar9;
  puVar7 = (undefined4 *)func_0010BAB4(100);
  iVar19 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    iVar19 = func_004EE484(puVar7);
  }
  piVar5[0x267] = iVar19;
  iVar19 = func_0054DDF4((int)piVar5,1);
  piVar5[0x26f] = iVar19;
  uVar21 = DAT_001b1dd0;
  iVar19 = piVar5[0x267];
  *(ushort *)(iVar19 + 0x32) = *(ushort *)(iVar19 + 0x32) & 0xfff3;
  iVar14 = piVar5[0x26e];
  iVar19 = piVar5[0x268];
  *(undefined4 *)(iVar19 + 4) = *(undefined4 *)(iVar14 + 8);
  *(undefined4 *)(iVar19 + 8) = *(undefined4 *)(iVar14 + 0xc);
  *(undefined4 *)(iVar19 + 0xc) = *(undefined4 *)(iVar14 + 0x10);
  *(undefined4 *)(iVar19 + 0x58) = uVar21;
  func_004356B4((int *)piVar5[0x268]);
  iVar14 = *local_44;
  iVar19 = piVar5[0x269];
  *(undefined4 *)(iVar19 + 4) = *(undefined4 *)(iVar14 + 8);
  *(undefined4 *)(iVar19 + 8) = *(undefined4 *)(iVar14 + 0xc);
  *(undefined4 *)(iVar19 + 0xc) = *(undefined4 *)(iVar14 + 0x10);
  *(undefined4 *)(iVar19 + 0x58) = uVar21;
  *(uint *)(*piVar16 + 0x2c) = *(uint *)(*piVar16 + 0x2c) | 1;
  *(undefined2 *)(*piVar16 + 0x28) = 0xe0;
  func_004356B4((int *)*piVar16);
  if (uVar15 == 5 || uVar15 == 6) {
    iVar19 = func_0054DDF4((int)piVar5,2);
    piVar5[0x270] = iVar19;
    objStack_110[0] = 6;
    piVar9 = func_00435714(objStack_110);
    piVar16 = DAT_001b1dd4;
    piVar5[0x26a] = (int)piVar9;
    iVar19 = DAT_001b1dd8;
    piVar9[1] = *piVar16;
    piVar9[2] = piVar16[1];
    piVar9[3] = piVar16[2];
    piVar9[0x16] = iVar19;
    *(undefined2 *)(*piVar17 + 0x28) = 0xe0;
    *(uint *)(*piVar17 + 0x2c) = *(uint *)(*piVar17 + 0x2c) | 1;
    func_004356B4((int *)*piVar17);
    piVar5[0x110] = (int)local_50;
    *(undefined1 *)(piVar5 + 0x28d) = 1;
  }
  local_58[0] = piVar5[0xb3];
  puVar18 = local_58;
  objStack_110[0] = DAT_001b1ddc;
  uVar15 = objStack_110[0];
  puVar11 = (undefined2 *)piVar5[0x26f];
  (*(undefined2 *)((char *)&objStack_110[0] + 0)) = (undefined2)DAT_001b1ddc;
  uVar4 = (undefined2)objStack_110[0];
  objStack_110[0] = uVar15;
  func_0014EB8C(piVar5[0x267],piVar5[0x268],puVar11,puVar18,(short)piVar5[0x15],local_48,uVar4);
  iVar19 = piVar5[0x268];
  *(uint *)(iVar19 + 0x2c) = *(uint *)(iVar19 + 0x2c) | 8;
  func_004FCF20((int)(piVar5 + 0x16a),piVar5[0x267]);
  piVar5[0x167] = piVar5[0x167] & 0xfffffff7;
  if (((iVar8 == *DAT_001b1a24) || (iVar8 == *DAT_001b1588)) || (iVar8 == *DAT_001b1978)) {
    func_004FB070((int)piVar5,DAT_001b1de0);
  }
  else if (iVar8 == *DAT_001b1a00) {
    func_004FB070((int)piVar5,ALBW_AS_F32(_DAT_001b1de4));
  }
  else {
    func_004FB070((int)piVar5,fparam_0);
  }
  func_004FB4C4((int)piVar5,fparam_0);
  func_004FACD4((int)piVar5,(int *)0x0,puVar11,(int *)puVar18);
  local_d4 = (uint *)(s__cState_Charge_001b1de7 + 1);
  local_d8 = uVar13;
  if ((uint)piVar5[0x245] < 10) {
    iVar8 = piVar5[0x246];
  }
  else {
    iVar8 = piVar5[0x246] + 0x144;
  }
  puVar18 = *(uint **)(iVar8 + 4);
  (**(code **)(uVar13 + 8))(&local_d8);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_d4 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001b1e04;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001b1e04:
  if (*(int *)(iVar8 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_d8 + 8))(&local_d8);
  func_0010E3C4(puVar18,local_d4,uVar15);
  iVar8 = DAT_001b1544;
  *(undefined1 *)((int)puVar18 + uVar15) = 0;
  iVar19 = piVar5[0x249];
  uVar21 = *(undefined4 *)(iVar8 + 100);
  uVar22 = *(undefined4 *)(iVar8 + 0x68);
  uVar23 = *(undefined4 *)(iVar8 + 0x6c);
  uVar24 = *(undefined4 *)(iVar8 + 0x70);
  uVar25 = *(undefined4 *)(iVar8 + 0x74);
  *(undefined4 *)(iVar19 + 0x48) = *(undefined4 *)(iVar8 + 0x60);
  *(undefined4 *)(iVar19 + 0x4c) = uVar21;
  iVar19 = piVar5[0x24a];
  *(undefined4 *)(iVar19 + 0x48) = uVar22;
  *(undefined4 *)(iVar19 + 0x4c) = uVar23;
  iVar19 = piVar5[0x24b];
  *(undefined4 *)(iVar19 + 0x48) = uVar24;
  *(undefined4 *)(iVar19 + 0x4c) = uVar25;
  local_d4 = (uint *)s_cState_AvoidWall_001b20a8;
  local_d8 = uVar13;
  if ((uint)piVar5[0x245] < 0xb) {
    iVar19 = piVar5[0x246];
  }
  else {
    iVar19 = piVar5[0x246] + 0x168;
  }
  puVar18 = *(uint **)(iVar19 + 4);
  (**(code **)(uVar13 + 8))(&local_d8);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_d4 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001b1ecc;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001b1ecc:
  if (*(int *)(iVar19 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar19 + 8) - 1;
  }
  (**(code **)(local_d8 + 8))(&local_d8);
  func_0010E3C4(puVar18,local_d4,uVar15);
  *(undefined1 *)((int)puVar18 + uVar15) = 0;
  iVar19 = piVar5[0x249];
  uVar22 = *(undefined4 *)(iVar8 + 0x7c);
  uVar23 = *(undefined4 *)(iVar8 + 0x80);
  uVar24 = *(undefined4 *)(iVar8 + 0x84);
  uVar25 = *(undefined4 *)(iVar8 + 0x88);
  uVar21 = *(undefined4 *)(iVar8 + 0x8c);
  *(undefined4 *)(iVar19 + 0x50) = *(undefined4 *)(iVar8 + 0x78);
  *(undefined4 *)(iVar19 + 0x54) = uVar22;
  iVar19 = piVar5[0x24a];
  *(undefined4 *)(iVar19 + 0x50) = uVar23;
  *(undefined4 *)(iVar19 + 0x54) = uVar24;
  iVar19 = piVar5[0x24b];
  *(undefined4 *)(iVar19 + 0x50) = uVar25;
  *(undefined4 *)(iVar19 + 0x54) = uVar21;
  local_d4 = (uint *)s_cState_ShieldHook_001b20bc;
  local_d8 = uVar13;
  if ((uint)piVar5[0x245] < 0xc) {
    iVar19 = piVar5[0x246];
  }
  else {
    iVar19 = piVar5[0x246] + 0x18c;
  }
  puVar18 = *(uint **)(iVar19 + 4);
  (**(code **)(uVar13 + 8))(&local_d8);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_d4 + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_001b1f90;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_001b1f90:
  if (*(int *)(iVar19 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar19 + 8) - 1;
  }
  (**(code **)(local_d8 + 8))(&local_d8);
  func_0010E3C4(puVar18,local_d4,uVar13);
  *(undefined1 *)((int)puVar18 + uVar13) = 0;
  iVar19 = piVar5[0x249];
  uVar21 = *(undefined4 *)(iVar8 + 0x94);
  uVar22 = *(undefined4 *)(iVar8 + 0x98);
  uVar23 = *(undefined4 *)(iVar8 + 0x9c);
  pfVar12 = *(float **)(iVar8 + 0xa0);
  uVar24 = *(undefined4 *)(iVar8 + 0xa4);
  *(undefined4 *)(iVar19 + 0x58) = *(undefined4 *)(iVar8 + 0x90);
  *(undefined4 *)(iVar19 + 0x5c) = uVar21;
  iVar8 = piVar5[0x24a];
  *(undefined4 *)(iVar8 + 0x58) = uVar22;
  *(undefined4 *)(iVar8 + 0x5c) = uVar23;
  iVar8 = piVar5[0x24b];
  *(float **)(iVar8 + 0x58) = pfVar12;
  *(undefined4 *)(iVar8 + 0x5c) = uVar24;
  sVar1 = (short)local_28[0xb];
  if (sVar1 != 1) {
    if (sVar1 == 2) {
      func_0065AF54(piVar5 + 0x243,7);
      goto LAB_001b2020;
    }
    if (sVar1 != 3) {
      func_0065AF54(piVar5 + 0x243,1);
      goto LAB_001b2020;
    }
  }
  func_0065AF54(piVar5 + 0x243,6);
LAB_001b2020:
  func_004F5BD8((int)piVar5,(uint *)0x0,(int **)0x0,pfVar12);
  if (piVar5[0x265] != 0) {
    func_0026171C(piVar5[0x265],(float *)0x0,(uint *)0x0,(float *)0x0);
  }
  if (piVar5[0x266] != 0) {
    func_0026171C(piVar5[0x266],(float *)0x0,(uint *)0x0,(float *)0x0);
  }
  return piVar5;
}

