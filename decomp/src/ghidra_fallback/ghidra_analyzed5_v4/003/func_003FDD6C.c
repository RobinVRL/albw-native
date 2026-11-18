#include "ghidra_types.h"


// USA 003FDD6C <- EU 003FDD4C (Ghidra, non-matching)

void * func_003FDD6C(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return (void *)param_1;
}

