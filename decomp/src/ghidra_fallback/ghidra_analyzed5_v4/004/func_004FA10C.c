#include "ghidra_types.h"


// USA 004FA10C <- EU 004FA0E4 (Ghidra, non-matching)

void func_004FA10C(int param_1)

{
  *(uint *)(*(int *)(param_1 + 0x48) + 0x58c) = *(uint *)(*(int *)(param_1 + 0x48) + 0x58c) | 0x60;
  return;
}

