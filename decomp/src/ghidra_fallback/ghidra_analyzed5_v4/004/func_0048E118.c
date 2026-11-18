#include "ghidra_types.h"


// USA 0048E118 <- EU 0048E0F0 (Ghidra, non-matching)

void func_0048E118(int param_1)

{
  *(undefined4 *)(param_1 + 0x1d8) = 0x28;
  *(undefined4 *)(param_1 + 0x1dc) = 0x2a;
  *(undefined4 *)(param_1 + 0x1e0) = 0x48;
  return;
}

