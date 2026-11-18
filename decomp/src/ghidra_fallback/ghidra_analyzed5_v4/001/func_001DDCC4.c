#include "ghidra_types.h"


// USA 001DDCC4 <- EU 001DDCC4 (Ghidra, non-matching)

void func_001DDCC4(int param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x6bd) = param_2;
  return;
}

