#include "ghidra_types.h"


// USA 006766D8 <- EU 006766B0 (Ghidra, non-matching)

void func_006766D8(int param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  return;
}

