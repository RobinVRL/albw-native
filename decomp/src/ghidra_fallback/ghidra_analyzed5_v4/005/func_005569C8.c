#include "ghidra_types.h"


// USA 005569C8 <- EU 00556968 (Ghidra, function missing from the decomp table)

bool func_005569C8(int param_1)

{
  return *(char *)(*(int *)(param_1 + 0x14) + 0x7f) != '\0';
}

