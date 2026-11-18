#include "ghidra_types.h"

extern int func_0048BCF4(int *param_1,undefined4 param_2);

// USA 001E05CC <- EU 001E05CC (Ghidra, non-matching)

void func_001E05CC(int param_1,undefined4 param_2)

{
  func_0048BCF4(*(int **)(param_1 + 0x24),param_2);
  *(undefined1 *)(param_1 + 0x10c) = 0;
  return;
}

