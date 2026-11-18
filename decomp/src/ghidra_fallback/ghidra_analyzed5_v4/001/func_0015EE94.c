#include "ghidra_types.h"

extern int func_004FC570();

// USA 0015EE94 <- EU 0015EE98 (Ghidra, non-matching)

void func_0015EE94(int param_1)

{
  func_004FC570((int *)param_1);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffbfff | 0xb0;
  return;
}

