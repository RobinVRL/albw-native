#include "ghidra_types.h"


// USA 0040D034 <- EU 0040D014 (Ghidra, non-matching)

void func_0040D034(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x30) = 0;
  return;
}

