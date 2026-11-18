#include "ghidra_types.h"


// USA 0010DA24 <- EU 0010DA24 (Ghidra, non-matching)

int func_0010DA24(int param_1,undefined4 param_2)

{
  software_interrupt(0x28);
  *(int *)param_1 = param_1;
  *(undefined4 *)(param_1 + 4) = param_2;
  return param_1;
}

