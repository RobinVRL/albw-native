#include "ghidra_types.h"


// USA 0040C85C <- EU 0040C83C (Ghidra, non-matching)

void func_0040C85C(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c) = 0;
  return;
}

