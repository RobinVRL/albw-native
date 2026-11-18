#include "ghidra_types.h"


// USA 00556EC4 <- EU 00556E6C (Ghidra, function missing from the decomp table)

int func_00556EC4(int param_1)

{
  return *(int *)(param_1 + 0x10) + 0x368;
}

