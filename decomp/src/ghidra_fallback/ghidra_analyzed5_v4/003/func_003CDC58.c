#include "ghidra_types.h"


// USA 003CDC58 <- EU 003CDC34 (Ghidra, non-matching)

int * func_003CDC58(int *param_1)

{
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return param_1;
}

