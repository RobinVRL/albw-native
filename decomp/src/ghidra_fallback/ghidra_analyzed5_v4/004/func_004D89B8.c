#include "ghidra_types.h"

extern float func_00590570(float fparam_0);
extern float DAT_004d8a50;
extern float DAT_004d8a54;
extern float DAT_004d8a58;
extern float DAT_004d8a5c;

// USA 004D89B8 <- EU 004D8990 (Ghidra, non-matching)
// GLOBAL DAT_004d8a50 float
// GLOBAL DAT_004d8a54 float
// GLOBAL DAT_004d8a58 float
// GLOBAL DAT_004d8a5c float

float func_004D89B8(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2,
                   float fparam_3,float fparam_4,float fparam_5,float fparam_6,float fparam_7,
                   float fparam_8,float fparam_9,float fparam_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar1 = SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4);
  if (DAT_004d8a50 < fVar1) {
    fVar2 = DAT_004d8a54 / fVar1;
    fparam_7 = fVar6 * fVar2;
    fparam_5 = fVar3 * fVar2;
    fparam_9 = fVar4 * fVar2;
  }
  fVar3 = DAT_004d8a50;
  if (fVar1 != DAT_004d8a50) {
    fVar2 = *param_2;
    fVar4 = param_2[1];
    fVar6 = param_2[2];
    fVar1 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar6 * fVar6);
    if (DAT_004d8a50 < fVar1) {
      fVar5 = DAT_004d8a54 / fVar1;
      fparam_8 = fVar2 * fVar5;
      fparam_6 = fVar4 * fVar5;
      fparam_10 = fVar6 * fVar5;
    }
    if (((fVar1 != DAT_004d8a50) &&
        (fVar1 = fparam_7 * fparam_8 + fparam_5 * fparam_6 + fparam_9 * fparam_10,
        (int)ALBW_AS_U32(fVar1) < 0x3f800000)) && (fVar3 = DAT_004d8a5c, (uint)ALBW_AS_U32(fVar1) < (uint)ALBW_AS_U32(DAT_004d8a58))) {
      fVar1 = func_00590570(fVar1);
      return fVar1;
    }
  }
  return fVar3;
}

