#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0019B04C(uint param_1);
extern int func_001E1EA8(int param_1);
extern int func_001E2444(int param_1,int *param_2,int param_3,undefined4 param_4);
extern int func_00504D48(int param_1,int param_2);
extern int func_00533400(int param_1,int *param_2);
extern int func_0055696C(int param_1,int param_2);
extern undefined8 func_00689928(int *param_1,int *param_2,uint param_3);
extern int *DAT_00346468;
extern int *DAT_0034646c;
extern uint *DAT_00346470;
extern undefined4 *DAT_00346474;
extern int DAT_00346478;
extern int DAT_0034647c;
extern int DAT_00346480;
extern undefined DAT_00346484;
extern undefined4 DAT_00346488;
extern undefined4 DAT_0034648c;
extern undefined DAT_0034649c;
extern int *DAT_003464a4;
extern char s_PlayerItem__00346490[];
extern char s_Shooter_003464a8[];
extern char s_cf_00346490[];

// USA 00345F20 <- EU 00345EFC (Ghidra, non-matching)
// GLOBAL DAT_00346468 int *
// GLOBAL DAT_0034646c int *
// GLOBAL DAT_00346470 uint *
// GLOBAL DAT_00346474 undefined4 *
// GLOBAL DAT_00346478 int
// GLOBAL DAT_0034647c int
// GLOBAL DAT_00346480 int
// GLOBAL DAT_00346484 undefined
// GLOBAL DAT_00346488 undefined4
// GLOBAL DAT_0034648c undefined4
// GLOBAL DAT_0034649c undefined
// GLOBAL DAT_003464a4 int *
// GLOBAL s_cf_00346490 string
// GLOBAL s_Shooter_003464a8 string

