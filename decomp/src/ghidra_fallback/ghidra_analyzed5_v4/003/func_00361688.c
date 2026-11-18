#include "ghidra_types.h"


// USA 00361688 <- EU 00361628 (Ghidra, function missing from the decomp table)

void func_00361688(int param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x6c8) = param_2;
  return;
}

