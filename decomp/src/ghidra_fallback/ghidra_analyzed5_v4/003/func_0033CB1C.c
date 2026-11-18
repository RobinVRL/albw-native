#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010E294(int *param_1);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern void func_001FE4C0(int param_1,float fparam_0);
extern int func_001FE6C8(int param_1);
extern int func_002C2D00(int *param_1);
extern int func_0036D0C8(int *param_1,int param_2);
extern void func_004CE804(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D0134(int param_1,int param_2);
extern int func_00504D48(int param_1,int param_2);
extern int func_00522DDC(int param_1);
extern float fRam0033cf04;
extern undefined4 uRam0033cf08;
extern undefined4 uRam0033cf0c;
extern undefined4 uRam0033cf10;
extern int *DAT_00109864;
extern undefined4 *DAT_0033ce94;
extern int DAT_0033ceb0;
extern undefined4 DAT_0033ceb4;
extern int *DAT_0033cec0;
extern uint *DAT_0033cec4;
extern undefined4 *DAT_0033cec8;
extern undefined4 DAT_0033cecc;
extern int *DAT_0033ced0;
extern char s_Actor_FrescoArrow_bch_0033ce98[];
extern char s_FrescoArrow_linevibrate_0033ceec[];
extern char s_World_0033ceb8[];
extern char s_cf_0033ce98[];

// USA 0033CB1C <- EU 0033CAF8 (Ghidra, non-matching)
// GLOBAL DAT_00109864 int *
// GLOBAL DAT_0033ce94 undefined4 *
// GLOBAL DAT_0033ceb0 int
// GLOBAL DAT_0033ceb4 undefined4
// GLOBAL DAT_0033cec0 int *
// GLOBAL DAT_0033cec4 uint *
// GLOBAL DAT_0033cec8 undefined4 *
// GLOBAL DAT_0033cecc undefined4
// GLOBAL DAT_0033ced0 int *
// GLOBAL UNK_0033cf04 float
// GLOBAL UNK_0033cf08 undefined4
// GLOBAL UNK_0033cf0c undefined4
// GLOBAL UNK_0033cf10 undefined4
// GLOBAL s_cf_0033ce98 string
// GLOBAL s_FrescoArrow_linevibrate_0033ceec string
// GLOBAL s_World_0033ceb8 string

undefined4 * func_0033CB1C(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  float in_s0;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x120];
  #define local_120 (*(int *)(albw_frame + 0x0))
  #define local_11c (*(char * *)(albw_frame + 0x4))
  #define iStack_118 (*(int *)(albw_frame + 0x8))
  #define uStack_114 (*(undefined4 *)(albw_frame + 0xc))
  #define iStack_110 (*(int *)(albw_frame + 0x10))
  #define uStack_10c (*(undefined4 *)(albw_frame + 0x14))
  #define local_108 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_104 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_100 (*(undefined4 *)(albw_frame + 0x20))
  #define local_fc (*(undefined1 *)(albw_frame + 0x24))
  #define local_fb (*(undefined1 *)(albw_frame + 0x25))
  #define local_f8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_f4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_f0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_ec (*(undefined4 *)(albw_frame + 0x34))
  #define local_e8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_e4 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_e0 (*(undefined1 *)(albw_frame + 0x40))
  #define local_df (*(undefined1 *)(albw_frame + 0x41))
  #define auStack_dc ((uint *)(albw_frame + 0x44))
  #define puStack_d4 (*(undefined4 * *)(albw_frame + 0x4c))
  #define uStack_d0 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_cc (*(undefined4 *)(albw_frame + 0x54))
  #define fStack_c8 (*(float *)(albw_frame + 0x58))
  #define uStack_c4 (*(undefined4 *)(albw_frame + 0x5c))
  #define fStack_c0 (*(float *)(albw_frame + 0x60))
  #define uStack_bc (*(uint *)(albw_frame + 0x64))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x98))
  #define uStack_84 (*(undefined1 *)(albw_frame + 0x9c))
  #define iStack_80 (*(int *)(albw_frame + 0xa0))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0xa4))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0xa8))
  #define local_74 (*(undefined4 *)(albw_frame + 0xac))
  #define local_70 (*(undefined4 *)(albw_frame + 0xb0))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0xb4))
  #define local_68 (*(undefined4 *)(albw_frame + 0xb8))
  #define local_64 (*(undefined4 *)(albw_frame + 0xbc))
  #define local_60 (*(undefined4 *)(albw_frame + 0xc0))
  #define local_5c (*(undefined4 *)(albw_frame + 0xc4))
  #define local_58 (*(undefined4 *)(albw_frame + 0xc8))
  #define local_54 (*(int *)(albw_frame + 0xcc))
  #define local_50 (*(char * *)(albw_frame + 0xd0))
  #define local_4c (*(undefined1 *)(albw_frame + 0xd4))
  #define local_4b (*(undefined1 *)(albw_frame + 0xd5))
  #define local_4a (*(undefined1 *)(albw_frame + 0xd6))
  #define local_49 (*(undefined1 *)(albw_frame + 0xd7))
  #define local_48 (*(undefined1 *)(albw_frame + 0xd8))
  #define local_44 (*(int *)(albw_frame + 0xdc))
  #define pcStack_40 (*(char * *)(albw_frame + 0xe0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0xe4))
  #define local_38 (*(undefined4 *)(albw_frame + 0xe8))
  #define local_34 (*(undefined1 *)(albw_frame + 0xec))
  func_0036D0C8((int *)(param_1 + 0x430),0);
  puVar9 = DAT_0033ce94;
  if (*(int *)(param_1 + 0x430) == 0) {
    iVar11 = 1;
  }
  else {
    iVar11 = func_0010983C(*DAT_0033ce94,*(int *)(param_1 + 0x430));
  }
  uVar1 = DAT_0033ceb4;
  iVar8 = DAT_0033ceb0;
  local_11c = s_Actor_FrescoArrow_bch_0033ce98;
  local_120 = DAT_0033ceb0;
  iStack_80 = DAT_0033ceb0;
  uStack_7c = DAT_0033ceb4;
  uStack_78 = 0;
  local_74 = 0;
  local_70 = 0x20;
  uStack_6c = 0;
  local_64 = 0;
  local_50 = s_World_0033ceb8;
  local_68 = 0;
  local_60 = 0;
  local_54 = DAT_0033ceb0;
  local_4c = 7;
  local_5c = 0;
  local_58 = 0;
  local_4a = 0;
  local_49 = 0;
  local_48 = 0;
  local_44 = DAT_0033ceb0;
  pcStack_40 = s_Actor_FrescoArrow_bch_0033ce98;
  uStack_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_4b = 2;
  puVar2 = func_00504D48(*DAT_0033cec0,(int)&iStack_80);
  local_108 = 0;
  if (puVar2[0x32] != 0) {
    local_108 = *(undefined4 *)puVar2[0x34];
  }
  iStack_118 = iVar8;
  uStack_114 = uVar1;
  if (puVar2[0x32] == 0) {
    local_108 = 0;
  }
  uStack_104 = 0;
  iStack_110 = iVar8;
  uStack_10c = uVar1;
  local_e0 = 1;
  local_e8 = 0;
  local_ec = 0;
  local_fc = 2;
  local_e4 = 0;
  local_f4 = 0;
  local_100 = 1;
  local_fb = 1;
  local_f8 = 0;
  local_f0 = 0;
  local_df = 0xc4;
  piVar3 = func_002C2D00(&iStack_118);
  if (((*DAT_0033cec4 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0033cec4), iVar4 != 0)) {
    *DAT_0033cec8 = DAT_0033cecc;
  }
  if ((piVar3 == (int *)0x0) ||
     (iVar4 = (**(code **)(*piVar3 + 8))(piVar3,DAT_0033cec8), iVar4 == 0)) {
    piVar3 = (int *)0x0;
  }
  piVar10 = (int *)(param_1 + 0x43c);
  *(int **)(param_1 + 0x43c) = piVar3;
  func_004D0134((int)piVar3,0);
  (**(code **)(*(int *)*piVar10 + 0x10))((int *)*piVar10,0xef);
  uVar5 = func_00522DDC(*DAT_0033ced0);
  func_004CE804(*piVar10,uVar5 & 0xffff,0,0,in_s0);
  *(uint *)(*piVar10 + 0x164) = *(uint *)(*piVar10 + 0x164) | 1;
  func_004CF478(*(int *)(param_1 + 0x43c),0);
  puVar6 = (undefined4 *)func_0010BAB4(0xa8);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    local_11c = (char *)0x33ced4;
    local_120 = iVar8;
    puVar7 = func_0016A2FC(puVar6,1,&local_120,1);
  }
  *(undefined4 **)(param_1 + 0x438) = puVar7;
  local_11c = s_FrescoArrow_linevibrate_0033ceec;
  local_120 = iVar8;
  func_00169608(*(uint **)(param_1 + 0x438),0,&local_120,(int)puVar2);
  func_00133870(*(int *)(param_1 + 0x438),0,*(int *)(param_1 + 0x43c));
  uVar5 = 0;
  func_0016A02C(*(int *)(param_1 + 0x438),-1,(int *)0xffffffff,0);
  puStack_d4 = &uStack_d0;
  auStack_dc[1] = 3;
  uStack_88 = 0;
  uStack_84 = 0;
  auStack_dc[0] = 1;
  uStack_d0 = 0;
  uStack_cc = uRam0033cf08;
  fStack_c8 = fRam0033cf04;
  uStack_c4 = uRam0033cf0c;
  uStack_bc = uVar5 | 0xff;
  fStack_c0 = fRam0033cf04;
  fparam_0 = fRam0033cf04;
  func_0016898C(*(int *)(param_1 + 0x438),auStack_dc);
  if (iVar11 != 1) {
    func_0010983C(*puVar9,iVar11);
  }
  func_0036D0C8((int *)(param_1 + 0x434),0);
  iVar11 = *(int *)(param_1 + 0x434);
  if (iVar11 == 0) {
    iVar11 = 1;
  }
  else {
    iVar11 = func_0010983C(*puVar9,iVar11);
  }
  iVar4 = func_0010BAB4(uRam0033cf10);
  iVar8 = 0;
  if (iVar4 != 0) {
    iVar8 = func_001FE6C8(iVar4);
  }
  *(int *)(param_1 + 0x440) = iVar8;
  func_001FE4C0(iVar8,fparam_0);
  *(undefined1 *)(param_1 + 0x45c) = 0;
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_1 + 0xc);
  if (iVar11 == 1) {
    return (undefined4 *)(param_1 + 0x444);
  }
  iVar8 = func_0010E294((int *)(*DAT_00109864 + 0x24));
  puVar9 = *(undefined4 **)(iVar8 + 0x68);
  *(int *)(iVar8 + 0x68) = iVar11;
  return puVar9;
}

