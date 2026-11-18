#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern float func_00568B68(int param_1);
extern float func_00569264(int param_1,float *param_2,int param_3);

// USA 005694A0 <- EU 00569478 (Ghidra, non-matching)

void func_005694A0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float in_s1;
  float fVar3;
  float fVar4;
  float fVar5;
  
  func_001119F4(param_2,(undefined4 *)(param_1 + 0x48));
  fVar1 = func_00568B68(param_1);
  fVar3 = in_s1;
  fVar2 = func_00569264(param_1,param_1 + 0x3c,0);
  fVar3 = fVar3 - in_s1;
  fVar5 = param_2[1];
  fVar1 = fVar1 + fVar2;
  fVar2 = param_2[5];
  fVar4 = param_2[9];
  param_2[1] = -fVar5;
  param_2[5] = -fVar2;
  param_2[9] = -fVar4;
  param_2[3] = *param_2 * fVar1 + fVar5 * fVar3 + param_2[3];
  param_2[7] = param_2[4] * fVar1 + fVar2 * fVar3 + param_2[7];
  param_2[0xb] = param_2[8] * fVar1 + fVar4 * fVar3 + param_2[0xb];
  return;
}

