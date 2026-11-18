#include "ghidra_types.h"


// USA 003D69A8 <- EU 003D6988 (Ghidra, non-matching)

void * func_003D69A8(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(int *)param_1 = param_1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 4) = param_1;
  return (void *)param_1;
}

