#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2A4(uint *param_1,uint param_2,int *param_3);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002C2D00(int *param_1);
extern void func_004CE804(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D0134(int param_1,int param_2);
extern int func_00504BC4(undefined4 *param_1,int param_2);
extern int func_00504D48(int param_1,int param_2);
extern int func_00522DDC(int param_1);
extern int func_00533304(int param_1,int *param_2,uint param_3);
extern int func_00584C14(int param_1,int *param_2);
extern int *piRam002d3914;
extern undefined4 DAT_002d3888;
extern float DAT_002d388c;
extern int DAT_002d3890;
extern int *DAT_002d38ac;
extern undefined4 DAT_002d38b0;
extern uint *DAT_002d38b4;
extern undefined4 *DAT_002d38b8;
extern undefined4 DAT_002d38bc;
extern undefined4 DAT_002d38c0;
extern undefined DAT_002d38c4;
extern char s_Actor_FrescoBase_bch_002d3894[];
extern char s_FlatLightBow_002d3904[];
extern char s_FlatLightBow_ArrowShoot_002d3aa0[];
extern char s_FlatLightBow_linevibrate_002d3ac8[];
extern char s_PlayerItem_FlatLightBow_bch_002d38e8[];
extern char s_cf_002d3894[];
extern char s_cf_002d38e8[];
extern char s_mdl_FlatLightArrow_002d3918[];
extern char s_nrmMap_002d38e0[];

// USA 002D34B4 <- EU 002D3490 (Ghidra, non-matching)
// GLOBAL DAT_002d3888 undefined4
// GLOBAL DAT_002d388c float
// GLOBAL DAT_002d3890 int
// GLOBAL DAT_002d38ac int *
// GLOBAL DAT_002d38b0 undefined4
// GLOBAL DAT_002d38b4 uint *
// GLOBAL DAT_002d38b8 undefined4 *
// GLOBAL DAT_002d38bc undefined4
// GLOBAL DAT_002d38c0 undefined4
// GLOBAL DAT_002d38c4 undefined
// GLOBAL UNK_002d3914 int *
// GLOBAL s_cf_002d3894 string
// GLOBAL s_FlatLightBow_002d3904 string
// GLOBAL s_FlatLightBow_ArrowShoot_002d3aa0 string
// GLOBAL s_FlatLightBow_linevibrate_002d3ac8 string
// GLOBAL s_cf_002d38e8 string
// GLOBAL s_mdl_FlatLightArrow_002d3918 string
// GLOBAL s_nrmMap_002d38e0 string

undefined4 * func_002D34B4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  float fparam_0;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x160];
  #define iStack_160 (*(int *)(albw_frame + 0x0))
  #define uStack_15c (*(undefined4 *)(albw_frame + 0x4))
  #define iStack_158 (*(int *)(albw_frame + 0x8))
  #define uStack_154 (*(undefined4 *)(albw_frame + 0xc))
  #define local_150 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_14c (*(undefined4 *)(albw_frame + 0x14))
  #define local_148 (*(undefined4 *)(albw_frame + 0x18))
  #define local_144 (*(undefined1 *)(albw_frame + 0x1c))
  #define local_143 (*(undefined1 *)(albw_frame + 0x1d))
  #define local_140 (*(undefined4 *)(albw_frame + 0x20))
  #define local_13c (*(undefined4 *)(albw_frame + 0x24))
  #define local_138 (*(undefined4 *)(albw_frame + 0x28))
  #define local_134 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_130 (*(undefined4 *)(albw_frame + 0x30))
  #define local_12c (*(undefined4 *)(albw_frame + 0x34))
  #define local_128 (*(undefined1 *)(albw_frame + 0x38))
  #define local_127 (*(undefined1 *)(albw_frame + 0x39))
  #define auStack_120 ((undefined4 *)(albw_frame + 0x40))
  #define local_114 (*(undefined1 *)(albw_frame + 0x4c))
  #define iStack_108 (*(int *)(albw_frame + 0x58))
  #define pcStack_104 (*(char * *)(albw_frame + 0x5c))
  #define local_100 (*(int *)(albw_frame + 0x60))
  #define local_fc (*(char * *)(albw_frame + 0x64))
  #define local_eb (*(undefined1 *)(albw_frame + 0x75))
  #define local_ea (*(undefined1 *)(albw_frame + 0x76))
  #define local_e9 (*(undefined1 *)(albw_frame + 0x77))
  #define local_d4 (*(undefined1 *)(albw_frame + 0x8c))
  #define local_c8 (*(int *)(albw_frame + 0x98))
  #define local_c4 (*(char * *)(albw_frame + 0x9c))
  #define local_c0 (*(int *)(albw_frame + 0xa0))
  #define local_bc (*(char * *)(albw_frame + 0xa4))
  #define aiStack_b8 ((int *)(albw_frame + 0xa8))
  #define iStack_6c (*(int *)(albw_frame + 0xf4))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0xf8))
  #define iStack_64 (*(int *)(albw_frame + 0xfc))
  #define local_60 (*(char * *)(albw_frame + 0x100))
  #define local_5c (*(undefined4 *)(albw_frame + 0x104))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x108))
  #define local_54 (*(undefined4 *)(albw_frame + 0x10c))
  #define local_50 (*(undefined1 *)(albw_frame + 0x110))
  #define local_4f (*(undefined1 *)(albw_frame + 0x111))
  #define local_4c (*(undefined4 *)(albw_frame + 0x114))
  #define local_48 (*(undefined4 *)(albw_frame + 0x118))
  #define local_44 (*(undefined4 *)(albw_frame + 0x11c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x120))
  #define local_3c (*(undefined4 *)(albw_frame + 0x124))
  #define local_38 (*(undefined4 *)(albw_frame + 0x128))
  #define local_34 (*(undefined1 *)(albw_frame + 0x12c))
  #define local_33 (*(undefined1 *)(albw_frame + 0x12d))
  iVar2 = DAT_002d3890;
  uVar1 = DAT_002d3888;
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xffffffff;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 0x32) = 0xff;
  *(undefined1 *)((int)param_1 + 0xc9) = 0xff;
  param_1[0x35] = 0xffffffff;
  param_1[0x33] = uVar1;
  param_1[0x34] = param_1;
  param_1[0x36] = 0;
  fVar11 = DAT_002d388c;
  param_1[0x37] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = ALBW_AS_U32(fVar11);
  *(undefined1 *)((int)param_1 + 0x101) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = ALBW_AS_U32(fVar11);
  param_1[0x39] = ALBW_AS_U32(fVar11);
  param_1[0x3a] = ALBW_AS_U32(fVar11);
  param_1[0x3b] = ALBW_AS_U32(fVar11);
  param_1[0x3c] = ALBW_AS_U32(fVar11);
  param_1[0x3d] = ALBW_AS_U32(fVar11);
  local_c4 = s_Actor_FrescoBase_bch_002d3894;
  local_c8 = iVar2;
  func_00504BC4(auStack_120,(int)&local_c8);
  local_eb = 2;
  local_e9 = 1;
  local_ea = 10;
  local_d4 = 0;
  puVar4 = func_00504D48(*DAT_002d38ac,(int)auStack_120);
  uVar1 = DAT_002d38b0;
  if (puVar4[0x32] == 0) {
    local_150 = 0;
  }
  else {
    local_150 = *(undefined4 *)puVar4[0x34];
  }
  iStack_160 = iVar2;
  uStack_15c = DAT_002d38b0;
  uStack_14c = 0;
  iStack_158 = iVar2;
  uStack_154 = DAT_002d38b0;
  local_128 = 1;
  local_130 = 0;
  local_13c = 0;
  local_12c = 0;
  local_134 = 0;
  local_127 = 0xc4;
  local_144 = 2;
  local_140 = 0;
  local_138 = 0;
  local_143 = 1;
  local_148 = 1;
  piVar5 = func_002C2D00(&iStack_160);
  if (((*DAT_002d38b4 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_002d38b4), iVar6 != 0)) {
    *DAT_002d38b8 = DAT_002d38bc;
  }
  if ((piVar5 == (int *)0x0) ||
     (iVar6 = (**(code **)(*piVar5 + 8))(piVar5,DAT_002d38b8), iVar6 == 0)) {
    piVar5 = (int *)0x0;
  }
  param_1[2] = piVar5;
  func_004D0134((int)piVar5,0);
  (**(code **)(*(int *)param_1[2] + 0x10))((int *)param_1[2],0xef);
  if (*(int *)(param_1[2] + 0x5c) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = **(int **)(param_1[2] + 100);
  }
  *(undefined1 *)(iVar6 + 0x88) = 1;
  uVar3 = DAT_002d38c0;
  *(uint *)(iVar6 + 0x7c) = *(uint *)(iVar6 + 0x7c) | 0x8000000;
  **(undefined4 **)(param_1[2] + 0x1ec) = uVar3;
  puVar7 = (undefined4 *)func_0010BAB4(0xa8);
  if (puVar7 == (undefined4 *)0x0) {
    param_1[3] = 0;
  }
  else {
    local_bc = &DAT_002d38c4;
    local_c0 = iVar2;
    puVar7 = func_0016A2FC(puVar7,1,&local_c0,1);
    param_1[3] = puVar7;
  }
  local_bc = s_nrmMap_002d38e0;
  local_c0 = iVar2;
  piVar5 = (int *)func_00533304((int)puVar4,&local_c0,1);
  func_0016A2A4((uint *)param_1[3],0,piVar5);
  func_0016A02C(param_1[3],-1,(int *)0xffffffff,param_1[2]);
  puVar8 = (uint *)func_002C11E8(aiStack_b8,0,10,0);
  func_0016898C(param_1[3],puVar8);
  *(float *)(*(int *)(param_1[3] + 0x14) + 0x10) = fVar11;
  iVar6 = *(int *)(param_1[3] + 0x14);
  fparam_0 = *(float *)(iVar6 + 8);
  if (fparam_0 != fVar11) {
    *(float *)(iVar6 + 8) = fVar11;
    *(undefined1 *)(iVar6 + 0x26) = 1;
  }
  local_fc = s_PlayerItem_FlatLightBow_bch_002d38e8;
  local_100 = iVar2;
  func_00504BC4(&iStack_160,(int)&local_100);
  local_12c = CONCAT13(1,CONCAT12(10,CONCAT11(2,(undefined1)local_12c)));
  local_114 = 0;
  puVar4 = func_00504D48(*DAT_002d38ac,(int)&iStack_160);
  local_5c = 0;
  if (puVar4[0x32] != 0) {
    local_5c = *(undefined4 *)puVar4[0x34];
  }
  iStack_6c = iVar2;
  uStack_68 = uVar1;
  if (puVar4[0x32] == 0) {
    local_5c = 0;
  }
  uStack_58 = 0;
  iStack_64 = iVar2;
  local_34 = 1;
  local_48 = 0;
  local_38 = 0;
  local_33 = 0xc4;
  local_3c = 0;
  local_4c = 0;
  local_40 = 0;
  local_50 = 1;
  local_60 = s_FlatLightBow_002d3904;
  local_44 = 0;
  local_4f = 1;
  local_54 = 1;
  piVar5 = func_002C2D00(&iStack_6c);
  param_1[4] = piVar5;
  piVar5[0x59] = piVar5[0x59] | 1;
  func_004CF478(param_1[4],0);
  uVar9 = func_00522DDC(*piRam002d3914);
  func_004CE804(param_1[4],uVar9 & 0xffff,0,0,fparam_0);
  pcStack_104 = s_mdl_FlatLightArrow_002d3918;
  iStack_108 = iVar2;
  uVar9 = func_00584C14(param_1[4],&iStack_108);
  param_1[7] = uVar9;
  puVar10 = (undefined4 *)func_0010BAB4(0xa8);
  puVar7 = (undefined4 *)0x0;
  if (puVar10 != (undefined4 *)0x0) {
    pcStack_104 = (char *)0x2d3a88;
    iStack_108 = iVar2;
    puVar7 = func_0016A2FC(puVar10,1,&iStack_108,1);
  }
  param_1[5] = puVar7;
  pcStack_104 = s_FlatLightBow_ArrowShoot_002d3aa0;
  iStack_108 = iVar2;
  piVar5 = (int *)func_00533304((int)puVar4,&iStack_108,0);
  func_0016A2A4((uint *)param_1[5],0,piVar5);
  func_0016A02C(param_1[5],-1,(int *)0xffffffff,param_1[4]);
  puVar8 = (uint *)func_002C11E8(&local_c8,0,10,0);
  func_0016898C(param_1[5],puVar8);
  puVar10 = (undefined4 *)func_0010BAB4(0xa8);
  puVar7 = (undefined4 *)0x0;
  if (puVar10 != (undefined4 *)0x0) {
    pcStack_104 = (char *)0x2d3ab8;
    iStack_108 = iVar2;
    puVar7 = func_0016A2FC(puVar10,1,&iStack_108,1);
  }
  param_1[6] = puVar7;
  pcStack_104 = s_FlatLightBow_linevibrate_002d3ac8;
  iStack_108 = iVar2;
  piVar5 = (int *)func_00533304((int)puVar4,&iStack_108,1);
  func_0016A2A4((uint *)param_1[6],0,piVar5);
  func_0016A02C(param_1[6],-1,(int *)0xffffffff,param_1[4]);
  puVar8 = (uint *)func_002C11E8(&local_c8,0,10,0);
  func_0016898C(param_1[6],puVar8);
  return param_1;
}

