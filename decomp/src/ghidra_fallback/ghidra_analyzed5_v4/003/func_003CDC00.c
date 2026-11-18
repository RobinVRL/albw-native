#include "ghidra_types.h"

extern int func_0010C180(uint *param_1);

// USA 003CDC00 <- EU 003CDBDC (Ghidra, non-matching)

uint * func_003CDC00(uint *param_1)

{
  func_0010C180(param_1);
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return param_1;
}

