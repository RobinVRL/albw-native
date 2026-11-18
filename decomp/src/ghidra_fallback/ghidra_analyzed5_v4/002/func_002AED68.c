#include "ghidra_types.h"


// USA 002AED68 <- EU 002AED44 (Ghidra, non-matching)

void func_002AED68(int param_1,undefined2 param_2)

{
  *(undefined2 *)(*(int *)(param_1 + 0x510) + 0x1e2) = param_2;
  return;
}

