#include "ghidra_types.h"


// USA 004A1D4C <- EU 004A1D24 (Ghidra, non-matching)

void * func_004A1D4C(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return (void *)param_1;
}

