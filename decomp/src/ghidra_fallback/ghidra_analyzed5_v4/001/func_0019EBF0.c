#include "ghidra_types.h"


// USA 0019EBF0 <- EU 0019EBF0 (Ghidra, non-matching)

void * func_0019EBF0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return (void *)param_1;
}

