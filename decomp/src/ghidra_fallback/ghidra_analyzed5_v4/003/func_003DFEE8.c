#include "ghidra_types.h"


// USA 003DFEE8 <- EU 003DFEC8 (Ghidra, non-matching)

void func_003DFEE8(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x14) = 0;
  return;
}

