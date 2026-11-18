#include "ghidra_types.h"

extern int func_0048BCBC(int *param_1,undefined4 param_2);

// USA 001E01A8 <- EU 001E01A8 (Ghidra, non-matching)

void func_001E01A8(int param_1,undefined4 param_2)

{
  func_0048BCBC(*(int **)(param_1 + 0x24),param_2);
  *(undefined1 *)(param_1 + 0x10c) = 1;
  return;
}

