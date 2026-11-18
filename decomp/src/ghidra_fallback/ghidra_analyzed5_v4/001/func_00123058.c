#include "ghidra_types.h"


// USA 00123058 <- EU 00123058 (Ghidra, non-matching)

undefined4 func_00123058(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) | 0x80;
  return param_2;
}

