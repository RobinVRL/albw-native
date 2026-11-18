#include "ghidra_types.h"

extern int func_00114F58(float *param_1,float *param_2);
extern float DAT_003e2f98;

// USA 003E2E88 <- EU 003E2E68 (Ghidra, non-matching)
// GLOBAL DAT_003e2f98 float

void func_003E2E88(float *param_1,undefined4 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define local_1c (*(float *)(albw_frame + 0x24))
  #define local_18 (*(float *)(albw_frame + 0x28))
  #define local_14 (*(undefined4 *)(albw_frame + 0x2c))
  func_00114F58(&local_40,param_1);
  fVar3 = DAT_003e2f98;
  *param_2 = local_34;
  param_2[1] = local_24;
  param_2[2] = local_14;
  *param_3 = local_40;
  param_3[1] = local_30;
  param_3[2] = local_20;
  param_3[3] = local_3c;
  param_3[4] = local_2c;
  param_3[5] = local_1c;
  param_3[6] = -local_38;
  param_3[7] = -local_28;
  param_3[8] = -local_18;
  fVar4 = fVar3 / SQRT(local_40 * local_40 + local_30 * local_30 + local_20 * local_20);
  *param_3 = local_40 * fVar4;
  param_3[1] = local_30 * fVar4;
  param_3[2] = local_20 * fVar4;
  fVar5 = param_3[3];
  fVar1 = param_3[4];
  fVar4 = param_3[5];
  fVar2 = fVar3 / SQRT(fVar5 * fVar5 + fVar1 * fVar1 + fVar4 * fVar4);
  param_3[3] = fVar5 * fVar2;
  param_3[4] = fVar1 * fVar2;
  param_3[5] = fVar4 * fVar2;
  fVar2 = param_3[6];
  fVar4 = param_3[7];
  fVar1 = param_3[8];
  fVar3 = fVar3 / SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar1 * fVar1);
  param_3[6] = fVar2 * fVar3;
  param_3[7] = fVar4 * fVar3;
  param_3[8] = fVar1 * fVar3;
  return;
}

