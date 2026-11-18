#include "ghidra_types.h"


// USA 002D16C0 <- EU 002D169C (Ghidra, non-matching)

void * func_002D16C0(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 8) + 0xac) = 0;
  return (void *)param_1;
}

