#include "ghidra_types.h"

extern int DAT_00556df4;

// GLOBAL DAT_00556df4 int
// USA 00556E40 <- EU 00556DD8 (Ghidra, function missing from the decomp table)

bool func_00556E40(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x10) + 0x6cc) == DAT_00556df4;
}

