#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern float DAT_0068a534;

// USA 0068A4B4 <- EU 0068A48C (Ghidra, non-matching)
// GLOBAL DAT_0068a534 float

undefined4 func_0068A4B4(float *param_1,float *param_2,float fparam_0)

{
  float fVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  func_00115C70(&local_20,param_2,param_1);
  fVar2 = SQRT(local_20 * local_20 + local_1c * local_1c + local_18 * local_18);
  if (fVar2 <= fparam_0) {
    fVar2 = param_2[1];
    fVar1 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = fVar2;
    param_1[2] = fVar1;
    return 1;
  }
  fVar2 = DAT_0068a534 / fVar2;
  local_20 = local_20 * fVar2;
  local_1c = local_1c * fVar2;
  local_18 = local_18 * fVar2;
  func_00115DAC(param_1,&local_20,param_1,fparam_0);
  return 0;
}

