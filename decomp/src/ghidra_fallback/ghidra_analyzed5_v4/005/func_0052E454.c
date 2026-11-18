#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern float DAT_0052e550;
extern undefined4 DAT_0052e554;
extern float *DAT_0052e558;
extern uint DAT_0052e55c;
extern int *DAT_0052e560;

// USA 0052E454 <- EU 0052E42C (Ghidra, non-matching)
// GLOBAL DAT_0052e550 float
// GLOBAL DAT_0052e554 undefined4
// GLOBAL DAT_0052e558 float *
// GLOBAL DAT_0052e55c uint
// GLOBAL DAT_0052e560 int *

uint func_0052E454(int param_1,float *param_2,int param_3,float fparam_0)

{
  uint uVar1;
  uint unaff_r5;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 ((int *)(albw_frame + 0x0))
  #define uStack_80 (*(uint *)(albw_frame + 0x10))
  #define local_7c (*(undefined4 *)(albw_frame + 0x14))
  #define local_78 (*(undefined4 *)(albw_frame + 0x18))
  #define local_74 (*(float * *)(albw_frame + 0x1c))
  #define local_70 (*(float * *)(albw_frame + 0x20))
  #define local_6c (*(float *)(albw_frame + 0x24))
  #define local_68 (*(undefined1 *)(albw_frame + 0x28))
  #define local_67 (*(undefined1 *)(albw_frame + 0x29))
  #define local_64 (*(float *)(albw_frame + 0x2c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x34))
  #define local_4c (*(float *)(albw_frame + 0x44))
  #define local_48 (*(undefined4 *)(albw_frame + 0x48))
  #define local_44 (*(float *)(albw_frame + 0x4c))
  #define local_40 (*(float *)(albw_frame + 0x50))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x58))
  #define local_34 (*(float *)(albw_frame + 0x5c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x60))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x64))
  #define local_28 (*(float *)(albw_frame + 0x68))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x6c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x70))
  local_4c = DAT_0052e550;
  local_48 = DAT_0052e554;
  local_44 = DAT_0052e550;
  fVar2 = DAT_0052e550;
  func_00115C54(&local_28,param_2,&local_4c);
  local_40 = local_28;
  uStack_3c = uStack_24;
  uStack_38 = uStack_20;
  func_00115D70(&local_28,DAT_0052e558,fparam_0);
  local_64 = local_28;
  uStack_60 = uStack_24;
  uStack_5c = uStack_20;
  func_00115C70(&local_28,param_2,&local_64);
  local_34 = local_28;
  uStack_30 = uStack_24;
  uStack_2c = uStack_20;
  uStack_80 = unaff_r5 & 0xffff0000 | DAT_0052e55c;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_78 = 0;
  local_68 = 0;
  local_67 = 1;
  local_90[3] = *(undefined4 *)(param_1 + 0x2cc);
  local_70 = &local_40;
  local_74 = &local_34;
  local_7c = 0x5bf;
  if (param_3 == 0) {
    local_7c = 7;
  }
  local_6c = fVar2;
  uVar1 = func_004A8030(*DAT_0052e560,local_90,0xf);
  return uVar1 ^ 1;
}

