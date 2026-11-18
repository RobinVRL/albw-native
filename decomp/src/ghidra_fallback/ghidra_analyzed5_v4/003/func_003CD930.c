#include "ghidra_types.h"

extern int func_00108250(int *param_1);

// USA 003CD930 <- EU 003CD90C (Ghidra, non-matching)

int * func_003CD930(int *param_1)

{
  func_00108250(param_1);
  if (param_1[5] != 0) {
    software_interrupt(0x23);
    param_1[5] = 0;
  }
  return param_1;
}

