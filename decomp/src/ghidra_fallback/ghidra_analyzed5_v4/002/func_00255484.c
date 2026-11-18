#include "ghidra_types.h"


// USA 00255484 <- EU 002554AC (Ghidra, non-matching)

void func_00255484(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 0x10) + param_2 * 4 + 0x434) = param_3;
  return;
}

