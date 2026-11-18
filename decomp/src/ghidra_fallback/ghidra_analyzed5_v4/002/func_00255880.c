#include "ghidra_types.h"

extern int func_00255710(int param_1,undefined4 param_2);

// USA 00255880 <- EU 002558A8 [EDITED REGION: check by hand] (Ghidra, non-matching)

undefined4 func_00255880(int param_1)

{
  return func_00255710(*(int *)(param_1 + 0x10) + 0x40c,8);
}

