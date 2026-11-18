#include "ghidra_types.h"


// USA 00517888 <- EU 00517860 (Ghidra, non-matching)

void * func_00517888(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return (void *)param_1;
}

