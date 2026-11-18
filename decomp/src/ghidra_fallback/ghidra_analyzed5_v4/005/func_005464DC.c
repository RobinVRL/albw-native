#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0053ECB4(int param_1);
extern undefined4 DAT_0054659c;
extern uint DAT_005465a0;
extern int *DAT_005465a4;

// USA 005464DC <- EU 005464B4 (Ghidra, non-matching)
// GLOBAL DAT_0054659c undefined4
// GLOBAL DAT_005465a0 uint
// GLOBAL DAT_005465a4 int *

undefined4 func_005464DC(int param_1,undefined4 param_2,float fparam_0)

{
  int iVar1;
  uint unaff_r5;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 (*(undefined4 *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_58 (*(uint *)(albw_frame + 0x18))
  #define local_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(float * *)(albw_frame + 0x24))
  #define local_48 (*(float * *)(albw_frame + 0x28))
  #define local_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_40 (*(undefined1 *)(albw_frame + 0x30))
  #define local_3f (*(undefined1 *)(albw_frame + 0x31))
  #define local_3c (*(float *)(albw_frame + 0x34))
  #define local_38 (*(undefined4 *)(albw_frame + 0x38))
  #define local_34 (*(undefined4 *)(albw_frame + 0x3c))
  #define fStack_30 (*(float *)(albw_frame + 0x40))
  #define local_2c (*(undefined4 *)(albw_frame + 0x44))
  #define local_24 (*(float *)(albw_frame + 0x4c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x54))
  iVar1 = func_0053ECB4(*(int *)(*(int *)(param_1 + 0x28) + 0x600));
  local_3c = *(float *)(iVar1 + 0xc);
  local_38 = *(undefined4 *)(iVar1 + 0x1c);
  local_34 = *(undefined4 *)(iVar1 + 0x2c);
  local_24 = local_3c;
  uStack_20 = local_38;
  uStack_1c = local_34;
  func_004D80A4(&fStack_30,**(uint **)(param_1 + 0x3c),fparam_0);
  local_2c = DAT_0054659c;
  uVar2 = DAT_0054659c;
  func_00115C54(&fStack_30,&fStack_30,&local_3c);
  uStack_58 = DAT_005465a0 | unaff_r5 & 0xffff0000;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = &local_24;
  local_4c = &fStack_30;
  local_3f = 1;
  local_54 = 0x19;
  local_64 = param_2;
  local_44 = uVar2;
  return func_004A8030(*DAT_005465a4,&local_68,0xf);
}

