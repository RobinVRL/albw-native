#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);

// USA 0014D7F4 <- EU 0014D7F4 (Ghidra, non-matching)

undefined4 func_0014D7F4(float *param_1,float *param_2,float fparam_0,float fparam_1)

{
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define fStack_34 (*(float *)(albw_frame + 0x1c))
  #define fStack_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(float *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x38))
  local_38 = *param_1;
  fStack_34 = param_1[1];
  fStack_30 = param_1[2];
  func_00115C70(&local_20,param_2,&local_38);
  local_44 = local_20;
  uStack_40 = uStack_1c;
  uStack_3c = uStack_18;
  func_00115D70(&local_50,&local_44,fparam_0);
  local_2c = local_50;
  uStack_28 = uStack_4c;
  uStack_24 = uStack_48;
  func_00115C54(param_1 + 3,param_1 + 3,&local_2c);
  *param_1 = *param_1 + param_1[3];
  param_1[1] = param_1[1] + param_1[4];
  param_1[2] = param_1[2] + param_1[5];
  return func_00115D70(param_1 + 3,param_1 + 3,fparam_1);
}

