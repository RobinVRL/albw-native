#include "ghidra_types.h"

extern float func_00115DC8(float *param_1);
extern float DAT_004d8360;

// USA 004D82C4 <- EU 004D829C (Ghidra, non-matching)
// GLOBAL DAT_004d8360 float

void func_004D82C4(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  local_1c = param_2[1];
  local_18 = param_2[2];
  local_20 = *param_2;
  fVar4 = SQRT(*param_2 * *param_2 + local_1c * local_1c + local_18 * local_18);
  func_00115DC8(&local_20);
  fVar3 = local_20 * *param_3 + local_1c * param_3[1] + local_18 * param_3[2];
  fVar1 = DAT_004d8360 * fVar3;
  fVar2 = DAT_004d8360 * fVar3;
  local_20 = local_20 + *param_3 * -(DAT_004d8360 * fVar3);
  *param_1 = local_20;
  local_1c = local_1c + param_3[1] * -fVar1;
  param_1[1] = local_1c;
  param_1[2] = (local_18 + param_3[2] * -fVar2) * fVar4;
  *param_1 = local_20 * fVar4;
  param_1[1] = local_1c * fVar4;
  return;
}

