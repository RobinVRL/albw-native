#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_004331A0(undefined4 *param_1);
extern int func_00436384(undefined4 *param_1,undefined4 *param_2);
extern int func_004A7620(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_00581D60(int param_1);
extern undefined4 DAT_003419e4;
extern undefined4 DAT_003419e8;
extern float DAT_003419ec;
extern float DAT_003419f0;
extern int *DAT_003419f4;
extern int *DAT_003419f8;
extern float DAT_003419fc;
extern float DAT_00341a00;
extern undefined4 DAT_00341a04;
extern float DAT_00341a08;
extern int *DAT_00341a0c;

// USA 003418E0 <- EU 003418BC (Ghidra, non-matching)
// GLOBAL DAT_003419e4 undefined4
// GLOBAL DAT_003419e8 undefined4
// GLOBAL DAT_003419ec float
// GLOBAL DAT_003419f0 float
// GLOBAL DAT_003419f4 int *
// GLOBAL DAT_003419f8 int *
// GLOBAL DAT_003419fc float
// GLOBAL DAT_00341a00 float
// GLOBAL DAT_00341a04 undefined4
// GLOBAL DAT_00341a08 float
// GLOBAL DAT_00341a0c int *

int func_003418E0(int param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_c8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_c4 (*(float *)(albw_frame + 0xc))
  #define uStack_c0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_bc (*(uint *)(albw_frame + 0x14))
  #define iStack_b8 (*(int *)(albw_frame + 0x18))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_a0 (*(undefined4 * *)(albw_frame + 0x30))
  #define local_9c (*(undefined4 * *)(albw_frame + 0x34))
  #define local_94 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x40))
  #define local_8c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x48))
  #define local_84 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_78 (*(undefined4 *)(albw_frame + 0x58))
  #define local_74 (*(float *)(albw_frame + 0x5c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x60))
  #define auStack_6c ((undefined4 *)(albw_frame + 0x64))
  #define auStack_40 ((undefined4 *)(albw_frame + 0x90))
  uVar5 = DAT_003419e8;
  uVar6 = DAT_003419e4;
  puVar1 = func_004331A0(auStack_40);
  pbVar2 = (byte *)func_00436384(auStack_6c,puVar1);
  func_00110D44(&local_bc,pbVar2,0x2a);
  local_c8 = *param_2;
  uStack_c0 = param_2[2];
  local_c4 = ALBW_AS_F32(param_2[1]) + DAT_003419ec;
  iVar4 = *DAT_003419f4;
  local_74 = DAT_003419f0;
  fparam_0 = DAT_003419f0;
  local_90 = uVar6;
  local_8c = uVar5;
  uStack_88 = uVar6;
  local_84 = uVar5;
  if ((*(char *)(iVar4 + 0x18) == '\x14') && (iVar3 = func_00581D60(*DAT_003419f8), iVar3 == 0xd)) {
    local_74 = DAT_003419fc;
  }
  if (*(char *)(iVar4 + 0x18) == '\t') {
    local_74 = DAT_00341a00;
  }
  iStack_b8 = param_1 + 0x194;
  local_78 = local_c8;
  uStack_70 = uStack_c0;
  local_9c = &local_78;
  local_74 = local_c4 + local_74;
  local_a0 = &local_c8;
  local_bc = 0;
  local_b0 = *(undefined4 *)(param_1 + 100);
  local_a8 = DAT_00341a04;
  local_94 = param_3;
  iVar4 = func_004A7620(*DAT_00341a0c,&local_bc,0xff,fparam_0,DAT_00341a08);
  return iVar4;
}

