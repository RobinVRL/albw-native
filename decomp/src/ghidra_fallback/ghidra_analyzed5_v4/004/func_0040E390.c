#include "ghidra_types.h"

extern float DAT_0040e388;

// USA 0040E390 <- EU 0040E370 (Ghidra, non-matching)
// GLOBAL DAT_0040e388 float

undefined4 func_0040E390(undefined1 *param_1,float fparam_0)

{
  float fVar1;
  
  fVar1 = DAT_0040e388;
  *param_1 = 0;
  *(float *)(param_1 + 4) = fparam_0 * fVar1;
  return (undefined4)param_1;
}

