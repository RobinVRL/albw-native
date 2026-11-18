#include "ghidra_types.h"

extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2E80(int param_1,float *param_2,float fparam_0);
extern float DAT_004f12d4;
extern float DAT_004f12d8;
extern int DAT_004f12dc;
extern char s_AfterImage_004f12c8[];

// USA 004F1164 <- EU 004F113C (Ghidra, non-matching)
// GLOBAL DAT_004f12d4 float
// GLOBAL DAT_004f12d8 float
// GLOBAL DAT_004f12dc int
// GLOBAL s_AfterImage_004f12c8 string

void func_004F1164(int param_1,undefined4 *param_2,float *param_3)

{
  float fVar1;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(float *)(albw_frame + 0x0))
  #define local_7c (*(undefined4 *)(albw_frame + 0x4))
  #define local_78 (*(undefined4 *)(albw_frame + 0x8))
  #define local_74 (*(float *)(albw_frame + 0xc))
  #define local_70 (*(undefined4 *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(float *)(albw_frame + 0x18))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define local_60 (*(float *)(albw_frame + 0x20))
  #define local_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(undefined4 *)(albw_frame + 0x28))
  #define local_54 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_50 (*(float *)(albw_frame + 0x30))
  #define local_4c (*(undefined4 *)(albw_frame + 0x34))
  #define local_48 (*(undefined4 *)(albw_frame + 0x38))
  #define local_44 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_40 (*(float *)(albw_frame + 0x40))
  #define local_3c (*(undefined4 *)(albw_frame + 0x44))
  #define local_38 (*(float *)(albw_frame + 0x48))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x50))
  #define local_2c (*(float *)(albw_frame + 0x54))
  #define local_28 (*(float *)(albw_frame + 0x58))
  #define local_24 (*(float *)(albw_frame + 0x5c))
  if (*(int *)(param_1 + 0xec) == 0) {
    if (*(int *)(param_1 + 0xcc) == 0) {
      *(undefined4 *)(param_1 + 0xf0) = 0;
      return;
    }
    func_004A1B9C((int *)&local_80,*(int *)(param_1 + 0xcc),(uint *)s_AfterImage_004f12c8);
    *(float *)(param_1 + 0xec) = local_80;
    *(undefined4 *)(param_1 + 0xf0) = local_7c;
    if (*(int *)(param_1 + 0xec) == 0) {
      return;
    }
  }
  if (*(int *)(*(int *)(param_1 + 0xec) + 0x1c) == *(int *)(param_1 + 0xf0)) {
    local_2c = DAT_004f12d8;
    local_28 = DAT_004f12d4;
    local_24 = DAT_004f12d8;
    fVar1 = *param_3 * DAT_004f12d8 + param_3[1] * DAT_004f12d4 + param_3[2] * DAT_004f12d8;
    if (fVar1 <= DAT_004f12d8) {
      fVar1 = -fVar1;
    }
    if (DAT_004f12dc < (int)ALBW_AS_U32(fVar1)) {
      local_2c = DAT_004f12d4;
      local_28 = DAT_004f12d8;
    }
    fVar1 = DAT_004f12d4;
    func_00115E10(&local_38,&local_2c,param_3);
    local_74 = local_38;
    local_70 = uStack_34;
    local_6c = uStack_30;
    func_00115DC8(&local_74);
    func_00115E10(&local_38,param_3,&local_74);
    local_80 = local_38;
    local_7c = uStack_34;
    local_78 = uStack_30;
    func_00115DC8(&local_80);
    local_68 = local_74;
    local_58 = local_70;
    local_48 = local_6c;
    local_64 = local_80;
    local_54 = local_7c;
    local_44 = local_78;
    local_60 = *param_3;
    local_50 = param_3[1];
    local_40 = param_3[2];
    local_5c = *param_2;
    local_4c = param_2[1];
    local_3c = param_2[2];
    func_004A2E80(*(int *)(param_1 + 0xec),&local_68,fVar1);
  }
  return;
}

