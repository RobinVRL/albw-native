#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern float DAT_00184cec;
extern undefined4 DAT_00184cf0;
extern undefined4 DAT_00184cf4;
extern undefined4 *DAT_00184cf8;
extern int *DAT_00184cfc;

// USA 00184B1C <- EU 00184B1C (Ghidra, non-matching)
// GLOBAL DAT_00184cec float
// GLOBAL DAT_00184cf0 undefined4
// GLOBAL DAT_00184cf4 undefined4
// GLOBAL DAT_00184cf8 undefined4 *
// GLOBAL DAT_00184cfc int *

undefined4 func_00184B1C(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_b8 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_b4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_ac (*(float *)(albw_frame + 0x14))
  #define local_a8 (*(float *)(albw_frame + 0x18))
  #define local_a4 (*(float *)(albw_frame + 0x1c))
  #define local_a0 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_9c (*(undefined4 *)(albw_frame + 0x24))
  #define local_98 (*(undefined4 *)(albw_frame + 0x28))
  #define local_94 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x30))
  #define local_8c (*(undefined4 *)(albw_frame + 0x34))
  #define local_88 (*(undefined4 *)(albw_frame + 0x38))
  #define local_84 (*(float * *)(albw_frame + 0x3c))
  #define local_80 (*(float * *)(albw_frame + 0x40))
  #define local_7c (*(undefined4 *)(albw_frame + 0x44))
  #define local_78 (*(undefined1 *)(albw_frame + 0x48))
  #define local_77 (*(undefined1 *)(albw_frame + 0x49))
  #define local_68 (*(float *)(albw_frame + 0x58))
  #define local_64 (*(float *)(albw_frame + 0x5c))
  #define fStack_60 (*(float *)(albw_frame + 0x60))
  #define local_5c (*(float *)(albw_frame + 0x64))
  #define local_58 (*(float *)(albw_frame + 0x68))
  #define fStack_54 (*(float *)(albw_frame + 0x6c))
  #define local_50 (*(float *)(albw_frame + 0x70))
  #define local_4c (*(float *)(albw_frame + 0x74))
  #define fStack_48 (*(float *)(albw_frame + 0x78))
  iVar2 = 0;
  local_a4 = *(float *)(param_1 + 0x3d8);
  fVar3 = *(float *)(param_1 + 0x3d0) - *param_2;
  local_ac = *(float *)(param_1 + 0x3d0);
  uVar5 = CONCAT44(DAT_00184cf4,DAT_00184cf0);
  local_a8 = param_2[1];
  uVar4 = CONCAT44(DAT_00184cec,
                   SQRT(fVar3 * fVar3 + (local_a4 - param_2[2]) * (local_a4 - param_2[2])) *
                   DAT_00184cec);
  while( true ) {
    func_00115C70(&local_68,param_2,&local_ac);
    fVar3 = SQRT(local_68 * local_68 + local_64 * local_64 + fStack_60 * fStack_60);
    if (ALBW_AS_F32(uVar4) < fVar3) {
      fVar3 = ALBW_AS_F32(uVar5) / fVar3;
      local_68 = local_68 * fVar3;
      fStack_60 = fStack_60 * fVar3;
      local_64 = local_64 * fVar3;
      func_00115DAC(&local_ac,&local_68,&local_ac,ALBW_AS_F32(uVar4));
    }
    else {
      local_a4 = param_2[2];
      local_ac = *param_2;
      local_a8 = param_2[1];
    }
    local_9c = 0;
    local_98 = 0;
    local_90 = 0xffff;
    local_94 = 0;
    local_88 = 0;
    local_7c = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_78 = 0;
    local_77 = 1;
    local_5c = local_ac;
    fStack_54 = local_a4;
    local_4c = ALBW_AS_F32(((ulonglong)uVar4 >> 0x20));
    local_58 = local_a8 + local_4c;
    local_50 = local_ac;
    fStack_48 = local_a4;
    local_4c = local_a8 - local_4c;
    local_b8 = *DAT_00184cf8;
    uStack_b4 = DAT_00184cf8[1];
    local_b0 = DAT_00184cf8[2];
    local_8c = 7;
    local_a0 = &local_b8;
    local_84 = &local_50;
    local_80 = &local_5c;
    iVar1 = func_004A8030(*DAT_00184cfc,(int *)&local_a0,3);
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
    if (8 < iVar2) {
      return 1;
    }
  }
  return 0;
}

