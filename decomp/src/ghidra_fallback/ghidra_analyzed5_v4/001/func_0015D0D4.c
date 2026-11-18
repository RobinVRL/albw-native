#include "ghidra_types.h"

extern float func_004FAD90(int param_1);

// USA 0015D0D4 <- EU 0015D0D8 (Ghidra, non-matching)

void func_0015D0D4(int param_1)

{
  *(undefined1 *)(param_1 + 0x9ae) = 0;
  func_004FAD90(param_1);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff4f | 0x4000;
  return;
}

