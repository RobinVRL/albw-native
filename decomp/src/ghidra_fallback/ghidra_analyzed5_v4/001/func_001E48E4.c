#include "ghidra_types.h"


// USA 001E48E4 <- EU 001E48E4 (Ghidra, non-matching)

void * func_001E48E4(int param_1)

{
  *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) | 2;
  return (void *)param_1;
}

