#include "ghidra_types.h"


// USA 00688C34 <- EU 00688C0C (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x00688c3c) */
/* WARNING: Removing unreachable block (ram,0x00688c44) */
/* WARNING: Removing unreachable block (ram,0x00688c54) */

undefined4 func_00688C34(float *param_1,float fparam_0,float fparam_1)

{
  float fVar1;
  
  fVar1 = *param_1 + fparam_1;
  if ((fVar1 < fparam_0) && (*param_1 <= fVar1)) {
    *param_1 = fVar1;
    return 0;
  }
  *param_1 = fparam_0;
  return 1;
}

