#include "ghidra_types.h"


// USA 0049AD40 <- EU 0049AD18 (Ghidra, non-matching)

void * func_0049AD40(int param_1,undefined4 param_2)

{
  software_interrupt(0x28);
  *(int *)(param_1 + 0x150) = param_1;
  *(undefined4 *)(param_1 + 0x154) = param_2;
  return (void *)param_1;
}

