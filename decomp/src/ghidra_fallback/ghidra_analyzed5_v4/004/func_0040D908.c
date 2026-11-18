#include "ghidra_types.h"


// USA 0040D908 <- EU 0040D8E8 (Ghidra, non-matching)

void * func_0040D908(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return (void *)param_1;
}

