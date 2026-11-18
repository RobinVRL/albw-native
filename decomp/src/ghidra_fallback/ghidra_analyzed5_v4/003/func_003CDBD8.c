#include "ghidra_types.h"


// USA 003CDBD8 <- EU 003CDBB4 (Ghidra, non-matching)

int * func_003CDBD8(int *param_1)

{
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return param_1;
}