undefined4 func_00345F20(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint **ppuVar8;
  uint uVar9;
  uint uVar10;
  _Alignas(8) unsigned char albw_frame[0x1c0];
  #define local_1bc (*(int *)(albw_frame + 0x4))
  #define local_1b8 (*(uint * *)(albw_frame + 0x8))
  #define local_1b4 (*(int *)(albw_frame + 0xc))
  #define local_1b0 ((uint *)(albw_frame + 0x10))
  #define uStack_b1 (*(undefined1 *)(albw_frame + 0x10f))
  #define local_b0 (*(int *)(albw_frame + 0x110))
  #define local_ac (*(undefined4 *)(albw_frame + 0x114))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x118))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x11c))
  #define uStack_a0 (*(undefined4 *)(albw_frame + 0x120))
  #define local_9c (*(undefined4 *)(albw_frame + 0x124))
  #define local_98 (*(undefined4 *)(albw_frame + 0x128))
  #define local_94 (*(undefined4 *)(albw_frame + 0x12c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x130))
  #define local_8c (*(undefined4 *)(albw_frame + 0x134))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x138))
  #define iStack_84 (*(int *)(albw_frame + 0x13c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x140))
  #define local_7c (*(undefined1 *)(albw_frame + 0x144))
  #define local_7b (*(undefined1 *)(albw_frame + 0x145))
  #define local_7a (*(undefined1 *)(albw_frame + 0x146))
  #define local_79 (*(undefined1 *)(albw_frame + 0x147))
  #define local_78 (*(undefined1 *)(albw_frame + 0x148))
  #define local_74 (*(int *)(albw_frame + 0x14c))
  #define local_70 (*(uint * *)(albw_frame + 0x150))
  #define local_6c (*(undefined4 *)(albw_frame + 0x154))
  #define local_68 (*(int * *)(albw_frame + 0x158))
  #define local_64 (*(undefined1 *)(albw_frame + 0x15c))
  #define local_58 (*(int *)(albw_frame + 0x168))
  #define local_54 (*(char * *)(albw_frame + 0x16c))
  #define local_48 (*(int *)(albw_frame + 0x178))
  #define local_44 (*(uint * *)(albw_frame + 0x17c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x180))
  piVar2 = DAT_00346468;
  bVar1 = false;
  uVar9 = 0;
  do {
    switch(uVar9 & 0xff) {
    case 0:
    case 2:
      iVar7 = 4;
      break;
    case 1:
      iVar7 = 3;
      break;
    case 3:
      iVar7 = 6;
      break;
    case 4:
      iVar7 = 0xb;
      break;
    case 5:
      iVar7 = 8;
      break;
    case 6:
      iVar7 = 7;
      break;
    case 7:
      iVar7 = 9;
      break;
    case 8:
      iVar7 = 10;
      break;
    case 9:
      iVar7 = 0xc;
      break;
    case 10:
      iVar7 = 0xd;
      break;
    default:
      iVar7 = 0x2d;
    }
    iVar7 = func_0055696C(*piVar2,iVar7);
    if (iVar7 != *(int *)(param_1 + uVar9 * 4 + 0x3d8)) {
      bVar1 = true;
    }
    switch(uVar9 & 0xff) {
    case 0:
    case 2:
      iVar7 = 4;
      break;
    case 1:
      iVar7 = 3;
      break;
    case 3:
      iVar7 = 6;
      break;
    case 4:
      iVar7 = 0xb;
      break;
    case 5:
      iVar7 = 8;
      break;
    case 6:
      iVar7 = 7;
      break;
    case 7:
      iVar7 = 9;
      break;
    case 8:
      iVar7 = 10;
      break;
    case 9:
      iVar7 = 0xc;
      break;
    case 10:
      iVar7 = 0xd;
      break;
    default:
      iVar7 = 0x2d;
    }
    uVar4 = func_0055696C(*piVar2,iVar7);
    iVar7 = uVar9 * 4;
    uVar9 = uVar9 + 1;
    *(undefined4 *)(param_1 + iVar7 + 0x3d8) = uVar4;
  } while ((int)uVar9 < 0xb);
  iVar7 = func_0055696C(*piVar2,0x1f);
  iVar7 = iVar7 + -2;
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  if (*(char *)(param_1 + 0x430) == (char)iVar7) {
    if (!bVar1) {
      return 0;
    }
  }
  else {
    *(char *)(param_1 + 0x430) = (char)iVar7;
  }
  local_40 = func_001E1EA8(*DAT_0034646c);
  iVar5 = func_0019B04C(*DAT_00346470);
  iVar3 = DAT_0034647c;
  iVar7 = DAT_00346478;
  uVar9 = 0;
  *DAT_00346474 = *(undefined4 *)(iVar5 + 0x214);
  do {
    switch(uVar9 & 0xff) {
    case 0:
    case 2:
      iVar5 = 4;
      break;
    case 1:
      iVar5 = 3;
      break;
    case 3:
      iVar5 = 6;
      break;
    case 4:
      iVar5 = 0xb;
      break;
    case 5:
      iVar5 = 8;
      break;
    case 6:
      iVar5 = 7;
      break;
    case 7:
      iVar5 = 9;
      break;
    case 8:
      iVar5 = 10;
      break;
    case 9:
      iVar5 = 0xc;
      break;
    case 10:
      iVar5 = 0xd;
      break;
    default:
      iVar5 = 0x2d;
    }
    iVar5 = func_0055696C(*DAT_00346468,iVar5);
    if (iVar5 == 0) {
      iVar5 = 2;
    }
    uVar4 = *(undefined4 *)(DAT_00346480 + uVar9 * 0x10 + iVar5 * 4 + -4);
    local_b0 = iVar3;
    local_ac = DAT_00346488;
    local_a8 = 0;
    local_a4 = 0;
    uStack_a0 = 0x20;
    local_94 = 0;
    local_9c = 0;
    local_80 = DAT_0034648c;
    local_98 = 0;
    local_90 = 0;
    local_8c = 0;
    uStack_88 = 0;
    iStack_84 = iVar3;
    local_7c = 7;
    local_7b = 4;
    local_70 = (uint *)&DAT_00346484;
    local_7a = 0;
    local_78 = 0;
    ppuVar8 = &local_1b8;
    local_79 = 0;
    local_64 = 1;
    local_6c = 0;
    local_74 = iVar3;
    local_68 = (int *)0x0;
    local_1b4 = 0x100;
    uStack_b1 = 0;
    (*(undefined1 *)((char *)&local_1b0[0] + 0)) = 0;
    local_1bc = iVar7;
    local_44 = (uint *)s_PlayerItem__00346490;
    local_48 = iVar3;
    local_1b8 = local_1b0;
    (**(code **)(iVar3 + 8))(&local_48);
    uVar10 = 0;
    do {
      if (*(char *)((int)local_44 + uVar10) == '\0') {
        if ((int)uVar10 < 0x40001) goto LAB_0034627c;
        break;
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 0x40001);
    uVar10 = 0;
LAB_0034627c:
    if (local_1b4 <= (int)uVar10) {
      uVar10 = local_1b4 - 1;
    }
    (**(code **)(local_48 + 8))(&local_48);
    func_0010E3C4(local_1b0,local_44,uVar10);
    *(undefined1 *)((int)local_1b0 + uVar10) = 0;
    local_48 = iVar3;
    local_44 = (uint *)uVar4;
    func_00689928(&local_1bc,&local_48,0xffffffff);
    local_44 = (uint *)&DAT_0034649c;
    local_48 = iVar3;
    func_00689928(&local_1bc,&local_48,0xffffffff);
    local_7b = 0xff;
    local_79 = 0;
    local_6c = local_40;
    local_64 = 0;
    local_70 = local_1b8;
    local_68 = func_001E2444(*DAT_0034646c,&local_1bc,-1,ppuVar8);
    puVar6 = func_00504D48(*DAT_003464a4,(int)&local_b0);
    switch(uVar9) {
    case 0:
      if (puVar6[0x32] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)puVar6[0x34];
      }
      *(undefined4 *)(param_1 + 0x3c) = uVar4;
      break;
    case 1:
      if (puVar6[0x32] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)puVar6[0x34];
      }
      *(undefined4 *)(param_1 + 0x54) = uVar4;
      break;
    case 2:
      if (puVar6[0x32] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)puVar6[0x34];
      }
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      break;
    case 3:
      if (puVar6[0x32] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)puVar6[0x34];
      }
      *(undefined4 *)(param_1 + 0x40) = uVar4;
      break;
    case 4:
      local_54 = s_Shooter_003464a8;
      local_58 = iVar3;
      iVar5 = func_00533400((int)puVar6,&local_58);
      *(int *)(param_1 + 0x50) = iVar5;
      break;
    case 5:
      if (puVar6[0x32] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)puVar6[0x34];
      }
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
      break;
    case 6:
      if (puVar6[0x32] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)puVar6[0x34];
      }
      *(undefined4 *)(param_1 + 0x30) = uVar4;
      break;
    case 7:
      if (puVar6[0x32] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)puVar6[0x34];
      }
      *(undefined4 *)(param_1 + 0x34) = uVar4;
      break;
    case 8:
      if (puVar6[0x32] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)puVar6[0x34];
      }
      *(undefined4 *)(param_1 + 0x4c) = uVar4;
      break;
    case 9:
      if (puVar6[0x32] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)puVar6[0x34];
      }
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      break;
    case 10:
      if (puVar6[0x32] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)puVar6[0x34];
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
    }
    iVar5 = uVar9 * 4;
    uVar9 = uVar9 + 1;
    *(undefined4 **)(param_1 + iVar5 + 0x404) = puVar6;
    if (10 < (int)uVar9) {
      *DAT_00346474 = 0;
      return 1;
    }
  } while( true );
}

