#include "ghidra_types.h"


// USA 00501C38 <- EU 00501C10 (Ghidra, non-matching)

void * func_00501C38(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return (void *)param_1;
}

