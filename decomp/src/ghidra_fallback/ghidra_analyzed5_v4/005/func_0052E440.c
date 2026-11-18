#include "ghidra_types.h"


// USA 0052E440 <- EU 0052E418 (Ghidra, non-matching)

int func_0052E440(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x10) + 0x5f4) + 0x3b40;
}

