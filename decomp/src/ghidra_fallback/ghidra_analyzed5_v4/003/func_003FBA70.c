#include "ghidra_types.h"

extern int func_003FB540(float *param_1,int param_2);
extern int func_003FB5B0(float *param_1,float *param_2,int param_3);
extern int func_003FB758(float *param_1,float *param_2,int param_3);
extern int func_003FB904(float *param_1,int param_2);
extern int func_003FBC88(float *param_1,float *param_2,int param_3);
extern int func_003FBD28(float *param_1,float *param_2,int param_3);

// USA 003FBA70 <- EU 003FBA50 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int

void func_003FBA70(uint param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = param_1 & 0x70000;
  fVar4 = SQRT(param_4[1] * param_4[1] + param_4[5] * param_4[5] + param_4[9] * param_4[9]);
  fVar2 = SQRT(*param_4 * *param_4 + param_4[4] * param_4[4] + param_4[8] * param_4[8]);
  fVar3 = SQRT(param_4[2] * param_4[2] + param_4[6] * param_4[6] + param_4[10] * param_4[10]);
  param_2[3] = param_3[1] * param_4[7] + param_3[2] * param_4[0xb] +
               param_3[3] + *param_3 * param_4[3];
  param_2[7] = param_3[5] * param_4[7] + param_3[6] * param_4[0xb] +
               param_3[7] + param_3[4] * param_4[3];
  param_2[0xb] = param_3[9] * param_4[7] + param_3[10] * param_4[0xb] +
                 param_3[0xb] + param_3[8] * param_4[3];
  if (uVar1 == 0x50000) {
    func_003FB904(param_2,param_5);
  }
  else if (uVar1 < 0x50001) {
    if (uVar1 == 0x20000) {
      func_003FBC88(param_2,param_3,(int)param_4);
    }
    else if (uVar1 == 0x30000) {
      func_003FB5B0(param_2,param_3,(int)param_4);
    }
    else if (uVar1 == 0x40000) {
      func_003FB540(param_2,param_5);
    }
  }
  else if (uVar1 == 0x60000) {
    func_003FBD28(param_2,param_3,(int)param_4);
  }
  else if (uVar1 == 0x70000) {
    func_003FB758(param_2,param_3,(int)param_4);
  }
  *param_2 = *param_2 * fVar2;
  param_2[1] = param_2[1] * fVar4;
  param_2[2] = param_2[2] * fVar3;
  param_2[4] = param_2[4] * fVar2;
  param_2[5] = param_2[5] * fVar4;
  param_2[6] = param_2[6] * fVar3;
  param_2[8] = param_2[8] * fVar2;
  param_2[9] = param_2[9] * fVar4;
  param_2[10] = param_2[10] * fVar3;
  return;
}

