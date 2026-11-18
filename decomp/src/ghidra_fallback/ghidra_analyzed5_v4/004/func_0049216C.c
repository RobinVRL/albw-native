#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);

// USA 0049216C <- EU 00492144 (Ghidra, non-matching)

float func_0049216C(float *param_1,uint *param_2,float *param_3)

{
  float fVar1;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 ((float *)(albw_frame + 0x8))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define local_20 ((float *)(albw_frame + 0x20))
  func_00115154(&local_28,&local_40,*param_2);
  func_00115154(&local_24,&local_3c,param_2[1]);
  func_00115154(local_20,local_38,param_2[2]);
  *param_1 = local_3c * local_38[0];
  param_1[4] = local_3c * local_20[0];
  param_1[8] = -local_24;
  param_1[1] = local_28 * local_24 * local_38[0] - local_40 * local_20[0];
  param_1[5] = local_40 * local_38[0] + local_28 * local_24 * local_20[0];
  param_1[9] = local_28 * local_3c;
  param_1[2] = local_28 * local_20[0] + local_40 * local_38[0] * local_24;
  param_1[6] = local_24 * local_40 * local_20[0] - local_28 * local_38[0];
  param_1[10] = local_40 * local_3c;
  param_1[3] = *param_3;
  param_1[7] = param_3[1];
  fVar1 = param_3[2];
  param_1[0xb] = fVar1;
  return fVar1;
}

