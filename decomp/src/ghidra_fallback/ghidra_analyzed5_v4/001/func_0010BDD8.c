#include "ghidra_types.h"


// USA 0010BDD8 <- EU 0010BDD8 (Ghidra, non-matching)

void * func_0010BDD8(int param_1)

{
  *(int *)(param_1 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(int *)param_1 = param_1;
  return (void *)param_1;
}

