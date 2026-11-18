#include "ghidra_types.h"


// USA 00556C14 <- EU 00556BA0 (Ghidra, function missing from the decomp table)

int func_00556C14(int param_1)

{
  return (int)*(char *)(*(int *)(param_1 + 0x14) + 0xca);
}

