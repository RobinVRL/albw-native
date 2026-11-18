#include "ghidra_types.h"

extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_004A2E80(int param_1,float *param_2,float fparam_0);
extern float DAT_004a3914;
extern float DAT_004a3918;
extern int DAT_004a391c;

// USA 004A37EC <- EU 004A37C4 (Ghidra, non-matching)
// GLOBAL DAT_004a3914 float
// GLOBAL DAT_004a3918 float
// GLOBAL DAT_004a391c int

int * func_004A37EC(int *param_1,float *param_2,undefined4 *param_3,float fparam_0)

{
  float fVar1;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(float *)(albw_frame + 0x8))
  #define local_74 (*(undefined4 *)(albw_frame + 0xc))
  #define local_70 (*(undefined4 *)(albw_frame + 0x10))
  #define local_6c (*(float *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define local_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(float *)(albw_frame + 0x20))
  #define local_5c (*(float *)(albw_frame + 0x24))
  #define local_58 (*(float *)(albw_frame + 0x28))
  #define local_54 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x30))
  #define local_4c (*(undefined4 *)(albw_frame + 0x34))
  #define local_48 (*(float *)(albw_frame + 0x38))
  #define local_44 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x40))
  #define local_3c (*(undefined4 *)(albw_frame + 0x44))
  #define local_38 (*(float *)(albw_frame + 0x48))
  #define local_34 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_30 (*(float *)(albw_frame + 0x50))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x58))
  #define local_24 (*(float *)(albw_frame + 0x5c))
  #define local_20 (*(float *)(albw_frame + 0x60))
  #define fStack_1c (*(float *)(albw_frame + 0x64))
  if ((*param_1 != 0) && (*(int *)(*param_1 + 0x1c) == param_1[1])) {
    local_24 = DAT_004a3914;
    local_20 = DAT_004a3918;
    fStack_1c = DAT_004a3914;
    fVar1 = *param_2 * DAT_004a3914 + param_2[1] * DAT_004a3918 + param_2[2] * DAT_004a3914;
    if (fVar1 <= DAT_004a3914) {
      fVar1 = -fVar1;
    }
    if (DAT_004a391c < (int)ALBW_AS_U32(fVar1)) {
      local_24 = DAT_004a3918;
      local_20 = DAT_004a3914;
    }
    func_00115E10(&local_30,&local_24,param_2);
    local_6c = local_30;
    local_68 = uStack_2c;
    local_64 = uStack_28;
    func_00115DC8(&local_6c);
    func_00115E10(&local_30,param_2,&local_6c);
    local_78 = local_30;
    local_74 = uStack_2c;
    local_70 = uStack_28;
    func_00115DC8(&local_78);
    local_60 = local_6c;
    local_50 = local_68;
    local_40 = local_64;
    local_5c = local_78;
    local_4c = local_74;
    local_3c = local_70;
    local_58 = *param_2;
    local_48 = param_2[1];
    local_38 = param_2[2];
    local_54 = *param_3;
    local_44 = param_3[1];
    local_34 = param_3[2];
    func_004A2E80(*param_1,&local_60,fparam_0);
  }
  return param_1;
}

