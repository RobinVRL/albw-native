#include "ghidra_types.h"


// USA 00107AE0 <- EU 00107AE0 (Ghidra, non-matching)

void * func_00107AE0(int param_1)

{
  *(int *)(param_1 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x18;
  *(int *)param_1 = param_1;
  return (void *)param_1;
}

