#include "ghidra_types.h"

extern int func_0048BD2C(int *param_1,undefined4 param_2,float fparam_0);

// USA 001DF9E4 <- EU 001DF9E4 (Ghidra, non-matching)

undefined4 func_001DF9E4(int param_1,float fparam_0)

{
  float fparam_0_00;
  
  fparam_0_00 = *(float *)(param_1 + 0x100) * fparam_0;
  if (*(char *)(param_1 + 0x108) != '\0') {
    *(float *)(param_1 + 0x104) = fparam_0_00;
    return func_0048BD2C(*(int **)(param_1 + 0x24),0,fparam_0_00);
  }
  *(float *)(param_1 + 0x100) = fparam_0_00;
  return 0;
}

