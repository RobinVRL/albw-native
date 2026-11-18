#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float DAT_004d851c;

// USA 004D84E8 <- EU 004D84C0 (Ghidra, non-matching)
// GLOBAL DAT_004d851c float

undefined4 func_004D84E8(float *param_1,float fparam_0)

{
  float fVar1;
  
  fVar1 = SQRT(*param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2]);
  if ((DAT_004d851c < fVar1) && (fVar1 < fparam_0)) {
    func_00115D70(param_1,param_1,fparam_0 / fVar1);
    return 1;
  }
  return 0;
}

