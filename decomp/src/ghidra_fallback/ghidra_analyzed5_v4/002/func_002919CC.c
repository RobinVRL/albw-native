#include "ghidra_types.h"


// USA 002919CC <- EU 002919F4 (Ghidra, non-matching)

void func_002919CC(int param_1)

{
  *(undefined1 *)(param_1 + 0x8b) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0x84) = 0;
  return;
}

