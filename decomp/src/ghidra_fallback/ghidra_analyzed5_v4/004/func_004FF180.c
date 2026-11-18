#include "ghidra_types.h"


// USA 004FF180 <- EU 004FF158 (Ghidra, non-matching)

undefined4 func_004FF180(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) | 0x80;
  return param_2;
}

