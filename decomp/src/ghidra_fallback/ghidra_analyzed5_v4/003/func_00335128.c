#include "ghidra_types.h"


// USA 00335128 <- EU 00335104 (Ghidra, non-matching)

void * func_00335128(int param_1)

{
  *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) | 2;
  return (void *)param_1;
}

