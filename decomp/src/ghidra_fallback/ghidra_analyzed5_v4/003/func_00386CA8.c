#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_002917D4(int param_1,undefined4 param_2,float fparam_0);
extern int func_002B613C(int param_1);
extern int func_004336CC(undefined4 *param_1);
extern int func_004A9BDC(int param_1,uint *param_2,uint param_3);
extern int func_004EB658(int param_1,int *param_2,undefined4 param_3);
extern int func_004F9FC4(int param_1,int param_2);
extern uint DAT_00386f94;
extern float DAT_00386f98;
extern int *DAT_00386f9c;
extern float DAT_00386fa0;
extern int *DAT_00386fa4;
extern float DAT_00386fa8;
extern undefined DAT_00386fac;
extern int DAT_00386fc8;
extern int *DAT_00386fcc;
extern char s__SE_PL_Sword_HIT_SWORD_00386faf[];
extern char s_cf_00386faf[];
extern undefined4 _DAT_00386fac;

// USA 00386CA8 <- EU 00386C84 (Ghidra, non-matching)
// GLOBAL DAT_00386f94 uint
// GLOBAL DAT_00386f98 float
// GLOBAL DAT_00386f9c int *
// GLOBAL DAT_00386fa0 float
// GLOBAL DAT_00386fa4 int *
// GLOBAL DAT_00386fa8 float
// GLOBAL DAT_00386fac undefined
// GLOBAL DAT_00386fc8 int
// GLOBAL DAT_00386fcc int *
// GLOBAL s_cf_00386faf string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00386CA8(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define uStack_d4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_d0 (*(float *)(albw_frame + 0x10))
  #define local_cc (*(undefined4 *)(albw_frame + 0x14))
  #define local_c8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_c4 (*(float *)(albw_frame + 0x1c))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_b8 (*(float *)(albw_frame + 0x28))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_ac (*(undefined2 *)(albw_frame + 0x34))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x40))
  #define local_9c (*(undefined4 *)(albw_frame + 0x44))
  #define local_98 (*(undefined4 *)(albw_frame + 0x48))
  #define local_94 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x50))
  #define local_8c (*(undefined4 *)(albw_frame + 0x54))
  #define local_80 (*(undefined2 *)(albw_frame + 0x60))
  #define local_7c (*(undefined4 *)(albw_frame + 0x64))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x68))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_70 (*(float *)(albw_frame + 0x70))
  #define local_6c (*(undefined4 *)(albw_frame + 0x74))
  #define local_68 (*(float *)(albw_frame + 0x78))
  #define local_64 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x80))
  #define local_5c (*(uint *)(albw_frame + 0x84))
  #define local_58 (*(int *)(albw_frame + 0x88))
  #define local_54 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x90))
  #define local_4c (*(uint *)(albw_frame + 0x94))
  #define local_48 (*(undefined4 *)(albw_frame + 0x98))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x9c))
  #define local_40 (*(undefined4 * *)(albw_frame + 0xa0))
  #define local_3c (*(undefined1 *)(albw_frame + 0xa4))
  #define local_38 (*(float *)(albw_frame + 0xa8))
  #define local_34 (*(float *)(albw_frame + 0xac))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0xb0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0xb4))
  #define local_28 (*(int *)(albw_frame + 0xb8))
  #define local_24 (*(char * *)(albw_frame + 0xbc))
  fparam_0 = DAT_00386f98;
  local_4c = DAT_00386f94 | param_1 & 0xffff0000;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0xff;
  uStack_44 = 0;
  local_40 = (undefined4 *)0x0;
  local_3c = 0;
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x70;
  func_004336CC(&uStack_d4);
  local_7c = *(undefined4 *)(param_1 + 0xa0);
  uStack_78 = *(undefined4 *)(param_1 + 0xa4);
  uStack_74 = *(undefined4 *)(param_1 + 0xa8);
  local_70 = *(float *)(param_1 + 0xac) * fparam_0;
  local_6c = *(undefined4 *)(param_1 + 0xb0);
  local_d0 = *(float *)(param_1 + 0x4c);
  local_cc = *(undefined4 *)(param_1 + 0x50);
  local_c8 = *(undefined4 *)(param_1 + 0x54);
  local_b8 = *(float *)(param_1 + 0x58);
  local_b4 = *(undefined4 *)(param_1 + 0x5c);
  local_b0 = *(undefined4 *)(param_1 + 0x60);
  local_c4 = *(float *)(param_1 + 0x58);
  local_c0 = *(undefined4 *)(param_1 + 0x5c);
  local_bc = *(undefined4 *)(param_1 + 0x60);
  local_ac = *(undefined2 *)(param_1 + 0x70);
  local_a8 = *(undefined4 *)(param_1 + 0x74);
  local_80 = *(undefined2 *)(param_1 + 0x9c);
  local_a0 = *(undefined4 *)(param_1 + 0x7c);
  local_9c = *(undefined4 *)(param_1 + 0x80);
  local_98 = *(undefined4 *)(param_1 + 0x84);
  local_94 = *(undefined4 *)(param_1 + 0x88);
  local_90 = *(undefined4 *)(param_1 + 0x8c);
  local_8c = *(undefined4 *)(param_1 + 0x90);
  func_00115C70(&local_34,&local_d0,(float *)(*(int *)(param_1 + 4) + 0x3d0));
  local_68 = local_34;
  local_64 = uStack_30;
  local_60 = uStack_2c;
  func_00115D70(&local_68,&local_68,fparam_0);
  func_00115C54(&local_68,&local_68,(float *)(*(int *)(param_1 + 4) + 0x3d0));
  local_d0 = local_68;
  local_cc = local_64;
  local_c8 = local_60;
  func_00115C70(&local_34,&local_c4,(float *)(*(int *)(param_1 + 4) + 0x3d0));
  local_68 = local_34;
  local_64 = uStack_30;
  local_60 = uStack_2c;
  func_00115D70(&local_68,&local_68,fparam_0);
  func_00115C54(&local_68,&local_68,(float *)(*(int *)(param_1 + 4) + 0x3d0));
  local_b8 = local_68;
  local_b4 = local_64;
  local_b0 = local_60;
  local_c4 = local_68;
  local_c0 = local_64;
  local_bc = local_60;
  local_58 = param_1 + 0x1ac;
  local_50 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x2cc);
  local_48 = 1;
  local_40 = &uStack_d4;
  uVar2 = func_004A9BDC(*DAT_00386f9c,&local_5c,0x200);
  piVar1 = DAT_00386fa4;
  if ((uVar2 != 0) && (*(char *)(param_1 + 0x35) == '\0')) {
    iVar3 = func_002917D4(*DAT_00386fa4,1,DAT_00386fa0);
    if (iVar3 != 0) {
      func_002B613C(*(int *)(param_1 + 4));
      func_00115C70(&local_38,(float *)(*(int *)(param_1 + 4) + 0x3d0),*(float **)(*piVar1 + 0x1c));
      local_34 = DAT_00386fa8;
      func_00115DC8(&local_38);
      func_00115D70(&local_38,&local_38,ALBW_AS_F32(_DAT_00386fac));
      iVar3 = *(int *)(param_1 + 4);
      *(float *)(iVar3 + 0x3dc) = local_38;
      *(float *)(iVar3 + 0x3e0) = local_34;
      *(undefined4 *)(iVar3 + 0x3e4) = uStack_30;
      *(undefined1 *)(param_1 + 0x36) = 1;
    }
    *(undefined2 *)(param_1 + 0x136) = 0x1e;
    func_004F9FC4(*(int *)(param_1 + 4),param_1 + 0x154);
    local_24 = s__SE_PL_Sword_HIT_SWORD_00386faf + 1;
    local_28 = DAT_00386fc8;
    func_004EB658(*DAT_00386fcc,&local_28,param_1 + 0x4c);
    *(undefined1 *)(param_1 + 0x35) = 1;
    *(undefined4 *)(param_1 + 300) = 0;
    return 0;
  }
  return 1;
}

