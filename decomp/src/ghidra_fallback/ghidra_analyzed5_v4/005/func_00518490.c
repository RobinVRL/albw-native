#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float DAT_00518664;
extern float DAT_00518668;

// USA 00518490 <- EU 00518468 (Ghidra, non-matching)
// GLOBAL DAT_00518664 float
// GLOBAL DAT_00518668 float

void func_00518490(float *param_1,int param_2,int param_3,int param_4,float fparam_0)

{
  float fparam_0_00;
  float fVar1;
  float fparam_0_01;
  float fparam_0_02;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(float *)(albw_frame + 0x0))
  #define fStack_8c (*(float *)(albw_frame + 0x4))
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define fStack_80 (*(float *)(albw_frame + 0x10))
  #define local_7c (*(float *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define fStack_74 (*(float *)(albw_frame + 0x1c))
  #define local_70 (*(float *)(albw_frame + 0x20))
  #define local_6c (*(float *)(albw_frame + 0x24))
  #define fStack_68 (*(float *)(albw_frame + 0x28))
  #define local_64 (*(float *)(albw_frame + 0x2c))
  #define local_60 (*(float *)(albw_frame + 0x30))
  #define fStack_5c (*(float *)(albw_frame + 0x34))
  #define local_58 (*(float *)(albw_frame + 0x38))
  #define local_54 (*(float *)(albw_frame + 0x3c))
  #define fStack_50 (*(float *)(albw_frame + 0x40))
  #define local_4c (*(float *)(albw_frame + 0x44))
  #define fStack_48 (*(float *)(albw_frame + 0x48))
  #define fStack_44 (*(float *)(albw_frame + 0x4c))
  #define local_40 (*(float *)(albw_frame + 0x50))
  #define local_3c (*(float *)(albw_frame + 0x54))
  #define local_38 (*(float *)(albw_frame + 0x58))
  #define local_34 (*(float *)(albw_frame + 0x5c))
  #define fStack_30 (*(float *)(albw_frame + 0x60))
  #define fStack_2c (*(float *)(albw_frame + 0x64))
  fVar1 = DAT_00518668 - fparam_0;
  fparam_0_01 = fparam_0 * fparam_0 * fparam_0;
  fparam_0_02 = fparam_0 * DAT_00518664 * fVar1 * fVar1;
  fparam_0_00 = fVar1 * fVar1 * fVar1;
  fVar1 = fparam_0 * DAT_00518664 * fparam_0 * fVar1;
  if (param_4 != 0) {
    func_00115D70(&local_34,(float *)(param_2 + 0x18),fparam_0_00);
    local_64 = local_34;
    local_60 = fStack_30;
    fStack_5c = fStack_2c;
    func_00115D70(&local_38,(float *)(param_2 + 0x24),fparam_0_02);
    local_58 = local_38;
    local_54 = local_34;
    fStack_50 = fStack_30;
    func_00115C54(&local_38,&local_64,&local_58);
    local_70 = local_38;
    local_6c = local_34;
    fStack_68 = fStack_30;
    func_00115D70(&local_3c,(float *)(param_3 + 0x30),fVar1);
    local_88 = local_3c;
    local_84 = local_38;
    fStack_80 = local_34;
    func_00115C54(&local_3c,&local_70,&local_88);
    local_7c = local_3c;
    local_78 = local_38;
    fStack_74 = local_34;
    func_00115D70(&local_40,(float *)(param_3 + 0x18),fparam_0_01);
    local_4c = local_40;
    fStack_48 = local_3c;
    fStack_44 = local_38;
    func_00115C54(&local_40,&local_7c,&local_4c);
    *param_1 = local_40;
    param_1[1] = local_3c;
    param_1[2] = local_38;
    return;
  }
  func_00115D70(&local_34,(float *)(param_2 + 0x18),fparam_0_00);
  local_54 = local_34;
  fStack_50 = fStack_30;
  local_4c = fStack_2c;
  func_00115D70(&local_38,(float *)(param_2 + 0x30),fparam_0_02);
  local_90 = local_38;
  fStack_8c = local_34;
  local_88 = fStack_30;
  func_00115C54(&local_38,&local_54,&local_90);
  local_60 = local_38;
  fStack_5c = local_34;
  local_58 = fStack_30;
  func_00115D70(&local_3c,(float *)(param_3 + 0x24),fVar1);
  local_78 = local_3c;
  fStack_74 = local_38;
  local_70 = local_34;
  func_00115C54(&local_3c,&local_60,&local_78);
  local_84 = local_3c;
  fStack_80 = local_38;
  local_7c = local_34;
  func_00115D70(&local_40,(float *)(param_3 + 0x18),fparam_0_01);
  local_6c = local_40;
  fStack_68 = local_3c;
  local_64 = local_38;
  func_00115C54(&local_40,&local_84,&local_6c);
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  return;
}

