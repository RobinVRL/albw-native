#include "ghidra_types.h"

extern float DAT_0048a344;
extern float DAT_0048a348;

// USA 0048A2C4 <- EU 0048A29C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 float *
// PARAM param_7 Stack[0x8]:4 float *
// GLOBAL DAT_0048a344 float
// GLOBAL DAT_0048a348 float

void func_0048A2C4(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = DAT_0048a348;
  fVar2 = DAT_0048a344;
  fVar4 = param_7[0xb];
  fVar3 = param_7[10];
  *param_5 = fVar4 / fVar3;
  *param_6 = (param_7[10] * (fVar4 / fVar3)) / (param_7[10] + fVar2);
  fVar3 = (*param_5 * (param_7[2] + fVar2)) / *param_7;
  *param_4 = fVar3;
  *param_3 = fVar3 - (*param_5 * fVar1) / *param_7;
  fVar2 = (*param_5 * (param_7[6] + fVar2)) / param_7[5];
  *param_1 = fVar2;
  *param_2 = fVar2 - (*param_5 * fVar1) / param_7[5];
  return;
}

