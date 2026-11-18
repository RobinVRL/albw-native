#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2A4(uint *param_1,uint param_2,int *param_3);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002C2D00(int *param_1);
extern void func_004CE804(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00522DDC(int param_1);
extern int func_00533304(int param_1,int *param_2,uint param_3);
extern int func_00533400(int param_1,int *param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00584C14(int param_1,int *param_2);
extern int DAT_002d202c;
extern undefined4 DAT_002d2030;
extern int *DAT_002d2034;
extern undefined DAT_002d2038;
extern undefined DAT_002d2094;
extern undefined DAT_002d20c8;
extern float DAT_002d2114;
extern undefined DAT_002d251c;
extern undefined DAT_002d2534;
extern undefined DAT_002d2560;
extern undefined DAT_002d2594;
extern char s_FlatLinkFront_002d2524[];
extern char s_FlatLinkFront_eyeclose_002d25b0[];
extern char s_FlatLinkFront_eyesurprise_002d25c8[];
extern char s_FlatLinkFront_linevibrate_002d2578[];
extern char s_FlatLinkFront_walk_002d254c[];
extern char s_FlatLinkSide_002d201c[];
extern char s_FlatLinkSide_ArrowShoot_002d2064[];
extern char s_FlatLinkSide_ArrowWalk_002d207c[];
extern char s_FlatLinkSide_eyeclose_002d20e0[];
extern char s_FlatLinkSide_eyesurprise_002d20f8[];
extern char s_FlatLinkSide_linevibrate_002d20ac[];
extern char s_FlatLinkSide_walk_002d2050[];
extern char s_kandelaar_002d2510[];
extern char s_mdl_FlatLink_hintglass_002d2118[];
extern char s_mdl_FlatLink_kandelaar_002d24f8[];
extern char s_mdl_FlatLink_ringL_002d2144[];
extern char s_mdl_FlatLink_ringR_002d2130[];

// USA 002D1C78 <- EU 002D1C54 (Ghidra, non-matching)
// GLOBAL DAT_002d202c int
// GLOBAL DAT_002d2030 undefined4
// GLOBAL DAT_002d2034 int *
// GLOBAL DAT_002d2038 undefined
// GLOBAL DAT_002d2094 undefined
// GLOBAL DAT_002d20c8 undefined
// GLOBAL DAT_002d2114 float
// GLOBAL DAT_002d251c undefined
// GLOBAL DAT_002d2534 undefined
// GLOBAL DAT_002d2560 undefined
// GLOBAL DAT_002d2594 undefined
// GLOBAL s_FlatLinkFront_002d2524 string
// GLOBAL s_FlatLinkFront_eyeclose_002d25b0 string
// GLOBAL s_FlatLinkFront_eyesurprise_002d25c8 string
// GLOBAL s_FlatLinkFront_linevibrate_002d2578 string
// GLOBAL s_FlatLinkFront_walk_002d254c string
// GLOBAL s_FlatLinkSide_002d201c string
// GLOBAL s_FlatLinkSide_ArrowShoot_002d2064 string
// GLOBAL s_FlatLinkSide_ArrowWalk_002d207c string
// GLOBAL s_FlatLinkSide_eyeclose_002d20e0 string
// GLOBAL s_FlatLinkSide_eyesurprise_002d20f8 string
// GLOBAL s_FlatLinkSide_linevibrate_002d20ac string
// GLOBAL s_FlatLinkSide_walk_002d2050 string
// GLOBAL s_kandelaar_002d2510 string
// GLOBAL s_mdl_FlatLink_hintglass_002d2118 string
// GLOBAL s_mdl_FlatLink_kandelaar_002d24f8 string
// GLOBAL s_mdl_FlatLink_ringL_002d2144 string
// GLOBAL s_mdl_FlatLink_ringR_002d2130 string

void func_002D1C78(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  float in_s0;
  float fparam_0;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define local_e8 (*(int *)(albw_frame + 0x8))
  #define local_e4 (*(char * *)(albw_frame + 0xc))
  #define iStack_e0 (*(int *)(albw_frame + 0x10))
  #define local_dc (*(char * *)(albw_frame + 0x14))
  #define local_d8 (*(int *)(albw_frame + 0x18))
  #define uStack_d4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_cc (*(undefined1 *)(albw_frame + 0x24))
  #define local_cb (*(undefined1 *)(albw_frame + 0x25))
  #define local_c8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_c4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_bc (*(undefined4 *)(albw_frame + 0x34))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_b0 (*(undefined1 *)(albw_frame + 0x40))
  #define local_af (*(undefined1 *)(albw_frame + 0x41))
  #define local_a8 (*(int *)(albw_frame + 0x48))
  #define local_a4 (*(char * *)(albw_frame + 0x4c))
  #define aiStack_a0 ((int *)(albw_frame + 0x50))
  #define iStack_80 (*(int *)(albw_frame + 0x70))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x74))
  #define iStack_78 (*(int *)(albw_frame + 0x78))
  #define local_74 (*(char * *)(albw_frame + 0x7c))
  #define local_70 (*(int *)(albw_frame + 0x80))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x84))
  #define local_68 (*(undefined4 *)(albw_frame + 0x88))
  #define local_64 (*(undefined1 *)(albw_frame + 0x8c))
  #define local_63 (*(undefined1 *)(albw_frame + 0x8d))
  #define local_60 (*(undefined4 *)(albw_frame + 0x90))
  #define local_5c (*(undefined4 *)(albw_frame + 0x94))
  #define local_58 (*(undefined4 *)(albw_frame + 0x98))
  #define local_54 (*(undefined4 *)(albw_frame + 0x9c))
  #define local_50 (*(undefined4 *)(albw_frame + 0xa0))
  #define local_4c (*(undefined4 *)(albw_frame + 0xa4))
  #define local_48 (*(undefined1 *)(albw_frame + 0xa8))
  #define local_47 (*(undefined1 *)(albw_frame + 0xa9))
  #define iStack_30 (*(int *)(albw_frame + 0xc0))
  #define local_2c (*(int *)(albw_frame + 0xc4))
  #define iStack_28 (*(int *)(albw_frame + 0xc8))
  iVar1 = DAT_002d202c;
  if (param_3 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = 2;
  }
  local_e4 = s_FlatLinkSide_002d201c;
  local_e8 = DAT_002d202c;
  iStack_30 = param_1;
  local_2c = param_2;
  iStack_28 = param_3;
  local_70 = func_00533400(param_2,&local_e8);
  uVar2 = DAT_002d2030;
  iStack_80 = iVar1;
  uStack_7c = DAT_002d2030;
  uStack_6c = 0;
  iStack_78 = iVar1;
  local_4c = 0;
  local_48 = 1;
  local_50 = 0;
  local_60 = 0;
  local_5c = 0;
  local_54 = 0;
  local_64 = 1;
  local_74 = s_FlatLinkSide_002d201c;
  local_58 = 0;
  local_47 = 0xc4;
  local_63 = 1;
  local_68 = 1;
  piVar3 = func_002C2D00(&iStack_80);
  piVar9 = DAT_002d2034;
  iVar10 = param_1 + iVar10 * 0x28;
  *(int **)(iVar10 + 0x28) = piVar3;
  piVar3[0x59] = piVar3[0x59] | 1;
  uVar4 = func_00522DDC(*piVar9);
  func_004CE804(*(int *)(iVar10 + 0x28),uVar4 & 0xffff,0,0,in_s0);
  puVar5 = (undefined4 *)func_0010BAB4(0xa8);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    local_e4 = &DAT_002d2038;
    local_e8 = iVar1;
    puVar6 = func_0016A2FC(puVar5,3,&local_e8,1);
  }
  *(undefined4 **)(iVar10 + 0x2c) = puVar6;
  local_e4 = s_FlatLinkSide_walk_002d2050;
  local_e8 = iVar1;
  piVar3 = (int *)func_00533304(local_2c,&local_e8,0);
  func_0016A2A4(*(uint **)(iVar10 + 0x2c),0,piVar3);
  local_e4 = s_FlatLinkSide_ArrowShoot_002d2064;
  local_e8 = iVar1;
  piVar3 = (int *)func_00533304(local_2c,&local_e8,0);
  func_0016A2A4(*(uint **)(iVar10 + 0x2c),1,piVar3);
  local_e4 = s_FlatLinkSide_ArrowWalk_002d207c;
  local_e8 = iVar1;
  piVar3 = (int *)func_00533304(local_2c,&local_e8,0);
  func_0016A2A4(*(uint **)(iVar10 + 0x2c),2,piVar3);
  func_0016A02C(*(int *)(iVar10 + 0x2c),-1,(int *)0xffffffff,*(int *)(iVar10 + 0x28));
  puVar7 = (uint *)func_002C11E8(&iStack_e0,0,10,0);
  func_0016898C(*(int *)(iVar10 + 0x2c),puVar7);
  puVar5 = (undefined4 *)func_0010BAB4(0xa8);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    local_e4 = &DAT_002d2094;
    local_e8 = iVar1;
    puVar6 = func_0016A2FC(puVar5,1,&local_e8,1);
  }
  *(undefined4 **)(iVar10 + 0x30) = puVar6;
  local_e4 = s_FlatLinkSide_linevibrate_002d20ac;
  local_e8 = iVar1;
  piVar3 = (int *)func_00533304(local_2c,&local_e8,1);
  func_0016A2A4(*(uint **)(iVar10 + 0x30),0,piVar3);
  func_0016A02C(*(int *)(iVar10 + 0x30),-1,(int *)0xffffffff,*(int *)(iVar10 + 0x28));
  puVar7 = (uint *)func_002C11E8(&iStack_e0,0,10,0);
  func_0016898C(*(int *)(iVar10 + 0x30),puVar7);
  puVar5 = (undefined4 *)func_0010BAB4(0xa8);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    local_e4 = &DAT_002d20c8;
    local_e8 = iVar1;
    puVar6 = func_0016A2FC(puVar5,2,&local_e8,1);
  }
  *(undefined4 **)(iVar10 + 0x34) = puVar6;
  local_e4 = s_FlatLinkSide_eyeclose_002d20e0;
  local_e8 = iVar1;
  piVar3 = (int *)func_00533304(local_2c,&local_e8,1);
  func_0016A2A4(*(uint **)(iVar10 + 0x34),0,piVar3);
  local_e4 = s_FlatLinkSide_eyesurprise_002d20f8;
  local_e8 = iVar1;
  piVar3 = (int *)func_00533304(local_2c,&local_e8,1);
  func_0016A2A4(*(uint **)(iVar10 + 0x34),1,piVar3);
  func_0016A02C(*(int *)(iVar10 + 0x34),-1,(int *)0xffffffff,*(int *)(iVar10 + 0x28));
  puVar7 = (uint *)func_002C11E8(&iStack_e0,0,10,0);
  func_0016898C(*(int *)(iVar10 + 0x34),puVar7);
  fVar11 = DAT_002d2114;
  *(float *)(*(int *)(*(int *)(iVar10 + 0x34) + 0x14) + 0x10) = DAT_002d2114;
  iVar8 = *(int *)(*(int *)(iVar10 + 0x34) + 0x14);
  fparam_0 = *(float *)(iVar8 + 8);
  if (*(float *)(iVar8 + 8) != fVar11) {
    *(float *)(iVar8 + 8) = fVar11;
    *(undefined1 *)(iVar8 + 0x26) = 1;
    fparam_0 = fVar11;
  }
  local_e4 = s_mdl_FlatLink_hintglass_002d2118;
  local_e8 = iVar1;
  uVar4 = func_00584C14(*(int *)(iVar10 + 0x28),&local_e8);
  *(uint *)(iVar10 + 0x38) = uVar4;
  local_e4 = s_mdl_FlatLink_ringR_002d2130;
  local_e8 = iVar1;
  uVar4 = func_00584C14(*(int *)(iVar10 + 0x28),&local_e8);
  *(uint *)(iVar10 + 0x3c) = uVar4;
  local_e4 = s_mdl_FlatLink_ringL_002d2144;
  local_e8 = iVar1;
  uVar4 = func_00584C14(*(int *)(iVar10 + 0x28),&local_e8);
  *(uint *)(iVar10 + 0x40) = uVar4;
  local_e4 = s_mdl_FlatLink_kandelaar_002d24f8;
  local_e8 = iVar1;
  uVar4 = func_00584C14(*(int *)(iVar10 + 0x28),&local_e8);
  *(uint *)(iVar10 + 0x44) = uVar4;
  local_e4 = s_kandelaar_002d2510;
  local_e8 = iVar1;
  uVar4 = func_00564A78(*(int *)(iVar10 + 0x28),&local_e8);
  *(uint *)(iVar10 + 0x48) = uVar4;
  local_e4 = &DAT_002d251c;
  local_e8 = iVar1;
  uVar4 = func_00564A78(*(int *)(iVar10 + 0x28),&local_e8);
  *(uint *)(iVar10 + 0x4c) = uVar4;
  local_a4 = s_FlatLinkFront_002d2524;
  local_a8 = iVar1;
  local_d8 = func_00533400(local_2c,&local_a8);
  local_e8 = iVar1;
  local_e4 = (char *)uVar2;
  uStack_d4 = 0;
  iStack_e0 = iVar1;
  local_b4 = 0;
  local_b0 = 1;
  local_b8 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_cc = 1;
  local_dc = s_FlatLinkFront_002d2524;
  local_c0 = 0;
  local_af = 0xc4;
  local_d0 = 1;
  local_cb = 1;
  piVar3 = func_002C2D00(&local_e8);
  *(int **)(iVar10 + 0x50) = piVar3;
  piVar3[0x59] = piVar3[0x59] | 1;
  uVar4 = func_00522DDC(*piVar9);
  func_004CE804(*(int *)(iVar10 + 0x50),uVar4 & 0xffff,0,0,fparam_0);
  puVar5 = (undefined4 *)func_0010BAB4(0xa8);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    local_a4 = &DAT_002d2534;
    local_a8 = iVar1;
    puVar6 = func_0016A2FC(puVar5,1,&local_a8,1);
  }
  *(undefined4 **)(iVar10 + 0x54) = puVar6;
  local_a4 = s_FlatLinkFront_walk_002d254c;
  local_a8 = iVar1;
  piVar9 = (int *)func_00533304(local_2c,&local_a8,0);
  func_0016A2A4(*(uint **)(iVar10 + 0x54),0,piVar9);
  func_0016A02C(*(int *)(iVar10 + 0x54),-1,(int *)0xffffffff,*(int *)(iVar10 + 0x50));
  puVar7 = (uint *)func_002C11E8(aiStack_a0,0,10,0);
  func_0016898C(*(int *)(iVar10 + 0x54),puVar7);
  puVar5 = (undefined4 *)func_0010BAB4(0xa8);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    local_a4 = &DAT_002d2560;
    local_a8 = iVar1;
    puVar6 = func_0016A2FC(puVar5,1,&local_a8,1);
  }
  *(undefined4 **)(iVar10 + 0x58) = puVar6;
  local_a4 = s_FlatLinkFront_linevibrate_002d2578;
  local_a8 = iVar1;
  piVar9 = (int *)func_00533304(local_2c,&local_a8,1);
  func_0016A2A4(*(uint **)(iVar10 + 0x58),0,piVar9);
  func_0016A02C(*(int *)(iVar10 + 0x58),-1,(int *)0xffffffff,*(int *)(iVar10 + 0x50));
  puVar7 = (uint *)func_002C11E8(aiStack_a0,0,10,0);
  func_0016898C(*(int *)(iVar10 + 0x58),puVar7);
  puVar5 = (undefined4 *)func_0010BAB4(0xa8);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    local_a4 = &DAT_002d2594;
    local_a8 = iVar1;
    puVar6 = func_0016A2FC(puVar5,2,&local_a8,1);
  }
  *(undefined4 **)(iVar10 + 0x5c) = puVar6;
  local_a4 = s_FlatLinkFront_eyeclose_002d25b0;
  local_a8 = iVar1;
  piVar9 = (int *)func_00533304(local_2c,&local_a8,1);
  func_0016A2A4(*(uint **)(iVar10 + 0x5c),0,piVar9);
  local_a4 = s_FlatLinkFront_eyesurprise_002d25c8;
  local_a8 = iVar1;
  piVar9 = (int *)func_00533304(local_2c,&local_a8,1);
  func_0016A2A4(*(uint **)(iVar10 + 0x5c),1,piVar9);
  func_0016A02C(*(int *)(iVar10 + 0x5c),-1,(int *)0xffffffff,*(int *)(iVar10 + 0x50));
  puVar7 = (uint *)func_002C11E8(aiStack_a0,0,10,0);
  func_0016898C(*(int *)(iVar10 + 0x5c),puVar7);
  *(float *)(*(int *)(*(int *)(iVar10 + 0x5c) + 0x14) + 0x10) = fVar11;
  iVar8 = *(int *)(*(int *)(iVar10 + 0x5c) + 0x14);
  if (*(float *)(iVar8 + 8) != fVar11) {
    *(float *)(iVar8 + 8) = fVar11;
    *(undefined1 *)(iVar8 + 0x26) = 1;
  }
  local_a4 = s_mdl_FlatLink_hintglass_002d2118;
  local_a8 = iVar1;
  uVar4 = func_00584C14(*(int *)(iVar10 + 0x50),&local_a8);
  *(uint *)(iVar10 + 0x60) = uVar4;
  local_a4 = s_mdl_FlatLink_ringL_002d2144;
  local_a8 = iVar1;
  uVar4 = func_00584C14(*(int *)(iVar10 + 0x50),&local_a8);
  *(uint *)(iVar10 + 100) = uVar4;
  local_a4 = s_mdl_FlatLink_ringR_002d2130;
  local_a8 = iVar1;
  uVar4 = func_00584C14(*(int *)(iVar10 + 0x50),&local_a8);
  *(uint *)(iVar10 + 0x68) = uVar4;
  local_a4 = s_mdl_FlatLink_kandelaar_002d24f8;
  local_a8 = iVar1;
  uVar4 = func_00584C14(*(int *)(iVar10 + 0x50),&local_a8);
  *(uint *)(iVar10 + 0x6c) = uVar4;
  local_a4 = s_kandelaar_002d2510;
  local_a8 = iVar1;
  uVar4 = func_00564A78(*(int *)(iVar10 + 0x50),&local_a8);
  *(uint *)(iVar10 + 0x70) = uVar4;
  local_a4 = &DAT_002d251c;
  local_a8 = iVar1;
  uVar4 = func_00564A78(*(int *)(iVar10 + 0x50),&local_a8);
  *(uint *)(iVar10 + 0x74) = uVar4;
  return;
}

