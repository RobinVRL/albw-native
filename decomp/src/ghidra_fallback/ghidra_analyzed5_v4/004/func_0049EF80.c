#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float DAT_0049f060;
extern float DAT_0049f064;

// USA 0049EF80 <- EU 0049EF58 (Ghidra, non-matching)
// GLOBAL DAT_0049f060 float
// GLOBAL DAT_0049f064 float

float func_0049EF80(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  func_00115C70(&local_2c,param_2 + 3,param_2);
  func_00115C70(&local_20,param_1,param_2);
  fVar2 = local_20 * local_2c + local_1c * local_28 + local_18 * local_24;
  if (DAT_0049f060 < fVar2) {
    fVar1 = local_2c * local_2c + local_28 * local_28 + local_24 * local_24;
    if (fVar2 < fVar1) {
      fVar2 = fVar2 / fVar1;
      fVar1 = *param_2 + (param_2[3] - *param_2) * fVar2;
      fVar4 = param_2[1] + (param_2[4] - param_2[1]) * fVar2;
      fVar3 = param_2[2] + (param_2[5] - param_2[2]) * fVar2;
    }
    else {
      fVar1 = param_2[3];
      fVar4 = param_2[4];
      fVar3 = param_2[5];
      fVar2 = DAT_0049f064;
    }
  }
  else {
    fVar1 = *param_2;
    fVar4 = param_2[1];
    fVar3 = param_2[2];
    fVar2 = DAT_0049f060;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fVar2;
  }
  return (fVar1 - *param_1) * (fVar1 - *param_1) + (fVar4 - param_1[1]) * (fVar4 - param_1[1]) +
         (fVar3 - param_1[2]) * (fVar3 - param_1[2]);
}

