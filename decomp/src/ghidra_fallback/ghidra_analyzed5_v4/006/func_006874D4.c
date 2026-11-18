#include "ghidra_types.h"


// USA 006874D4 <- EU 006874AC (Ghidra, non-matching)

void * func_006874D4(int param_1)

{
  *(int *)(param_1 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(int *)param_1 = param_1;
  return (void *)param_1;
}

