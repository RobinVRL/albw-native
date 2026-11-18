#include "ghidra_types.h"


// USA 0040C870 <- EU 0040C850 (Ghidra, non-matching)

int func_0040C870(int param_1)

{
  return *(int *)(*(int *)(param_1 + 4) + 0x44) * (uint)*(byte *)(*(int *)(param_1 + 4) + 0x5d) *
         0x280 + 0x20;
}

