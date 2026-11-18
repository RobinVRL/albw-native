#include "ghidra_types.h"


// USA 003617C8 <- EU 00361760 (Ghidra, function missing from the decomp table)

void func_003617C8(int param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 0x14) + 0xcf) = param_2;
  return;
}

