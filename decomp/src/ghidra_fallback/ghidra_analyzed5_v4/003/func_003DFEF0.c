#include "ghidra_types.h"


// USA 003DFEF0 <- EU 003DFED0 (Ghidra, non-matching)

void * func_003DFEF0(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return (void *)param_1;
}

