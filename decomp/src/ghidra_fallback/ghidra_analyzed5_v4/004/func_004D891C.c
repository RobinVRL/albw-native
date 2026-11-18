#include "ghidra_types.h"

extern int func_004D8650(float *param_1,float *param_2,float *param_3,float *param_4,float fparam_0);
extern float func_004D89B8(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2, float fparam_3,float fparam_4,float fparam_5,float fparam_6,float fparam_7, float fparam_8,float fparam_9,float fparam_10);
extern float DAT_004d898c;

// USA 004D891C <- EU 004D88F4 (Ghidra, non-matching)
// GLOBAL DAT_004d898c float

undefined4 func_004D891C(float *param_1,float *param_2,float *param_3,float *param_4,float fparam_0,
                  float fparam_1,float fparam_2,float fparam_3,float fparam_4,float fparam_5,
                  float fparam_6,float fparam_7,float fparam_8,float fparam_9,float fparam_10)

{
  float fVar1;
  float fVar2;
  
  fVar1 = func_004D89B8(param_2,param_3,fparam_0,fparam_1,fparam_2,fparam_3,fparam_4,fparam_5,
                        fparam_6,fparam_7,fparam_8,fparam_9,fparam_10);
  if (fVar1 <= DAT_004d898c) {
    fVar1 = -fVar1;
  }
  if (fVar1 <= DAT_004d898c) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    return 0;
  }
  fVar2 = fVar1 * fparam_0;
  if (fparam_1 < fVar1 * fparam_0) {
    fVar2 = fparam_1;
  }
  return func_004D8650(param_1,param_2,param_3,param_4,fVar2 / fVar1);
}

