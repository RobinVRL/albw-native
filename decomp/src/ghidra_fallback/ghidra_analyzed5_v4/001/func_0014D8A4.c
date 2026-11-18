#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);

// USA 0014D8A4 <- EU 0014D8A4 (Ghidra, non-matching)

bool func_0014D8A4(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2)

{
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(float *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define local_38 (*(float *)(albw_frame + 0x28))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(float *)(albw_frame + 0x38))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x40))
  local_40 = *param_1;
  local_3c = param_1[1];
  local_38 = param_1[2];
  func_00115C70(&local_28,param_2,&local_40);
  local_4c = local_28;
  uStack_48 = uStack_24;
  uStack_44 = uStack_20;
  func_00115D70(&local_58,&local_4c,fparam_0);
  local_34 = local_58;
  uStack_30 = uStack_54;
  uStack_2c = uStack_50;
  func_00115C54(param_1 + 3,param_1 + 3,&local_34);
  *param_1 = *param_1 + param_1[3];
  param_1[1] = param_1[1] + param_1[4];
  param_1[2] = param_1[2] + param_1[5];
  func_00115D70(param_1 + 3,param_1 + 3,fparam_1);
  return SQRT(param_1[3] * param_1[3] + param_1[4] * param_1[4] + param_1[5] * param_1[5]) <
         fparam_2;
}

