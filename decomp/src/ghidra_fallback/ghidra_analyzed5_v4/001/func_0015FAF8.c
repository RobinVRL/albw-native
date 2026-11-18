#include "ghidra_types.h"

extern int func_004FC570();

// USA 0015FAF8 <- EU 0015FAFC (Ghidra, non-matching)

void func_0015EE98(int *param_1)

{
  func_004FC570(param_1);
  param_1[0x167] = param_1[0x167] & 0xffffbfffU | 0xb0;
  return;
}

