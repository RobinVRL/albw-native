#include "ghidra_types.h"


// USA 00689C64 <- EU 00689C3C (Ghidra, non-matching)

void * func_00689C64(int param_1)

{
  *(int *)(param_1 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(int *)param_1 = param_1;
  return (void *)param_1;
}

