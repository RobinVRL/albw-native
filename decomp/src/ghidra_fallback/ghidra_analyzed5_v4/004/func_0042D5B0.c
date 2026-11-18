#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);

// USA 0042D5B0 <- EU 0042D590 (Ghidra, non-matching)

float func_0042D5B0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define fStack_28 (*(float *)(albw_frame + 0x18))
  #define fStack_24 (*(float *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define local_1c (*(float *)(albw_frame + 0x24))
  #define local_18 (*(float *)(albw_frame + 0x28))
  func_00115C70(&local_20,param_1,param_2);
  local_38 = local_20;
  local_34 = local_1c;
  local_30 = local_18;
  fparam_0 = *param_3 * local_20 + param_3[1] * local_1c + param_3[2] * local_18;
  *param_4 = fparam_0;
  func_00115D70(&local_20,param_3,fparam_0);
  local_2c = local_20;
  fStack_28 = local_1c;
  fStack_24 = local_18;
  func_00115C54(&local_20,param_2,&local_2c);
  local_38 = local_20;
  local_34 = local_1c;
  local_30 = local_18;
  func_00115C70(&local_20,param_1,&local_38);
  return local_20 * local_20 + local_1c * local_1c + local_18 * local_18;
}

