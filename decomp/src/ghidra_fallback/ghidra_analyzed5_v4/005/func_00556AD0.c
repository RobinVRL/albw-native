#include "ghidra_types.h"


// USA 00556AD0 <- EU 00556A58 (Ghidra, function missing from the decomp table)

int func_00556AD0(int param_1)

{
  return *(int *)(param_1 + 0x18) + 0x4e4;
}

