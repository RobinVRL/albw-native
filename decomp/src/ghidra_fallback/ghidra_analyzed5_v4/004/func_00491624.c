#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);

// USA 00491624 <- EU 004915FC (Ghidra, non-matching)

float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4)

{
  float fVar1;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 ((float *)(albw_frame + 0x10))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define local_1c (*(float *)(albw_frame + 0x24))
  #define local_18 (*(float *)(albw_frame + 0x28))
  func_00115154(&local_20,&local_38,param_2);
  func_00115154(&local_1c,&local_34,param_3);
  func_00115154(&local_18,local_30,param_4);
  fVar1 = local_20 * local_1c * local_30[0] - local_38 * local_18;
  param_1[6] = -local_1c;
  *param_1 = local_34 * local_30[0];
  param_1[3] = local_34 * local_18;
  param_1[7] = local_20 * local_34;
  param_1[8] = local_38 * local_34;
  param_1[1] = fVar1;
  param_1[4] = local_38 * local_30[0] + local_20 * local_1c * local_18;
  param_1[2] = local_20 * local_18 + local_38 * local_30[0] * local_1c;
  param_1[5] = local_1c * local_38 * local_18 - local_20 * local_30[0];
  return fVar1;
}

