#include "ghidra_types.h"


// USA 0010B368 <- EU 0010B368 (Ghidra, non-matching)

void * func_0010B368(int param_1)

{
  *(int *)(param_1 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x10;
  *(int *)param_1 = param_1;
  return (void *)param_1;
}

