#include "ghidra_types.h"


// USA 003DFEFC <- EU 003DFEDC (Ghidra, non-matching)

int func_003DFEFC(int param_1)

{
  return *(int *)(*(int *)(param_1 + 4) + 0x3c) * (uint)*(byte *)(*(int *)(param_1 + 4) + 0x55) *
         0x280 + 0x20;
}

