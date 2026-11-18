#include "ghidra_types.h"


// USA 0021C124 <- EU 0021C124 (Ghidra, non-matching)

void * func_0021C124(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return (void *)param_1;
}

