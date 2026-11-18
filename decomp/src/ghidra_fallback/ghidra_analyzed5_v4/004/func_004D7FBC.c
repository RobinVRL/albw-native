#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);

// USA 004D7FBC <- EU 004D7F94 (Ghidra, non-matching)

float func_004D7FBC(float *param_1,float *param_2,uint param_3,uint param_4,float fparam_0)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 ((float *)(albw_frame + 0x10))
  func_00115154(&local_24,local_20,param_3);
  fVar4 = fparam_0 * local_20[0];
  fVar3 = fparam_0 * local_24;
  func_00115154(&local_2c,&local_28,param_4);
  *param_1 = *param_2;
  fVar1 = param_2[1];
  param_1[1] = fVar1;
  fVar2 = param_2[2];
  param_1[1] = fVar1 + fVar3;
  fVar1 = *param_1 + fVar4 * local_2c;
  *param_1 = fVar1;
  param_1[2] = fVar2 + fVar4 * local_28;
  return fVar1;
}

