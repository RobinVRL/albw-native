#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);

// USA 0048B740 <- EU 0048B718 (Ghidra, non-matching)

void func_0048B740(float *param_1,uint param_2,uint param_3,uint param_4)

{
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define local_14 (*(float *)(albw_frame + 0x1c))
  func_00115154(&local_20,&local_28,param_4 >> 1);
  func_00115154(&local_1c,&local_24,param_3 >> 1);
  func_00115154(&local_18,&local_14,param_2 >> 1);
  *param_1 = local_28 * local_24 * local_18 - local_20 * local_1c * local_14;
  param_1[1] = local_28 * local_1c * local_14 + local_20 * local_24 * local_18;
  param_1[2] = local_20 * local_24 * local_14 - local_28 * local_1c * local_18;
  param_1[3] = local_28 * local_24 * local_14 + local_20 * local_1c * local_18;
  return local_14;
}

