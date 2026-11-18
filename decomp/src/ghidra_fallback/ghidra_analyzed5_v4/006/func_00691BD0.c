#include "ghidra_types.h"


// USA 00691BD0 <- EU 00691BA8 (Ghidra, non-matching)

void func_00691BD0(int param_1)

{
  *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) + -1) = 0;
  return;
}

