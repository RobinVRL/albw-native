#include "ghidra_types.h"


// USA 0028F7B8 <- EU 0028F7E0 (Ghidra, non-matching)

void func_0028F7B8(int param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x161) = param_2;
  return;
}

