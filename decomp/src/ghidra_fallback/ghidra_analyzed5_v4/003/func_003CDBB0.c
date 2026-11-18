#include "ghidra_types.h"


// USA 003CDBB0 <- EU 003CDB8C (Ghidra, non-matching)

int * func_003CDBB0(int *param_1)

{
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return param_1;
}

