#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D7F70(float *param_1,uint param_2);

// USA 0053A554 <- EU 0053A52C (Ghidra, non-matching)

undefined4 func_0053A554(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  *param_2 = *param_3;
  param_2[1] = fVar1;
  param_2[2] = fVar2;
  func_004D7F70(param_2,*(uint *)(param_1 + 1000));
  if (*(float *)(param_1 + 0xb84) < param_3[2]) {
    func_00115C70(param_2,param_2,(float *)(param_1 + 0xb7c));
    func_004D7F70(param_2,*(uint *)(param_1 + 0xbe8));
    return func_00115C54(param_2,param_2,(float *)(param_1 + 0xb7c));
  }
  return 0;
}

