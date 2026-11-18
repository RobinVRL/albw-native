#include "ghidra_types.h"


// USA 0048CF50 <- EU 0048CF28 (Ghidra, non-matching)

void * func_0048CF50(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return (void *)param_1;
}

