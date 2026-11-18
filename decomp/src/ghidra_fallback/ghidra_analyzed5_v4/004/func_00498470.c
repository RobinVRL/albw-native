#include "ghidra_types.h"

extern float func_0059069C(float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern float func_005909A0(float fparam_0);
extern float func_0059163C(float fparam_0);
extern float func_00591804(float fparam_0);
extern float DAT_004984e4;
extern float DAT_004984e8;

// USA 00498470 <- EU 00498448 (Ghidra, non-matching)
// GLOBAL DAT_004984e4 float
// GLOBAL DAT_004984e8 float

void func_00498470(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = DAT_004984e4;
  fVar3 = fparam_0 - fparam_1;
  fVar4 = fparam_3 - fparam_2;
  fVar1 = fVar3 * DAT_004984e4;
  *(float *)(param_1 + 0xac) = fVar4 / fVar3;
  *(undefined1 *)(param_1 + 4) = 1;
  fVar1 = func_0059069C(fVar1,*(float *)(param_1 + 0x94),fparam_2,fparam_3);
  fVar1 = fVar1 * DAT_004984e8;
  *(float *)(param_1 + 0x9c) = fVar1;
  fVar1 = fVar1 * fVar5;
  fVar2 = func_0059163C(fVar1);
  *(float *)(param_1 + 0xa0) = fVar2;
  fVar2 = func_005909A0(fVar1);
  *(float *)(param_1 + 0xa4) = fVar2;
  fVar1 = func_00591804(fVar1);
  *(float *)(param_1 + 0xa8) = fVar1;
  *(undefined1 *)(param_1 + 4) = 1;
  *(float *)(param_1 + 0xb0) = ((fparam_3 + fparam_2) * fVar5) / fVar4;
  *(float *)(param_1 + 0xb4) = ((fparam_0 + fparam_1) * fVar5) / fVar3;
  return;
}

