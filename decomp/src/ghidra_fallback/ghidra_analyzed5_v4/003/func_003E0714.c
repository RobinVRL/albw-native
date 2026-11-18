#include "ghidra_types.h"


// USA 003E0714 <- EU 003E06F4 (Ghidra, non-matching)

void func_003E0714(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x28) = 0;
  return;
}

