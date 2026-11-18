#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004D82C4(float *param_1,float *param_2,float *param_3);
extern float DAT_0023c258;
extern float DAT_0023c25c;

// USA 0023C204 <- EU 0023C204 (Ghidra, non-matching)
// GLOBAL DAT_0023c258 float
// GLOBAL DAT_0023c25c float

void func_0023C204(int param_1,float *param_2)

{
  float fVar1;
  
  func_004D82C4((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),param_2);
  func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),DAT_0023c258);
  fVar1 = *(float *)(param_1 + 0x3e0);
  *(float *)(param_1 + 0x3e0) =
       fVar1 + SQRT(*(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) + fVar1 * fVar1 +
                    *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x3e4)) * DAT_0023c25c;
  return;
}

