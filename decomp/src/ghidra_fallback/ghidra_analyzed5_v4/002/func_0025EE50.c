#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0025F4BC(int param_1);
extern int func_0025F794(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002C2D00(int *param_1);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern void func_004CE804(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern undefined4 func_004CF864(int param_1,uint param_2,uint param_3,float fparam_0);
extern int func_004D01E0(int param_1,int param_2,int param_3);
extern int func_00504D48(int param_1,int param_2);
extern int func_00533400(int param_1,int *param_2);
extern int func_006600C4(undefined4 *param_1,undefined1 param_2);
extern uint DAT_0025f244;
extern undefined4 DAT_0025f248;
extern int *DAT_0025f24c;
extern undefined4 DAT_0025f26c;
extern float DAT_0025f270;
extern undefined4 DAT_0025f274;
extern int *DAT_0025f2bc;
extern char s_Environment_BlackFilter_bch_0025f298[];
extern char s_ObjTitleTriforce_0025f368[];
extern char s_TriForceFlash_0025f288[];
extern char s_TriForceIn_0025f260[];
extern char s_TriForceOmoteUra_0025f230[];
extern char s_TriForce_Mat_0025f278[];
extern char s_TriForce_Skl_0025f250[];
extern char s_World_0025f2b4[];
extern char s_cf_0025f298[];

// USA 0025EE50 <- EU 0025EE78 (Ghidra, non-matching)
// GLOBAL DAT_0025f244 uint
// GLOBAL DAT_0025f248 undefined4
// GLOBAL DAT_0025f24c int *
// GLOBAL DAT_0025f26c undefined4
// GLOBAL DAT_0025f270 float
// GLOBAL DAT_0025f274 undefined4
// GLOBAL DAT_0025f2bc int *
// GLOBAL s_cf_0025f298 string
// GLOBAL s_ObjTitleTriforce_0025f368 string
// GLOBAL s_TriForceFlash_0025f288 string
// GLOBAL s_TriForceIn_0025f260 string
// GLOBAL s_TriForceOmoteUra_0025f230 string
// GLOBAL s_TriForce_Mat_0025f278 string
// GLOBAL s_TriForce_Skl_0025f250 string
// GLOBAL s_World_0025f2b4 string

undefined4 func_0025EE50(int *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 extraout_r1;
  undefined4 uVar6;
  int *piVar7;
  uint unaff_r11;
  float in_s0;
  float fparam_0;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  _Alignas(8) unsigned char albw_frame[0x120];
  #define local_118 (*(uint *)(albw_frame + 0x8))
  #define uStack_114 (*(undefined4 *)(albw_frame + 0xc))
  #define local_110 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_10c (*(undefined4 *)(albw_frame + 0x14))
  #define local_108 (*(float *)(albw_frame + 0x18))
  #define uStack_104 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_100 (*(undefined4 *)(albw_frame + 0x20))
  #define local_fc (*(undefined4 *)(albw_frame + 0x24))
  #define local_f8 (*(uint *)(albw_frame + 0x28))
  #define local_f4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_f0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_ec (*(uint *)(albw_frame + 0x34))
  #define local_e8 (*(char * *)(albw_frame + 0x38))
  #define local_e4 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_e3 (*(undefined1 *)(albw_frame + 0x3d))
  #define local_e2 (*(undefined1 *)(albw_frame + 0x3e))
  #define local_e1 (*(undefined1 *)(albw_frame + 0x3f))
  #define local_e0 (*(undefined1 *)(albw_frame + 0x40))
  #define local_dc (*(uint *)(albw_frame + 0x44))
  #define pcStack_d8 (*(char * *)(albw_frame + 0x48))
  #define uStack_d4 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_cc (*(undefined1 *)(albw_frame + 0x54))
  #define local_c4 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_c0 (*(undefined1 *)(albw_frame + 0x60))
  #define uStack_b8 (*(uint *)(albw_frame + 0x68))
  #define uStack_b4 (*(undefined4 *)(albw_frame + 0x6c))
  #define uStack_b0 (*(uint *)(albw_frame + 0x70))
  #define uStack_ac (*(undefined4 *)(albw_frame + 0x74))
  #define local_a8 (*(undefined4 * *)(albw_frame + 0x78))
  #define uStack_a4 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x80))
  #define local_9c (*(undefined1 *)(albw_frame + 0x84))
  #define local_9b (*(undefined1 *)(albw_frame + 0x85))
  #define local_98 (*(undefined4 *)(albw_frame + 0x88))
  #define local_94 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x90))
  #define local_8c (*(undefined4 *)(albw_frame + 0x94))
  #define local_88 (*(undefined4 *)(albw_frame + 0x98))
  #define local_84 (*(undefined4 *)(albw_frame + 0x9c))
  #define local_80 (*(undefined1 *)(albw_frame + 0xa0))
  #define local_7f (*(undefined1 *)(albw_frame + 0xa1))
  #define local_78 (*(uint *)(albw_frame + 0xa8))
  #define local_74 (*(char * *)(albw_frame + 0xac))
  #define auStack_64 ((undefined4 *)(albw_frame + 0xbc))
  #define local_5c (*(int *)(albw_frame + 0xc4))
  #define local_54 (*(int *)(albw_frame + 0xcc))
  uVar1 = DAT_0025f244;
  local_74 = s_TriForceOmoteUra_0025f230;
  local_78 = DAT_0025f244;
  local_a8 = (undefined4 *)func_00533400(param_2,(int *)&local_78);
  uVar6 = DAT_0025f248;
  uStack_b8 = uVar1;
  uStack_b4 = DAT_0025f248;
  uStack_a4 = 0;
  local_a0 = 0;
  uStack_b0 = uVar1;
  uStack_ac = DAT_0025f248;
  local_80 = 1;
  local_9c = 0;
  local_88 = 0;
  local_84 = 0;
  local_94 = 0;
  local_98 = 0;
  local_8c = 0;
  local_90 = 0;
  local_7f = 0xc4;
  local_9b = 1;
  piVar2 = func_002C2D00((int *)&uStack_b8);
  param_1[0x1b] = (int)piVar2;
  uVar5 = piVar2[0x59];
  piVar2[0x59] = uVar5 | 0x90000;
  *(uint *)(param_1[0x1b] + 0x164) = uVar5 | 0x90001;
  uVar5 = 0;
  if (*(int *)(*DAT_0025f24c + 0xf3c) != 0) {
    uVar5 = *(uint *)(*(int *)(*DAT_0025f24c + 0xf3c) + 4);
  }
  func_004CE804(param_1[0x1b],uVar5 & 0xffff,0,0,in_s0);
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  if (puVar3 == (undefined4 *)0x0) {
    param_1[0x1d] = 0;
  }
  else {
    local_74 = s_TriForce_Skl_0025f250;
    local_78 = uVar1;
    puVar3 = func_0016A2FC(puVar3,1,&local_78,1);
    param_1[0x1d] = (int)puVar3;
  }
  local_74 = s_TriForceIn_0025f260;
  local_78 = uVar1;
  func_00169688((uint *)param_1[0x1d],0,(int *)&local_78,param_2);
  func_0016A02C(param_1[0x1d],-1,(int *)0xffffffff,param_1[0x1b]);
  uStack_114 = 3;
  local_110 = &local_10c;
  local_c4 = 10;
  local_c0 = 0;
  local_10c = 0;
  local_118 = 1;
  local_f8 = unaff_r11 | 0xff;
  local_108 = DAT_0025f270;
  uStack_104 = DAT_0025f26c;
  local_100 = DAT_0025f274;
  local_fc = DAT_0025f26c;
  uVar8 = DAT_0025f26c;
  fparam_0 = DAT_0025f270;
  uVar10 = DAT_0025f274;
  func_0016898C(param_1[0x1d],&local_118);
  *(float *)(*(int *)(param_1[0x1d] + 0x14) + 0x10) = fparam_0;
  puVar4 = (undefined4 *)func_0010BAB4(0xa8);
  puVar3 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    local_74 = s_TriForce_Mat_0025f278;
    local_78 = uVar1;
    puVar3 = func_0016A2FC(puVar4,2,&local_78,1);
  }
  param_1[0x1e] = (int)puVar3;
  local_74 = s_TriForceIn_0025f260;
  local_78 = uVar1;
  func_00169608((uint *)param_1[0x1e],0,(int *)&local_78,param_2);
  local_74 = s_TriForceFlash_0025f288;
  local_78 = uVar1;
  func_00169608((uint *)param_1[0x1e],1,(int *)&local_78,param_2);
  func_0016A02C(param_1[0x1e],-1,(int *)0xffffffff,param_1[0x1b]);
  uStack_114 = 3;
  local_110 = &local_10c;
  piVar7 = (int *)0x0;
  local_c4 = 10;
  local_c0 = 0;
  local_10c = 0;
  local_118 = 1;
  local_f8 = param_2 | 0xff;
  fVar9 = fparam_0;
  local_108 = fparam_0;
  uStack_104 = uVar8;
  local_100 = uVar10;
  local_fc = uVar8;
  func_0016898C(param_1[0x1e],&local_118);
  *(float *)(*(int *)(param_1[0x1e] + 0x14) + 0x10) = fVar9;
  local_110 = (undefined4 *)0x0;
  local_10c = 0;
  local_108 = 4.48416e-44;
  uStack_104 = 0;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_118 = uVar1;
  uStack_114 = uVar6;
  local_e8 = s_World_0025f2b4;
  local_e4 = 7;
  local_e2 = 0;
  local_ec = uVar1;
  local_e1 = 0;
  local_dc = uVar1;
  pcStack_d8 = s_Environment_BlackFilter_bch_0025f298;
  uStack_d4 = 0;
  local_d0 = 0;
  local_e3 = 0xff;
  local_cc = 1;
  local_e0 = 1;
  local_a8 = func_00504D48(*DAT_0025f2bc,(int)&local_118);
  piVar2 = local_a8 + 0x32;
  if (*piVar2 != 0) {
    local_a8 = *(undefined4 **)local_a8[0x34];
  }
  uStack_b8 = uVar1;
  uStack_b4 = uVar6;
  if (*piVar2 == 0) {
    local_a8 = (undefined4 *)0x0;
  }
  uStack_a4 = 0;
  local_a0 = 0;
  uStack_b0 = uVar1;
  uStack_ac = uVar6;
  local_80 = 1;
  local_9c = 0;
  local_88 = 0;
  local_84 = 0;
  local_94 = 0;
  local_98 = 0;
  local_8c = 0;
  local_90 = 0;
  local_7f = 0xc4;
  local_9b = 1;
  piVar2 = func_002C2D00((int *)&uStack_b8);
  param_1[0x1c] = (int)piVar2;
  uVar5 = piVar2[0x59];
  piVar2[0x59] = uVar5 | 0x90000;
  *(uint *)(param_1[0x1c] + 0x164) = uVar5 | 0x90001;
  func_004CF864(param_1[0x1c],1,0xffffffff,fparam_0);
  (**(code **)(*(int *)param_1[0x1c] + 0x10))((int *)param_1[0x1c],0x21);
  uVar6 = 0;
  func_004D01E0(param_1[0x1c],1,0);
  func_006600C4(param_1 + 0x12,0);
  func_0025F794((int)param_1,extraout_r1,uVar6,piVar7);
  func_0025F4BC((int)param_1);
  param_1[0xb] = param_1[0x1b];
  param_1[0xc] = param_1[0x1d];
  *(undefined2 *)(param_1 + 0xe) = 1;
  param_1[0xd] = (int)(param_1 + 0x12);
  *(undefined2 *)((int)param_1 + 0x3a) = 4;
  func_003529A0(auStack_64,s_ObjTitleTriforce_0025f368,param_1);
  local_5c = param_1[0x1b] + 0xb0;
  local_54 = param_1[0x1b] + 0x74;
  return func_002C41BC(param_1,auStack_64,0);
}

