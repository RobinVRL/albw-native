#include "ghidra_types.h"


// USA 00556A1C <- EU 005569C4 (Ghidra, function missing from the decomp table)

int func_00556A1C(int param_1)

{
  return *(int *)(param_1 + 0x18) + 0x33c;
}

