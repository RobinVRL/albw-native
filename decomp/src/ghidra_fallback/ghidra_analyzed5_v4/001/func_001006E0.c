#include "ghidra_types.h"

extern int func_00300E2C(void);

// USA 001006E0 <- EU 001006E0 (Ghidra, function missing from the decomp table)

int func_001006E0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)func_00300E2C();
  if ((int)((uint)*(byte *)(*piVar1 + param_1) << 0x1b) < 0) {
    return param_1 + 0x20;
  }
  return param_1;
}

