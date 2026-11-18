#include "ghidra_types.h"

extern int func_003E183C(float *param_1,float *param_2,float fparam_0);
extern float DAT_00406634;
extern float DAT_00406638;
extern float DAT_0040663c;

// USA 0040659C <- EU 0040657C (Ghidra, non-matching)
// GLOBAL DAT_00406634 float
// GLOBAL DAT_00406638 float
// GLOBAL DAT_0040663c float

void func_0040659C(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c ((float *)(albw_frame + 0x4))
  fVar4 = DAT_00406634;
  func_003E183C(&local_20,local_1c,param_2[2] * DAT_00406638);
  fVar1 = DAT_0040663c;
  fVar3 = param_2[4];
  fVar2 = param_2[3];
  *param_1 = fVar2 * local_1c[0];
  param_1[1] = -(local_20 * fVar3);
  param_1[2] = ((*param_2 + fVar4) - fVar2 * local_1c[0] * fVar4) - -(local_20 * fVar3) * fVar4;
  fVar2 = param_2[4];
  local_20 = param_2[3] * local_20;
  param_1[3] = local_20;
  param_1[4] = fVar2 * local_1c[0];
  fVar4 = ((param_2[1] + fVar4) - local_20 * fVar4) - fVar2 * local_1c[0] * fVar4;
  param_1[5] = fVar4;
  param_1[3] = -local_20;
  param_1[4] = -param_1[4];
  param_1[5] = fVar1 - fVar4;
  return;
}

